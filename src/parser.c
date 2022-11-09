#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 99
#define LARGE_STATE_COUNT 10
#define SYMBOL_COUNT 104
#define ALIAS_COUNT 7
#define TOKEN_COUNT 71
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 9

enum {
  anon_sym_library = 1,
  anon_sym_using = 2,
  anon_sym_called = 3,
  anon_sym_include = 4,
  anon_sym_valueset = 5,
  anon_sym_COLON = 6,
  anon_sym_context = 7,
  anon_sym_DOT = 8,
  anon_sym_define = 9,
  anon_sym_function = 10,
  anon_sym_LPAREN = 11,
  anon_sym_RPAREN = 12,
  anon_sym_external = 13,
  aux_sym_literal_token1 = 14,
  anon_sym_null = 15,
  anon_sym_LBRACK = 16,
  anon_sym_RBRACK = 17,
  anon_sym_version = 18,
  sym_default_identifier = 19,
  anon_sym_DQUOTE = 20,
  anon_sym_Code = 21,
  anon_sym_Concept = 22,
  anon_sym_date = 23,
  anon_sym_time = 24,
  anon_sym_asc = 25,
  anon_sym_ascending = 26,
  anon_sym_by = 27,
  anon_sym_code = 28,
  anon_sym_codesystem = 29,
  anon_sym_codesystems = 30,
  anon_sym_concept = 31,
  anon_sym_contains = 32,
  anon_sym_default = 33,
  anon_sym_desc = 34,
  anon_sym_descending = 35,
  anon_sym_display = 36,
  anon_sym_div = 37,
  anon_sym_end = 38,
  anon_sym_ends = 39,
  anon_sym_except = 40,
  anon_sym_fluent = 41,
  anon_sym_implies = 42,
  anon_sym_includes = 43,
  anon_sym_intersect = 44,
  anon_sym_meets = 45,
  anon_sym_mod = 46,
  anon_sym_orafter = 47,
  anon_sym_orbefore = 48,
  anon_sym_orless = 49,
  anon_sym_ormore = 50,
  anon_sym_overlaps = 51,
  anon_sym_parameter = 52,
  anon_sym_predecessor = 53,
  anon_sym_private = 54,
  anon_sym_public = 55,
  anon_sym_start = 56,
  anon_sym_starting = 57,
  anon_sym_starts = 58,
  anon_sym_successor = 59,
  anon_sym_timezone = 60,
  anon_sym_timezoneoffset = 61,
  anon_sym_union = 62,
  anon_sym_where = 63,
  anon_sym_width = 64,
  anon_sym_xor = 65,
  anon_sym_SQUOTE = 66,
  sym_single_quote_string_fragment = 67,
  sym_double_quote_string_fragment = 68,
  sym_escape_sequence = 69,
  sym_comment = 70,
  sym_cql_library = 71,
  sym_definition = 72,
  sym_library_definition = 73,
  sym_using_definition = 74,
  sym_include_definition = 75,
  sym_valueset_definition = 76,
  sym_statement = 77,
  sym_context_definition = 78,
  sym_function_definition = 79,
  sym_expression_definition = 80,
  sym_expression = 81,
  sym_expression_term = 82,
  sym_term = 83,
  sym_literal = 84,
  sym_qualified_identifier_expression = 85,
  sym_retrieve = 86,
  sym_terminology = 87,
  sym_named_type_specifier = 88,
  sym_version_specifier = 89,
  sym_identifier = 90,
  sym_qualified_identifier = 91,
  sym_quoted_identifier = 92,
  sym_referential_identifier = 93,
  sym_type_name_identifier = 94,
  sym_referential_or_type_name_identifier = 95,
  sym_keyword_identifier = 96,
  sym_string = 97,
  aux_sym_cql_library_repeat1 = 98,
  aux_sym_cql_library_repeat2 = 99,
  aux_sym_qualified_identifier_expression_repeat1 = 100,
  aux_sym_named_type_specifier_repeat1 = 101,
  aux_sym_quoted_identifier_repeat1 = 102,
  aux_sym_string_repeat1 = 103,
  alias_sym_function_body = 104,
  alias_sym_local_identifier = 105,
  alias_sym_model_identifier = 106,
  alias_sym_qualifier = 107,
  alias_sym_qualifier_expression = 108,
  alias_sym_string_literal = 109,
  alias_sym_version = 110,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_library] = "library",
  [anon_sym_using] = "using",
  [anon_sym_called] = "called",
  [anon_sym_include] = "include",
  [anon_sym_valueset] = "valueset",
  [anon_sym_COLON] = ":",
  [anon_sym_context] = "context",
  [anon_sym_DOT] = ".",
  [anon_sym_define] = "define",
  [anon_sym_function] = "function",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_external] = "external",
  [aux_sym_literal_token1] = "boolean_literal",
  [anon_sym_null] = "null_literal",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_version] = "version",
  [sym_default_identifier] = "default_identifier",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_Code] = "Code",
  [anon_sym_Concept] = "Concept",
  [anon_sym_date] = "date",
  [anon_sym_time] = "time",
  [anon_sym_asc] = "asc",
  [anon_sym_ascending] = "ascending",
  [anon_sym_by] = "by",
  [anon_sym_code] = "code",
  [anon_sym_codesystem] = "codesystem",
  [anon_sym_codesystems] = "codesystems",
  [anon_sym_concept] = "concept",
  [anon_sym_contains] = "contains",
  [anon_sym_default] = "default",
  [anon_sym_desc] = "desc",
  [anon_sym_descending] = "descending",
  [anon_sym_display] = "display",
  [anon_sym_div] = "div",
  [anon_sym_end] = "end",
  [anon_sym_ends] = "ends",
  [anon_sym_except] = "except",
  [anon_sym_fluent] = "fluent",
  [anon_sym_implies] = "implies",
  [anon_sym_includes] = "includes",
  [anon_sym_intersect] = "intersect",
  [anon_sym_meets] = "meets",
  [anon_sym_mod] = "mod",
  [anon_sym_orafter] = "or after",
  [anon_sym_orbefore] = "or before",
  [anon_sym_orless] = "or less",
  [anon_sym_ormore] = "or more",
  [anon_sym_overlaps] = "overlaps",
  [anon_sym_parameter] = "parameter",
  [anon_sym_predecessor] = "predecessor",
  [anon_sym_private] = "private",
  [anon_sym_public] = "public",
  [anon_sym_start] = "start",
  [anon_sym_starting] = "starting",
  [anon_sym_starts] = "starts",
  [anon_sym_successor] = "successor",
  [anon_sym_timezone] = "timezone",
  [anon_sym_timezoneoffset] = "timezoneoffset",
  [anon_sym_union] = "union",
  [anon_sym_where] = "where",
  [anon_sym_width] = "width",
  [anon_sym_xor] = "xor",
  [anon_sym_SQUOTE] = "'",
  [sym_single_quote_string_fragment] = "single_quote_string_fragment",
  [sym_double_quote_string_fragment] = "double_quote_string_fragment",
  [sym_escape_sequence] = "escape_sequence",
  [sym_comment] = "comment",
  [sym_cql_library] = "cql_library",
  [sym_definition] = "definition",
  [sym_library_definition] = "library_definition",
  [sym_using_definition] = "using_definition",
  [sym_include_definition] = "include_definition",
  [sym_valueset_definition] = "valueset_definition",
  [sym_statement] = "statement",
  [sym_context_definition] = "context_definition",
  [sym_function_definition] = "function_definition",
  [sym_expression_definition] = "expression_definition",
  [sym_expression] = "expression",
  [sym_expression_term] = "expression_term",
  [sym_term] = "term",
  [sym_literal] = "literal",
  [sym_qualified_identifier_expression] = "qualified_identifier_expression",
  [sym_retrieve] = "retrieve",
  [sym_terminology] = "terminology",
  [sym_named_type_specifier] = "named_type_specifier",
  [sym_version_specifier] = "version_specifier",
  [sym_identifier] = "identifier",
  [sym_qualified_identifier] = "qualified_identifier",
  [sym_quoted_identifier] = "quoted_identifier",
  [sym_referential_identifier] = "referential_identifier",
  [sym_type_name_identifier] = "type_name_identifier",
  [sym_referential_or_type_name_identifier] = "referential_or_type_name_identifier",
  [sym_keyword_identifier] = "keyword_identifier",
  [sym_string] = "valueset_id",
  [aux_sym_cql_library_repeat1] = "cql_library_repeat1",
  [aux_sym_cql_library_repeat2] = "cql_library_repeat2",
  [aux_sym_qualified_identifier_expression_repeat1] = "qualified_identifier_expression_repeat1",
  [aux_sym_named_type_specifier_repeat1] = "named_type_specifier_repeat1",
  [aux_sym_quoted_identifier_repeat1] = "quoted_identifier_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [alias_sym_function_body] = "function_body",
  [alias_sym_local_identifier] = "local_identifier",
  [alias_sym_model_identifier] = "model_identifier",
  [alias_sym_qualifier] = "qualifier",
  [alias_sym_qualifier_expression] = "qualifier_expression",
  [alias_sym_string_literal] = "string_literal",
  [alias_sym_version] = "version",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_library] = anon_sym_library,
  [anon_sym_using] = anon_sym_using,
  [anon_sym_called] = anon_sym_called,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_valueset] = anon_sym_valueset,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_context] = anon_sym_context,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_define] = anon_sym_define,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_external] = anon_sym_external,
  [aux_sym_literal_token1] = aux_sym_literal_token1,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_version] = anon_sym_version,
  [sym_default_identifier] = sym_default_identifier,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_Code] = anon_sym_Code,
  [anon_sym_Concept] = anon_sym_Concept,
  [anon_sym_date] = anon_sym_date,
  [anon_sym_time] = anon_sym_time,
  [anon_sym_asc] = anon_sym_asc,
  [anon_sym_ascending] = anon_sym_ascending,
  [anon_sym_by] = anon_sym_by,
  [anon_sym_code] = anon_sym_code,
  [anon_sym_codesystem] = anon_sym_codesystem,
  [anon_sym_codesystems] = anon_sym_codesystems,
  [anon_sym_concept] = anon_sym_concept,
  [anon_sym_contains] = anon_sym_contains,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_desc] = anon_sym_desc,
  [anon_sym_descending] = anon_sym_descending,
  [anon_sym_display] = anon_sym_display,
  [anon_sym_div] = anon_sym_div,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_ends] = anon_sym_ends,
  [anon_sym_except] = anon_sym_except,
  [anon_sym_fluent] = anon_sym_fluent,
  [anon_sym_implies] = anon_sym_implies,
  [anon_sym_includes] = anon_sym_includes,
  [anon_sym_intersect] = anon_sym_intersect,
  [anon_sym_meets] = anon_sym_meets,
  [anon_sym_mod] = anon_sym_mod,
  [anon_sym_orafter] = anon_sym_orafter,
  [anon_sym_orbefore] = anon_sym_orbefore,
  [anon_sym_orless] = anon_sym_orless,
  [anon_sym_ormore] = anon_sym_ormore,
  [anon_sym_overlaps] = anon_sym_overlaps,
  [anon_sym_parameter] = anon_sym_parameter,
  [anon_sym_predecessor] = anon_sym_predecessor,
  [anon_sym_private] = anon_sym_private,
  [anon_sym_public] = anon_sym_public,
  [anon_sym_start] = anon_sym_start,
  [anon_sym_starting] = anon_sym_starting,
  [anon_sym_starts] = anon_sym_starts,
  [anon_sym_successor] = anon_sym_successor,
  [anon_sym_timezone] = anon_sym_timezone,
  [anon_sym_timezoneoffset] = anon_sym_timezoneoffset,
  [anon_sym_union] = anon_sym_union,
  [anon_sym_where] = anon_sym_where,
  [anon_sym_width] = anon_sym_width,
  [anon_sym_xor] = anon_sym_xor,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym_single_quote_string_fragment] = sym_single_quote_string_fragment,
  [sym_double_quote_string_fragment] = sym_double_quote_string_fragment,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_comment] = sym_comment,
  [sym_cql_library] = sym_cql_library,
  [sym_definition] = sym_definition,
  [sym_library_definition] = sym_library_definition,
  [sym_using_definition] = sym_using_definition,
  [sym_include_definition] = sym_include_definition,
  [sym_valueset_definition] = sym_valueset_definition,
  [sym_statement] = sym_statement,
  [sym_context_definition] = sym_context_definition,
  [sym_function_definition] = sym_function_definition,
  [sym_expression_definition] = sym_expression_definition,
  [sym_expression] = sym_expression,
  [sym_expression_term] = sym_expression_term,
  [sym_term] = sym_term,
  [sym_literal] = sym_literal,
  [sym_qualified_identifier_expression] = sym_qualified_identifier_expression,
  [sym_retrieve] = sym_retrieve,
  [sym_terminology] = sym_terminology,
  [sym_named_type_specifier] = sym_named_type_specifier,
  [sym_version_specifier] = sym_version_specifier,
  [sym_identifier] = sym_identifier,
  [sym_qualified_identifier] = sym_qualified_identifier,
  [sym_quoted_identifier] = sym_quoted_identifier,
  [sym_referential_identifier] = sym_referential_identifier,
  [sym_type_name_identifier] = sym_type_name_identifier,
  [sym_referential_or_type_name_identifier] = sym_referential_or_type_name_identifier,
  [sym_keyword_identifier] = sym_keyword_identifier,
  [sym_string] = sym_string,
  [aux_sym_cql_library_repeat1] = aux_sym_cql_library_repeat1,
  [aux_sym_cql_library_repeat2] = aux_sym_cql_library_repeat2,
  [aux_sym_qualified_identifier_expression_repeat1] = aux_sym_qualified_identifier_expression_repeat1,
  [aux_sym_named_type_specifier_repeat1] = aux_sym_named_type_specifier_repeat1,
  [aux_sym_quoted_identifier_repeat1] = aux_sym_quoted_identifier_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [alias_sym_function_body] = alias_sym_function_body,
  [alias_sym_local_identifier] = alias_sym_local_identifier,
  [alias_sym_model_identifier] = alias_sym_model_identifier,
  [alias_sym_qualifier] = alias_sym_qualifier,
  [alias_sym_qualifier_expression] = alias_sym_qualifier_expression,
  [alias_sym_string_literal] = alias_sym_string_literal,
  [alias_sym_version] = alias_sym_version,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_library] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_using] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_called] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_valueset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_context] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_external] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_literal_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_version] = {
    .visible = true,
    .named = false,
  },
  [sym_default_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Code] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Concept] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_date] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_time] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_asc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ascending] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_by] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_code] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_codesystem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_codesystems] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_concept] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_contains] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_desc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_descending] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_display] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_div] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ends] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_except] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fluent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_implies] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_includes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_intersect] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_meets] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_orafter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_orbefore] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_orless] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ormore] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_overlaps] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_parameter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_predecessor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_private] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_public] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_start] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_starting] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_starts] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_successor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_timezone] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_timezoneoffset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_union] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_where] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_width] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_single_quote_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_double_quote_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_cql_library] = {
    .visible = true,
    .named = true,
  },
  [sym_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_library_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_using_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_include_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_valueset_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_context_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_term] = {
    .visible = true,
    .named = true,
  },
  [sym_term] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_identifier_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_retrieve] = {
    .visible = true,
    .named = true,
  },
  [sym_terminology] = {
    .visible = true,
    .named = true,
  },
  [sym_named_type_specifier] = {
    .visible = true,
    .named = true,
  },
  [sym_version_specifier] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_referential_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_type_name_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_referential_or_type_name_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_cql_library_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_cql_library_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_qualified_identifier_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_named_type_specifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_function_body] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_local_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_model_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_qualifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_qualifier_expression] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_version] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_qualifier,
  },
  [2] = {
    [1] = alias_sym_version,
  },
  [3] = {
    [3] = alias_sym_local_identifier,
  },
  [4] = {
    [1] = alias_sym_model_identifier,
  },
  [5] = {
    [0] = alias_sym_string_literal,
  },
  [6] = {
    [4] = alias_sym_local_identifier,
  },
  [7] = {
    [6] = alias_sym_function_body,
  },
  [8] = {
    [0] = alias_sym_qualifier_expression,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_expression, 2,
    sym_expression,
    alias_sym_function_body,
  sym_identifier, 4,
    sym_identifier,
    alias_sym_local_identifier,
    alias_sym_model_identifier,
    alias_sym_qualifier,
  sym_referential_identifier, 2,
    sym_referential_identifier,
    alias_sym_qualifier_expression,
  sym_string, 3,
    sym_string,
    alias_sym_string_literal,
    alias_sym_version,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 5,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 8,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 96,
};

static inline bool anon_sym_DQUOTE_character_set_1(int32_t c) {
  return (c < 8192
    ? (c < ' '
      ? (c < '\r'
        ? (c >= '\t' && c <= '\n')
        : c <= '\r')
      : (c <= ' ' || (c < 5760
        ? c == 160
        : c <= 5760)))
    : (c <= 8203 || (c < 12288
      ? (c < 8287
        ? c == 8239
        : c <= 8288)
      : (c <= 12288 || c == 65279))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(251);
      if (lookahead == '"') ADVANCE(470);
      if (lookahead == '\'') ADVANCE(557);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == '.') ADVANCE(266);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == 'C') ADVANCE(157);
      if (lookahead == '[') ADVANCE(276);
      if (lookahead == '\\') ADVANCE(229);
      if (lookahead == ']') ADVANCE(277);
      if (lookahead == 'a') ADVANCE(190);
      if (lookahead == 'b') ADVANCE(239);
      if (lookahead == 'c') ADVANCE(13);
      if (lookahead == 'd') ADVANCE(15);
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead == 'f') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead == 'l') ADVANCE(108);
      if (lookahead == 'm') ADVANCE(55);
      if (lookahead == 'n') ADVANCE(234);
      if (lookahead == 'o') ADVANCE(173);
      if (lookahead == 'p') ADVANCE(16);
      if (lookahead == 's') ADVANCE(209);
      if (lookahead == 't') ADVANCE(109);
      if (lookahead == 'u') ADVANCE(143);
      if (lookahead == 'v') ADVANCE(20);
      if (lookahead == 'w') ADVANCE(107);
      if (lookahead == 'x') ADVANCE(158);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(249)
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(17);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(470);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == 'C') ADVANCE(398);
      if (lookahead == 'a') ADVANCE(425);
      if (lookahead == 'b') ADVANCE(465);
      if (lookahead == 'c') ADVANCE(281);
      if (lookahead == 'd') ADVANCE(282);
      if (lookahead == 'e') ADVANCE(382);
      if (lookahead == 'f') ADVANCE(368);
      if (lookahead == 'i') ADVANCE(378);
      if (lookahead == 'l') ADVANCE(357);
      if (lookahead == 'm') ADVANCE(317);
      if (lookahead == 'o') ADVANCE(412);
      if (lookahead == 'p') ADVANCE(283);
      if (lookahead == 's') ADVANCE(440);
      if (lookahead == 't') ADVANCE(358);
      if (lookahead == 'u') ADVANCE(388);
      if (lookahead == 'v') ADVANCE(284);
      if (lookahead == 'w') ADVANCE(356);
      if (lookahead == 'x') ADVANCE(399);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(470);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == 'a') ADVANCE(425);
      if (lookahead == 'b') ADVANCE(465);
      if (lookahead == 'c') ADVANCE(281);
      if (lookahead == 'd') ADVANCE(282);
      if (lookahead == 'e') ADVANCE(382);
      if (lookahead == 'f') ADVANCE(368);
      if (lookahead == 'i') ADVANCE(378);
      if (lookahead == 'l') ADVANCE(357);
      if (lookahead == 'm') ADVANCE(317);
      if (lookahead == 'o') ADVANCE(412);
      if (lookahead == 'p') ADVANCE(283);
      if (lookahead == 's') ADVANCE(440);
      if (lookahead == 't') ADVANCE(358);
      if (lookahead == 'u') ADVANCE(388);
      if (lookahead == 'v') ADVANCE(284);
      if (lookahead == 'w') ADVANCE(356);
      if (lookahead == 'x') ADVANCE(399);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(470);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == 'f') ADVANCE(458);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(470);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '/') ADVANCE(9);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(470);
      if (lookahead == '/') ADVANCE(565);
      if (lookahead == '\\') ADVANCE(229);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(568);
      if (lookahead != 0) ADVANCE(569);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(557);
      if (lookahead == '/') ADVANCE(559);
      if (lookahead == '\\') ADVANCE(229);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(562);
      if (lookahead != 0) ADVANCE(563);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(469);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(574);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(573);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '_') ADVANCE(8);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(222);
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(179);
      if (lookahead == 'r') ADVANCE(74);
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(99);
      if (lookahead == 'b') ADVANCE(73);
      if (lookahead == 'l') ADVANCE(76);
      if (lookahead == 'm') ADVANCE(165);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(122);
      if (lookahead == 'l') ADVANCE(230);
      if (lookahead == 'u') ADVANCE(147);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(240);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(132);
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(114);
      if (lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(181);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(232);
      if (lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(137);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(223);
      END_STATE();
    case 29:
      if (lookahead == 'b') ADVANCE(127);
      END_STATE();
    case 30:
      if (lookahead == 'b') ADVANCE(188);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(480);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(498);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(535);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(228);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(123);
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(71);
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(219);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(90);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(91);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(92);
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(133);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(94);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(506);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(521);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(256);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(210);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(56);
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(57);
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(95);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(69);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(115);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(116);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(70);
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(471);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(486);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(475);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(478);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(551);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(526);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(533);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(546);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(524);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(237);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 96:
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 97:
      if (lookahead == 'f') ADVANCE(100);
      END_STATE();
    case 98:
      if (lookahead == 'f') ADVANCE(112);
      END_STATE();
    case 99:
      if (lookahead == 'f') ADVANCE(226);
      END_STATE();
    case 100:
      if (lookahead == 'f') ADVANCE(203);
      END_STATE();
    case 101:
      if (lookahead == 'f') ADVANCE(166);
      END_STATE();
    case 102:
      if (lookahead == 'g') ADVANCE(254);
      END_STATE();
    case 103:
      if (lookahead == 'g') ADVANCE(539);
      END_STATE();
    case 104:
      if (lookahead == 'g') ADVANCE(481);
      END_STATE();
    case 105:
      if (lookahead == 'g') ADVANCE(499);
      END_STATE();
    case 106:
      if (lookahead == 'h') ADVANCE(553);
      END_STATE();
    case 107:
      if (lookahead == 'h') ADVANCE(81);
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(136);
      if (lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(139);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(275);
      END_STATE();
    case 121:
      if (lookahead == 'l') ADVANCE(273);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(198);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(235);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 125:
      if (lookahead == 'l') ADVANCE(130);
      END_STATE();
    case 126:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 127:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 128:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 129:
      if (lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 130:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 131:
      if (lookahead == 'l') ADVANCE(217);
      END_STATE();
    case 132:
      if (lookahead == 'l') ADVANCE(233);
      END_STATE();
    case 133:
      if (lookahead == 'l') ADVANCE(236);
      END_STATE();
    case 134:
      if (lookahead == 'm') ADVANCE(167);
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 135:
      if (lookahead == 'm') ADVANCE(488);
      END_STATE();
    case 136:
      if (lookahead == 'm') ADVANCE(59);
      END_STATE();
    case 137:
      if (lookahead == 'm') ADVANCE(93);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(44);
      if (lookahead == 'x') ADVANCE(36);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(549);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(278);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(269);
      END_STATE();
    case 143:
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead == 's') ADVANCE(110);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 146:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 147:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 149:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 150:
      if (lookahead == 'n') ADVANCE(213);
      END_STATE();
    case 151:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(194);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(225);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 157:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 158:
      if (lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 159:
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 160:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 161:
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 162:
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 163:
      if (lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 164:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 165:
      if (lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 166:
      if (lookahead == 'o') ADVANCE(187);
      END_STATE();
    case 167:
      if (lookahead == 'p') ADVANCE(124);
      END_STATE();
    case 168:
      if (lookahead == 'p') ADVANCE(212);
      END_STATE();
    case 169:
      if (lookahead == 'p') ADVANCE(214);
      END_STATE();
    case 170:
      if (lookahead == 'p') ADVANCE(126);
      END_STATE();
    case 171:
      if (lookahead == 'p') ADVANCE(215);
      END_STATE();
    case 172:
      if (lookahead == 'p') ADVANCE(195);
      END_STATE();
    case 173:
      if (lookahead == 'r') ADVANCE(1);
      if (lookahead == 'v') ADVANCE(75);
      END_STATE();
    case 174:
      if (lookahead == 'r') ADVANCE(555);
      END_STATE();
    case 175:
      if (lookahead == 'r') ADVANCE(523);
      END_STATE();
    case 176:
      if (lookahead == 'r') ADVANCE(529);
      END_STATE();
    case 177:
      if (lookahead == 'r') ADVANCE(543);
      END_STATE();
    case 178:
      if (lookahead == 'r') ADVANCE(531);
      END_STATE();
    case 179:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 180:
      if (lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 181:
      if (lookahead == 'r') ADVANCE(241);
      END_STATE();
    case 182:
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 183:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 184:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 185:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 186:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 187:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 188:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 189:
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 190:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 191:
      if (lookahead == 's') ADVANCE(519);
      END_STATE();
    case 192:
      if (lookahead == 's') ADVANCE(513);
      END_STATE();
    case 193:
      if (lookahead == 's') ADVANCE(525);
      END_STATE();
    case 194:
      if (lookahead == 's') ADVANCE(493);
      END_STATE();
    case 195:
      if (lookahead == 's') ADVANCE(527);
      END_STATE();
    case 196:
      if (lookahead == 's') ADVANCE(110);
      END_STATE();
    case 197:
      if (lookahead == 's') ADVANCE(193);
      END_STATE();
    case 198:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 199:
      if (lookahead == 's') ADVANCE(204);
      END_STATE();
    case 200:
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 201:
      if (lookahead == 's') ADVANCE(170);
      if (lookahead == 'v') ADVANCE(503);
      END_STATE();
    case 202:
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 203:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 204:
      if (lookahead == 's') ADVANCE(162);
      END_STATE();
    case 205:
      if (lookahead == 's') ADVANCE(224);
      END_STATE();
    case 206:
      if (lookahead == 's') ADVANCE(163);
      END_STATE();
    case 207:
      if (lookahead == 's') ADVANCE(118);
      END_STATE();
    case 208:
      if (lookahead == 's') ADVANCE(206);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 211:
      if (lookahead == 't') ADVANCE(538);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(509);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(511);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(473);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(491);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(264);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(495);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(517);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(547);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(191);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 229:
      if (lookahead == 'u') ADVANCE(243);
      if (lookahead == 'x') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(572);
      if (lookahead != 0) ADVANCE(570);
      END_STATE();
    case 230:
      if (lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 231:
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 232:
      if (lookahead == 'u') ADVANCE(131);
      END_STATE();
    case 233:
      if (lookahead == 'u') ADVANCE(79);
      END_STATE();
    case 234:
      if (lookahead == 'u') ADVANCE(129);
      END_STATE();
    case 235:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 236:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 237:
      if (lookahead == 'v') ADVANCE(28);
      END_STATE();
    case 238:
      if (lookahead == 'x') ADVANCE(216);
      END_STATE();
    case 239:
      if (lookahead == 'y') ADVANCE(483);
      END_STATE();
    case 240:
      if (lookahead == 'y') ADVANCE(501);
      END_STATE();
    case 241:
      if (lookahead == 'y') ADVANCE(252);
      END_STATE();
    case 242:
      if (lookahead == 'y') ADVANCE(205);
      END_STATE();
    case 243:
      if (lookahead == '{') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      END_STATE();
    case 244:
      if (lookahead == '}') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(244);
      END_STATE();
    case 245:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(248);
      END_STATE();
    case 246:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(570);
      END_STATE();
    case 247:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(244);
      END_STATE();
    case 248:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(246);
      END_STATE();
    case 249:
      if (eof) ADVANCE(251);
      if (lookahead == '"') ADVANCE(470);
      if (lookahead == '\'') ADVANCE(557);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == '.') ADVANCE(266);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == 'C') ADVANCE(157);
      if (lookahead == '[') ADVANCE(276);
      if (lookahead == ']') ADVANCE(277);
      if (lookahead == 'a') ADVANCE(190);
      if (lookahead == 'b') ADVANCE(239);
      if (lookahead == 'c') ADVANCE(13);
      if (lookahead == 'd') ADVANCE(15);
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead == 'f') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead == 'l') ADVANCE(108);
      if (lookahead == 'm') ADVANCE(55);
      if (lookahead == 'n') ADVANCE(234);
      if (lookahead == 'o') ADVANCE(173);
      if (lookahead == 'p') ADVANCE(16);
      if (lookahead == 's') ADVANCE(209);
      if (lookahead == 't') ADVANCE(109);
      if (lookahead == 'u') ADVANCE(143);
      if (lookahead == 'v') ADVANCE(20);
      if (lookahead == 'w') ADVANCE(107);
      if (lookahead == 'x') ADVANCE(158);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(249)
      END_STATE();
    case 250:
      if (eof) ADVANCE(251);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == '.') ADVANCE(266);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == ']') ADVANCE(277);
      if (lookahead == 'c') ADVANCE(14);
      if (lookahead == 'd') ADVANCE(78);
      if (lookahead == 'i') ADVANCE(151);
      if (lookahead == 'l') ADVANCE(108);
      if (lookahead == 'u') ADVANCE(196);
      if (lookahead == 'v') ADVANCE(20);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(250)
      END_STATE();
    case 251:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_library);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_library);
      if (lookahead == '\'') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_using);
      if (lookahead == '\'') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_called);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_called);
      if (lookahead == '\'') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 's') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == 's') ADVANCE(515);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_valueset);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_valueset);
      if (lookahead == '\'') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_context);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_context);
      if (lookahead == '\'') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_define);
      if (lookahead == '\'') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_function);
      if (lookahead == '\'') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_external);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_version);
      if (lookahead == '\'') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == '\'') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'a') ADVANCE(369);
      if (lookahead == 'o') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'a') ADVANCE(453);
      if (lookahead == 'e') ADVANCE(348);
      if (lookahead == 'i') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'a') ADVANCE(418);
      if (lookahead == 'r') ADVANCE(330);
      if (lookahead == 'u') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'a') ADVANCE(377);
      if (lookahead == 'e') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'a') ADVANCE(460);
      if (lookahead == 'i') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'a') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'a') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'a') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'a') ADVANCE(362);
      if (lookahead == 'e') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'a') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'a') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'a') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'b') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'b') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'c') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'c') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'c') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'c') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'c') ADVANCE(370);
      if (lookahead == 't') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'c') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'c') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'c') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'c') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'c') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'c') ADVANCE(345);
      if (lookahead == 't') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'c') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'd') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'd') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'd') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'd') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'd') ADVANCE(318);
      if (lookahead == 'n') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'd') ADVANCE(319);
      if (lookahead == 'n') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'd') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'd') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'd') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'd') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(327);
      if (lookahead == 'o') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(313);
      if (lookahead == 'i') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'f') ADVANCE(285);
      if (lookahead == 's') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'f') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'f') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'g') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'g') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'g') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'g') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'h') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'h') ADVANCE(336);
      if (lookahead == 'i') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'l') ADVANCE(459);
      if (lookahead == 'u') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'l') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'l') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'l') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'l') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'l') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'l') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'l') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'l') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'l') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'm') ADVANCE(406);
      if (lookahead == 'n') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'm') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'm') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'm') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'n') ADVANCE(307);
      if (lookahead == 'x') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'n') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'n') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'n') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'n') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'n') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'n') ADVANCE(360);
      if (lookahead == 's') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'n') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'n') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'n') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'n') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'n') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'n') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'n') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'n') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'n') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'o') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'o') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'o') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'o') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'o') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'o') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'o') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'o') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'p') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'p') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'p') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'p') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'p') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'p') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'r') ADVANCE(280);
      if (lookahead == 'v') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'r') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'r') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'r') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'r') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'r') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'r') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'r') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'r') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'r') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'r') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'r') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'r') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 's') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 's') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 's') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 's') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 's') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 's') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 's') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 's') ADVANCE(407);
      if (lookahead == 'v') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 's') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 's') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 's') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 's') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 's') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 's') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 's') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 't') ADVANCE(288);
      if (lookahead == 'u') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 't') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 't') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 't') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 't') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 't') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 't') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 't') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 't') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 't') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 't') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 't') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 't') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 't') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 't') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 't') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 't') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 't') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'u') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'u') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'u') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'u') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'u') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'v') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'x') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'y') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'y') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'y') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'y') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_Code);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_Code);
      if (lookahead == '\'') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_Concept);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_Concept);
      if (lookahead == '\'') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_date);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_date);
      if (lookahead == '\'') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_time);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'z') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(469);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_time);
      if (lookahead == 'z') ADVANCE(164);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_asc);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_asc);
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_ascending);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_ascending);
      if (lookahead == '\'') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_by);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_by);
      if (lookahead == '\'') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_code);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 's') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_code);
      if (lookahead == 's') ADVANCE(242);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_codesystem);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 's') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_codesystem);
      if (lookahead == 's') ADVANCE(489);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_codesystems);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_codesystems);
      if (lookahead == '\'') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_concept);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_concept);
      if (lookahead == '\'') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_contains);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_contains);
      if (lookahead == '\'') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '\'') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_desc);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_desc);
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_descending);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_descending);
      if (lookahead == '\'') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_display);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_display);
      if (lookahead == '\'') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_div);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_div);
      if (lookahead == '\'') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 's') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == 's') ADVANCE(507);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_ends);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_ends);
      if (lookahead == '\'') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_except);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_except);
      if (lookahead == '\'') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_fluent);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_fluent);
      if (lookahead == '\'') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_implies);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_implies);
      if (lookahead == '\'') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_includes);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_includes);
      if (lookahead == '\'') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_intersect);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_intersect);
      if (lookahead == '\'') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_meets);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_meets);
      if (lookahead == '\'') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_mod);
      if (lookahead == '\'') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_orafter);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_orbefore);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_orless);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_ormore);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_overlaps);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_overlaps);
      if (lookahead == '\'') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_parameter);
      if (lookahead == '\'') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_predecessor);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_predecessor);
      if (lookahead == '\'') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_private);
      if (lookahead == '\'') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_public);
      if (lookahead == '\'') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_start);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(387);
      if (lookahead == 's') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_start);
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead == 's') ADVANCE(541);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_starting);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_starting);
      if (lookahead == '\'') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_starts);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_starts);
      if (lookahead == '\'') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_successor);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_successor);
      if (lookahead == '\'') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_timezone);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == 'o') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_timezone);
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_timezoneoffset);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_timezoneoffset);
      if (lookahead == '\'') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_union);
      if (lookahead == '\'') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_width);
      if (lookahead == '\'') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_xor);
      if (lookahead == '\'') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_single_quote_string_fragment);
      if (lookahead == '\n') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(558);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_single_quote_string_fragment);
      if (lookahead == '*') ADVANCE(561);
      if (lookahead == '/') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(563);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_single_quote_string_fragment);
      if (lookahead == '*') ADVANCE(560);
      if (lookahead == '/') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(561);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_single_quote_string_fragment);
      if (lookahead == '*') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(561);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_single_quote_string_fragment);
      if (lookahead == '/') ADVANCE(559);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(563);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_single_quote_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(563);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '\n') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(564);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '*') ADVANCE(567);
      if (lookahead == '/') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(569);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '*') ADVANCE(566);
      if (lookahead == '/') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(567);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '*') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(567);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '/') ADVANCE(565);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(569);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(569);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(570);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(571);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(574);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 250},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 250},
  [11] = {.lex_state = 250},
  [12] = {.lex_state = 250},
  [13] = {.lex_state = 250},
  [14] = {.lex_state = 250},
  [15] = {.lex_state = 250},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 250},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 250},
  [20] = {.lex_state = 250},
  [21] = {.lex_state = 250},
  [22] = {.lex_state = 250},
  [23] = {.lex_state = 250},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 250},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 250},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 250},
  [31] = {.lex_state = 250},
  [32] = {.lex_state = 250},
  [33] = {.lex_state = 250},
  [34] = {.lex_state = 250},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 250},
  [37] = {.lex_state = 250},
  [38] = {.lex_state = 250},
  [39] = {.lex_state = 250},
  [40] = {.lex_state = 250},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 250},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_library] = ACTIONS(1),
    [anon_sym_using] = ACTIONS(1),
    [anon_sym_called] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_valueset] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_context] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_define] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_external] = ACTIONS(1),
    [aux_sym_literal_token1] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_version] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_Code] = ACTIONS(1),
    [anon_sym_Concept] = ACTIONS(1),
    [anon_sym_date] = ACTIONS(1),
    [anon_sym_time] = ACTIONS(1),
    [anon_sym_asc] = ACTIONS(1),
    [anon_sym_ascending] = ACTIONS(1),
    [anon_sym_by] = ACTIONS(1),
    [anon_sym_code] = ACTIONS(1),
    [anon_sym_codesystem] = ACTIONS(1),
    [anon_sym_codesystems] = ACTIONS(1),
    [anon_sym_concept] = ACTIONS(1),
    [anon_sym_contains] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_desc] = ACTIONS(1),
    [anon_sym_descending] = ACTIONS(1),
    [anon_sym_display] = ACTIONS(1),
    [anon_sym_div] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_ends] = ACTIONS(1),
    [anon_sym_except] = ACTIONS(1),
    [anon_sym_fluent] = ACTIONS(1),
    [anon_sym_implies] = ACTIONS(1),
    [anon_sym_includes] = ACTIONS(1),
    [anon_sym_intersect] = ACTIONS(1),
    [anon_sym_meets] = ACTIONS(1),
    [anon_sym_mod] = ACTIONS(1),
    [anon_sym_orafter] = ACTIONS(1),
    [anon_sym_orbefore] = ACTIONS(1),
    [anon_sym_orless] = ACTIONS(1),
    [anon_sym_ormore] = ACTIONS(1),
    [anon_sym_overlaps] = ACTIONS(1),
    [anon_sym_parameter] = ACTIONS(1),
    [anon_sym_predecessor] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_start] = ACTIONS(1),
    [anon_sym_starting] = ACTIONS(1),
    [anon_sym_starts] = ACTIONS(1),
    [anon_sym_successor] = ACTIONS(1),
    [anon_sym_timezone] = ACTIONS(1),
    [anon_sym_timezoneoffset] = ACTIONS(1),
    [anon_sym_union] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
    [anon_sym_width] = ACTIONS(1),
    [anon_sym_xor] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_cql_library] = STATE(97),
    [sym_definition] = STATE(11),
    [sym_library_definition] = STATE(10),
    [sym_using_definition] = STATE(36),
    [sym_include_definition] = STATE(36),
    [sym_valueset_definition] = STATE(36),
    [sym_statement] = STATE(29),
    [sym_context_definition] = STATE(67),
    [sym_function_definition] = STATE(67),
    [sym_expression_definition] = STATE(67),
    [aux_sym_cql_library_repeat1] = STATE(11),
    [aux_sym_cql_library_repeat2] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_library] = ACTIONS(7),
    [anon_sym_using] = ACTIONS(9),
    [anon_sym_include] = ACTIONS(11),
    [anon_sym_valueset] = ACTIONS(13),
    [anon_sym_context] = ACTIONS(15),
    [anon_sym_define] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_named_type_specifier] = STATE(85),
    [sym_identifier] = STATE(74),
    [sym_quoted_identifier] = STATE(15),
    [sym_referential_identifier] = STATE(83),
    [sym_type_name_identifier] = STATE(83),
    [sym_referential_or_type_name_identifier] = STATE(81),
    [sym_keyword_identifier] = STATE(63),
    [aux_sym_named_type_specifier_repeat1] = STATE(3),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_Code] = ACTIONS(25),
    [anon_sym_Concept] = ACTIONS(25),
    [anon_sym_date] = ACTIONS(27),
    [anon_sym_time] = ACTIONS(27),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
    [anon_sym_contains] = ACTIONS(19),
    [anon_sym_default] = ACTIONS(19),
    [anon_sym_desc] = ACTIONS(19),
    [anon_sym_descending] = ACTIONS(19),
    [anon_sym_display] = ACTIONS(19),
    [anon_sym_div] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_except] = ACTIONS(19),
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_implies] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_intersect] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orafter] = ACTIONS(29),
    [anon_sym_orbefore] = ACTIONS(29),
    [anon_sym_orless] = ACTIONS(29),
    [anon_sym_ormore] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_union] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_xor] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_identifier] = STATE(74),
    [sym_quoted_identifier] = STATE(15),
    [sym_referential_identifier] = STATE(83),
    [sym_type_name_identifier] = STATE(83),
    [sym_referential_or_type_name_identifier] = STATE(84),
    [sym_keyword_identifier] = STATE(63),
    [aux_sym_named_type_specifier_repeat1] = STATE(5),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_Code] = ACTIONS(25),
    [anon_sym_Concept] = ACTIONS(25),
    [anon_sym_date] = ACTIONS(27),
    [anon_sym_time] = ACTIONS(27),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
    [anon_sym_contains] = ACTIONS(19),
    [anon_sym_default] = ACTIONS(19),
    [anon_sym_desc] = ACTIONS(19),
    [anon_sym_descending] = ACTIONS(19),
    [anon_sym_display] = ACTIONS(19),
    [anon_sym_div] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_except] = ACTIONS(19),
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_implies] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_intersect] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orafter] = ACTIONS(29),
    [anon_sym_orbefore] = ACTIONS(29),
    [anon_sym_orless] = ACTIONS(29),
    [anon_sym_ormore] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_union] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_xor] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_qualified_identifier_expression] = STATE(89),
    [sym_terminology] = STATE(88),
    [sym_identifier] = STATE(63),
    [sym_quoted_identifier] = STATE(15),
    [sym_referential_identifier] = STATE(87),
    [sym_keyword_identifier] = STATE(63),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(7),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_date] = ACTIONS(19),
    [anon_sym_time] = ACTIONS(19),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
    [anon_sym_contains] = ACTIONS(19),
    [anon_sym_default] = ACTIONS(19),
    [anon_sym_desc] = ACTIONS(19),
    [anon_sym_descending] = ACTIONS(19),
    [anon_sym_display] = ACTIONS(19),
    [anon_sym_div] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_except] = ACTIONS(19),
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_implies] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_intersect] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orafter] = ACTIONS(29),
    [anon_sym_orbefore] = ACTIONS(29),
    [anon_sym_orless] = ACTIONS(29),
    [anon_sym_ormore] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_union] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_xor] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_identifier] = STATE(98),
    [sym_quoted_identifier] = STATE(15),
    [aux_sym_named_type_specifier_repeat1] = STATE(5),
    [anon_sym_library] = ACTIONS(31),
    [anon_sym_using] = ACTIONS(31),
    [anon_sym_called] = ACTIONS(31),
    [anon_sym_include] = ACTIONS(31),
    [anon_sym_valueset] = ACTIONS(31),
    [anon_sym_context] = ACTIONS(31),
    [anon_sym_define] = ACTIONS(31),
    [anon_sym_function] = ACTIONS(31),
    [anon_sym_version] = ACTIONS(31),
    [sym_default_identifier] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(36),
    [anon_sym_Code] = ACTIONS(31),
    [anon_sym_Concept] = ACTIONS(31),
    [anon_sym_date] = ACTIONS(31),
    [anon_sym_time] = ACTIONS(31),
    [anon_sym_asc] = ACTIONS(31),
    [anon_sym_ascending] = ACTIONS(31),
    [anon_sym_by] = ACTIONS(31),
    [anon_sym_code] = ACTIONS(31),
    [anon_sym_codesystem] = ACTIONS(31),
    [anon_sym_codesystems] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(31),
    [anon_sym_contains] = ACTIONS(31),
    [anon_sym_default] = ACTIONS(31),
    [anon_sym_desc] = ACTIONS(31),
    [anon_sym_descending] = ACTIONS(31),
    [anon_sym_display] = ACTIONS(31),
    [anon_sym_div] = ACTIONS(31),
    [anon_sym_end] = ACTIONS(31),
    [anon_sym_ends] = ACTIONS(31),
    [anon_sym_except] = ACTIONS(31),
    [anon_sym_fluent] = ACTIONS(31),
    [anon_sym_implies] = ACTIONS(31),
    [anon_sym_includes] = ACTIONS(31),
    [anon_sym_intersect] = ACTIONS(31),
    [anon_sym_meets] = ACTIONS(31),
    [anon_sym_mod] = ACTIONS(31),
    [anon_sym_orafter] = ACTIONS(39),
    [anon_sym_orbefore] = ACTIONS(39),
    [anon_sym_orless] = ACTIONS(39),
    [anon_sym_ormore] = ACTIONS(39),
    [anon_sym_overlaps] = ACTIONS(31),
    [anon_sym_parameter] = ACTIONS(31),
    [anon_sym_predecessor] = ACTIONS(31),
    [anon_sym_private] = ACTIONS(31),
    [anon_sym_public] = ACTIONS(31),
    [anon_sym_start] = ACTIONS(31),
    [anon_sym_starting] = ACTIONS(31),
    [anon_sym_starts] = ACTIONS(31),
    [anon_sym_successor] = ACTIONS(31),
    [anon_sym_timezone] = ACTIONS(31),
    [anon_sym_timezoneoffset] = ACTIONS(31),
    [anon_sym_union] = ACTIONS(31),
    [anon_sym_where] = ACTIONS(31),
    [anon_sym_width] = ACTIONS(31),
    [anon_sym_xor] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_identifier] = STATE(63),
    [sym_quoted_identifier] = STATE(15),
    [sym_referential_identifier] = STATE(95),
    [sym_keyword_identifier] = STATE(63),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(6),
    [anon_sym_library] = ACTIONS(41),
    [anon_sym_using] = ACTIONS(41),
    [anon_sym_called] = ACTIONS(41),
    [anon_sym_include] = ACTIONS(41),
    [anon_sym_valueset] = ACTIONS(41),
    [anon_sym_context] = ACTIONS(41),
    [anon_sym_define] = ACTIONS(41),
    [anon_sym_function] = ACTIONS(41),
    [anon_sym_version] = ACTIONS(41),
    [sym_default_identifier] = ACTIONS(44),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_date] = ACTIONS(41),
    [anon_sym_time] = ACTIONS(41),
    [anon_sym_asc] = ACTIONS(41),
    [anon_sym_ascending] = ACTIONS(41),
    [anon_sym_by] = ACTIONS(41),
    [anon_sym_code] = ACTIONS(41),
    [anon_sym_codesystem] = ACTIONS(41),
    [anon_sym_codesystems] = ACTIONS(41),
    [anon_sym_concept] = ACTIONS(41),
    [anon_sym_contains] = ACTIONS(41),
    [anon_sym_default] = ACTIONS(41),
    [anon_sym_desc] = ACTIONS(41),
    [anon_sym_descending] = ACTIONS(41),
    [anon_sym_display] = ACTIONS(41),
    [anon_sym_div] = ACTIONS(41),
    [anon_sym_end] = ACTIONS(41),
    [anon_sym_ends] = ACTIONS(41),
    [anon_sym_except] = ACTIONS(41),
    [anon_sym_fluent] = ACTIONS(41),
    [anon_sym_implies] = ACTIONS(41),
    [anon_sym_includes] = ACTIONS(41),
    [anon_sym_intersect] = ACTIONS(41),
    [anon_sym_meets] = ACTIONS(41),
    [anon_sym_mod] = ACTIONS(41),
    [anon_sym_orafter] = ACTIONS(50),
    [anon_sym_orbefore] = ACTIONS(50),
    [anon_sym_orless] = ACTIONS(50),
    [anon_sym_ormore] = ACTIONS(50),
    [anon_sym_overlaps] = ACTIONS(41),
    [anon_sym_parameter] = ACTIONS(41),
    [anon_sym_predecessor] = ACTIONS(41),
    [anon_sym_private] = ACTIONS(41),
    [anon_sym_public] = ACTIONS(41),
    [anon_sym_start] = ACTIONS(41),
    [anon_sym_starting] = ACTIONS(41),
    [anon_sym_starts] = ACTIONS(41),
    [anon_sym_successor] = ACTIONS(41),
    [anon_sym_timezone] = ACTIONS(41),
    [anon_sym_timezoneoffset] = ACTIONS(41),
    [anon_sym_union] = ACTIONS(41),
    [anon_sym_where] = ACTIONS(41),
    [anon_sym_width] = ACTIONS(41),
    [anon_sym_xor] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_identifier] = STATE(63),
    [sym_quoted_identifier] = STATE(15),
    [sym_referential_identifier] = STATE(78),
    [sym_keyword_identifier] = STATE(63),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(6),
    [anon_sym_library] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(19),
    [anon_sym_called] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_valueset] = ACTIONS(19),
    [anon_sym_context] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_version] = ACTIONS(19),
    [sym_default_identifier] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_date] = ACTIONS(19),
    [anon_sym_time] = ACTIONS(19),
    [anon_sym_asc] = ACTIONS(19),
    [anon_sym_ascending] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_code] = ACTIONS(19),
    [anon_sym_codesystem] = ACTIONS(19),
    [anon_sym_codesystems] = ACTIONS(19),
    [anon_sym_concept] = ACTIONS(19),
    [anon_sym_contains] = ACTIONS(19),
    [anon_sym_default] = ACTIONS(19),
    [anon_sym_desc] = ACTIONS(19),
    [anon_sym_descending] = ACTIONS(19),
    [anon_sym_display] = ACTIONS(19),
    [anon_sym_div] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_ends] = ACTIONS(19),
    [anon_sym_except] = ACTIONS(19),
    [anon_sym_fluent] = ACTIONS(19),
    [anon_sym_implies] = ACTIONS(19),
    [anon_sym_includes] = ACTIONS(19),
    [anon_sym_intersect] = ACTIONS(19),
    [anon_sym_meets] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(19),
    [anon_sym_orafter] = ACTIONS(29),
    [anon_sym_orbefore] = ACTIONS(29),
    [anon_sym_orless] = ACTIONS(29),
    [anon_sym_ormore] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(19),
    [anon_sym_predecessor] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_public] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_starting] = ACTIONS(19),
    [anon_sym_starts] = ACTIONS(19),
    [anon_sym_successor] = ACTIONS(19),
    [anon_sym_timezone] = ACTIONS(19),
    [anon_sym_timezoneoffset] = ACTIONS(19),
    [anon_sym_union] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_width] = ACTIONS(19),
    [anon_sym_xor] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [anon_sym_library] = ACTIONS(53),
    [anon_sym_using] = ACTIONS(53),
    [anon_sym_called] = ACTIONS(53),
    [anon_sym_include] = ACTIONS(53),
    [anon_sym_valueset] = ACTIONS(53),
    [anon_sym_context] = ACTIONS(53),
    [anon_sym_define] = ACTIONS(53),
    [anon_sym_function] = ACTIONS(53),
    [anon_sym_version] = ACTIONS(53),
    [sym_default_identifier] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_Code] = ACTIONS(53),
    [anon_sym_Concept] = ACTIONS(53),
    [anon_sym_date] = ACTIONS(53),
    [anon_sym_time] = ACTIONS(53),
    [anon_sym_asc] = ACTIONS(53),
    [anon_sym_ascending] = ACTIONS(53),
    [anon_sym_by] = ACTIONS(53),
    [anon_sym_code] = ACTIONS(53),
    [anon_sym_codesystem] = ACTIONS(53),
    [anon_sym_codesystems] = ACTIONS(53),
    [anon_sym_concept] = ACTIONS(53),
    [anon_sym_contains] = ACTIONS(53),
    [anon_sym_default] = ACTIONS(53),
    [anon_sym_desc] = ACTIONS(53),
    [anon_sym_descending] = ACTIONS(53),
    [anon_sym_display] = ACTIONS(53),
    [anon_sym_div] = ACTIONS(53),
    [anon_sym_end] = ACTIONS(53),
    [anon_sym_ends] = ACTIONS(53),
    [anon_sym_except] = ACTIONS(53),
    [anon_sym_fluent] = ACTIONS(53),
    [anon_sym_implies] = ACTIONS(53),
    [anon_sym_includes] = ACTIONS(53),
    [anon_sym_intersect] = ACTIONS(53),
    [anon_sym_meets] = ACTIONS(53),
    [anon_sym_mod] = ACTIONS(53),
    [anon_sym_orafter] = ACTIONS(55),
    [anon_sym_orbefore] = ACTIONS(55),
    [anon_sym_orless] = ACTIONS(55),
    [anon_sym_ormore] = ACTIONS(55),
    [anon_sym_overlaps] = ACTIONS(53),
    [anon_sym_parameter] = ACTIONS(53),
    [anon_sym_predecessor] = ACTIONS(53),
    [anon_sym_private] = ACTIONS(53),
    [anon_sym_public] = ACTIONS(53),
    [anon_sym_start] = ACTIONS(53),
    [anon_sym_starting] = ACTIONS(53),
    [anon_sym_starts] = ACTIONS(53),
    [anon_sym_successor] = ACTIONS(53),
    [anon_sym_timezone] = ACTIONS(53),
    [anon_sym_timezoneoffset] = ACTIONS(53),
    [anon_sym_union] = ACTIONS(53),
    [anon_sym_where] = ACTIONS(53),
    [anon_sym_width] = ACTIONS(53),
    [anon_sym_xor] = ACTIONS(53),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [anon_sym_library] = ACTIONS(57),
    [anon_sym_using] = ACTIONS(57),
    [anon_sym_called] = ACTIONS(57),
    [anon_sym_include] = ACTIONS(57),
    [anon_sym_valueset] = ACTIONS(57),
    [anon_sym_context] = ACTIONS(57),
    [anon_sym_define] = ACTIONS(57),
    [anon_sym_function] = ACTIONS(57),
    [anon_sym_version] = ACTIONS(57),
    [sym_default_identifier] = ACTIONS(57),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [anon_sym_date] = ACTIONS(57),
    [anon_sym_time] = ACTIONS(57),
    [anon_sym_asc] = ACTIONS(57),
    [anon_sym_ascending] = ACTIONS(57),
    [anon_sym_by] = ACTIONS(57),
    [anon_sym_code] = ACTIONS(57),
    [anon_sym_codesystem] = ACTIONS(57),
    [anon_sym_codesystems] = ACTIONS(57),
    [anon_sym_concept] = ACTIONS(57),
    [anon_sym_contains] = ACTIONS(57),
    [anon_sym_default] = ACTIONS(57),
    [anon_sym_desc] = ACTIONS(57),
    [anon_sym_descending] = ACTIONS(57),
    [anon_sym_display] = ACTIONS(57),
    [anon_sym_div] = ACTIONS(57),
    [anon_sym_end] = ACTIONS(57),
    [anon_sym_ends] = ACTIONS(57),
    [anon_sym_except] = ACTIONS(57),
    [anon_sym_fluent] = ACTIONS(57),
    [anon_sym_implies] = ACTIONS(57),
    [anon_sym_includes] = ACTIONS(57),
    [anon_sym_intersect] = ACTIONS(57),
    [anon_sym_meets] = ACTIONS(57),
    [anon_sym_mod] = ACTIONS(57),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_overlaps] = ACTIONS(57),
    [anon_sym_parameter] = ACTIONS(57),
    [anon_sym_predecessor] = ACTIONS(57),
    [anon_sym_private] = ACTIONS(57),
    [anon_sym_public] = ACTIONS(57),
    [anon_sym_start] = ACTIONS(57),
    [anon_sym_starting] = ACTIONS(57),
    [anon_sym_starts] = ACTIONS(57),
    [anon_sym_successor] = ACTIONS(57),
    [anon_sym_timezone] = ACTIONS(57),
    [anon_sym_timezoneoffset] = ACTIONS(57),
    [anon_sym_union] = ACTIONS(57),
    [anon_sym_where] = ACTIONS(57),
    [anon_sym_width] = ACTIONS(57),
    [anon_sym_xor] = ACTIONS(57),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_using,
    ACTIONS(11), 1,
      anon_sym_include,
    ACTIONS(13), 1,
      anon_sym_valueset,
    ACTIONS(15), 1,
      anon_sym_context,
    ACTIONS(17), 1,
      anon_sym_define,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    STATE(12), 2,
      sym_definition,
      aux_sym_cql_library_repeat1,
    STATE(25), 2,
      sym_statement,
      aux_sym_cql_library_repeat2,
    STATE(36), 3,
      sym_using_definition,
      sym_include_definition,
      sym_valueset_definition,
    STATE(67), 3,
      sym_context_definition,
      sym_function_definition,
      sym_expression_definition,
  [40] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_using,
    ACTIONS(11), 1,
      anon_sym_include,
    ACTIONS(13), 1,
      anon_sym_valueset,
    ACTIONS(15), 1,
      anon_sym_context,
    ACTIONS(17), 1,
      anon_sym_define,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    STATE(17), 2,
      sym_definition,
      aux_sym_cql_library_repeat1,
    STATE(25), 2,
      sym_statement,
      aux_sym_cql_library_repeat2,
    STATE(36), 3,
      sym_using_definition,
      sym_include_definition,
      sym_valueset_definition,
    STATE(67), 3,
      sym_context_definition,
      sym_function_definition,
      sym_expression_definition,
  [80] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_using,
    ACTIONS(11), 1,
      anon_sym_include,
    ACTIONS(13), 1,
      anon_sym_valueset,
    ACTIONS(15), 1,
      anon_sym_context,
    ACTIONS(17), 1,
      anon_sym_define,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    STATE(17), 2,
      sym_definition,
      aux_sym_cql_library_repeat1,
    STATE(24), 2,
      sym_statement,
      aux_sym_cql_library_repeat2,
    STATE(36), 3,
      sym_using_definition,
      sym_include_definition,
      sym_valueset_definition,
    STATE(67), 3,
      sym_context_definition,
      sym_function_definition,
      sym_expression_definition,
  [120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 12,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_COLON,
      anon_sym_context,
      anon_sym_DOT,
      anon_sym_define,
      anon_sym_LPAREN,
      anon_sym_RBRACK,
      anon_sym_version,
  [138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 12,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_COLON,
      anon_sym_context,
      anon_sym_DOT,
      anon_sym_define,
      anon_sym_LPAREN,
      anon_sym_RBRACK,
      anon_sym_version,
  [156] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 12,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_COLON,
      anon_sym_context,
      anon_sym_DOT,
      anon_sym_define,
      anon_sym_LPAREN,
      anon_sym_RBRACK,
      anon_sym_version,
  [174] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_external,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_SQUOTE,
    STATE(62), 1,
      sym_expression,
    STATE(64), 1,
      sym_term,
    STATE(65), 1,
      sym_literal,
    STATE(66), 1,
      sym_string,
    ACTIONS(73), 2,
      aux_sym_literal_token1,
      anon_sym_null,
    STATE(72), 2,
      sym_expression_term,
      sym_retrieve,
  [207] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_using,
    ACTIONS(84), 1,
      anon_sym_include,
    ACTIONS(87), 1,
      anon_sym_valueset,
    STATE(17), 2,
      sym_definition,
      aux_sym_cql_library_repeat1,
    ACTIONS(79), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
    STATE(36), 3,
      sym_using_definition,
      sym_include_definition,
      sym_valueset_definition,
  [234] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_SQUOTE,
    STATE(64), 1,
      sym_term,
    STATE(65), 1,
      sym_literal,
    STATE(66), 1,
      sym_string,
    STATE(76), 1,
      sym_expression,
    ACTIONS(73), 2,
      aux_sym_literal_token1,
      anon_sym_null,
    STATE(72), 2,
      sym_expression_term,
      sym_retrieve,
  [264] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_DOT,
    ACTIONS(90), 9,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_COLON,
      anon_sym_context,
      anon_sym_define,
      anon_sym_version,
  [282] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_DOT,
    ACTIONS(94), 9,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_COLON,
      anon_sym_context,
      anon_sym_define,
      anon_sym_version,
  [300] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_called,
    ACTIONS(100), 1,
      anon_sym_version,
    STATE(33), 1,
      sym_version_specifier,
    ACTIONS(96), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [321] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_version,
    ACTIONS(104), 1,
      anon_sym_called,
    STATE(32), 1,
      sym_version_specifier,
    ACTIONS(102), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 8,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
      anon_sym_version,
  [356] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_context,
    ACTIONS(17), 1,
      anon_sym_define,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
    STATE(27), 2,
      sym_statement,
      aux_sym_cql_library_repeat2,
    STATE(67), 3,
      sym_context_definition,
      sym_function_definition,
      sym_expression_definition,
  [378] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_context,
    ACTIONS(17), 1,
      anon_sym_define,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    STATE(27), 2,
      sym_statement,
      aux_sym_cql_library_repeat2,
    STATE(67), 3,
      sym_context_definition,
      sym_function_definition,
      sym_expression_definition,
  [400] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_version,
    STATE(39), 1,
      sym_version_specifier,
    ACTIONS(110), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [418] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
    ACTIONS(114), 1,
      anon_sym_context,
    ACTIONS(117), 1,
      anon_sym_define,
    STATE(27), 2,
      sym_statement,
      aux_sym_cql_library_repeat2,
    STATE(67), 3,
      sym_context_definition,
      sym_function_definition,
      sym_expression_definition,
  [440] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_version,
    STATE(37), 1,
      sym_version_specifier,
    ACTIONS(120), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [458] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_context,
    ACTIONS(17), 1,
      anon_sym_define,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    STATE(27), 2,
      sym_statement,
      aux_sym_cql_library_repeat2,
    STATE(67), 3,
      sym_context_definition,
      sym_function_definition,
      sym_expression_definition,
  [480] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 8,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
      anon_sym_version,
  [494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 7,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [507] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_called,
    ACTIONS(126), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [522] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_called,
    ACTIONS(130), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [549] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(136), 1,
      sym_default_identifier,
    STATE(15), 1,
      sym_quoted_identifier,
    STATE(20), 1,
      sym_identifier,
    STATE(28), 1,
      sym_qualified_identifier,
    STATE(47), 1,
      aux_sym_named_type_specifier_repeat1,
  [571] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [583] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [607] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [619] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [631] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(136), 1,
      sym_default_identifier,
    STATE(15), 1,
      sym_quoted_identifier,
    STATE(20), 1,
      sym_identifier,
    STATE(47), 1,
      aux_sym_named_type_specifier_repeat1,
    STATE(92), 1,
      sym_qualified_identifier,
  [653] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(136), 1,
      sym_default_identifier,
    STATE(15), 1,
      sym_quoted_identifier,
    STATE(20), 1,
      sym_identifier,
    STATE(22), 1,
      sym_qualified_identifier,
    STATE(47), 1,
      aux_sym_named_type_specifier_repeat1,
  [675] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_context,
      anon_sym_define,
  [687] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(136), 1,
      sym_default_identifier,
    STATE(15), 1,
      sym_quoted_identifier,
    STATE(20), 1,
      sym_identifier,
    STATE(21), 1,
      sym_qualified_identifier,
    STATE(47), 1,
      aux_sym_named_type_specifier_repeat1,
  [709] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      sym_default_identifier,
    STATE(15), 1,
      sym_quoted_identifier,
    STATE(45), 1,
      aux_sym_named_type_specifier_repeat1,
    STATE(96), 1,
      sym_identifier,
  [728] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_default_identifier,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_function,
    STATE(15), 1,
      sym_quoted_identifier,
    STATE(93), 1,
      sym_identifier,
  [747] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(136), 1,
      sym_default_identifier,
    STATE(15), 1,
      sym_quoted_identifier,
    STATE(19), 1,
      sym_identifier,
    STATE(45), 1,
      aux_sym_named_type_specifier_repeat1,
  [766] = 4,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(159), 1,
      sym_comment,
    STATE(49), 1,
      aux_sym_string_repeat1,
    ACTIONS(157), 2,
      sym_single_quote_string_fragment,
      sym_escape_sequence,
  [780] = 4,
    ACTIONS(159), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_SQUOTE,
    STATE(57), 1,
      aux_sym_string_repeat1,
    ACTIONS(163), 2,
      sym_single_quote_string_fragment,
      sym_escape_sequence,
  [794] = 4,
    ACTIONS(159), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    STATE(59), 1,
      aux_sym_quoted_identifier_repeat1,
    ACTIONS(167), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [808] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(136), 1,
      sym_default_identifier,
    STATE(15), 1,
      sym_quoted_identifier,
    STATE(34), 1,
      sym_identifier,
  [824] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(136), 1,
      sym_default_identifier,
    STATE(15), 1,
      sym_quoted_identifier,
    STATE(54), 1,
      sym_identifier,
  [840] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(136), 1,
      sym_default_identifier,
    STATE(15), 1,
      sym_quoted_identifier,
    STATE(38), 1,
      sym_identifier,
  [856] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_DOT,
    ACTIONS(169), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
  [868] = 4,
    ACTIONS(159), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    STATE(55), 1,
      aux_sym_quoted_identifier_repeat1,
    ACTIONS(175), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [882] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(136), 1,
      sym_default_identifier,
    STATE(15), 1,
      sym_quoted_identifier,
    STATE(94), 1,
      sym_identifier,
  [898] = 4,
    ACTIONS(159), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_SQUOTE,
    STATE(57), 1,
      aux_sym_string_repeat1,
    ACTIONS(180), 2,
      sym_single_quote_string_fragment,
      sym_escape_sequence,
  [912] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(136), 1,
      sym_default_identifier,
    STATE(15), 1,
      sym_quoted_identifier,
    STATE(69), 1,
      sym_identifier,
  [928] = 4,
    ACTIONS(159), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
    STATE(55), 1,
      aux_sym_quoted_identifier_repeat1,
    ACTIONS(185), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [942] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(136), 1,
      sym_default_identifier,
    STATE(15), 1,
      sym_quoted_identifier,
    STATE(40), 1,
      sym_identifier,
  [958] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(136), 1,
      sym_default_identifier,
    STATE(15), 1,
      sym_quoted_identifier,
    STATE(43), 1,
      sym_identifier,
  [974] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
  [983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 3,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
  [1001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
  [1010] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
  [1019] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
  [1028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
  [1037] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
  [1046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 3,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [1055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
  [1064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
  [1073] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
  [1082] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_DOT,
    ACTIONS(189), 2,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [1093] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
  [1102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
  [1111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 2,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [1119] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_DOT,
    ACTIONS(221), 1,
      anon_sym_RBRACK,
  [1129] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 2,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [1137] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_SQUOTE,
    STATE(31), 1,
      sym_string,
  [1147] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 2,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [1155] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_SQUOTE,
    STATE(26), 1,
      sym_string,
  [1165] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 2,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [1173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 2,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [1181] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_COLON,
    ACTIONS(231), 1,
      anon_sym_RBRACK,
  [1191] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 2,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [1199] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_DOT,
    ACTIONS(233), 1,
      anon_sym_RBRACK,
  [1209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_RBRACK,
  [1216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_RBRACK,
  [1223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_RPAREN,
  [1230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_COLON,
  [1237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_COLON,
  [1244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_COLON,
  [1251] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
  [1258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_DOT,
  [1265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_DOT,
  [1272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      ts_builtin_sym_end,
  [1279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_DOT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(10)] = 0,
  [SMALL_STATE(11)] = 40,
  [SMALL_STATE(12)] = 80,
  [SMALL_STATE(13)] = 120,
  [SMALL_STATE(14)] = 138,
  [SMALL_STATE(15)] = 156,
  [SMALL_STATE(16)] = 174,
  [SMALL_STATE(17)] = 207,
  [SMALL_STATE(18)] = 234,
  [SMALL_STATE(19)] = 264,
  [SMALL_STATE(20)] = 282,
  [SMALL_STATE(21)] = 300,
  [SMALL_STATE(22)] = 321,
  [SMALL_STATE(23)] = 342,
  [SMALL_STATE(24)] = 356,
  [SMALL_STATE(25)] = 378,
  [SMALL_STATE(26)] = 400,
  [SMALL_STATE(27)] = 418,
  [SMALL_STATE(28)] = 440,
  [SMALL_STATE(29)] = 458,
  [SMALL_STATE(30)] = 480,
  [SMALL_STATE(31)] = 494,
  [SMALL_STATE(32)] = 507,
  [SMALL_STATE(33)] = 522,
  [SMALL_STATE(34)] = 537,
  [SMALL_STATE(35)] = 549,
  [SMALL_STATE(36)] = 571,
  [SMALL_STATE(37)] = 583,
  [SMALL_STATE(38)] = 595,
  [SMALL_STATE(39)] = 607,
  [SMALL_STATE(40)] = 619,
  [SMALL_STATE(41)] = 631,
  [SMALL_STATE(42)] = 653,
  [SMALL_STATE(43)] = 675,
  [SMALL_STATE(44)] = 687,
  [SMALL_STATE(45)] = 709,
  [SMALL_STATE(46)] = 728,
  [SMALL_STATE(47)] = 747,
  [SMALL_STATE(48)] = 766,
  [SMALL_STATE(49)] = 780,
  [SMALL_STATE(50)] = 794,
  [SMALL_STATE(51)] = 808,
  [SMALL_STATE(52)] = 824,
  [SMALL_STATE(53)] = 840,
  [SMALL_STATE(54)] = 856,
  [SMALL_STATE(55)] = 868,
  [SMALL_STATE(56)] = 882,
  [SMALL_STATE(57)] = 898,
  [SMALL_STATE(58)] = 912,
  [SMALL_STATE(59)] = 928,
  [SMALL_STATE(60)] = 942,
  [SMALL_STATE(61)] = 958,
  [SMALL_STATE(62)] = 974,
  [SMALL_STATE(63)] = 983,
  [SMALL_STATE(64)] = 992,
  [SMALL_STATE(65)] = 1001,
  [SMALL_STATE(66)] = 1010,
  [SMALL_STATE(67)] = 1019,
  [SMALL_STATE(68)] = 1028,
  [SMALL_STATE(69)] = 1037,
  [SMALL_STATE(70)] = 1046,
  [SMALL_STATE(71)] = 1055,
  [SMALL_STATE(72)] = 1064,
  [SMALL_STATE(73)] = 1073,
  [SMALL_STATE(74)] = 1082,
  [SMALL_STATE(75)] = 1093,
  [SMALL_STATE(76)] = 1102,
  [SMALL_STATE(77)] = 1111,
  [SMALL_STATE(78)] = 1119,
  [SMALL_STATE(79)] = 1129,
  [SMALL_STATE(80)] = 1137,
  [SMALL_STATE(81)] = 1147,
  [SMALL_STATE(82)] = 1155,
  [SMALL_STATE(83)] = 1165,
  [SMALL_STATE(84)] = 1173,
  [SMALL_STATE(85)] = 1181,
  [SMALL_STATE(86)] = 1191,
  [SMALL_STATE(87)] = 1199,
  [SMALL_STATE(88)] = 1209,
  [SMALL_STATE(89)] = 1216,
  [SMALL_STATE(90)] = 1223,
  [SMALL_STATE(91)] = 1230,
  [SMALL_STATE(92)] = 1237,
  [SMALL_STATE(93)] = 1244,
  [SMALL_STATE(94)] = 1251,
  [SMALL_STATE(95)] = 1258,
  [SMALL_STATE(96)] = 1265,
  [SMALL_STATE(97)] = 1272,
  [SMALL_STATE(98)] = 1279,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cql_library, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_named_type_specifier_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_named_type_specifier_repeat1, 2), SHIFT_REPEAT(15),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_type_specifier_repeat1, 2), SHIFT_REPEAT(50),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_type_specifier_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_identifier_expression_repeat1, 2), SHIFT_REPEAT(70),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_identifier_expression_repeat1, 2), SHIFT_REPEAT(15),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_identifier_expression_repeat1, 2), SHIFT_REPEAT(50),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_identifier_expression_repeat1, 2), SHIFT_REPEAT(70),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_named_type_specifier_repeat1, 2, .production_id = 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_type_specifier_repeat1, 2, .production_id = 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_qualified_identifier_expression_repeat1, 2, .production_id = 8),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qualified_identifier_expression_repeat1, 2, .production_id = 8),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cql_library, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cql_library, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_identifier, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_identifier, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat1, 2), SHIFT_REPEAT(44),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat1, 2), SHIFT_REPEAT(42),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat1, 2), SHIFT_REPEAT(41),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_definition, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_definition, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cql_library, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset_definition, 4),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat2, 2),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat2, 2), SHIFT_REPEAT(52),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat2, 2), SHIFT_REPEAT(46),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_library_definition, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_specifier, 2, .production_id = 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_definition, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_definition, 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_definition, 5, .production_id = 6),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_library_definition, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_definition, 5, .production_id = 6),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset_definition, 5),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_definition, 4, .production_id = 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_definition, 4, .production_id = 3),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_type_specifier_repeat1, 2), SHIFT_REPEAT(15),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_definition, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_identifier_repeat1, 2),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_identifier_repeat1, 2), SHIFT_REPEAT(55),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(57),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, .production_id = 7),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_referential_identifier, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_term, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, .production_id = 5),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retrieve, 5),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_definition, 4, .production_id = 4),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_identifier, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retrieve, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_definition, 4),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name_identifier, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier_expression, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_type_specifier, 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_referential_or_type_name_identifier, 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_type_specifier, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier_expression, 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_terminology, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [249] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_cql(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
