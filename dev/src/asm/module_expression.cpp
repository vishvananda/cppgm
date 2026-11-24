#include "asm/module_expression.h"

#include <climits>
#include <cstring>

#include "asm/registers.h"

namespace assembly {
namespace {
class Expression
{
public:
	explicit Expression(ModuleCursor& cursor, bool registers = false, ExpressionSymbols* symbols = nullptr,
		ModuleExpression* plan = nullptr)
		: cursor_(cursor), symbols_(symbols), plan_(plan), registers_(registers)
	{}
	uint64_t run() { return integer(binary(1, 0)); }
	uint64_t addend() { return integer(tail({}, 1, 0)); }
	ModuleValue relocatable() { return binary(1, 0).data; }
	ModuleValue evaluate(const ModuleExpression& plan);

private:
	struct Value
	{
		Value() : reg{} {}
		explicit Value(ModuleValue value) : data(value), reg{} {}
		ModuleValue data;
		asm_model::Register reg;
	};
	struct Operator
	{
		const char* text;
		unsigned precedence;
	};
	Operator operation();
	Value primary(unsigned depth);
	Value binary(unsigned minimum, unsigned depth);
	Value tail(Value result, unsigned minimum, unsigned depth);
	Value unary(char op, Value operand);
	Value binary_value(const char* op, Value left, Value right);
	uint64_t apply(const std::string& op, Value a, Value b);
	ModuleValue combine(ModuleValue a, ModuleValue b, bool subtract);
	uint64_t integer(Value value) const;
	ModuleCursor& cursor_;
	ExpressionSymbols* symbols_;
	ModuleExpression* plan_;
	bool registers_;
};
Expression::Operator Expression::operation()
{
	cursor_.space();
	static const Operator operators[] = { { "||", 1 }, { "&&", 2 }, { "==", 3 }, { "!=", 3 }, { "<>", 3 }, { "<=", 3 },
		{ ">=", 3 }, { "<<", 6 }, { ">>", 6 }, { "+", 4 }, { "-", 4 }, { "<", 3 }, { ">", 3 }, { "|", 5 }, { "&", 5 },
		{ "^", 5 }, { "!", 5 }, { "*", 6 }, { "/", 6 }, { "%", 6 } };
	const char first = cursor_.current();
	if (first == '\0' || std::strchr("|&=!<>+-^*/%", first) == nullptr)
		return { "", 0 };
	for (const Operator& op : operators)
		if (op.text[0] == first && cursor_.starts_with(op.text, std::strlen(op.text)))
			return op;
	return { "", 0 };
}
uint64_t Expression::integer(Value value) const
{
	if (value.reg.bits != 0)
		cursor_.fail("absolute expression cannot use a register as an integer");
	if (value.data.relocatable())
		cursor_.fail("absolute expression cannot use a relocatable symbol");
	return value.data.bits;
}
Expression::Value Expression::primary(unsigned depth)
{
	if (depth > 64)
		cursor_.fail("module expression nesting exceeds limit");
	Value result;
	const char* prefix = cursor_.take('-') ? "-" : cursor_.take('~') ? "~" : cursor_.take('+') ? "+" : nullptr;
	if (prefix != nullptr)
	{
		result = primary(depth + 1);
		if (plan_ != nullptr)
			plan_->steps.push_back({ prefix, {}, true });
		else
			result = unary(*prefix, result);
	}
	else if (cursor_.take('('))
	{
		result = binary(1, depth + 1);
		if (!cursor_.take(')'))
			cursor_.fail("unclosed module expression");
	}
	else if (registers_ && cursor_.take('%'))
	{
		const std::string name = cursor_.word();
		if (!parse_register(name.data(), name.size(), result.reg))
			cursor_.fail("unknown register in assembly expression: " + name);
	}
	else
	{
		cursor_.space();
		if (symbols_ != nullptr && (cursor_.symbol_use() != nullptr || !cursor_.numeric()))
			result.data = symbols_->expression_symbol(cursor_);
		else if (cursor_.symbol_use())
			cursor_.fail("absolute expression cannot use a relocatable symbol");
		else
			result.data.bits = cursor_.number();
		if (plan_ != nullptr)
		{
			plan_->has_symbols |= result.data.relocatable();
			plan_->steps.push_back({ nullptr, result.data, false });
		}
	}
	return result;
}
Expression::Value Expression::binary(unsigned minimum, unsigned depth)
{
	return tail(primary(depth), minimum, depth);
}
Expression::Value Expression::tail(Value result, unsigned minimum, unsigned depth)
{
	for (;;)
	{
		const Operator op = operation();
		if (op.precedence < minimum)
			return result;
		cursor_.advance(static_cast<uint32_t>(std::strlen(op.text)));
		const Value right = binary(op.precedence + 1, depth + 1);
		if (plan_ != nullptr)
			plan_->steps.push_back({ op.text, {}, false });
		else
			result = binary_value(op.text, result, right);
	}
}
Expression::Value Expression::unary(char op, Value operand)
{
	if (op == '~')
		return Value{ ModuleValue{ ~integer(operand) } };
	if (operand.reg.bits != 0)
		cursor_.fail("absolute expression cannot use a register as an integer");
	if (op == '-')
	{
		operand.data.bits = uint64_t(0) - operand.data.bits;
		std::swap(operand.data.positive, operand.data.negative);
	}
	return operand;
}
Expression::Value Expression::binary_value(const char* op, Value left, Value right)
{
	if (left.data.relocatable() || right.data.relocatable())
	{
		if ((op[0] != '+' && op[0] != '-') || left.reg.bits != 0 || right.reg.bits != 0)
			cursor_.fail("non-additive operation on a relocatable symbol");
		return Value{ combine(left.data, right.data, op[0] == '-') };
	}
	return Value{ ModuleValue{ apply(op, left, right) } };
}
ModuleValue Expression::evaluate(const ModuleExpression& plan)
{
	std::vector<Value> stack;
	for (const ModuleExpression::Step& step : plan.steps)
	{
		if (step.op == nullptr)
		{
			ModuleValue value = step.literal;
			symbols_->fold_difference(value);
			stack.push_back(Value{ value });
		}
		else if (step.unary)
			stack.back() = unary(step.op[0], stack.back());
		else
		{
			const Value right = stack.back();
			stack.pop_back();
			stack.back() = binary_value(step.op, stack.back(), right);
		}
	}
	return stack.back().data;
}
ModuleValue Expression::combine(ModuleValue a, ModuleValue b, bool subtract)
{
	const uint32_t absent = asm_model::kNoId;
	if (subtract)
	{
		std::swap(b.positive, b.negative);
		b.bits = uint64_t(0) - b.bits;
	}
	if (a.positive == b.negative)
		a.positive = b.negative = absent;
	if (a.negative == b.positive)
		a.negative = b.positive = absent;
	if ((a.positive != absent && b.positive != absent) || (a.negative != absent && b.negative != absent))
		cursor_.fail("module expression combines too many relocatable symbols");
	a.bits += b.bits;
	if (a.positive == absent)
		a.positive = b.positive;
	if (a.negative == absent)
		a.negative = b.negative;
	symbols_->fold_difference(a);
	return a;
}
uint64_t Expression::apply(const std::string& op, Value left, Value right)
{
	const bool left_register = left.reg.bits != 0;
	const bool right_register = right.reg.bits != 0;
	if (left_register || right_register)
	{
		if (!left_register || !right_register || (op != "==" && op != "!=" && op != "<>"))
			cursor_.fail("registers require an equality comparison with another register");
		const bool equal = left.reg.bank == right.reg.bank && left.reg.number == right.reg.number &&
			left.reg.bits == right.reg.bits && left.reg.offset == right.reg.offset;
		return equal == (op == "==") ? UINT64_MAX : 0;
	}
	const uint64_t a = left.data.bits, b = right.data.bits;
	if (op == "+")
		return a + b;
	if (op == "-")
		return a - b;
	if (op == "*")
		return a * b;
	if (op == "&")
		return a & b;
	if (op == "|")
		return a | b;
	if (op == "^")
		return a ^ b;
	if (op == "!")
		return a | ~b;
	if (op == "&&")
		return a != 0 && b != 0;
	if (op == "||")
		return a != 0 || b != 0;
	if (op == "<<" || op == ">>")
	{
		if (b >= 64)
			cursor_.fail("module expression shift exceeds 63 bits");
		return op == "<<" ? a << b : a >> b;
	}
	if (op == "/" || op == "%")
	{
		if (b == 0)
			cursor_.fail("division by zero in module expression");
		if (a == (uint64_t(1) << 63) && b == UINT64_MAX)
			return op == "/" ? a : 0;
		return static_cast<uint64_t>(op == "/" ? static_cast<int64_t>(a) / static_cast<int64_t>(b)
											   : static_cast<int64_t>(a) % static_cast<int64_t>(b));
	}
	const int64_t x = static_cast<int64_t>(a), y = static_cast<int64_t>(b);
	const bool truth = op == "=="  ? x == y
		: op == "!=" || op == "<>" ? x != y
		: op == "<"                ? x < y
		: op == ">"                ? x > y
		: op == "<="               ? x <= y
								   : x >= y;
	return truth ? UINT64_MAX : 0;
}
}
uint64_t assembly_integer_expression(ModuleCursor& cursor)
{
	return Expression(cursor).run();
}
uint64_t assembly_integer_addend(ModuleCursor& cursor)
{
	return Expression(cursor).addend();
}
ModuleValue assembly_module_expression(ModuleCursor& cursor, ExpressionSymbols& symbols)
{
	return Expression(cursor, false, &symbols).relocatable();
}
ModuleExpression parse_module_expression(ModuleCursor& cursor, ExpressionSymbols& symbols)
{
	ModuleExpression plan;
	plan.line = cursor.line();
	plan.column = cursor.column();
	Expression(cursor, false, &symbols, &plan).relocatable();
	return plan;
}
ModuleValue evaluate_module_expression(const ModuleExpression& plan, ExpressionSymbols& symbols)
{
	const std::string empty;
	ModuleCursor cursor(empty, 0, plan.line, plan.column);
	return Expression(cursor, false, &symbols).evaluate(plan);
}
uint64_t module_expression(const ModuleLine& line, uint32_t first)
{
	ModuleCursor cursor(line);
	cursor.advance(first);
	const uint64_t result = Expression(cursor, true).run();
	cursor.finish();
	return result;
}
} // namespace assembly
