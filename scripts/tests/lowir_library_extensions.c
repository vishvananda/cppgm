/* Client of the LowIR library's ABI version 3 additions: boundary and symbol
 * metadata, argument facts, assembly templates and debug information.
 * scripts/tests/test_lowir_library_extensions.py builds and runs it.
 *
 *   client <object> <text> <level> <case> <target> <release>
 */
#include "lowir_interface.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

_Static_assert(sizeof(CppgmParameter) == 24, "parameter ABI");
_Static_assert(sizeof(CppgmBoundary) == 12, "boundary ABI");
_Static_assert(sizeof(CppgmArgumentFact) == 16, "argument fact ABI");
_Static_assert(sizeof(CppgmDebugLocation) == 16, "location ABI");
_Static_assert(sizeof(CppgmAsmRegister) == 8 && sizeof(CppgmAsmGroup) == 8, "register ABI");
_Static_assert(sizeof(CppgmAsmImmediate) == 40 && sizeof(CppgmAsmAlternative) == 20, "alternative ABI");
_Static_assert(sizeof(CppgmAsmOperand) == 32 && sizeof(CppgmAsmPiece) == 20, "operand ABI");

#define OBJECT(bytes, align_log2) (CPPGM_TYPE_OBJ | ((CppgmType)(align_log2) << 8) | ((CppgmType)(bytes) << 16))
#define PAIR OBJECT(16, 3)
#define NAME(text) text, (uint32_t)(sizeof text - 1)

static const char* bad;
static CppgmLowir* module;

static int is(const char* name)
{
	return bad != NULL && strcmp(bad, name) == 0;
}

static void check(int result)
{
	if (!result)
	{
		fprintf(stderr, "%s\n", cppgm_lowir_error(module));
		exit(1);
	}
}

static uint32_t id(uint32_t result)
{
	check(result != CPPGM_NO_ID);
	return result;
}

static LowirValue value(uint32_t kind, uint32_t index)
{
	LowirValue result = { kind, 0, 0, index };
	return result;
}

static LowirInstruction instruction(uint8_t op, uint32_t result, CppgmType type)
{
	LowirInstruction inst = { 0 };
	inst.op = op;
	inst.result = result;
	inst.type = type;
	return inst;
}

static LowirBodyBuffers reserve(uint32_t symbol, LowirBodyCounts counts)
{
	LowirBodyBuffers buffers;
	check(cppgm_lowir_body_reserve(module, symbol, &counts, &buffers));
	buffers.layout[0] = 0;
	return buffers;
}

static uint32_t file;
static uint32_t types[6];

static CppgmDebugLocation at(uint32_t line, uint32_t column, uint32_t scope)
{
	CppgmDebugLocation location = { file, line, column, scope };
	return location;
}

static uint32_t debug_type(uint8_t kind, uint8_t encoding, uint32_t parent, uint32_t type, uint64_t bytes,
	uint64_t bit_offset, const char* name)
{
	CppgmDebugType record = { 0 };
	record.kind = kind;
	record.encoding = encoding;
	record.parent = parent;
	record.type = type;
	record.bytes = bytes;
	record.bit_offset = bit_offset;
	record.name = name;
	record.name_length = (uint32_t)strlen(name);
	return id(cppgm_lowir_debug_type(module, &record));
}

/* struct Pair { double d; long n; }; the members name the structure, which a later call adds. */
static void debug_types(void)
{
	types[1] = debug_type(CPPGM_DEBUG_BASE, CPPGM_DEBUG_ENCODING_FLOATING, 0, 0, 8, 0, "double");
	types[2] = debug_type(CPPGM_DEBUG_BASE, CPPGM_DEBUG_ENCODING_SIGNED, 0, 0, 8, 0, "long");
	types[3] = debug_type(CPPGM_DEBUG_MEMBER, 0, is("bad-debug-parent") ? 9 : 5, 1, 8, 0, "d");
	types[4] = debug_type(CPPGM_DEBUG_MEMBER, 0, is("bad-debug-kind") ? 1 : 5, 2, 8, 64, "n");
	types[5] = debug_type(CPPGM_DEBUG_STRUCTURE, 0, 0, 0, 16, 0, "Pair");
	check(types[1] == 1 && types[5] == 5);
}

/* function @ext_pair_sum(%p : obj<16x8> [classes=sse_integer]) -> f64: p.d + p.n */
static void pair_sum(void)
{
	uint32_t symbol = id(cppgm_lowir_symbol(module, NAME("ext_pair_sum")));
	CppgmParameter parameter = { 0 };
	parameter.type = is("bad-pass") ? CPPGM_TYPE_I64 : is("bad-classes") ? OBJECT(8, 3) : PAIR;
	parameter.classes = CPPGM_CLASSES(CPPGM_EIGHTBYTE_SSE, CPPGM_EIGHTBYTE_INTEGER);
	parameter.pass = is("bad-pass") ? CPPGM_PASS_BY_ADDRESS : CPPGM_PASS_DIRECT;
	if (is("bad-pass"))
		parameter.classes = 0;
	CppgmBoundary facts = { 0 };
	facts.unwind = CPPGM_UNWIND_NO;
	uint32_t signature = cppgm_lowir_boundary(module, CPPGM_TYPE_F64, &parameter, 1, &facts);
	if (is("bad-pass") || is("bad-classes"))
		return;
	check(signature != CPPGM_NO_ID);
	check(cppgm_lowir_function(module, symbol, signature, CPPGM_BINDING_STRONG, CPPGM_FUNCTION_DEFINITION));
	/* The linker's name differs from the LowIR name. */
	check(cppgm_lowir_symbol_name(module, symbol, CPPGM_KEY_OBJECT, NAME("pair_sum")));
	check(cppgm_lowir_symbol_fact(module, symbol, CPPGM_KEY_LINKAGE, CPPGM_LINKAGE_DEFAULT));
	check(cppgm_lowir_symbol_fact(module, symbol, CPPGM_KEY_NO_INLINE, 1));
	if (is("bad-role"))
	{
		cppgm_lowir_symbol_fact(module, symbol, CPPGM_KEY_ROLE, CPPGM_ROLE_RTTI_CLASS);
		return;
	}
	LowirBodyCounts counts = { 8, 0, 1, 1, 1 };
	LowirBodyBuffers buffers = reserve(symbol, counts);
	buffers.slots[0] = (LowirSlot){ 0, 0, 0, 0, PAIR };
	buffers.literals[0] = (LowirLiteral){ 8, 0 };
	LowirInstruction* code = buffers.instructions;
	code[0] = instruction(CPPGM_OP_ADDR, 1, CPPGM_TYPE_PTR);
	code[0].ops[0] = value(CPPGM_VALUE_SLOT, 0);
	code[1] = instruction(CPPGM_OP_COPY_OBJECT, CPPGM_NO_ID, CPPGM_TYPE_VOID);
	code[1].immediate = 16;
	code[1].sub = 3;
	code[1].ops[0] = value(CPPGM_VALUE_TEMP, 0);
	code[1].ops[1] = value(CPPGM_VALUE_TEMP, 1);
	code[2] = instruction(CPPGM_OP_LOAD, 2, CPPGM_TYPE_F64);
	code[2].ops[0] = value(CPPGM_VALUE_TEMP, 1);
	code[3] = instruction(CPPGM_OP_INDEX, 3, CPPGM_TYPE_I8);
	code[3].order = CPPGM_BOUNDS_IN_BOUNDS;
	code[3].ops[0] = value(CPPGM_VALUE_TEMP, 1);
	code[3].ops[1] = value(CPPGM_VALUE_INTEGER, 0);
	code[4] = instruction(CPPGM_OP_LOAD, 4, CPPGM_TYPE_I64);
	code[4].ops[0] = value(CPPGM_VALUE_TEMP, 3);
	code[5] = instruction(CPPGM_OP_CONVERT, 5, CPPGM_TYPE_F64);
	code[5].sub = CPPGM_CONVERT_SI_TO_FP;
	code[5].immediate = CPPGM_TYPE_I64;
	code[5].ops[0] = value(CPPGM_VALUE_TEMP, 4);
	code[6] = instruction(CPPGM_OP_BINARY, 6, CPPGM_TYPE_F64);
	code[6].sub = CPPGM_BINARY_ADD;
	code[6].ops[0] = value(CPPGM_VALUE_TEMP, 2);
	code[6].ops[1] = value(CPPGM_VALUE_TEMP, 5);
	code[7] = instruction(CPPGM_OP_RETURN, CPPGM_NO_ID, CPPGM_TYPE_F64);
	code[7].ops[0] = value(CPPGM_VALUE_TEMP, 6);
	check(cppgm_lowir_body_commit(module, symbol, &counts, 7));

	/* Debug information: the function, a scope, its instructions and the local `p`. */
	debug_types();
	uint32_t scope = id(cppgm_lowir_debug_scope(module, symbol, 0));
	uint32_t inner = id(cppgm_lowir_debug_scope(module, symbol, scope));
	CppgmDebugLocation declared = at(is("bad-location") ? 0 : 10, 8, 0);
	if (!cppgm_lowir_function_location(module, symbol, &declared))
		return;
	CppgmDebugLocation lines[2] = { at(11, 5, scope), at(12, 12, inner) };
	uint32_t indices[8] = { 1, 1, 1, 2, 2, 2, 2, is("bad-location-index") ? 3 : 0 };
	if (!cppgm_lowir_body_locations(module, symbol, lines, 2, indices))
		return;
	CppgmDebugLocation local = at(10, 30, 0);
	check(cppgm_lowir_debug_local(module, symbol, is("bad-debug-slot") ? 4 : 0, types[5], scope, NAME("p"), &local));
}

/* function @ext_stop(%code : i32) -> void [return=noreturn, cold=yes]: exit(code) */
static void stop(void)
{
	uint32_t exit_symbol = id(cppgm_lowir_symbol(module, NAME("exit")));
	uint32_t symbol = id(cppgm_lowir_symbol(module, NAME("ext_stop")));
	CppgmParameter parameter = { 0 };
	parameter.type = CPPGM_TYPE_I32;
	CppgmBoundary facts = { 0 };
	facts.returns = CPPGM_RETURN_NORETURN;
	uint32_t signature = id(cppgm_lowir_boundary(module, CPPGM_TYPE_VOID, &parameter, 1, &facts));
	check(cppgm_lowir_function(module, exit_symbol, signature, CPPGM_BINDING_DEFAULT, CPPGM_FUNCTION_DECLARATION));
	check(cppgm_lowir_symbol_fact(module, exit_symbol, CPPGM_KEY_NO_BUILTIN, 1));
	check(cppgm_lowir_function(module, symbol, signature, CPPGM_BINDING_STRONG, CPPGM_FUNCTION_DEFINITION));
	check(cppgm_lowir_symbol_fact(module, symbol, CPPGM_KEY_COLD, 1));
	if (is("bad-symbol-fact"))
	{
		cppgm_lowir_symbol_fact(module, id(cppgm_lowir_symbol(module, NAME("undeclared"))), CPPGM_KEY_COLD, 1);
		return;
	}
	LowirBodyCounts counts = { 2, 1, 0, 0, 1 };
	LowirBodyBuffers buffers = reserve(symbol, counts);
	buffers.operands[0] = value(CPPGM_VALUE_TEMP, 0);
	LowirInstruction* code = buffers.instructions;
	code[0] = instruction(CPPGM_OP_CALL, CPPGM_NO_ID, CPPGM_TYPE_VOID);
	code[0].ops[0] = value(CPPGM_VALUE_SYMBOL, exit_symbol);
	code[0].extra_count = 1;
	code[1] = instruction(CPPGM_OP_UNREACHABLE, CPPGM_NO_ID, CPPGM_TYPE_VOID);
	check(cppgm_lowir_body_commit(module, symbol, &counts, 1));
	CppgmDebugLocation declared = at(20, 6, 0);
	check(cppgm_lowir_function_location(module, symbol, &declared));
}

/* assembly: `add <operand 0>, 5` on a value in r10, which is also the output.
 * function @ext_bump(%x : i64) -> i64 */
static void bump(void)
{
	static const char text[] = "add , 5";
	CppgmAsmRegister r10 = { CPPGM_ASM_BANK_GPR, 10, 0, 0, { 0 } };
	CppgmAsmGroup group = { 0, 1, 0 };
	CppgmAsmAlternative alternative = { 0 };
	alternative.matching = CPPGM_NO_ID;
	alternative.group_count = is("bad-assembly") ? 2 : 1;
	alternative.locations = CPPGM_ASM_LOCATION_REGISTER;
	CppgmAsmOperand operand = { 0 };
	operand.type = CPPGM_TYPE_I64;
	operand.input = 0;
	operand.output = 1;
	operand.alternative_count = 1;
	operand.flags = CPPGM_ASM_OPERAND_READ | CPPGM_ASM_OPERAND_WRITE;
	CppgmAsmPiece pieces[3] = { { 0 }, { 0 }, { 0 } };
	pieces[0].kind = CPPGM_ASM_PIECE_TEXT;
	pieces[0].operand = CPPGM_NO_ID;
	pieces[0].count = 4;
	pieces[1].kind = CPPGM_ASM_PIECE_OPERAND;
	pieces[1].operand = 0;
	pieces[2].kind = CPPGM_ASM_PIECE_TEXT;
	pieces[2].operand = CPPGM_NO_ID;
	pieces[2].first = 4;
	pieces[2].count = 3;
	CppgmDebugLocation where = at(30, 3, 0);
	CppgmAssembly assembly = { 0 };
	assembly.dialect = CPPGM_ASM_DIALECT_INTEL;
	assembly.memory = CPPGM_ASM_MEMORY_NONE;
	assembly.properties = CPPGM_ASM_PROPERTY_SIDE_EFFECT;
	assembly.state_write = CPPGM_ASM_STATE_CONDITION_FLAGS;
	assembly.argument_count = 2;
	assembly.location = &where;
	assembly.text = text;
	assembly.text_size = sizeof text - 1;
	assembly.operands = &operand;
	assembly.operand_count = 1;
	assembly.alternatives = &alternative;
	assembly.alternative_count = 1;
	assembly.groups = &group;
	assembly.group_count = 1;
	assembly.registers = &r10;
	assembly.register_count = 1;
	assembly.pieces = pieces;
	assembly.piece_count = 3;
	uint32_t add = cppgm_lowir_assembly(module, &assembly);
	if (is("bad-assembly"))
		return;
	check(add == 0);

	uint32_t symbol = id(cppgm_lowir_symbol(module, NAME("ext_bump")));
	CppgmType parameter = CPPGM_TYPE_I64;
	uint32_t signature = id(cppgm_lowir_signature(module, CPPGM_TYPE_I64, &parameter, 1, CPPGM_ARITY_FIXED));
	check(cppgm_lowir_function(module, symbol, signature, CPPGM_BINDING_STRONG, CPPGM_FUNCTION_DEFINITION));
	LowirBodyCounts counts = { 4, 2, 0, 1, 1 };
	LowirBodyBuffers buffers = reserve(symbol, counts);
	buffers.slots[0] = (LowirSlot){ 0, 0, 0, 0, CPPGM_TYPE_I64 };
	buffers.operands[0] = value(CPPGM_VALUE_TEMP, 0);
	buffers.operands[1] = value(CPPGM_VALUE_TEMP, is("bad-assembly-argument") ? 0 : 1);
	LowirInstruction* code = buffers.instructions;
	code[0] = instruction(CPPGM_OP_ADDR, 1, CPPGM_TYPE_PTR);
	code[0].ops[0] = value(CPPGM_VALUE_SLOT, 0);
	code[1] = instruction(CPPGM_OP_ASM, CPPGM_NO_ID, CPPGM_TYPE_VOID);
	code[1].immediate = add;
	code[1].extra_count = 2;
	code[2] = instruction(CPPGM_OP_LOAD, 2, CPPGM_TYPE_I64);
	code[2].ops[0] = value(CPPGM_VALUE_SLOT, 0);
	code[3] = instruction(CPPGM_OP_RETURN, CPPGM_NO_ID, CPPGM_TYPE_I64);
	code[3].ops[0] = value(CPPGM_VALUE_TEMP, 2);
	check(cppgm_lowir_body_commit(module, symbol, &counts, 3));
}

/* function @ext_pick(%d : f64, %n : i64) -> f64: host_pick(3, (struct Pair){ d, n }, 7),
 * where host_pick is `double host_pick(int, ...)`. */
static void pick(void)
{
	uint32_t host = id(cppgm_lowir_symbol(module, NAME("host_pick")));
	CppgmParameter count = { 0 };
	count.type = CPPGM_TYPE_I32;
	CppgmBoundary variadic = { 0 };
	variadic.arity = CPPGM_ARITY_VARIADIC;
	uint32_t host_signature = id(cppgm_lowir_boundary(module, CPPGM_TYPE_F64, &count, 1, &variadic));
	check(cppgm_lowir_function(module, host, host_signature, CPPGM_BINDING_DEFAULT, CPPGM_FUNCTION_DECLARATION));

	uint32_t symbol = id(cppgm_lowir_symbol(module, NAME("ext_pick")));
	CppgmType parameters[2] = { CPPGM_TYPE_F64, CPPGM_TYPE_I64 };
	uint32_t signature = id(cppgm_lowir_signature(module, CPPGM_TYPE_F64, parameters, 2, CPPGM_ARITY_FIXED));
	check(cppgm_lowir_function(module, symbol, signature, CPPGM_BINDING_STRONG, CPPGM_FUNCTION_DEFINITION));
	LowirBodyCounts counts = { 6, 3, 3, 1, 1 };
	LowirBodyBuffers buffers = reserve(symbol, counts);
	buffers.slots[0] = (LowirSlot){ 0, 0, 0, 0, PAIR };
	buffers.literals[0] = (LowirLiteral){ 8, 0 };
	buffers.literals[1] = (LowirLiteral){ 3, 0 };
	buffers.literals[2] = (LowirLiteral){ 7, 0 };
	buffers.operands[0] = value(CPPGM_VALUE_INTEGER, 1);
	buffers.operands[1] = value(CPPGM_VALUE_SLOT, 0);
	buffers.operands[2] = value(CPPGM_VALUE_INTEGER, 2);
	LowirInstruction* code = buffers.instructions;
	code[0] = instruction(CPPGM_OP_ADDR, 2, CPPGM_TYPE_PTR);
	code[0].ops[0] = value(CPPGM_VALUE_SLOT, 0);
	code[1] = instruction(CPPGM_OP_STORE, CPPGM_NO_ID, CPPGM_TYPE_F64);
	code[1].ops[0] = value(CPPGM_VALUE_TEMP, 0);
	code[1].ops[1] = value(CPPGM_VALUE_TEMP, 2);
	code[2] = instruction(CPPGM_OP_INDEX, 3, CPPGM_TYPE_I8);
	code[2].order = CPPGM_BOUNDS_IN_BOUNDS;
	code[2].ops[0] = value(CPPGM_VALUE_TEMP, 2);
	code[2].ops[1] = value(CPPGM_VALUE_INTEGER, 0);
	code[3] = instruction(CPPGM_OP_STORE, CPPGM_NO_ID, CPPGM_TYPE_I64);
	code[3].ops[0] = value(CPPGM_VALUE_TEMP, 1);
	code[3].ops[1] = value(CPPGM_VALUE_TEMP, 3);
	code[4] = instruction(CPPGM_OP_CALL, 4, CPPGM_TYPE_F64);
	code[4].ops[0] = value(CPPGM_VALUE_SYMBOL, host);
	code[4].extra_count = 3;
	code[5] = instruction(CPPGM_OP_RETURN, CPPGM_NO_ID, CPPGM_TYPE_F64);
	code[5].ops[0] = value(CPPGM_VALUE_TEMP, 4);
	check(cppgm_lowir_body_commit(module, symbol, &counts, 5));
	/* The object's classes, and the type the literal 7 is passed as. */
	CppgmArgumentFact facts[2] = { { 0 }, { 0 } };
	facts[0].instruction = is("bad-argument-fact") ? 5 : 4;
	facts[0].argument = 1;
	facts[0].classes = CPPGM_CLASSES(CPPGM_EIGHTBYTE_SSE, CPPGM_EIGHTBYTE_INTEGER);
	facts[1].instruction = 4;
	facts[1].argument = 2;
	facts[1].type = CPPGM_TYPE_I32;
	check(cppgm_lowir_body_argument_facts(module, symbol, facts, 2));
}

/* global @ext_limit [binding=strong, storage=readonly]: one i64, 40 */
static void limit(void)
{
	uint32_t symbol = id(cppgm_lowir_symbol(module, NAME("ext_limit")));
	CppgmDataItem data = { 0 };
	data.type = CPPGM_TYPE_I64;
	data.bits.low = 40;
	data.kind = CPPGM_DATA_SCALAR;
	check(cppgm_lowir_global(module, symbol, CPPGM_TYPE_VOID, CPPGM_BINDING_STRONG, CPPGM_STORAGE_DEFAULT, &data, 1,
		CPPGM_GLOBAL_DEFINITION));
	check(cppgm_lowir_symbol_fact(module, symbol, CPPGM_KEY_STORAGE, CPPGM_STORAGE_READONLY));
	if (is("bad-section"))
		cppgm_lowir_symbol_name(module, symbol, CPPGM_KEY_SECTION, NAME("no space"));
}

int main(int argc, char** argv)
{
	if (argc != 7)
		return 2;
	if (cppgm_lowir_abi_version() != CPPGM_LOWIR_ABI_VERSION || strcmp(cppgm_lowir_version(), argv[6]) != 0)
		return 3;
	if (strcmp(argv[4], "version-2") == 0)
	{
		/* A client of version 2 creates its module as before. */
		module = cppgm_lowir_create(CPPGM_LOWIR_ABI_VERSION_MIN, (uint32_t)atoi(argv[5]));
		if (module == NULL || cppgm_lowir_create(CPPGM_LOWIR_ABI_VERSION_MIN - 1, 0) != NULL)
			return 4;
		cppgm_lowir_destroy(module);
		return 0;
	}
	bad = strncmp(argv[4], "bad-", 4) == 0 ? argv[4] : NULL;
	module = cppgm_lowir_create(CPPGM_LOWIR_ABI_VERSION, (uint32_t)atoi(argv[5]));
	check(module != NULL);
	file = cppgm_lowir_debug_file(module, NAME("ext.c"));
	check(file != CPPGM_NO_ID && file != 0 && cppgm_lowir_debug_file(module, NAME("ext.c")) == file);
	if (is("bad-file"))
		cppgm_lowir_debug_file(module, NAME("two words.c"));
	if (cppgm_lowir_error(module)[0] == 0)
		pair_sum();
	if (cppgm_lowir_error(module)[0] == 0)
		stop();
	if (cppgm_lowir_error(module)[0] == 0)
		bump();
	if (cppgm_lowir_error(module)[0] == 0)
		pick();
	if (cppgm_lowir_error(module)[0] == 0)
		limit();
	if (bad != NULL)
	{
		/* The call that takes the bad record fails, or the validation does. */
		if (cppgm_lowir_validate(module) || cppgm_lowir_error(module)[0] == 0 || cppgm_lowir_compile(module, 0, 0))
			return 5;
		puts(cppgm_lowir_error(module));
		cppgm_lowir_destroy(module);
		return 0;
	}
	check(cppgm_lowir_write(module, argv[2]));
	check(cppgm_lowir_compile(module, (uint32_t)atoi(argv[3]), CPPGM_CODE_FIXED));
	FILE* out = fopen(argv[1], "wb");
	uint64_t size = cppgm_lowir_object_size(module);
	if (out == NULL || size == 0 || fwrite(cppgm_lowir_object_data(module), 1, size, out) != size || fclose(out))
		return 6;
	cppgm_lowir_destroy(module);
	return 0;
}
