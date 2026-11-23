#include "syntax/syntax_unit.h"

namespace syntax {

SyntaxUnit::SyntaxUnit(const PreprocessorOptions& options, const std::string& path, bool syntax_only)
	: preprocessor_(options, path), post_tokens_(preprocessor_, &preprocessor_.identifiers(), options.literals,
										options.target, options.gnu_c(), options.cxx_edition),
	  tokens_(post_tokens_, spellings_, options.language == SourceLanguage::C),
	  parser_(tokens_, preprocessor_.identifiers(), arena_, options.hosted, options.cxx_edition >= 14,
		  options.cxx_edition >= 17, options.language == SourceLanguage::C, syntax_only, options.cxx_edition >= 20,
		  options.gnu_c()),
	  tree_(nullptr)
{
	post_tokens_.defer_imaginary_values();
	post_tokens_.set_source_positions(preprocessor_);
	parser_.set_source_positions(preprocessor_);
	tokens_.observe_pack(preprocessor_.pack_state());
	if (options.language == SourceLanguage::C)
	{
		preprocessor_.observe_c_float_pragma(&tokens_, ParseTokenStream::note_c_float_pragma);
		parser_.set_c_contract_default(options.c_contract_by_default);
		parser_.set_c_edition(options.c_edition);
	}
	tokens_.set_prelude(preprocessor_.builtin_begin(), preprocessor_.builtin_end());
}

bool SyntaxUnit::parse()
{
	try
	{
		tree_ = parser_.parse_translation_unit();
		if (tree_ == nullptr)
			error_ = preprocessor_.describe(parser_.error_location(), "syntax error");
	}
	catch (const ParseError& e)
	{
		error_ = preprocessor_.describe(e.location(), e.what());
	}
	catch (const PreprocessError& e)
	{
		error_ = preprocessor_.describe(e);
	}
	catch (const SourceError& e)
	{
		error_ = preprocessor_.describe(e);
	}
	catch (const InternalError& e)
	{
		throw locate(e);
	}
	return tree_ != nullptr;
}

InternalError SyntaxUnit::locate(const InternalError& error) const
{
	if (!error.has_location())
		return error;
	return InternalError(preprocessor_.describe(error.location(), error.what()));
}

} // namespace syntax
