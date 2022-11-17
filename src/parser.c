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
#define STATE_COUNT 422
#define LARGE_STATE_COUNT 84
#define SYMBOL_COUNT 202
#define ALIAS_COUNT 16
#define TOKEN_COUNT 127
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 21

enum {
  anon_sym_library = 1,
  anon_sym_using = 2,
  anon_sym_called = 3,
  anon_sym_include = 4,
  anon_sym_valueset = 5,
  anon_sym_COLON = 6,
  anon_sym_codesystem = 7,
  anon_sym_code = 8,
  anon_sym_from = 9,
  anon_sym_concept = 10,
  anon_sym_LBRACE = 11,
  anon_sym_COMMA = 12,
  anon_sym_RBRACE = 13,
  anon_sym_parameter = 14,
  anon_sym_default = 15,
  anon_sym_public = 16,
  anon_sym_private = 17,
  anon_sym_context = 18,
  anon_sym_DOT = 19,
  anon_sym_define = 20,
  anon_sym_function = 21,
  anon_sym_LPAREN = 22,
  anon_sym_RPAREN = 23,
  anon_sym_external = 24,
  aux_sym_literal_token1 = 25,
  anon_sym_null = 26,
  anon_sym_is = 27,
  anon_sym_not = 28,
  anon_sym_true = 29,
  anon_sym_false = 30,
  anon_sym_as = 31,
  anon_sym_cast = 32,
  anon_sym_exists = 33,
  anon_sym_properly = 34,
  anon_sym_between = 35,
  anon_sym_and = 36,
  anon_sym_EQ = 37,
  anon_sym_BANG_EQ = 38,
  anon_sym_TILDE = 39,
  anon_sym_BANG_TILDE = 40,
  anon_sym_LT_EQ = 41,
  anon_sym_LT = 42,
  anon_sym_GT = 43,
  anon_sym_GT_EQ = 44,
  anon_sym_or = 45,
  anon_sym_xor = 46,
  anon_sym_implies = 47,
  anon_sym_PIPE = 48,
  anon_sym_union = 49,
  anon_sym_intersect = 50,
  anon_sym_except = 51,
  anon_sym_year = 52,
  anon_sym_month = 53,
  anon_sym_week = 54,
  anon_sym_day = 55,
  anon_sym_hour = 56,
  anon_sym_minute = 57,
  anon_sym_second = 58,
  anon_sym_millisecond = 59,
  anon_sym_years = 60,
  anon_sym_months = 61,
  anon_sym_weeks = 62,
  anon_sym_days = 63,
  anon_sym_hours = 64,
  anon_sym_minutes = 65,
  anon_sym_seconds = 66,
  anon_sym_milliseconds = 67,
  anon_sym_date = 68,
  anon_sym_time = 69,
  anon_sym_timezone = 70,
  anon_sym_timezoneoffset = 71,
  anon_sym_duration = 72,
  anon_sym_in = 73,
  anon_sym_difference = 74,
  anon_sym_of = 75,
  anon_sym_contains = 76,
  anon_sym_orbefore = 77,
  anon_sym_orafter = 78,
  anon_sym_ormore = 79,
  anon_sym_orless = 80,
  anon_sym_lessthan = 81,
  anon_sym_morethan = 82,
  anon_sym_onor = 83,
  anon_sym_before = 84,
  anon_sym_after = 85,
  anon_sym_oron = 86,
  anon_sym_starts = 87,
  anon_sym_ends = 88,
  anon_sym_occurs = 89,
  anon_sym_same = 90,
  anon_sym_start = 91,
  anon_sym_end = 92,
  anon_sym_includes = 93,
  anon_sym_during = 94,
  anon_sym_includedin = 95,
  anon_sym_meets = 96,
  anon_sym_overlaps = 97,
  anon_sym_within = 98,
  anon_sym_where = 99,
  anon_sym_LBRACK = 100,
  anon_sym_RBRACK = 101,
  anon_sym_version = 102,
  sym_default_identifier = 103,
  anon_sym_DQUOTE = 104,
  anon_sym_Code = 105,
  anon_sym_Concept = 106,
  anon_sym_asc = 107,
  anon_sym_ascending = 108,
  anon_sym_by = 109,
  anon_sym_codesystems = 110,
  anon_sym_desc = 111,
  anon_sym_descending = 112,
  anon_sym_display = 113,
  anon_sym_div = 114,
  anon_sym_fluent = 115,
  anon_sym_mod = 116,
  anon_sym_predecessor = 117,
  anon_sym_starting = 118,
  anon_sym_successor = 119,
  anon_sym_width = 120,
  anon_sym_SQUOTE = 121,
  sym_single_quote_string_fragment = 122,
  sym_double_quote_string_fragment = 123,
  sym_escape_sequence = 124,
  sym_number = 125,
  sym_comment = 126,
  sym_cql_library = 127,
  sym_definition = 128,
  sym_library_definition = 129,
  sym_using_definition = 130,
  sym_include_definition = 131,
  sym_valueset_definition = 132,
  sym_codesystem_definition = 133,
  sym_code_definition = 134,
  sym_concept_definition = 135,
  sym_parameter_definition = 136,
  sym_access_modifier = 137,
  sym_statement = 138,
  sym_context_definition = 139,
  sym_function_definition = 140,
  sym_expression_definition = 141,
  sym_expression = 142,
  sym_expression_term = 143,
  sym_term = 144,
  sym_quantity = 145,
  sym_literal = 146,
  sym_qualified_identifier_expression = 147,
  sym_boolean_expression = 148,
  sym_type_expression = 149,
  sym_cast_expression = 150,
  sym_not_expression = 151,
  sym_existence_expression = 152,
  sym_between_expression = 153,
  sym_equality_expression = 154,
  sym_inequality_expression = 155,
  sym_and_expression = 156,
  sym_or_expression = 157,
  sym_implies_expression = 158,
  sym_in_fix_set_expression = 159,
  sym_date_time_precision = 160,
  sym_plural_date_time_precision = 161,
  sym_duration_between_expression = 162,
  sym_difference_between_expression = 163,
  sym_date_time_precision_specifier = 164,
  sym_membership_expression = 165,
  sym_relative_qualifier = 166,
  sym_offset_relative_qualifier = 167,
  sym_exclusive_relative_qualifier = 168,
  sym_quantity_offset = 169,
  sym_temporal_relationship = 170,
  sym_interval_operator_phrase = 171,
  sym_timing_expression = 172,
  sym_query = 173,
  sym_where_clause = 174,
  sym_query_source = 175,
  sym_aliased_query_source = 176,
  sym_query_source_clause = 177,
  sym_retrieve = 178,
  sym_terminology = 179,
  sym_type_specifier = 180,
  sym_named_type_specifier = 181,
  sym_version_specifier = 182,
  sym_identifier = 183,
  sym_code_or_codesystem_identifier = 184,
  sym_qualified_identifier = 185,
  sym_quoted_identifier = 186,
  sym_referential_identifier = 187,
  sym_type_name_identifier = 188,
  sym_referential_or_type_name_identifier = 189,
  sym_keyword_identifier = 190,
  sym_string = 191,
  sym_unit = 192,
  sym_display_clause = 193,
  aux_sym_cql_library_repeat1 = 194,
  aux_sym_cql_library_repeat2 = 195,
  aux_sym_concept_definition_repeat1 = 196,
  aux_sym_qualified_identifier_expression_repeat1 = 197,
  aux_sym_query_source_clause_repeat1 = 198,
  aux_sym_named_type_specifier_repeat1 = 199,
  aux_sym_quoted_identifier_repeat1 = 200,
  aux_sym_string_repeat1 = 201,
  alias_sym_code_id = 202,
  alias_sym_code_system_id = 203,
  alias_sym_codesystem_identifier = 204,
  alias_sym_function_body = 205,
  alias_sym_library_identifier = 206,
  alias_sym_local_identifier = 207,
  alias_sym_model_identifier = 208,
  alias_sym_null_literal = 209,
  alias_sym_number_literal = 210,
  alias_sym_qualifier = 211,
  alias_sym_qualifier_expression = 212,
  alias_sym_quantity_literal = 213,
  alias_sym_query_alias = 214,
  alias_sym_string_literal = 215,
  alias_sym_valueset_id = 216,
  alias_sym_version = 217,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_library] = "library",
  [anon_sym_using] = "using",
  [anon_sym_called] = "called",
  [anon_sym_include] = "include",
  [anon_sym_valueset] = "valueset",
  [anon_sym_COLON] = ":",
  [anon_sym_codesystem] = "codesystem",
  [anon_sym_code] = "code",
  [anon_sym_from] = "from",
  [anon_sym_concept] = "concept",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_parameter] = "parameter",
  [anon_sym_default] = "default",
  [anon_sym_public] = "public",
  [anon_sym_private] = "private",
  [anon_sym_context] = "context",
  [anon_sym_DOT] = ".",
  [anon_sym_define] = "define",
  [anon_sym_function] = "function",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_external] = "external",
  [aux_sym_literal_token1] = "boolean_literal",
  [anon_sym_null] = "null",
  [anon_sym_is] = "is",
  [anon_sym_not] = "not",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_as] = "as",
  [anon_sym_cast] = "cast",
  [anon_sym_exists] = "exists",
  [anon_sym_properly] = "properly",
  [anon_sym_between] = "between",
  [anon_sym_and] = "and",
  [anon_sym_EQ] = "=",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_TILDE] = "~",
  [anon_sym_BANG_TILDE] = "!~",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_or] = "or",
  [anon_sym_xor] = "xor",
  [anon_sym_implies] = "implies",
  [anon_sym_PIPE] = "|",
  [anon_sym_union] = "union",
  [anon_sym_intersect] = "intersect",
  [anon_sym_except] = "except",
  [anon_sym_year] = "year",
  [anon_sym_month] = "month",
  [anon_sym_week] = "week",
  [anon_sym_day] = "day",
  [anon_sym_hour] = "hour",
  [anon_sym_minute] = "minute",
  [anon_sym_second] = "second",
  [anon_sym_millisecond] = "millisecond",
  [anon_sym_years] = "years",
  [anon_sym_months] = "months",
  [anon_sym_weeks] = "weeks",
  [anon_sym_days] = "days",
  [anon_sym_hours] = "hours",
  [anon_sym_minutes] = "minutes",
  [anon_sym_seconds] = "seconds",
  [anon_sym_milliseconds] = "milliseconds",
  [anon_sym_date] = "date",
  [anon_sym_time] = "time",
  [anon_sym_timezone] = "timezone",
  [anon_sym_timezoneoffset] = "timezoneoffset",
  [anon_sym_duration] = "duration",
  [anon_sym_in] = "in",
  [anon_sym_difference] = "difference",
  [anon_sym_of] = "of",
  [anon_sym_contains] = "contains",
  [anon_sym_orbefore] = "or before",
  [anon_sym_orafter] = "or after",
  [anon_sym_ormore] = "or more",
  [anon_sym_orless] = "or less",
  [anon_sym_lessthan] = "less than",
  [anon_sym_morethan] = "more than",
  [anon_sym_onor] = "on or",
  [anon_sym_before] = "before",
  [anon_sym_after] = "after",
  [anon_sym_oron] = "or on",
  [anon_sym_starts] = "starts",
  [anon_sym_ends] = "ends",
  [anon_sym_occurs] = "occurs",
  [anon_sym_same] = "same",
  [anon_sym_start] = "start",
  [anon_sym_end] = "end",
  [anon_sym_includes] = "includes",
  [anon_sym_during] = "during",
  [anon_sym_includedin] = "included in",
  [anon_sym_meets] = "meets",
  [anon_sym_overlaps] = "overlaps",
  [anon_sym_within] = "within",
  [anon_sym_where] = "where",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_version] = "version",
  [sym_default_identifier] = "default_identifier",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_Code] = "Code",
  [anon_sym_Concept] = "Concept",
  [anon_sym_asc] = "asc",
  [anon_sym_ascending] = "ascending",
  [anon_sym_by] = "by",
  [anon_sym_codesystems] = "codesystems",
  [anon_sym_desc] = "desc",
  [anon_sym_descending] = "descending",
  [anon_sym_display] = "display",
  [anon_sym_div] = "div",
  [anon_sym_fluent] = "fluent",
  [anon_sym_mod] = "mod",
  [anon_sym_predecessor] = "predecessor",
  [anon_sym_starting] = "starting",
  [anon_sym_successor] = "successor",
  [anon_sym_width] = "width",
  [anon_sym_SQUOTE] = "'",
  [sym_single_quote_string_fragment] = "single_quote_string_fragment",
  [sym_double_quote_string_fragment] = "double_quote_string_fragment",
  [sym_escape_sequence] = "escape_sequence",
  [sym_number] = "number",
  [sym_comment] = "comment",
  [sym_cql_library] = "cql_library",
  [sym_definition] = "definition",
  [sym_library_definition] = "library_definition",
  [sym_using_definition] = "using_definition",
  [sym_include_definition] = "include_definition",
  [sym_valueset_definition] = "valueset_definition",
  [sym_codesystem_definition] = "codesystem_definition",
  [sym_code_definition] = "code_definition",
  [sym_concept_definition] = "concept_definition",
  [sym_parameter_definition] = "parameter_definition",
  [sym_access_modifier] = "access_modifier",
  [sym_statement] = "statement",
  [sym_context_definition] = "context_definition",
  [sym_function_definition] = "function_definition",
  [sym_expression_definition] = "expression_definition",
  [sym_expression] = "expression",
  [sym_expression_term] = "expression_term",
  [sym_term] = "term",
  [sym_quantity] = "quantity",
  [sym_literal] = "literal",
  [sym_qualified_identifier_expression] = "qualified_identifier_expression",
  [sym_boolean_expression] = "boolean_expression",
  [sym_type_expression] = "type_expression",
  [sym_cast_expression] = "cast_expression",
  [sym_not_expression] = "not_expression",
  [sym_existence_expression] = "existence_expression",
  [sym_between_expression] = "between_expression",
  [sym_equality_expression] = "equality_expression",
  [sym_inequality_expression] = "inequality_expression",
  [sym_and_expression] = "and_expression",
  [sym_or_expression] = "or_expression",
  [sym_implies_expression] = "implies_expression",
  [sym_in_fix_set_expression] = "in_fix_set_expression",
  [sym_date_time_precision] = "date_time_precision",
  [sym_plural_date_time_precision] = "plural_date_time_precision",
  [sym_duration_between_expression] = "duration_between_expression",
  [sym_difference_between_expression] = "difference_between_expression",
  [sym_date_time_precision_specifier] = "date_time_precision_specifier",
  [sym_membership_expression] = "membership_expression",
  [sym_relative_qualifier] = "relative_qualifier",
  [sym_offset_relative_qualifier] = "offset_relative_qualifier",
  [sym_exclusive_relative_qualifier] = "exclusive_relative_qualifier",
  [sym_quantity_offset] = "quantity_offset",
  [sym_temporal_relationship] = "temporal_relationship",
  [sym_interval_operator_phrase] = "interval_operator_phrase",
  [sym_timing_expression] = "timing_expression",
  [sym_query] = "query",
  [sym_where_clause] = "where_clause",
  [sym_query_source] = "query_source",
  [sym_aliased_query_source] = "aliased_query_source",
  [sym_query_source_clause] = "query_source_clause",
  [sym_retrieve] = "retrieve",
  [sym_terminology] = "terminology",
  [sym_type_specifier] = "type_specifier",
  [sym_named_type_specifier] = "named_type_specifier",
  [sym_version_specifier] = "version_specifier",
  [sym_identifier] = "identifier",
  [sym_code_or_codesystem_identifier] = "code_identifier",
  [sym_qualified_identifier] = "qualified_identifier",
  [sym_quoted_identifier] = "quoted_identifier",
  [sym_referential_identifier] = "referential_identifier",
  [sym_type_name_identifier] = "type_name_identifier",
  [sym_referential_or_type_name_identifier] = "referential_or_type_name_identifier",
  [sym_keyword_identifier] = "keyword_identifier",
  [sym_string] = "string",
  [sym_unit] = "unit",
  [sym_display_clause] = "display_clause",
  [aux_sym_cql_library_repeat1] = "cql_library_repeat1",
  [aux_sym_cql_library_repeat2] = "cql_library_repeat2",
  [aux_sym_concept_definition_repeat1] = "concept_definition_repeat1",
  [aux_sym_qualified_identifier_expression_repeat1] = "qualified_identifier_expression_repeat1",
  [aux_sym_query_source_clause_repeat1] = "query_source_clause_repeat1",
  [aux_sym_named_type_specifier_repeat1] = "named_type_specifier_repeat1",
  [aux_sym_quoted_identifier_repeat1] = "quoted_identifier_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [alias_sym_code_id] = "code_id",
  [alias_sym_code_system_id] = "code_system_id",
  [alias_sym_codesystem_identifier] = "codesystem_identifier",
  [alias_sym_function_body] = "function_body",
  [alias_sym_library_identifier] = "library_identifier",
  [alias_sym_local_identifier] = "local_identifier",
  [alias_sym_model_identifier] = "model_identifier",
  [alias_sym_null_literal] = "null_literal",
  [alias_sym_number_literal] = "number_literal",
  [alias_sym_qualifier] = "qualifier",
  [alias_sym_qualifier_expression] = "qualifier_expression",
  [alias_sym_quantity_literal] = "quantity_literal",
  [alias_sym_query_alias] = "query_alias",
  [alias_sym_string_literal] = "string_literal",
  [alias_sym_valueset_id] = "valueset_id",
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
  [anon_sym_codesystem] = anon_sym_codesystem,
  [anon_sym_code] = anon_sym_code,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_concept] = anon_sym_concept,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_parameter] = anon_sym_parameter,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_public] = anon_sym_public,
  [anon_sym_private] = anon_sym_private,
  [anon_sym_context] = anon_sym_context,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_define] = anon_sym_define,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_external] = anon_sym_external,
  [aux_sym_literal_token1] = aux_sym_literal_token1,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_cast] = anon_sym_cast,
  [anon_sym_exists] = anon_sym_exists,
  [anon_sym_properly] = anon_sym_properly,
  [anon_sym_between] = anon_sym_between,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_BANG_TILDE] = anon_sym_BANG_TILDE,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_xor] = anon_sym_xor,
  [anon_sym_implies] = anon_sym_implies,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_union] = anon_sym_union,
  [anon_sym_intersect] = anon_sym_intersect,
  [anon_sym_except] = anon_sym_except,
  [anon_sym_year] = anon_sym_year,
  [anon_sym_month] = anon_sym_month,
  [anon_sym_week] = anon_sym_week,
  [anon_sym_day] = anon_sym_day,
  [anon_sym_hour] = anon_sym_hour,
  [anon_sym_minute] = anon_sym_minute,
  [anon_sym_second] = anon_sym_second,
  [anon_sym_millisecond] = anon_sym_millisecond,
  [anon_sym_years] = anon_sym_years,
  [anon_sym_months] = anon_sym_months,
  [anon_sym_weeks] = anon_sym_weeks,
  [anon_sym_days] = anon_sym_days,
  [anon_sym_hours] = anon_sym_hours,
  [anon_sym_minutes] = anon_sym_minutes,
  [anon_sym_seconds] = anon_sym_seconds,
  [anon_sym_milliseconds] = anon_sym_milliseconds,
  [anon_sym_date] = anon_sym_date,
  [anon_sym_time] = anon_sym_time,
  [anon_sym_timezone] = anon_sym_timezone,
  [anon_sym_timezoneoffset] = anon_sym_timezoneoffset,
  [anon_sym_duration] = anon_sym_duration,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_difference] = anon_sym_difference,
  [anon_sym_of] = anon_sym_of,
  [anon_sym_contains] = anon_sym_contains,
  [anon_sym_orbefore] = anon_sym_orbefore,
  [anon_sym_orafter] = anon_sym_orafter,
  [anon_sym_ormore] = anon_sym_ormore,
  [anon_sym_orless] = anon_sym_orless,
  [anon_sym_lessthan] = anon_sym_lessthan,
  [anon_sym_morethan] = anon_sym_morethan,
  [anon_sym_onor] = anon_sym_onor,
  [anon_sym_before] = anon_sym_before,
  [anon_sym_after] = anon_sym_after,
  [anon_sym_oron] = anon_sym_oron,
  [anon_sym_starts] = anon_sym_starts,
  [anon_sym_ends] = anon_sym_ends,
  [anon_sym_occurs] = anon_sym_occurs,
  [anon_sym_same] = anon_sym_same,
  [anon_sym_start] = anon_sym_start,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_includes] = anon_sym_includes,
  [anon_sym_during] = anon_sym_during,
  [anon_sym_includedin] = anon_sym_includedin,
  [anon_sym_meets] = anon_sym_meets,
  [anon_sym_overlaps] = anon_sym_overlaps,
  [anon_sym_within] = anon_sym_within,
  [anon_sym_where] = anon_sym_where,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_version] = anon_sym_version,
  [sym_default_identifier] = sym_default_identifier,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_Code] = anon_sym_Code,
  [anon_sym_Concept] = anon_sym_Concept,
  [anon_sym_asc] = anon_sym_asc,
  [anon_sym_ascending] = anon_sym_ascending,
  [anon_sym_by] = anon_sym_by,
  [anon_sym_codesystems] = anon_sym_codesystems,
  [anon_sym_desc] = anon_sym_desc,
  [anon_sym_descending] = anon_sym_descending,
  [anon_sym_display] = anon_sym_display,
  [anon_sym_div] = anon_sym_div,
  [anon_sym_fluent] = anon_sym_fluent,
  [anon_sym_mod] = anon_sym_mod,
  [anon_sym_predecessor] = anon_sym_predecessor,
  [anon_sym_starting] = anon_sym_starting,
  [anon_sym_successor] = anon_sym_successor,
  [anon_sym_width] = anon_sym_width,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym_single_quote_string_fragment] = sym_single_quote_string_fragment,
  [sym_double_quote_string_fragment] = sym_double_quote_string_fragment,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_number] = sym_number,
  [sym_comment] = sym_comment,
  [sym_cql_library] = sym_cql_library,
  [sym_definition] = sym_definition,
  [sym_library_definition] = sym_library_definition,
  [sym_using_definition] = sym_using_definition,
  [sym_include_definition] = sym_include_definition,
  [sym_valueset_definition] = sym_valueset_definition,
  [sym_codesystem_definition] = sym_codesystem_definition,
  [sym_code_definition] = sym_code_definition,
  [sym_concept_definition] = sym_concept_definition,
  [sym_parameter_definition] = sym_parameter_definition,
  [sym_access_modifier] = sym_access_modifier,
  [sym_statement] = sym_statement,
  [sym_context_definition] = sym_context_definition,
  [sym_function_definition] = sym_function_definition,
  [sym_expression_definition] = sym_expression_definition,
  [sym_expression] = sym_expression,
  [sym_expression_term] = sym_expression_term,
  [sym_term] = sym_term,
  [sym_quantity] = sym_quantity,
  [sym_literal] = sym_literal,
  [sym_qualified_identifier_expression] = sym_qualified_identifier_expression,
  [sym_boolean_expression] = sym_boolean_expression,
  [sym_type_expression] = sym_type_expression,
  [sym_cast_expression] = sym_cast_expression,
  [sym_not_expression] = sym_not_expression,
  [sym_existence_expression] = sym_existence_expression,
  [sym_between_expression] = sym_between_expression,
  [sym_equality_expression] = sym_equality_expression,
  [sym_inequality_expression] = sym_inequality_expression,
  [sym_and_expression] = sym_and_expression,
  [sym_or_expression] = sym_or_expression,
  [sym_implies_expression] = sym_implies_expression,
  [sym_in_fix_set_expression] = sym_in_fix_set_expression,
  [sym_date_time_precision] = sym_date_time_precision,
  [sym_plural_date_time_precision] = sym_plural_date_time_precision,
  [sym_duration_between_expression] = sym_duration_between_expression,
  [sym_difference_between_expression] = sym_difference_between_expression,
  [sym_date_time_precision_specifier] = sym_date_time_precision_specifier,
  [sym_membership_expression] = sym_membership_expression,
  [sym_relative_qualifier] = sym_relative_qualifier,
  [sym_offset_relative_qualifier] = sym_offset_relative_qualifier,
  [sym_exclusive_relative_qualifier] = sym_exclusive_relative_qualifier,
  [sym_quantity_offset] = sym_quantity_offset,
  [sym_temporal_relationship] = sym_temporal_relationship,
  [sym_interval_operator_phrase] = sym_interval_operator_phrase,
  [sym_timing_expression] = sym_timing_expression,
  [sym_query] = sym_query,
  [sym_where_clause] = sym_where_clause,
  [sym_query_source] = sym_query_source,
  [sym_aliased_query_source] = sym_aliased_query_source,
  [sym_query_source_clause] = sym_query_source_clause,
  [sym_retrieve] = sym_retrieve,
  [sym_terminology] = sym_terminology,
  [sym_type_specifier] = sym_type_specifier,
  [sym_named_type_specifier] = sym_named_type_specifier,
  [sym_version_specifier] = sym_version_specifier,
  [sym_identifier] = sym_identifier,
  [sym_code_or_codesystem_identifier] = sym_code_or_codesystem_identifier,
  [sym_qualified_identifier] = sym_qualified_identifier,
  [sym_quoted_identifier] = sym_quoted_identifier,
  [sym_referential_identifier] = sym_referential_identifier,
  [sym_type_name_identifier] = sym_type_name_identifier,
  [sym_referential_or_type_name_identifier] = sym_referential_or_type_name_identifier,
  [sym_keyword_identifier] = sym_keyword_identifier,
  [sym_string] = sym_string,
  [sym_unit] = sym_unit,
  [sym_display_clause] = sym_display_clause,
  [aux_sym_cql_library_repeat1] = aux_sym_cql_library_repeat1,
  [aux_sym_cql_library_repeat2] = aux_sym_cql_library_repeat2,
  [aux_sym_concept_definition_repeat1] = aux_sym_concept_definition_repeat1,
  [aux_sym_qualified_identifier_expression_repeat1] = aux_sym_qualified_identifier_expression_repeat1,
  [aux_sym_query_source_clause_repeat1] = aux_sym_query_source_clause_repeat1,
  [aux_sym_named_type_specifier_repeat1] = aux_sym_named_type_specifier_repeat1,
  [aux_sym_quoted_identifier_repeat1] = aux_sym_quoted_identifier_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [alias_sym_code_id] = alias_sym_code_id,
  [alias_sym_code_system_id] = alias_sym_code_system_id,
  [alias_sym_codesystem_identifier] = alias_sym_codesystem_identifier,
  [alias_sym_function_body] = alias_sym_function_body,
  [alias_sym_library_identifier] = alias_sym_library_identifier,
  [alias_sym_local_identifier] = alias_sym_local_identifier,
  [alias_sym_model_identifier] = alias_sym_model_identifier,
  [alias_sym_null_literal] = alias_sym_null_literal,
  [alias_sym_number_literal] = alias_sym_number_literal,
  [alias_sym_qualifier] = alias_sym_qualifier,
  [alias_sym_qualifier_expression] = alias_sym_qualifier_expression,
  [alias_sym_quantity_literal] = alias_sym_quantity_literal,
  [alias_sym_query_alias] = alias_sym_query_alias,
  [alias_sym_string_literal] = alias_sym_string_literal,
  [alias_sym_valueset_id] = alias_sym_valueset_id,
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
  [anon_sym_codesystem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_code] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_concept] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_parameter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_public] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_private] = {
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
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cast] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exists] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_properly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_between] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_implies] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_union] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_intersect] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_except] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_year] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_month] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_week] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_day] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hour] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_minute] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_second] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_millisecond] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_years] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_months] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_weeks] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_days] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hours] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_minutes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_seconds] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_milliseconds] = {
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
  [anon_sym_timezone] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_timezoneoffset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_duration] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_difference] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_of] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_contains] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_orbefore] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_orafter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ormore] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_orless] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lessthan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_morethan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_onor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_before] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_after] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_oron] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_starts] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ends] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_occurs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_same] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_start] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_includes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_during] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_includedin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_meets] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_overlaps] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_within] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_where] = {
    .visible = true,
    .named = false,
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
  [anon_sym_codesystems] = {
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
  [anon_sym_fluent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_predecessor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_starting] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_successor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_width] = {
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
  [sym_number] = {
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
  [sym_codesystem_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_code_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_concept_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_access_modifier] = {
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
  [sym_quantity] = {
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
  [sym_boolean_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_type_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_cast_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_not_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_existence_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_between_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_equality_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_inequality_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_and_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_or_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_implies_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_in_fix_set_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_date_time_precision] = {
    .visible = true,
    .named = true,
  },
  [sym_plural_date_time_precision] = {
    .visible = true,
    .named = true,
  },
  [sym_duration_between_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_difference_between_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_date_time_precision_specifier] = {
    .visible = true,
    .named = true,
  },
  [sym_membership_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_relative_qualifier] = {
    .visible = true,
    .named = true,
  },
  [sym_offset_relative_qualifier] = {
    .visible = true,
    .named = true,
  },
  [sym_exclusive_relative_qualifier] = {
    .visible = true,
    .named = true,
  },
  [sym_quantity_offset] = {
    .visible = true,
    .named = true,
  },
  [sym_temporal_relationship] = {
    .visible = true,
    .named = true,
  },
  [sym_interval_operator_phrase] = {
    .visible = true,
    .named = true,
  },
  [sym_timing_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_query] = {
    .visible = true,
    .named = true,
  },
  [sym_where_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_query_source] = {
    .visible = true,
    .named = true,
  },
  [sym_aliased_query_source] = {
    .visible = true,
    .named = true,
  },
  [sym_query_source_clause] = {
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
  [sym_type_specifier] = {
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
  [sym_code_or_codesystem_identifier] = {
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
  [sym_unit] = {
    .visible = true,
    .named = true,
  },
  [sym_display_clause] = {
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
  [aux_sym_concept_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_qualified_identifier_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_query_source_clause_repeat1] = {
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
  [alias_sym_code_id] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_code_system_id] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_codesystem_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_function_body] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_library_identifier] = {
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
  [alias_sym_null_literal] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_number_literal] = {
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
  [alias_sym_quantity_literal] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_query_alias] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_valueset_id] = {
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
    [3] = alias_sym_valueset_id,
  },
  [5] = {
    [3] = alias_sym_code_system_id,
  },
  [6] = {
    [0] = alias_sym_null_literal,
  },
  [7] = {
    [0] = alias_sym_number_literal,
  },
  [8] = {
    [0] = alias_sym_quantity_literal,
  },
  [9] = {
    [0] = alias_sym_string_literal,
  },
  [10] = {
    [1] = alias_sym_model_identifier,
  },
  [11] = {
    [4] = alias_sym_local_identifier,
  },
  [12] = {
    [1] = alias_sym_query_alias,
  },
  [13] = {
    [0] = alias_sym_qualifier_expression,
  },
  [14] = {
    [4] = alias_sym_valueset_id,
  },
  [15] = {
    [4] = alias_sym_code_system_id,
  },
  [16] = {
    [3] = alias_sym_code_id,
    [5] = alias_sym_codesystem_identifier,
  },
  [17] = {
    [0] = alias_sym_library_identifier,
  },
  [18] = {
    [6] = alias_sym_function_body,
  },
  [19] = {
    [4] = alias_sym_code_id,
    [6] = alias_sym_codesystem_identifier,
  },
  [20] = {
    [7] = alias_sym_function_body,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_expression, 2,
    sym_expression,
    alias_sym_function_body,
  sym_quantity, 2,
    sym_quantity,
    alias_sym_quantity_literal,
  sym_identifier, 6,
    sym_identifier,
    alias_sym_library_identifier,
    alias_sym_local_identifier,
    alias_sym_model_identifier,
    alias_sym_qualifier,
    alias_sym_query_alias,
  sym_code_or_codesystem_identifier, 2,
    sym_code_or_codesystem_identifier,
    alias_sym_codesystem_identifier,
  sym_referential_identifier, 2,
    sym_referential_identifier,
    alias_sym_qualifier_expression,
  sym_string, 6,
    sym_string,
    alias_sym_code_id,
    alias_sym_code_system_id,
    alias_sym_string_literal,
    alias_sym_valueset_id,
    alias_sym_version,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 2,
  [5] = 5,
  [6] = 5,
  [7] = 5,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 12,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 14,
  [26] = 15,
  [27] = 17,
  [28] = 18,
  [29] = 19,
  [30] = 30,
  [31] = 24,
  [32] = 23,
  [33] = 20,
  [34] = 21,
  [35] = 21,
  [36] = 36,
  [37] = 18,
  [38] = 17,
  [39] = 12,
  [40] = 15,
  [41] = 14,
  [42] = 24,
  [43] = 19,
  [44] = 44,
  [45] = 23,
  [46] = 22,
  [47] = 22,
  [48] = 48,
  [49] = 49,
  [50] = 20,
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
  [79] = 79,
  [80] = 80,
  [81] = 80,
  [82] = 80,
  [83] = 80,
  [84] = 84,
  [85] = 84,
  [86] = 86,
  [87] = 86,
  [88] = 86,
  [89] = 86,
  [90] = 90,
  [91] = 90,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 94,
  [117] = 117,
  [118] = 95,
  [119] = 96,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 103,
  [162] = 162,
  [163] = 163,
  [164] = 108,
  [165] = 99,
  [166] = 110,
  [167] = 111,
  [168] = 168,
  [169] = 105,
  [170] = 106,
  [171] = 113,
  [172] = 107,
  [173] = 104,
  [174] = 102,
  [175] = 101,
  [176] = 106,
  [177] = 107,
  [178] = 104,
  [179] = 102,
  [180] = 110,
  [181] = 113,
  [182] = 103,
  [183] = 111,
  [184] = 101,
  [185] = 185,
  [186] = 99,
  [187] = 105,
  [188] = 108,
  [189] = 125,
  [190] = 127,
  [191] = 128,
  [192] = 192,
  [193] = 126,
  [194] = 127,
  [195] = 128,
  [196] = 125,
  [197] = 126,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 201,
  [203] = 136,
  [204] = 204,
  [205] = 94,
  [206] = 95,
  [207] = 142,
  [208] = 72,
  [209] = 96,
  [210] = 138,
  [211] = 211,
  [212] = 212,
  [213] = 124,
  [214] = 214,
  [215] = 137,
  [216] = 216,
  [217] = 144,
  [218] = 218,
  [219] = 219,
  [220] = 145,
  [221] = 221,
  [222] = 134,
  [223] = 152,
  [224] = 156,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 133,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 132,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 129,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 92,
  [290] = 290,
  [291] = 130,
  [292] = 131,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 303,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 306,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 303,
  [322] = 322,
  [323] = 304,
  [324] = 303,
  [325] = 325,
  [326] = 326,
  [327] = 304,
  [328] = 328,
  [329] = 304,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 322,
  [336] = 284,
  [337] = 94,
  [338] = 338,
  [339] = 96,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 138,
  [350] = 95,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 137,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 355,
  [362] = 355,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 97,
  [371] = 371,
  [372] = 355,
  [373] = 373,
  [374] = 374,
  [375] = 127,
  [376] = 128,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 384,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 384,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 384,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 382,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
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
      if (eof) ADVANCE(448);
      if (lookahead == '!') ADVANCE(27);
      if (lookahead == '"') ADVANCE(1061);
      if (lookahead == '\'') ADVANCE(1092);
      if (lookahead == '(') ADVANCE(492);
      if (lookahead == ')') ADVANCE(493);
      if (lookahead == ',') ADVANCE(475);
      if (lookahead == '.') ADVANCE(487);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == ':') ADVANCE(461);
      if (lookahead == '<') ADVANCE(525);
      if (lookahead == '=') ADVANCE(520);
      if (lookahead == '>') ADVANCE(526);
      if (lookahead == 'C') ADVANCE(286);
      if (lookahead == '[') ADVANCE(637);
      if (lookahead == '\\') ADVANCE(409);
      if (lookahead == ']') ADVANCE(638);
      if (lookahead == 'a') ADVANCE(177);
      if (lookahead == 'b') ADVANCE(104);
      if (lookahead == 'c') ADVANCE(29);
      if (lookahead == 'd') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead == 'f') ADVANCE(32);
      if (lookahead == 'h') ADVANCE(288);
      if (lookahead == 'i') ADVANCE(244);
      if (lookahead == 'l') ADVANCE(106);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead == 'n') ADVANCE(287);
      if (lookahead == 'o') ADVANCE(65);
      if (lookahead == 'p') ADVANCE(35);
      if (lookahead == 's') ADVANCE(33);
      if (lookahead == 't') ADVANCE(213);
      if (lookahead == 'u') ADVANCE(252);
      if (lookahead == 'v') ADVANCE(40);
      if (lookahead == 'w') ADVANCE(137);
      if (lookahead == 'x') ADVANCE(291);
      if (lookahead == 'y') ADVANCE(159);
      if (lookahead == '{') ADVANCE(474);
      if (lookahead == '|') ADVANCE(534);
      if (lookahead == '}') ADVANCE(476);
      if (lookahead == '~') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1109);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(441)
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(435);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(46);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(45);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(392);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(294);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(211);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(406);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(27);
      if (lookahead == '"') ADVANCE(1061);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == ')') ADVANCE(493);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '<') ADVANCE(525);
      if (lookahead == '=') ADVANCE(520);
      if (lookahead == '>') ADVANCE(526);
      if (lookahead == 'a') ADVANCE(807);
      if (lookahead == 'b') ADVANCE(745);
      if (lookahead == 'd') ADVANCE(1043);
      if (lookahead == 'e') ADVANCE(906);
      if (lookahead == 'i') ADVANCE(870);
      if (lookahead == 'l') ADVANCE(788);
      if (lookahead == 'm') ADVANCE(751);
      if (lookahead == 'o') ADVANCE(687);
      if (lookahead == 'p') ADVANCE(952);
      if (lookahead == 's') ADVANCE(673);
      if (lookahead == 'u') ADVANCE(888);
      if (lookahead == 'w') ADVANCE(835);
      if (lookahead == 'x') ADVANCE(913);
      if (lookahead == '|') ADVANCE(534);
      if (lookahead == '~') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1109);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(1061);
      if (lookahead == '\'') ADVANCE(1093);
      if (lookahead == '(') ADVANCE(492);
      if (lookahead == '.') ADVANCE(487);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '[') ADVANCE(637);
      if (lookahead == 'a') ADVANCE(968);
      if (lookahead == 'b') ADVANCE(1054);
      if (lookahead == 'c') ADVANCE(647);
      if (lookahead == 'd') ADVANCE(648);
      if (lookahead == 'e') ADVANCE(877);
      if (lookahead == 'f') ADVANCE(650);
      if (lookahead == 'h') ADVANCE(910);
      if (lookahead == 'i') ADVANCE(866);
      if (lookahead == 'l') ADVANCE(819);
      if (lookahead == 'm') ADVANCE(748);
      if (lookahead == 'n') ADVANCE(909);
      if (lookahead == 'o') ADVANCE(937);
      if (lookahead == 'p') ADVANCE(666);
      if (lookahead == 's') ADVANCE(752);
      if (lookahead == 't') ADVANCE(820);
      if (lookahead == 'u') ADVANCE(887);
      if (lookahead == 'v') ADVANCE(653);
      if (lookahead == 'w') ADVANCE(760);
      if (lookahead == 'x') ADVANCE(913);
      if (lookahead == 'y') ADVANCE(782);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1109);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(1061);
      if (lookahead == '\'') ADVANCE(1093);
      if (lookahead == '(') ADVANCE(492);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '[') ADVANCE(637);
      if (lookahead == 'a') ADVANCE(968);
      if (lookahead == 'b') ADVANCE(1054);
      if (lookahead == 'c') ADVANCE(647);
      if (lookahead == 'd') ADVANCE(648);
      if (lookahead == 'e') ADVANCE(877);
      if (lookahead == 'f') ADVANCE(650);
      if (lookahead == 'h') ADVANCE(910);
      if (lookahead == 'i') ADVANCE(866);
      if (lookahead == 'l') ADVANCE(819);
      if (lookahead == 'm') ADVANCE(748);
      if (lookahead == 'n') ADVANCE(909);
      if (lookahead == 'o') ADVANCE(950);
      if (lookahead == 'p') ADVANCE(666);
      if (lookahead == 's') ADVANCE(752);
      if (lookahead == 't') ADVANCE(820);
      if (lookahead == 'u') ADVANCE(887);
      if (lookahead == 'v') ADVANCE(653);
      if (lookahead == 'w') ADVANCE(760);
      if (lookahead == 'x') ADVANCE(913);
      if (lookahead == 'y') ADVANCE(782);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1109);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(1061);
      if (lookahead == '\'') ADVANCE(1093);
      if (lookahead == '(') ADVANCE(492);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '[') ADVANCE(637);
      if (lookahead == 'a') ADVANCE(968);
      if (lookahead == 'b') ADVANCE(1054);
      if (lookahead == 'c') ADVANCE(647);
      if (lookahead == 'd') ADVANCE(651);
      if (lookahead == 'e') ADVANCE(878);
      if (lookahead == 'f') ADVANCE(650);
      if (lookahead == 'h') ADVANCE(915);
      if (lookahead == 'i') ADVANCE(866);
      if (lookahead == 'l') ADVANCE(819);
      if (lookahead == 'm') ADVANCE(749);
      if (lookahead == 'n') ADVANCE(909);
      if (lookahead == 'o') ADVANCE(937);
      if (lookahead == 'p') ADVANCE(666);
      if (lookahead == 's') ADVANCE(795);
      if (lookahead == 't') ADVANCE(820);
      if (lookahead == 'u') ADVANCE(887);
      if (lookahead == 'v') ADVANCE(653);
      if (lookahead == 'w') ADVANCE(779);
      if (lookahead == 'x') ADVANCE(913);
      if (lookahead == 'y') ADVANCE(791);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1109);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(1061);
      if (lookahead == '\'') ADVANCE(1093);
      if (lookahead == '(') ADVANCE(492);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '[') ADVANCE(637);
      if (lookahead == 'a') ADVANCE(808);
      if (lookahead == 'b') ADVANCE(762);
      if (lookahead == 'c') ADVANCE(647);
      if (lookahead == 'd') ADVANCE(648);
      if (lookahead == 'e') ADVANCE(877);
      if (lookahead == 'f') ADVANCE(650);
      if (lookahead == 'h') ADVANCE(910);
      if (lookahead == 'i') ADVANCE(866);
      if (lookahead == 'l') ADVANCE(819);
      if (lookahead == 'm') ADVANCE(748);
      if (lookahead == 'n') ADVANCE(909);
      if (lookahead == 'o') ADVANCE(937);
      if (lookahead == 'p') ADVANCE(666);
      if (lookahead == 's') ADVANCE(752);
      if (lookahead == 't') ADVANCE(820);
      if (lookahead == 'u') ADVANCE(887);
      if (lookahead == 'v') ADVANCE(653);
      if (lookahead == 'w') ADVANCE(760);
      if (lookahead == 'x') ADVANCE(913);
      if (lookahead == 'y') ADVANCE(782);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1109);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(1061);
      if (lookahead == '\'') ADVANCE(1093);
      if (lookahead == '(') ADVANCE(492);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '[') ADVANCE(637);
      if (lookahead == 'a') ADVANCE(808);
      if (lookahead == 'b') ADVANCE(762);
      if (lookahead == 'c') ADVANCE(647);
      if (lookahead == 'd') ADVANCE(649);
      if (lookahead == 'e') ADVANCE(877);
      if (lookahead == 'f') ADVANCE(650);
      if (lookahead == 'h') ADVANCE(910);
      if (lookahead == 'i') ADVANCE(868);
      if (lookahead == 'l') ADVANCE(787);
      if (lookahead == 'm') ADVANCE(747);
      if (lookahead == 'n') ADVANCE(909);
      if (lookahead == 'o') ADVANCE(889);
      if (lookahead == 'p') ADVANCE(668);
      if (lookahead == 's') ADVANCE(672);
      if (lookahead == 't') ADVANCE(820);
      if (lookahead == 'u') ADVANCE(887);
      if (lookahead == 'v') ADVANCE(653);
      if (lookahead == 'w') ADVANCE(759);
      if (lookahead == 'x') ADVANCE(913);
      if (lookahead == 'y') ADVANCE(782);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1109);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(1061);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(492);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '[') ADVANCE(637);
      if (lookahead == 'a') ADVANCE(968);
      if (lookahead == 'b') ADVANCE(1054);
      if (lookahead == 'c') ADVANCE(670);
      if (lookahead == 'd') ADVANCE(665);
      if (lookahead == 'e') ADVANCE(879);
      if (lookahead == 'f') ADVANCE(843);
      if (lookahead == 'i') ADVANCE(867);
      if (lookahead == 'l') ADVANCE(819);
      if (lookahead == 'm') ADVANCE(750);
      if (lookahead == 'o') ADVANCE(937);
      if (lookahead == 'p') ADVANCE(666);
      if (lookahead == 's') ADVANCE(1003);
      if (lookahead == 't') ADVANCE(822);
      if (lookahead == 'u') ADVANCE(887);
      if (lookahead == 'v') ADVANCE(653);
      if (lookahead == 'w') ADVANCE(817);
      if (lookahead == 'x') ADVANCE(913);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(1061);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '.') ADVANCE(487);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == ']') ADVANCE(638);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(1061);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == 'C') ADVANCE(912);
      if (lookahead == 'a') ADVANCE(968);
      if (lookahead == 'b') ADVANCE(1054);
      if (lookahead == 'c') ADVANCE(670);
      if (lookahead == 'd') ADVANCE(665);
      if (lookahead == 'e') ADVANCE(879);
      if (lookahead == 'f') ADVANCE(675);
      if (lookahead == 'i') ADVANCE(867);
      if (lookahead == 'l') ADVANCE(819);
      if (lookahead == 'm') ADVANCE(750);
      if (lookahead == 'n') ADVANCE(909);
      if (lookahead == 'o') ADVANCE(937);
      if (lookahead == 'p') ADVANCE(666);
      if (lookahead == 's') ADVANCE(1003);
      if (lookahead == 't') ADVANCE(821);
      if (lookahead == 'u') ADVANCE(887);
      if (lookahead == 'v') ADVANCE(653);
      if (lookahead == 'w') ADVANCE(817);
      if (lookahead == 'x') ADVANCE(913);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(16)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(1061);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == 'f') ADVANCE(1036);
      if (lookahead == 'p') ADVANCE(953);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(1061);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == 'f') ADVANCE(1036);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(1061);
      if (lookahead == '/') ADVANCE(1101);
      if (lookahead == '\\') ADVANCE(409);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(1104);
      if (lookahead != 0) ADVANCE(1105);
      END_STATE();
    case 20:
      if (lookahead == '\'') ADVANCE(1092);
      if (lookahead == '/') ADVANCE(1095);
      if (lookahead == '\\') ADVANCE(409);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(1098);
      if (lookahead != 0) ADVANCE(1099);
      END_STATE();
    case 21:
      if (lookahead == '\'') ADVANCE(1060);
      END_STATE();
    case 22:
      if (lookahead == '\'') ADVANCE(1);
      END_STATE();
    case 23:
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '/') ADVANCE(1112);
      END_STATE();
    case 24:
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '/') ADVANCE(1111);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == '*') ADVANCE(24);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == 'a') ADVANCE(347);
      if (lookahead == 'd') ADVANCE(48);
      if (lookahead == 'h') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(264);
      if (lookahead == 'm') ADVANCE(219);
      if (lookahead == 'o') ADVANCE(330);
      if (lookahead == 's') ADVANCE(171);
      if (lookahead == 'w') ADVANCE(156);
      if (lookahead == 'y') ADVANCE(167);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(26)
      END_STATE();
    case 27:
      if (lookahead == '=') ADVANCE(521);
      if (lookahead == '~') ADVANCE(523);
      END_STATE();
    case 28:
      if (lookahead == '_') ADVANCE(21);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(228);
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(395);
      if (lookahead == 'e') ADVANCE(180);
      if (lookahead == 'i') ADVANCE(181);
      if (lookahead == 'u') ADVANCE(327);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(225);
      if (lookahead == 'l') ADVANCE(412);
      if (lookahead == 'r') ADVANCE(289);
      if (lookahead == 'u') ADVANCE(273);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(249);
      if (lookahead == 'e') ADVANCE(68);
      if (lookahead == 't') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(76);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(249);
      if (lookahead == 'e') ADVANCE(68);
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(326);
      if (lookahead == 'r') ADVANCE(133);
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(326);
      if (lookahead == 'r') ADVANCE(203);
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(326);
      if (lookahead == 'r') ADVANCE(202);
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(427);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(239);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(239);
      if (lookahead == 'e') ADVANCE(329);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(413);
      if (lookahead == 'i') ADVANCE(283);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(313);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(426);
      if (lookahead == 'e') ADVANCE(179);
      if (lookahead == 'i') ADVANCE(366);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(426);
      if (lookahead == 'e') ADVANCE(183);
      if (lookahead == 'u') ADVANCE(334);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead == 'b') ADVANCE(174);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead == 'b') ADVANCE(174);
      if (lookahead == 'l') ADVANCE(164);
      if (lookahead == 'm') ADVANCE(306);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead == 'b') ADVANCE(174);
      if (lookahead == 'l') ADVANCE(164);
      if (lookahead == 'm') ADVANCE(306);
      if (lookahead == 'o') ADVANCE(263);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(430);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(407);
      if (lookahead == 'i') ADVANCE(266);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(331);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(317);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(328);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(224);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(260);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(261);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(345);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(325);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(227);
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(209);
      if (lookahead == 'e') ADVANCE(425);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(399);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(251);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(240);
      if (lookahead == 'r') ADVANCE(289);
      END_STATE();
    case 63:
      if (lookahead == 'b') ADVANCE(344);
      END_STATE();
    case 64:
      if (lookahead == 'b') ADVANCE(234);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(75);
      if (lookahead == 'f') ADVANCE(597);
      if (lookahead == 'n') ADVANCE(5);
      if (lookahead == 'r') ADVANCE(528);
      if (lookahead == 'v') ADVANCE(144);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(1073);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(481);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(292);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(232);
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(134);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(134);
      if (lookahead == 'i') ADVANCE(368);
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(388);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(158);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(123);
      END_STATE();
    case 75:
      if (lookahead == 'c') ADVANCE(421);
      END_STATE();
    case 76:
      if (lookahead == 'c') ADVANCE(73);
      END_STATE();
    case 77:
      if (lookahead == 'c') ADVANCE(161);
      END_STATE();
    case 78:
      if (lookahead == 'c') ADVANCE(165);
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 79:
      if (lookahead == 'c') ADVANCE(165);
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 80:
      if (lookahead == 'c') ADVANCE(300);
      END_STATE();
    case 81:
      if (lookahead == 'c') ADVANCE(301);
      END_STATE();
    case 82:
      if (lookahead == 'c') ADVANCE(302);
      END_STATE();
    case 83:
      if (lookahead == 'c') ADVANCE(241);
      END_STATE();
    case 84:
      if (lookahead == 'c') ADVANCE(408);
      END_STATE();
    case 85:
      if (lookahead == 'c') ADVANCE(170);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(518);
      END_STATE();
    case 87:
      if (lookahead == 'd') ADVANCE(623);
      END_STATE();
    case 88:
      if (lookahead == 'd') ADVANCE(1082);
      if (lookahead == 'n') ADVANCE(390);
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 89:
      if (lookahead == 'd') ADVANCE(453);
      END_STATE();
    case 90:
      if (lookahead == 'd') ADVANCE(561);
      END_STATE();
    case 91:
      if (lookahead == 'd') ADVANCE(564);
      END_STATE();
    case 92:
      if (lookahead == 'd') ADVANCE(559);
      END_STATE();
    case 93:
      if (lookahead == 'd') ADVANCE(562);
      END_STATE();
    case 94:
      if (lookahead == 'd') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 95:
      if (lookahead == 'd') ADVANCE(109);
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 96:
      if (lookahead == 'd') ADVANCE(391);
      if (lookahead == 't') ADVANCE(197);
      END_STATE();
    case 97:
      if (lookahead == 'd') ADVANCE(175);
      END_STATE();
    case 98:
      if (lookahead == 'd') ADVANCE(348);
      END_STATE();
    case 99:
      if (lookahead == 'd') ADVANCE(120);
      END_STATE();
    case 100:
      if (lookahead == 'd') ADVANCE(125);
      END_STATE();
    case 101:
      if (lookahead == 'd') ADVANCE(210);
      END_STATE();
    case 102:
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(185);
      if (lookahead == 'y') ADVANCE(1068);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(359);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(359);
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(1062);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(468);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(581);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(618);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(584);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(504);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(425);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(506);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(635);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(607);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(488);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(558);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(458);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(483);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(586);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(595);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(496);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(455);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(602);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(600);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(556);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(139);
      if (lookahead == 'i') ADVANCE(235);
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(139);
      if (lookahead == 'i') ADVANCE(235);
      if (lookahead == 'o') ADVANCE(270);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead == 'i') ADVANCE(423);
      if (lookahead == 'o') ADVANCE(314);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(309);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == 'h') ADVANCE(145);
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == 'h') ADVANCE(145);
      if (lookahead == 'i') ADVANCE(378);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(394);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(335);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(367);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(353);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(333);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(320);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(387);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(389);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(323);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(360);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(343);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(336);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(362);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(404);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(375);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(469);
      END_STATE();
    case 177:
      if (lookahead == 'f') ADVANCE(403);
      if (lookahead == 'n') ADVANCE(86);
      if (lookahead == 's') ADVANCE(508);
      END_STATE();
    case 178:
      if (lookahead == 'f') ADVANCE(597);
      if (lookahead == 'n') ADVANCE(5);
      if (lookahead == 'r') ADVANCE(2);
      END_STATE();
    case 179:
      if (lookahead == 'f') ADVANCE(41);
      END_STATE();
    case 180:
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 181:
      if (lookahead == 'f') ADVANCE(186);
      if (lookahead == 's') ADVANCE(310);
      if (lookahead == 'v') ADVANCE(1078);
      END_STATE();
    case 182:
      if (lookahead == 'f') ADVANCE(187);
      END_STATE();
    case 183:
      if (lookahead == 'f') ADVANCE(205);
      END_STATE();
    case 184:
      if (lookahead == 'f') ADVANCE(304);
      END_STATE();
    case 185:
      if (lookahead == 'f') ADVANCE(304);
      if (lookahead == 't') ADVANCE(424);
      END_STATE();
    case 186:
      if (lookahead == 'f') ADVANCE(166);
      END_STATE();
    case 187:
      if (lookahead == 'f') ADVANCE(369);
      END_STATE();
    case 188:
      if (lookahead == 'f') ADVANCE(405);
      END_STATE();
    case 189:
      if (lookahead == 'f') ADVANCE(307);
      END_STATE();
    case 190:
      if (lookahead == 'g') ADVANCE(451);
      END_STATE();
    case 191:
      if (lookahead == 'g') ADVANCE(626);
      END_STATE();
    case 192:
      if (lookahead == 'g') ADVANCE(1086);
      END_STATE();
    case 193:
      if (lookahead == 'g') ADVANCE(1074);
      END_STATE();
    case 194:
      if (lookahead == 'h') ADVANCE(546);
      END_STATE();
    case 195:
      if (lookahead == 'h') ADVANCE(1090);
      END_STATE();
    case 196:
      if (lookahead == 'h') ADVANCE(544);
      END_STATE();
    case 197:
      if (lookahead == 'h') ADVANCE(208);
      END_STATE();
    case 198:
      if (lookahead == 'h') ADVANCE(54);
      END_STATE();
    case 199:
      if (lookahead == 'h') ADVANCE(55);
      END_STATE();
    case 200:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 201:
      if (lookahead == 'i') ADVANCE(235);
      if (lookahead == 'o') ADVANCE(269);
      END_STATE();
    case 202:
      if (lookahead == 'i') ADVANCE(423);
      END_STATE();
    case 203:
      if (lookahead == 'i') ADVANCE(423);
      if (lookahead == 'o') ADVANCE(314);
      END_STATE();
    case 204:
      if (lookahead == 'i') ADVANCE(253);
      END_STATE();
    case 205:
      if (lookahead == 'i') ADVANCE(283);
      END_STATE();
    case 206:
      if (lookahead == 'i') ADVANCE(266);
      END_STATE();
    case 207:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 208:
      if (lookahead == 'i') ADVANCE(255);
      END_STATE();
    case 209:
      if (lookahead == 'i') ADVANCE(281);
      END_STATE();
    case 210:
      if (lookahead == 'i') ADVANCE(268);
      END_STATE();
    case 211:
      if (lookahead == 'i') ADVANCE(262);
      END_STATE();
    case 212:
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 213:
      if (lookahead == 'i') ADVANCE(250);
      if (lookahead == 'r') ADVANCE(414);
      END_STATE();
    case 214:
      if (lookahead == 'i') ADVANCE(293);
      END_STATE();
    case 215:
      if (lookahead == 'i') ADVANCE(364);
      END_STATE();
    case 216:
      if (lookahead == 'i') ADVANCE(295);
      END_STATE();
    case 217:
      if (lookahead == 'i') ADVANCE(296);
      END_STATE();
    case 218:
      if (lookahead == 'i') ADVANCE(298);
      END_STATE();
    case 219:
      if (lookahead == 'i') ADVANCE(243);
      if (lookahead == 'o') ADVANCE(282);
      END_STATE();
    case 220:
      if (lookahead == 'i') ADVANCE(376);
      END_STATE();
    case 221:
      if (lookahead == 'k') ADVANCE(549);
      END_STATE();
    case 222:
      if (lookahead == 'k') ADVANCE(547);
      END_STATE();
    case 223:
      if (lookahead == 'l') ADVANCE(498);
      END_STATE();
    case 224:
      if (lookahead == 'l') ADVANCE(494);
      END_STATE();
    case 225:
      if (lookahead == 'l') ADVANCE(361);
      END_STATE();
    case 226:
      if (lookahead == 'l') ADVANCE(212);
      END_STATE();
    case 227:
      if (lookahead == 'l') ADVANCE(237);
      END_STATE();
    case 228:
      if (lookahead == 'l') ADVANCE(237);
      if (lookahead == 's') ADVANCE(379);
      END_STATE();
    case 229:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 230:
      if (lookahead == 'l') ADVANCE(215);
      END_STATE();
    case 231:
      if (lookahead == 'l') ADVANCE(429);
      END_STATE();
    case 232:
      if (lookahead == 'l') ADVANCE(419);
      END_STATE();
    case 233:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 234:
      if (lookahead == 'l') ADVANCE(207);
      END_STATE();
    case 235:
      if (lookahead == 'l') ADVANCE(230);
      if (lookahead == 'n') ADVANCE(418);
      END_STATE();
    case 236:
      if (lookahead == 'l') ADVANCE(223);
      END_STATE();
    case 237:
      if (lookahead == 'l') ADVANCE(140);
      END_STATE();
    case 238:
      if (lookahead == 'l') ADVANCE(386);
      END_STATE();
    case 239:
      if (lookahead == 'l') ADVANCE(415);
      END_STATE();
    case 240:
      if (lookahead == 'l') ADVANCE(365);
      END_STATE();
    case 241:
      if (lookahead == 'l') ADVANCE(420);
      END_STATE();
    case 242:
      if (lookahead == 'l') ADVANCE(220);
      END_STATE();
    case 243:
      if (lookahead == 'l') ADVANCE(242);
      if (lookahead == 'n') ADVANCE(422);
      END_STATE();
    case 244:
      if (lookahead == 'm') ADVANCE(308);
      if (lookahead == 'n') ADVANCE(594);
      if (lookahead == 's') ADVANCE(500);
      END_STATE();
    case 245:
      if (lookahead == 'm') ADVANCE(308);
      if (lookahead == 'n') ADVANCE(69);
      if (lookahead == 's') ADVANCE(500);
      END_STATE();
    case 246:
      if (lookahead == 'm') ADVANCE(470);
      END_STATE();
    case 247:
      if (lookahead == 'm') ADVANCE(465);
      END_STATE();
    case 248:
      if (lookahead == 'm') ADVANCE(462);
      END_STATE();
    case 249:
      if (lookahead == 'm') ADVANCE(111);
      END_STATE();
    case 250:
      if (lookahead == 'm') ADVANCE(112);
      END_STATE();
    case 251:
      if (lookahead == 'm') ADVANCE(168);
      END_STATE();
    case 252:
      if (lookahead == 'n') ADVANCE(214);
      if (lookahead == 's') ADVANCE(204);
      END_STATE();
    case 253:
      if (lookahead == 'n') ADVANCE(190);
      END_STATE();
    case 254:
      if (lookahead == 'n') ADVANCE(535);
      END_STATE();
    case 255:
      if (lookahead == 'n') ADVANCE(633);
      END_STATE();
    case 256:
      if (lookahead == 'n') ADVANCE(516);
      END_STATE();
    case 257:
      if (lookahead == 'n') ADVANCE(639);
      END_STATE();
    case 258:
      if (lookahead == 'n') ADVANCE(589);
      END_STATE();
    case 259:
      if (lookahead == 'n') ADVANCE(490);
      END_STATE();
    case 260:
      if (lookahead == 'n') ADVANCE(604);
      END_STATE();
    case 261:
      if (lookahead == 'n') ADVANCE(605);
      END_STATE();
    case 262:
      if (lookahead == 'n') ADVANCE(628);
      END_STATE();
    case 263:
      if (lookahead == 'n') ADVANCE(611);
      END_STATE();
    case 264:
      if (lookahead == 'n') ADVANCE(591);
      END_STATE();
    case 265:
      if (lookahead == 'n') ADVANCE(87);
      if (lookahead == 'x') ADVANCE(71);
      END_STATE();
    case 266:
      if (lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 267:
      if (lookahead == 'n') ADVANCE(192);
      END_STATE();
    case 268:
      if (lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 269:
      if (lookahead == 'n') ADVANCE(390);
      END_STATE();
    case 270:
      if (lookahead == 'n') ADVANCE(390);
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 271:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 272:
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 273:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 274:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 275:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 276:
      if (lookahead == 'n') ADVANCE(98);
      if (lookahead == 'x') ADVANCE(70);
      END_STATE();
    case 277:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 278:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 279:
      if (lookahead == 'n') ADVANCE(382);
      END_STATE();
    case 280:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 281:
      if (lookahead == 'n') ADVANCE(354);
      END_STATE();
    case 282:
      if (lookahead == 'n') ADVANCE(393);
      END_STATE();
    case 283:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 284:
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 285:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 286:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 287:
      if (lookahead == 'o') ADVANCE(377);
      if (lookahead == 'u') ADVANCE(236);
      END_STATE();
    case 288:
      if (lookahead == 'o') ADVANCE(411);
      END_STATE();
    case 289:
      if (lookahead == 'o') ADVANCE(246);
      END_STATE();
    case 290:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 291:
      if (lookahead == 'o') ADVANCE(315);
      END_STATE();
    case 292:
      if (lookahead == 'o') ADVANCE(271);
      END_STATE();
    case 293:
      if (lookahead == 'o') ADVANCE(254);
      END_STATE();
    case 294:
      if (lookahead == 'o') ADVANCE(319);
      END_STATE();
    case 295:
      if (lookahead == 'o') ADVANCE(257);
      END_STATE();
    case 296:
      if (lookahead == 'o') ADVANCE(258);
      END_STATE();
    case 297:
      if (lookahead == 'o') ADVANCE(321);
      END_STATE();
    case 298:
      if (lookahead == 'o') ADVANCE(259);
      END_STATE();
    case 299:
      if (lookahead == 'o') ADVANCE(322);
      END_STATE();
    case 300:
      if (lookahead == 'o') ADVANCE(275);
      END_STATE();
    case 301:
      if (lookahead == 'o') ADVANCE(278);
      END_STATE();
    case 302:
      if (lookahead == 'o') ADVANCE(280);
      END_STATE();
    case 303:
      if (lookahead == 'o') ADVANCE(284);
      END_STATE();
    case 304:
      if (lookahead == 'o') ADVANCE(338);
      END_STATE();
    case 305:
      if (lookahead == 'o') ADVANCE(416);
      END_STATE();
    case 306:
      if (lookahead == 'o') ADVANCE(340);
      END_STATE();
    case 307:
      if (lookahead == 'o') ADVANCE(341);
      END_STATE();
    case 308:
      if (lookahead == 'p') ADVANCE(226);
      END_STATE();
    case 309:
      if (lookahead == 'p') ADVANCE(381);
      END_STATE();
    case 310:
      if (lookahead == 'p') ADVANCE(229);
      END_STATE();
    case 311:
      if (lookahead == 'p') ADVANCE(383);
      END_STATE();
    case 312:
      if (lookahead == 'p') ADVANCE(384);
      END_STATE();
    case 313:
      if (lookahead == 'p') ADVANCE(355);
      END_STATE();
    case 314:
      if (lookahead == 'p') ADVANCE(163);
      END_STATE();
    case 315:
      if (lookahead == 'r') ADVANCE(530);
      END_STATE();
    case 316:
      if (lookahead == 'r') ADVANCE(555);
      END_STATE();
    case 317:
      if (lookahead == 'r') ADVANCE(543);
      END_STATE();
    case 318:
      if (lookahead == 'r') ADVANCE(609);
      END_STATE();
    case 319:
      if (lookahead == 'r') ADVANCE(606);
      END_STATE();
    case 320:
      if (lookahead == 'r') ADVANCE(477);
      END_STATE();
    case 321:
      if (lookahead == 'r') ADVANCE(1088);
      END_STATE();
    case 322:
      if (lookahead == 'r') ADVANCE(1084);
      END_STATE();
    case 323:
      if (lookahead == 'r') ADVANCE(601);
      END_STATE();
    case 324:
      if (lookahead == 'r') ADVANCE(553);
      END_STATE();
    case 325:
      if (lookahead == 'r') ADVANCE(541);
      END_STATE();
    case 326:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 327:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 328:
      if (lookahead == 'r') ADVANCE(428);
      END_STATE();
    case 329:
      if (lookahead == 'r') ADVANCE(374);
      END_STATE();
    case 330:
      if (lookahead == 'r') ADVANCE(3);
      END_STATE();
    case 331:
      if (lookahead == 'r') ADVANCE(380);
      END_STATE();
    case 332:
      if (lookahead == 'r') ADVANCE(351);
      END_STATE();
    case 333:
      if (lookahead == 'r') ADVANCE(274);
      END_STATE();
    case 334:
      if (lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 335:
      if (lookahead == 'r') ADVANCE(233);
      END_STATE();
    case 336:
      if (lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 337:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 338:
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 339:
      if (lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 340:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 341:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 342:
      if (lookahead == 'r') ADVANCE(414);
      END_STATE();
    case 343:
      if (lookahead == 'r') ADVANCE(363);
      END_STATE();
    case 344:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 345:
      if (lookahead == 'r') ADVANCE(397);
      END_STATE();
    case 346:
      if (lookahead == 'r') ADVANCE(417);
      END_STATE();
    case 347:
      if (lookahead == 's') ADVANCE(508);
      END_STATE();
    case 348:
      if (lookahead == 's') ADVANCE(614);
      END_STATE();
    case 349:
      if (lookahead == 's') ADVANCE(629);
      END_STATE();
    case 350:
      if (lookahead == 's') ADVANCE(512);
      END_STATE();
    case 351:
      if (lookahead == 's') ADVANCE(616);
      END_STATE();
    case 352:
      if (lookahead == 's') ADVANCE(612);
      END_STATE();
    case 353:
      if (lookahead == 's') ADVANCE(532);
      END_STATE();
    case 354:
      if (lookahead == 's') ADVANCE(598);
      END_STATE();
    case 355:
      if (lookahead == 's') ADVANCE(631);
      END_STATE();
    case 356:
      if (lookahead == 's') ADVANCE(603);
      END_STATE();
    case 357:
      if (lookahead == 's') ADVANCE(4);
      END_STATE();
    case 358:
      if (lookahead == 's') ADVANCE(204);
      END_STATE();
    case 359:
      if (lookahead == 's') ADVANCE(357);
      END_STATE();
    case 360:
      if (lookahead == 's') ADVANCE(371);
      END_STATE();
    case 361:
      if (lookahead == 's') ADVANCE(115);
      END_STATE();
    case 362:
      if (lookahead == 's') ADVANCE(356);
      END_STATE();
    case 363:
      if (lookahead == 's') ADVANCE(162);
      END_STATE();
    case 364:
      if (lookahead == 's') ADVANCE(169);
      END_STATE();
    case 365:
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 366:
      if (lookahead == 's') ADVANCE(310);
      END_STATE();
    case 367:
      if (lookahead == 's') ADVANCE(152);
      END_STATE();
    case 368:
      if (lookahead == 's') ADVANCE(396);
      END_STATE();
    case 369:
      if (lookahead == 's') ADVANCE(153);
      END_STATE();
    case 370:
      if (lookahead == 's') ADVANCE(400);
      END_STATE();
    case 371:
      if (lookahead == 's') ADVANCE(297);
      END_STATE();
    case 372:
      if (lookahead == 's') ADVANCE(401);
      END_STATE();
    case 373:
      if (lookahead == 's') ADVANCE(299);
      END_STATE();
    case 374:
      if (lookahead == 's') ADVANCE(216);
      END_STATE();
    case 375:
      if (lookahead == 's') ADVANCE(373);
      END_STATE();
    case 376:
      if (lookahead == 's') ADVANCE(172);
      END_STATE();
    case 377:
      if (lookahead == 't') ADVANCE(502);
      END_STATE();
    case 378:
      if (lookahead == 't') ADVANCE(197);
      END_STATE();
    case 379:
      if (lookahead == 't') ADVANCE(510);
      END_STATE();
    case 380:
      if (lookahead == 't') ADVANCE(621);
      END_STATE();
    case 381:
      if (lookahead == 't') ADVANCE(539);
      END_STATE();
    case 382:
      if (lookahead == 't') ADVANCE(1080);
      END_STATE();
    case 383:
      if (lookahead == 't') ADVANCE(1064);
      END_STATE();
    case 384:
      if (lookahead == 't') ADVANCE(472);
      END_STATE();
    case 385:
      if (lookahead == 't') ADVANCE(485);
      END_STATE();
    case 386:
      if (lookahead == 't') ADVANCE(479);
      END_STATE();
    case 387:
      if (lookahead == 't') ADVANCE(459);
      END_STATE();
    case 388:
      if (lookahead == 't') ADVANCE(537);
      END_STATE();
    case 389:
      if (lookahead == 't') ADVANCE(587);
      END_STATE();
    case 390:
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 391:
      if (lookahead == 't') ADVANCE(195);
      END_STATE();
    case 392:
      if (lookahead == 't') ADVANCE(198);
      END_STATE();
    case 393:
      if (lookahead == 't') ADVANCE(196);
      END_STATE();
    case 394:
      if (lookahead == 't') ADVANCE(349);
      END_STATE();
    case 395:
      if (lookahead == 't') ADVANCE(110);
      if (lookahead == 'y') ADVANCE(552);
      END_STATE();
    case 396:
      if (lookahead == 't') ADVANCE(350);
      END_STATE();
    case 397:
      if (lookahead == 't') ADVANCE(352);
      END_STATE();
    case 398:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 399:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 400:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 401:
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 402:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 403:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 404:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 405:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 406:
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 407:
      if (lookahead == 't') ADVANCE(217);
      END_STATE();
    case 408:
      if (lookahead == 't') ADVANCE(218);
      END_STATE();
    case 409:
      if (lookahead == 'u') ADVANCE(433);
      if (lookahead == 'x') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1108);
      if (lookahead != 0) ADVANCE(1106);
      END_STATE();
    case 410:
      if (lookahead == 'u') ADVANCE(236);
      END_STATE();
    case 411:
      if (lookahead == 'u') ADVANCE(316);
      END_STATE();
    case 412:
      if (lookahead == 'u') ADVANCE(143);
      END_STATE();
    case 413:
      if (lookahead == 'u') ADVANCE(238);
      END_STATE();
    case 414:
      if (lookahead == 'u') ADVANCE(113);
      END_STATE();
    case 415:
      if (lookahead == 'u') ADVANCE(146);
      END_STATE();
    case 416:
      if (lookahead == 'u') ADVANCE(324);
      END_STATE();
    case 417:
      if (lookahead == 'u') ADVANCE(124);
      END_STATE();
    case 418:
      if (lookahead == 'u') ADVANCE(398);
      END_STATE();
    case 419:
      if (lookahead == 'u') ADVANCE(99);
      END_STATE();
    case 420:
      if (lookahead == 'u') ADVANCE(100);
      END_STATE();
    case 421:
      if (lookahead == 'u') ADVANCE(332);
      END_STATE();
    case 422:
      if (lookahead == 'u') ADVANCE(402);
      END_STATE();
    case 423:
      if (lookahead == 'v') ADVANCE(60);
      END_STATE();
    case 424:
      if (lookahead == 'w') ADVANCE(155);
      END_STATE();
    case 425:
      if (lookahead == 'x') ADVANCE(385);
      END_STATE();
    case 426:
      if (lookahead == 'y') ADVANCE(552);
      END_STATE();
    case 427:
      if (lookahead == 'y') ADVANCE(1076);
      END_STATE();
    case 428:
      if (lookahead == 'y') ADVANCE(449);
      END_STATE();
    case 429:
      if (lookahead == 'y') ADVANCE(514);
      END_STATE();
    case 430:
      if (lookahead == 'y') ADVANCE(550);
      END_STATE();
    case 431:
      if (lookahead == 'y') ADVANCE(370);
      END_STATE();
    case 432:
      if (lookahead == 'y') ADVANCE(372);
      END_STATE();
    case 433:
      if (lookahead == '{') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(436);
      END_STATE();
    case 434:
      if (lookahead == '}') ADVANCE(1106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(434);
      END_STATE();
    case 435:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1110);
      END_STATE();
    case 436:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(439);
      END_STATE();
    case 437:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1106);
      END_STATE();
    case 438:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(434);
      END_STATE();
    case 439:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(437);
      END_STATE();
    case 440:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 441:
      if (eof) ADVANCE(448);
      if (lookahead == '!') ADVANCE(27);
      if (lookahead == '"') ADVANCE(1061);
      if (lookahead == '\'') ADVANCE(1092);
      if (lookahead == '(') ADVANCE(492);
      if (lookahead == ')') ADVANCE(493);
      if (lookahead == ',') ADVANCE(475);
      if (lookahead == '.') ADVANCE(487);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == ':') ADVANCE(461);
      if (lookahead == '<') ADVANCE(525);
      if (lookahead == '=') ADVANCE(520);
      if (lookahead == '>') ADVANCE(526);
      if (lookahead == 'C') ADVANCE(286);
      if (lookahead == '[') ADVANCE(637);
      if (lookahead == ']') ADVANCE(638);
      if (lookahead == 'a') ADVANCE(177);
      if (lookahead == 'b') ADVANCE(104);
      if (lookahead == 'c') ADVANCE(29);
      if (lookahead == 'd') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead == 'f') ADVANCE(32);
      if (lookahead == 'h') ADVANCE(288);
      if (lookahead == 'i') ADVANCE(244);
      if (lookahead == 'l') ADVANCE(106);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead == 'n') ADVANCE(287);
      if (lookahead == 'o') ADVANCE(65);
      if (lookahead == 'p') ADVANCE(35);
      if (lookahead == 's') ADVANCE(33);
      if (lookahead == 't') ADVANCE(213);
      if (lookahead == 'u') ADVANCE(252);
      if (lookahead == 'v') ADVANCE(40);
      if (lookahead == 'w') ADVANCE(137);
      if (lookahead == 'x') ADVANCE(291);
      if (lookahead == 'y') ADVANCE(159);
      if (lookahead == '{') ADVANCE(474);
      if (lookahead == '|') ADVANCE(534);
      if (lookahead == '}') ADVANCE(476);
      if (lookahead == '~') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1109);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(441)
      END_STATE();
    case 442:
      if (eof) ADVANCE(448);
      if (lookahead == '!') ADVANCE(27);
      if (lookahead == '"') ADVANCE(1061);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '<') ADVANCE(525);
      if (lookahead == '=') ADVANCE(520);
      if (lookahead == '>') ADVANCE(526);
      if (lookahead == 'a') ADVANCE(807);
      if (lookahead == 'b') ADVANCE(745);
      if (lookahead == 'c') ADVANCE(922);
      if (lookahead == 'd') ADVANCE(766);
      if (lookahead == 'e') ADVANCE(906);
      if (lookahead == 'i') ADVANCE(869);
      if (lookahead == 'l') ADVANCE(788);
      if (lookahead == 'm') ADVANCE(751);
      if (lookahead == 'o') ADVANCE(687);
      if (lookahead == 'p') ADVANCE(667);
      if (lookahead == 's') ADVANCE(673);
      if (lookahead == 'u') ADVANCE(887);
      if (lookahead == 'v') ADVANCE(654);
      if (lookahead == 'w') ADVANCE(835);
      if (lookahead == 'x') ADVANCE(913);
      if (lookahead == '|') ADVANCE(534);
      if (lookahead == '~') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1109);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(442)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 443:
      if (eof) ADVANCE(448);
      if (lookahead == '!') ADVANCE(27);
      if (lookahead == '"') ADVANCE(1061);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '<') ADVANCE(525);
      if (lookahead == '=') ADVANCE(520);
      if (lookahead == '>') ADVANCE(526);
      if (lookahead == 'a') ADVANCE(807);
      if (lookahead == 'b') ADVANCE(745);
      if (lookahead == 'c') ADVANCE(925);
      if (lookahead == 'd') ADVANCE(766);
      if (lookahead == 'e') ADVANCE(906);
      if (lookahead == 'i') ADVANCE(870);
      if (lookahead == 'l') ADVANCE(788);
      if (lookahead == 'm') ADVANCE(751);
      if (lookahead == 'o') ADVANCE(687);
      if (lookahead == 'p') ADVANCE(952);
      if (lookahead == 's') ADVANCE(673);
      if (lookahead == 'u') ADVANCE(888);
      if (lookahead == 'w') ADVANCE(835);
      if (lookahead == 'x') ADVANCE(913);
      if (lookahead == '|') ADVANCE(534);
      if (lookahead == '~') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1109);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(443)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 444:
      if (eof) ADVANCE(448);
      if (lookahead == '!') ADVANCE(27);
      if (lookahead == '\'') ADVANCE(1092);
      if (lookahead == ')') ADVANCE(493);
      if (lookahead == ',') ADVANCE(475);
      if (lookahead == '.') ADVANCE(487);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '<') ADVANCE(525);
      if (lookahead == '=') ADVANCE(520);
      if (lookahead == '>') ADVANCE(526);
      if (lookahead == 'a') ADVANCE(177);
      if (lookahead == 'b') ADVANCE(103);
      if (lookahead == 'c') ADVANCE(290);
      if (lookahead == 'd') ADVANCE(44);
      if (lookahead == 'e') ADVANCE(276);
      if (lookahead == 'f') ADVANCE(31);
      if (lookahead == 'h') ADVANCE(288);
      if (lookahead == 'i') ADVANCE(245);
      if (lookahead == 'l') ADVANCE(105);
      if (lookahead == 'm') ADVANCE(130);
      if (lookahead == 'n') ADVANCE(410);
      if (lookahead == 'o') ADVANCE(65);
      if (lookahead == 'p') ADVANCE(36);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == 't') ADVANCE(342);
      if (lookahead == 'u') ADVANCE(252);
      if (lookahead == 'v') ADVANCE(39);
      if (lookahead == 'w') ADVANCE(138);
      if (lookahead == 'x') ADVANCE(291);
      if (lookahead == 'y') ADVANCE(159);
      if (lookahead == '|') ADVANCE(534);
      if (lookahead == '~') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1109);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(444)
      END_STATE();
    case 445:
      if (eof) ADVANCE(448);
      if (lookahead == '"') ADVANCE(1061);
      if (lookahead == '\'') ADVANCE(1093);
      if (lookahead == '(') ADVANCE(492);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '[') ADVANCE(637);
      if (lookahead == 'a') ADVANCE(968);
      if (lookahead == 'b') ADVANCE(1054);
      if (lookahead == 'c') ADVANCE(647);
      if (lookahead == 'd') ADVANCE(651);
      if (lookahead == 'e') ADVANCE(877);
      if (lookahead == 'f') ADVANCE(650);
      if (lookahead == 'h') ADVANCE(915);
      if (lookahead == 'i') ADVANCE(866);
      if (lookahead == 'l') ADVANCE(819);
      if (lookahead == 'm') ADVANCE(749);
      if (lookahead == 'n') ADVANCE(909);
      if (lookahead == 'o') ADVANCE(937);
      if (lookahead == 'p') ADVANCE(666);
      if (lookahead == 's') ADVANCE(795);
      if (lookahead == 't') ADVANCE(820);
      if (lookahead == 'u') ADVANCE(887);
      if (lookahead == 'v') ADVANCE(653);
      if (lookahead == 'w') ADVANCE(779);
      if (lookahead == 'x') ADVANCE(913);
      if (lookahead == 'y') ADVANCE(791);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1109);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(445)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 446:
      if (eof) ADVANCE(448);
      if (lookahead == '"') ADVANCE(1061);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == 'C') ADVANCE(912);
      if (lookahead == 'a') ADVANCE(968);
      if (lookahead == 'b') ADVANCE(1054);
      if (lookahead == 'c') ADVANCE(670);
      if (lookahead == 'd') ADVANCE(665);
      if (lookahead == 'e') ADVANCE(879);
      if (lookahead == 'f') ADVANCE(843);
      if (lookahead == 'i') ADVANCE(867);
      if (lookahead == 'l') ADVANCE(819);
      if (lookahead == 'm') ADVANCE(750);
      if (lookahead == 'o') ADVANCE(937);
      if (lookahead == 'p') ADVANCE(666);
      if (lookahead == 's') ADVANCE(1003);
      if (lookahead == 't') ADVANCE(822);
      if (lookahead == 'u') ADVANCE(887);
      if (lookahead == 'v') ADVANCE(653);
      if (lookahead == 'w') ADVANCE(817);
      if (lookahead == 'x') ADVANCE(913);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(446)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 447:
      if (eof) ADVANCE(448);
      if (lookahead == '\'') ADVANCE(1092);
      if (lookahead == '(') ADVANCE(492);
      if (lookahead == ',') ADVANCE(475);
      if (lookahead == '.') ADVANCE(487);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == ':') ADVANCE(461);
      if (lookahead == ']') ADVANCE(638);
      if (lookahead == 'a') ADVANCE(177);
      if (lookahead == 'b') ADVANCE(142);
      if (lookahead == 'c') ADVANCE(58);
      if (lookahead == 'd') ADVANCE(43);
      if (lookahead == 'f') ADVANCE(62);
      if (lookahead == 'h') ADVANCE(288);
      if (lookahead == 'i') ADVANCE(277);
      if (lookahead == 'l') ADVANCE(200);
      if (lookahead == 'm') ADVANCE(201);
      if (lookahead == 'n') ADVANCE(410);
      if (lookahead == 'o') ADVANCE(178);
      if (lookahead == 'p') ADVANCE(37);
      if (lookahead == 's') ADVANCE(131);
      if (lookahead == 't') ADVANCE(346);
      if (lookahead == 'u') ADVANCE(358);
      if (lookahead == 'v') ADVANCE(40);
      if (lookahead == 'w') ADVANCE(136);
      if (lookahead == 'y') ADVANCE(159);
      if (lookahead == '}') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1109);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(447)
      END_STATE();
    case 448:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_library);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_library);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_using);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_called);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_called);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(645);
      if (lookahead == 's') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == 'd') ADVANCE(6);
      if (lookahead == 's') ADVANCE(624);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_valueset);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_valueset);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_codesystem);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_codesystem);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(1071);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_codesystem);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_codesystem);
      if (lookahead == 's') ADVANCE(1070);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_code);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(1058);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_code);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(1059);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_code);
      if (lookahead == 's') ADVANCE(431);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_code);
      if (lookahead == 's') ADVANCE(432);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_from);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_concept);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_concept);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_parameter);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_public);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_private);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_context);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_context);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_define);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_function);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_external);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_external);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_is);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_cast);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_cast);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_exists);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_exists);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_properly);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_properly);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_between);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_between);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_BANG_TILDE);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(524);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(527);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_xor);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_implies);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_implies);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_union);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_intersect);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_intersect);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_except);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_except);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_year);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_year);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_year);
      if (lookahead == 's') ADVANCE(565);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_month);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_month);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_month);
      if (lookahead == 's') ADVANCE(567);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_week);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_week);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_week);
      if (lookahead == 's') ADVANCE(569);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_day);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_day);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_day);
      if (lookahead == 's') ADVANCE(571);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_hour);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_hour);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_hour);
      if (lookahead == 's') ADVANCE(573);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_minute);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_minute);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_minute);
      if (lookahead == 's') ADVANCE(575);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_second);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_second);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_second);
      if (lookahead == 's') ADVANCE(577);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_millisecond);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_millisecond);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_millisecond);
      if (lookahead == 's') ADVANCE(579);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_years);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_years);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_months);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_months);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_weeks);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_weeks);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_days);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_days);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_hours);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_hours);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_minutes);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_minutes);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_seconds);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_seconds);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_milliseconds);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_milliseconds);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_date);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_date);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_time);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'z') ADVANCE(924);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1060);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_time);
      if (lookahead == 'z') ADVANCE(303);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_timezone);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_timezone);
      if (lookahead == 'o') ADVANCE(182);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_timezoneoffset);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_timezoneoffset);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_duration);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_duration);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(853);
      if (lookahead == 't') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(862);
      if (lookahead == 't') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'c') ADVANCE(232);
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_difference);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_difference);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_contains);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_contains);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_orbefore);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_orafter);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_ormore);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_orless);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_lessthan);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_morethan);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_onor);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_before);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_before);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_after);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_after);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_oron);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_starts);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_starts);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_ends);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_ends);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_occurs);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_occurs);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_same);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_same);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_start);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(890);
      if (lookahead == 's') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_start);
      if (lookahead == 'i') ADVANCE(267);
      if (lookahead == 's') ADVANCE(612);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == 's') ADVANCE(614);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_includes);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_includes);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_during);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_during);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_includedin);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_meets);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_meets);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_overlaps);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_overlaps);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_within);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_within);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_version);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == ' ') ADVANCE(46);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == ' ') ADVANCE(47);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == ' ') ADVANCE(392);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == ' ') ADVANCE(294);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == ' ') ADVANCE(211);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == ' ') ADVANCE(406);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(848);
      if (lookahead == 'o') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(1022);
      if (lookahead == 'e') ADVANCE(799);
      if (lookahead == 'i') ADVANCE(800);
      if (lookahead == 'u') ADVANCE(945);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(1022);
      if (lookahead == 'e') ADVANCE(799);
      if (lookahead == 'i') ADVANCE(800);
      if (lookahead == 'u') ADVANCE(946);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(846);
      if (lookahead == 'l') ADVANCE(1039);
      if (lookahead == 'r') ADVANCE(911);
      if (lookahead == 'u') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(1023);
      if (lookahead == 'e') ADVANCE(799);
      if (lookahead == 'i') ADVANCE(800);
      if (lookahead == 'u') ADVANCE(945);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(1055);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(860);
      if (lookahead == 'e') ADVANCE(948);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(860);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(934);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(1041);
      if (lookahead == 'i') ADVANCE(902);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(951);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(1034);
      if (lookahead == 'i') ADVANCE(895);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(1034);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(829);
      if (lookahead == 'e') ADVANCE(1053);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(940);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(949);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(966);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(1024);
      if (lookahead == 'e') ADVANCE(799);
      if (lookahead == 'i') ADVANCE(992);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(947);
      if (lookahead == 'r') ADVANCE(756);
      if (lookahead == 'u') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(947);
      if (lookahead == 'r') ADVANCE(823);
      if (lookahead == 'u') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(947);
      if (lookahead == 'r') ADVANCE(755);
      if (lookahead == 'u') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(876);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(849);
      if (lookahead == 'o') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(1027);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(875);
      if (lookahead == 'e') ADVANCE(681);
      if (lookahead == 't') ADVANCE(657);
      if (lookahead == 'u') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(875);
      if (lookahead == 't') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(958);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(861);
      if (lookahead == 'l') ADVANCE(1039);
      if (lookahead == 'u') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'b') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'b') ADVANCE(965);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(1066);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(1072);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(923);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(853);
      if (lookahead == 't') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(753);
      if (lookahead == 'i') ADVANCE(994);
      if (lookahead == 't') ADVANCE(772);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(753);
      if (lookahead == 'i') ADVANCE(994);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(696);
      if (lookahead == 'n') ADVANCE(644);
      if (lookahead == 'r') ADVANCE(529);
      if (lookahead == 'v') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(1014);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(784);
      if (lookahead == 't') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(784);
      if (lookahead == 't') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(926);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(862);
      if (lookahead == 't') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(1050);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(928);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(863);
      if (lookahead == 't') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(929);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(1035);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(794);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(1083);
      if (lookahead == 'n') ADVANCE(1006);
      if (lookahead == 'r') ADVANCE(793);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(1083);
      if (lookahead == 'n') ADVANCE(1006);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(1083);
      if (lookahead == 'n') ADVANCE(1018);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(1083);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(645);
      if (lookahead == 's') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(727);
      if (lookahead == 'n') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(1017);
      if (lookahead == 't') ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(1017);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(980);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(983);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(970);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(741);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(742);
      if (lookahead == 'n') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(797);
      if (lookahead == 'n') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(841);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(1053);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(1063);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(757);
      if (lookahead == 'i') ADVANCE(856);
      if (lookahead == 'o') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(757);
      if (lookahead == 'i') ADVANCE(856);
      if (lookahead == 'o') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(757);
      if (lookahead == 'i') ADVANCE(865);
      if (lookahead == 'o') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(757);
      if (lookahead == 'o') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(757);
      if (lookahead == 'o') ADVANCE(962);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(681);
      if (lookahead == 't') ADVANCE(657);
      if (lookahead == 'u') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(931);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(842);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(715);
      if (lookahead == 'i') ADVANCE(1051);
      if (lookahead == 'o') ADVANCE(936);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(715);
      if (lookahead == 'i') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(1020);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(872);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(726);
      if (lookahead == 'h') ADVANCE(768);
      if (lookahead == 'i') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(726);
      if (lookahead == 'h') ADVANCE(768);
      if (lookahead == 'i') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(873);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(805);
      if (lookahead == 'y') ADVANCE(1069);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(954);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(900);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(802);
      if (lookahead == 'u') ADVANCE(967);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(986);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(959);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(996);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(978);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(941);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(957);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(1032);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(944);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(1013);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(886);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(1015);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(979);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(754);
      if (lookahead == 'h') ADVANCE(768);
      if (lookahead == 'i') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(904);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(964);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(933);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(956);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(988);
      if (lookahead == 'i') ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(988);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(960);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(935);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(1001);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(697);
      if (lookahead == 't') ADVANCE(657);
      if (lookahead == 'u') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(701);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(656);
      if (lookahead == 's') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(803);
      if (lookahead == 's') ADVANCE(932);
      if (lookahead == 'v') ADVANCE(1079);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(826);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(927);
      if (lookahead == 't') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(927);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(998);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(1033);
      if (lookahead == 'n') ADVANCE(710);
      if (lookahead == 's') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(1033);
      if (lookahead == 's') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'g') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'g') ADVANCE(1087);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'g') ADVANCE(1067);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'g') ADVANCE(1075);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'g') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'h') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'h') ADVANCE(1091);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'h') ADVANCE(976);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'h') ADVANCE(768);
      if (lookahead == 'i') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'h') ADVANCE(833);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(874);
      if (lookahead == 'r') ADVANCE(1040);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(874);
      if (lookahead == 'r') ADVANCE(1044);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(874);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(1051);
      if (lookahead == 'o') ADVANCE(936);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(880);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(902);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(916);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(901);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(891);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(893);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(895);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(885);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(1019);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(917);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(990);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(919);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(921);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(1002);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'k') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'k') ADVANCE(973);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(1039);
      if (lookahead == 'u') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(987);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(858);
      if (lookahead == 's') ADVANCE(1005);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(858);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(1057);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(1045);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(852);
      if (lookahead == 'n') ADVANCE(1038);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(1012);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(1042);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(991);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(1047);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(1048);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(840);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(864);
      if (lookahead == 'n') ADVANCE(1049);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'm') ADVANCE(930);
      if (lookahead == 'n') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'm') ADVANCE(930);
      if (lookahead == 'n') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'm') ADVANCE(930);
      if (lookahead == 'n') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'm') ADVANCE(930);
      if (lookahead == 'n') ADVANCE(695);
      if (lookahead == 's') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'm') ADVANCE(930);
      if (lookahead == 'n') ADVANCE(698);
      if (lookahead == 's') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'm') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'm') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'm') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'm') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'm') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'm') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(702);
      if (lookahead == 'x') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(702);
      if (lookahead == 'x') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(702);
      if (lookahead == 'x') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(827);
      if (lookahead == 's') ADVANCE(825);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(827);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(644);
      if (lookahead == 'r') ADVANCE(641);
      if (lookahead == 'v') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(1009);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(981);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(733);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(719);
      if (lookahead == 'x') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(1030);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(1004);
      if (lookahead == 'u') ADVANCE(857);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(1037);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(871);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(938);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(936);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(1046);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(881);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(882);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(942);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(883);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(884);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(725);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(896);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(903);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(907);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(898);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(963);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(899);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(905);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'p') ADVANCE(847);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'p') ADVANCE(1008);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'p') ADVANCE(850);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'p') ADVANCE(1010);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'p') ADVANCE(982);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'p') ADVANCE(1016);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'p') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(641);
      if (lookahead == 'v') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(1089);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(1085);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(1000);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(1056);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(642);
      if (lookahead == 'v') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(1007);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(914);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(824);
      if (lookahead == 'u') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(854);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(971);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(851);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(897);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(974);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(781);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(984);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(793);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(740);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(989);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(1026);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(832);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(993);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(985);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(785);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(744);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(932);
      if (lookahead == 'v') ADVANCE(1079);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(918);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(1021);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(920);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(775);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(1028);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(1031);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(836);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(995);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 's') ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(657);
      if (lookahead == 'u') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(814);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(1081);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(1065);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(972);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(975);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(728);
      if (lookahead == 'y') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(728);
      if (lookahead == 'y') ADVANCE(969);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(734);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(977);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(758);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(778);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(761);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(838);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 't') ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(939);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(1025);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(859);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(967);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(743);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(955);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(720);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(722);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(1029);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(961);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'v') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'w') ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'x') ADVANCE(1011);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'y') ADVANCE(1069);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'y') ADVANCE(1077);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'y') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'y') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'y') ADVANCE(997);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'y') ADVANCE(999);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(anon_sym_Code);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(anon_sym_Code);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(anon_sym_Concept);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(anon_sym_Concept);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(anon_sym_asc);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(892);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(anon_sym_ascending);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(anon_sym_by);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(anon_sym_by);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(anon_sym_codesystems);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(anon_sym_codesystems);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(anon_sym_desc);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(908);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(anon_sym_desc);
      if (lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(anon_sym_descending);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(anon_sym_descending);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(anon_sym_display);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(anon_sym_display);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(anon_sym_div);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(anon_sym_div);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(anon_sym_fluent);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(anon_sym_fluent);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(anon_sym_mod);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(anon_sym_predecessor);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(anon_sym_predecessor);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(anon_sym_starting);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(anon_sym_starting);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(anon_sym_successor);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(anon_sym_successor);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(anon_sym_width);
      if (lookahead == '\'') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1060);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '_') ADVANCE(21);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym_single_quote_string_fragment);
      if (lookahead == '\n') ADVANCE(1099);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(1094);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym_single_quote_string_fragment);
      if (lookahead == '*') ADVANCE(1097);
      if (lookahead == '/') ADVANCE(1094);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(1099);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym_single_quote_string_fragment);
      if (lookahead == '*') ADVANCE(1096);
      if (lookahead == '/') ADVANCE(1099);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(1097);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym_single_quote_string_fragment);
      if (lookahead == '*') ADVANCE(1096);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(1097);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym_single_quote_string_fragment);
      if (lookahead == '/') ADVANCE(1095);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(1098);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(1099);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym_single_quote_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(1099);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '\n') ADVANCE(1105);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1100);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '*') ADVANCE(1103);
      if (lookahead == '/') ADVANCE(1100);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1105);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '*') ADVANCE(1102);
      if (lookahead == '/') ADVANCE(1105);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1103);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '*') ADVANCE(1102);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1103);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '/') ADVANCE(1101);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(1104);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1105);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1105);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1106);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1107);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '\'') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1109);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1110);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1112);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 447},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 9},
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 445},
  [10] = {.lex_state = 445},
  [11] = {.lex_state = 11},
  [12] = {.lex_state = 445},
  [13] = {.lex_state = 445},
  [14] = {.lex_state = 445},
  [15] = {.lex_state = 445},
  [16] = {.lex_state = 445},
  [17] = {.lex_state = 445},
  [18] = {.lex_state = 445},
  [19] = {.lex_state = 445},
  [20] = {.lex_state = 445},
  [21] = {.lex_state = 445},
  [22] = {.lex_state = 445},
  [23] = {.lex_state = 445},
  [24] = {.lex_state = 445},
  [25] = {.lex_state = 445},
  [26] = {.lex_state = 445},
  [27] = {.lex_state = 445},
  [28] = {.lex_state = 445},
  [29] = {.lex_state = 445},
  [30] = {.lex_state = 445},
  [31] = {.lex_state = 445},
  [32] = {.lex_state = 445},
  [33] = {.lex_state = 445},
  [34] = {.lex_state = 445},
  [35] = {.lex_state = 445},
  [36] = {.lex_state = 445},
  [37] = {.lex_state = 445},
  [38] = {.lex_state = 445},
  [39] = {.lex_state = 445},
  [40] = {.lex_state = 445},
  [41] = {.lex_state = 445},
  [42] = {.lex_state = 445},
  [43] = {.lex_state = 445},
  [44] = {.lex_state = 445},
  [45] = {.lex_state = 445},
  [46] = {.lex_state = 445},
  [47] = {.lex_state = 445},
  [48] = {.lex_state = 445},
  [49] = {.lex_state = 445},
  [50] = {.lex_state = 445},
  [51] = {.lex_state = 13},
  [52] = {.lex_state = 12},
  [53] = {.lex_state = 9},
  [54] = {.lex_state = 9},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 9},
  [57] = {.lex_state = 9},
  [58] = {.lex_state = 9},
  [59] = {.lex_state = 10},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 445},
  [62] = {.lex_state = 445},
  [63] = {.lex_state = 445},
  [64] = {.lex_state = 445},
  [65] = {.lex_state = 445},
  [66] = {.lex_state = 445},
  [67] = {.lex_state = 445},
  [68] = {.lex_state = 445},
  [69] = {.lex_state = 445},
  [70] = {.lex_state = 445},
  [71] = {.lex_state = 445},
  [72] = {.lex_state = 444},
  [73] = {.lex_state = 16},
  [74] = {.lex_state = 446},
  [75] = {.lex_state = 446},
  [76] = {.lex_state = 14},
  [77] = {.lex_state = 446},
  [78] = {.lex_state = 446},
  [79] = {.lex_state = 14},
  [80] = {.lex_state = 446},
  [81] = {.lex_state = 446},
  [82] = {.lex_state = 446},
  [83] = {.lex_state = 446},
  [84] = {.lex_state = 446},
  [85] = {.lex_state = 446},
  [86] = {.lex_state = 14},
  [87] = {.lex_state = 14},
  [88] = {.lex_state = 14},
  [89] = {.lex_state = 14},
  [90] = {.lex_state = 14},
  [91] = {.lex_state = 14},
  [92] = {.lex_state = 446},
  [93] = {.lex_state = 14},
  [94] = {.lex_state = 446},
  [95] = {.lex_state = 446},
  [96] = {.lex_state = 446},
  [97] = {.lex_state = 446},
  [98] = {.lex_state = 14},
  [99] = {.lex_state = 444},
  [100] = {.lex_state = 444},
  [101] = {.lex_state = 444},
  [102] = {.lex_state = 444},
  [103] = {.lex_state = 444},
  [104] = {.lex_state = 444},
  [105] = {.lex_state = 444},
  [106] = {.lex_state = 444},
  [107] = {.lex_state = 444},
  [108] = {.lex_state = 444},
  [109] = {.lex_state = 444},
  [110] = {.lex_state = 444},
  [111] = {.lex_state = 444},
  [112] = {.lex_state = 444},
  [113] = {.lex_state = 444},
  [114] = {.lex_state = 444},
  [115] = {.lex_state = 444},
  [116] = {.lex_state = 444},
  [117] = {.lex_state = 444},
  [118] = {.lex_state = 444},
  [119] = {.lex_state = 444},
  [120] = {.lex_state = 444},
  [121] = {.lex_state = 444},
  [122] = {.lex_state = 444},
  [123] = {.lex_state = 444},
  [124] = {.lex_state = 444},
  [125] = {.lex_state = 444},
  [126] = {.lex_state = 442},
  [127] = {.lex_state = 442},
  [128] = {.lex_state = 442},
  [129] = {.lex_state = 444},
  [130] = {.lex_state = 444},
  [131] = {.lex_state = 444},
  [132] = {.lex_state = 444},
  [133] = {.lex_state = 444},
  [134] = {.lex_state = 444},
  [135] = {.lex_state = 444},
  [136] = {.lex_state = 444},
  [137] = {.lex_state = 444},
  [138] = {.lex_state = 444},
  [139] = {.lex_state = 444},
  [140] = {.lex_state = 444},
  [141] = {.lex_state = 444},
  [142] = {.lex_state = 444},
  [143] = {.lex_state = 444},
  [144] = {.lex_state = 444},
  [145] = {.lex_state = 444},
  [146] = {.lex_state = 444},
  [147] = {.lex_state = 444},
  [148] = {.lex_state = 444},
  [149] = {.lex_state = 444},
  [150] = {.lex_state = 444},
  [151] = {.lex_state = 444},
  [152] = {.lex_state = 444},
  [153] = {.lex_state = 444},
  [154] = {.lex_state = 444},
  [155] = {.lex_state = 444},
  [156] = {.lex_state = 444},
  [157] = {.lex_state = 444},
  [158] = {.lex_state = 444},
  [159] = {.lex_state = 444},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 443},
  [191] = {.lex_state = 443},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 443},
  [194] = {.lex_state = 8},
  [195] = {.lex_state = 8},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 8},
  [198] = {.lex_state = 447},
  [199] = {.lex_state = 447},
  [200] = {.lex_state = 447},
  [201] = {.lex_state = 447},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 447},
  [204] = {.lex_state = 447},
  [205] = {.lex_state = 447},
  [206] = {.lex_state = 447},
  [207] = {.lex_state = 447},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 447},
  [210] = {.lex_state = 447},
  [211] = {.lex_state = 447},
  [212] = {.lex_state = 447},
  [213] = {.lex_state = 447},
  [214] = {.lex_state = 447},
  [215] = {.lex_state = 447},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 447},
  [218] = {.lex_state = 447},
  [219] = {.lex_state = 447},
  [220] = {.lex_state = 447},
  [221] = {.lex_state = 447},
  [222] = {.lex_state = 447},
  [223] = {.lex_state = 447},
  [224] = {.lex_state = 447},
  [225] = {.lex_state = 447},
  [226] = {.lex_state = 447},
  [227] = {.lex_state = 447},
  [228] = {.lex_state = 447},
  [229] = {.lex_state = 447},
  [230] = {.lex_state = 447},
  [231] = {.lex_state = 447},
  [232] = {.lex_state = 447},
  [233] = {.lex_state = 447},
  [234] = {.lex_state = 447},
  [235] = {.lex_state = 26},
  [236] = {.lex_state = 447},
  [237] = {.lex_state = 447},
  [238] = {.lex_state = 447},
  [239] = {.lex_state = 447},
  [240] = {.lex_state = 447},
  [241] = {.lex_state = 26},
  [242] = {.lex_state = 447},
  [243] = {.lex_state = 447},
  [244] = {.lex_state = 447},
  [245] = {.lex_state = 447},
  [246] = {.lex_state = 447},
  [247] = {.lex_state = 447},
  [248] = {.lex_state = 447},
  [249] = {.lex_state = 447},
  [250] = {.lex_state = 447},
  [251] = {.lex_state = 447},
  [252] = {.lex_state = 447},
  [253] = {.lex_state = 447},
  [254] = {.lex_state = 447},
  [255] = {.lex_state = 447},
  [256] = {.lex_state = 447},
  [257] = {.lex_state = 447},
  [258] = {.lex_state = 447},
  [259] = {.lex_state = 447},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 447},
  [262] = {.lex_state = 447},
  [263] = {.lex_state = 447},
  [264] = {.lex_state = 447},
  [265] = {.lex_state = 447},
  [266] = {.lex_state = 447},
  [267] = {.lex_state = 447},
  [268] = {.lex_state = 447},
  [269] = {.lex_state = 447},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 17},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 447},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 447},
  [278] = {.lex_state = 15},
  [279] = {.lex_state = 15},
  [280] = {.lex_state = 15},
  [281] = {.lex_state = 15},
  [282] = {.lex_state = 15},
  [283] = {.lex_state = 447},
  [284] = {.lex_state = 447},
  [285] = {.lex_state = 15},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 15},
  [288] = {.lex_state = 15},
  [289] = {.lex_state = 15},
  [290] = {.lex_state = 18},
  [291] = {.lex_state = 447},
  [292] = {.lex_state = 447},
  [293] = {.lex_state = 15},
  [294] = {.lex_state = 15},
  [295] = {.lex_state = 447},
  [296] = {.lex_state = 15},
  [297] = {.lex_state = 447},
  [298] = {.lex_state = 15},
  [299] = {.lex_state = 15},
  [300] = {.lex_state = 447},
  [301] = {.lex_state = 15},
  [302] = {.lex_state = 15},
  [303] = {.lex_state = 19},
  [304] = {.lex_state = 19},
  [305] = {.lex_state = 19},
  [306] = {.lex_state = 20},
  [307] = {.lex_state = 15},
  [308] = {.lex_state = 15},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 15},
  [311] = {.lex_state = 20},
  [312] = {.lex_state = 15},
  [313] = {.lex_state = 15},
  [314] = {.lex_state = 15},
  [315] = {.lex_state = 15},
  [316] = {.lex_state = 15},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 15},
  [319] = {.lex_state = 15},
  [320] = {.lex_state = 15},
  [321] = {.lex_state = 19},
  [322] = {.lex_state = 20},
  [323] = {.lex_state = 19},
  [324] = {.lex_state = 19},
  [325] = {.lex_state = 15},
  [326] = {.lex_state = 20},
  [327] = {.lex_state = 19},
  [328] = {.lex_state = 15},
  [329] = {.lex_state = 19},
  [330] = {.lex_state = 15},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 15},
  [333] = {.lex_state = 15},
  [334] = {.lex_state = 19},
  [335] = {.lex_state = 20},
  [336] = {.lex_state = 18},
  [337] = {.lex_state = 15},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 15},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 15},
  [350] = {.lex_state = 15},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 444},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 15},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 15},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 15},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 15},
  [375] = {.lex_state = 15},
  [376] = {.lex_state = 15},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 26},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 26},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
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
    [anon_sym_codesystem] = ACTIONS(1),
    [anon_sym_code] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_concept] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_parameter] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_context] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_define] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_external] = ACTIONS(1),
    [aux_sym_literal_token1] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_cast] = ACTIONS(1),
    [anon_sym_exists] = ACTIONS(1),
    [anon_sym_properly] = ACTIONS(1),
    [anon_sym_between] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_BANG_TILDE] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_xor] = ACTIONS(1),
    [anon_sym_implies] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_union] = ACTIONS(1),
    [anon_sym_intersect] = ACTIONS(1),
    [anon_sym_except] = ACTIONS(1),
    [anon_sym_year] = ACTIONS(1),
    [anon_sym_month] = ACTIONS(1),
    [anon_sym_week] = ACTIONS(1),
    [anon_sym_day] = ACTIONS(1),
    [anon_sym_hour] = ACTIONS(1),
    [anon_sym_minute] = ACTIONS(1),
    [anon_sym_second] = ACTIONS(1),
    [anon_sym_millisecond] = ACTIONS(1),
    [anon_sym_years] = ACTIONS(1),
    [anon_sym_months] = ACTIONS(1),
    [anon_sym_weeks] = ACTIONS(1),
    [anon_sym_days] = ACTIONS(1),
    [anon_sym_hours] = ACTIONS(1),
    [anon_sym_minutes] = ACTIONS(1),
    [anon_sym_seconds] = ACTIONS(1),
    [anon_sym_milliseconds] = ACTIONS(1),
    [anon_sym_date] = ACTIONS(1),
    [anon_sym_time] = ACTIONS(1),
    [anon_sym_timezone] = ACTIONS(1),
    [anon_sym_timezoneoffset] = ACTIONS(1),
    [anon_sym_duration] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_difference] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [anon_sym_contains] = ACTIONS(1),
    [anon_sym_lessthan] = ACTIONS(1),
    [anon_sym_morethan] = ACTIONS(1),
    [anon_sym_onor] = ACTIONS(1),
    [anon_sym_before] = ACTIONS(1),
    [anon_sym_after] = ACTIONS(1),
    [anon_sym_starts] = ACTIONS(1),
    [anon_sym_ends] = ACTIONS(1),
    [anon_sym_occurs] = ACTIONS(1),
    [anon_sym_same] = ACTIONS(1),
    [anon_sym_start] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_includes] = ACTIONS(1),
    [anon_sym_during] = ACTIONS(1),
    [anon_sym_includedin] = ACTIONS(1),
    [anon_sym_meets] = ACTIONS(1),
    [anon_sym_overlaps] = ACTIONS(1),
    [anon_sym_within] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_version] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_Code] = ACTIONS(1),
    [anon_sym_Concept] = ACTIONS(1),
    [anon_sym_by] = ACTIONS(1),
    [anon_sym_codesystems] = ACTIONS(1),
    [anon_sym_desc] = ACTIONS(1),
    [anon_sym_descending] = ACTIONS(1),
    [anon_sym_display] = ACTIONS(1),
    [anon_sym_div] = ACTIONS(1),
    [anon_sym_fluent] = ACTIONS(1),
    [anon_sym_mod] = ACTIONS(1),
    [anon_sym_predecessor] = ACTIONS(1),
    [anon_sym_starting] = ACTIONS(1),
    [anon_sym_successor] = ACTIONS(1),
    [anon_sym_width] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_cql_library] = STATE(389),
    [sym_definition] = STATE(200),
    [sym_library_definition] = STATE(199),
    [sym_using_definition] = STATE(246),
    [sym_include_definition] = STATE(246),
    [sym_valueset_definition] = STATE(246),
    [sym_codesystem_definition] = STATE(246),
    [sym_code_definition] = STATE(246),
    [sym_concept_definition] = STATE(246),
    [sym_parameter_definition] = STATE(246),
    [sym_access_modifier] = STATE(295),
    [sym_statement] = STATE(276),
    [sym_context_definition] = STATE(338),
    [sym_function_definition] = STATE(338),
    [sym_expression_definition] = STATE(338),
    [aux_sym_cql_library_repeat1] = STATE(200),
    [aux_sym_cql_library_repeat2] = STATE(276),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_library] = ACTIONS(7),
    [anon_sym_using] = ACTIONS(9),
    [anon_sym_include] = ACTIONS(11),
    [anon_sym_valueset] = ACTIONS(13),
    [anon_sym_codesystem] = ACTIONS(15),
    [anon_sym_code] = ACTIONS(17),
    [anon_sym_concept] = ACTIONS(19),
    [anon_sym_parameter] = ACTIONS(21),
    [anon_sym_public] = ACTIONS(23),
    [anon_sym_private] = ACTIONS(23),
    [anon_sym_context] = ACTIONS(25),
    [anon_sym_define] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_expression] = STATE(103),
    [sym_expression_term] = STATE(150),
    [sym_term] = STATE(148),
    [sym_quantity] = STATE(141),
    [sym_literal] = STATE(157),
    [sym_qualified_identifier_expression] = STATE(374),
    [sym_boolean_expression] = STATE(150),
    [sym_type_expression] = STATE(150),
    [sym_cast_expression] = STATE(150),
    [sym_not_expression] = STATE(150),
    [sym_existence_expression] = STATE(150),
    [sym_between_expression] = STATE(150),
    [sym_equality_expression] = STATE(150),
    [sym_inequality_expression] = STATE(150),
    [sym_and_expression] = STATE(150),
    [sym_or_expression] = STATE(150),
    [sym_implies_expression] = STATE(150),
    [sym_in_fix_set_expression] = STATE(150),
    [sym_date_time_precision] = STATE(417),
    [sym_plural_date_time_precision] = STATE(396),
    [sym_duration_between_expression] = STATE(150),
    [sym_difference_between_expression] = STATE(150),
    [sym_date_time_precision_specifier] = STATE(43),
    [sym_membership_expression] = STATE(150),
    [sym_timing_expression] = STATE(150),
    [sym_query] = STATE(150),
    [sym_query_source] = STATE(301),
    [sym_aliased_query_source] = STATE(117),
    [sym_query_source_clause] = STATE(125),
    [sym_retrieve] = STATE(126),
    [sym_identifier] = STATE(349),
    [sym_quoted_identifier] = STATE(337),
    [sym_referential_identifier] = STATE(302),
    [sym_keyword_identifier] = STATE(349),
    [sym_string] = STATE(146),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(91),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(45),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_year] = ACTIONS(47),
    [anon_sym_month] = ACTIONS(47),
    [anon_sym_week] = ACTIONS(47),
    [anon_sym_day] = ACTIONS(47),
    [anon_sym_hour] = ACTIONS(47),
    [anon_sym_minute] = ACTIONS(47),
    [anon_sym_second] = ACTIONS(47),
    [anon_sym_millisecond] = ACTIONS(47),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(53),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(63),
    [anon_sym_DQUOTE] = ACTIONS(66),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_expression] = STATE(182),
    [sym_expression_term] = STATE(150),
    [sym_term] = STATE(148),
    [sym_quantity] = STATE(141),
    [sym_literal] = STATE(157),
    [sym_qualified_identifier_expression] = STATE(374),
    [sym_boolean_expression] = STATE(150),
    [sym_type_expression] = STATE(150),
    [sym_cast_expression] = STATE(150),
    [sym_not_expression] = STATE(150),
    [sym_existence_expression] = STATE(150),
    [sym_between_expression] = STATE(150),
    [sym_equality_expression] = STATE(150),
    [sym_inequality_expression] = STATE(150),
    [sym_and_expression] = STATE(150),
    [sym_or_expression] = STATE(150),
    [sym_implies_expression] = STATE(150),
    [sym_in_fix_set_expression] = STATE(150),
    [sym_date_time_precision] = STATE(417),
    [sym_plural_date_time_precision] = STATE(396),
    [sym_duration_between_expression] = STATE(150),
    [sym_difference_between_expression] = STATE(150),
    [sym_date_time_precision_specifier] = STATE(19),
    [sym_membership_expression] = STATE(150),
    [sym_timing_expression] = STATE(150),
    [sym_query] = STATE(150),
    [sym_query_source] = STATE(301),
    [sym_aliased_query_source] = STATE(117),
    [sym_query_source_clause] = STATE(196),
    [sym_retrieve] = STATE(197),
    [sym_identifier] = STATE(349),
    [sym_quoted_identifier] = STATE(337),
    [sym_referential_identifier] = STATE(302),
    [sym_keyword_identifier] = STATE(349),
    [sym_string] = STATE(146),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(91),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(73),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(75),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_year] = ACTIONS(47),
    [anon_sym_month] = ACTIONS(47),
    [anon_sym_week] = ACTIONS(47),
    [anon_sym_day] = ACTIONS(47),
    [anon_sym_hour] = ACTIONS(47),
    [anon_sym_minute] = ACTIONS(47),
    [anon_sym_second] = ACTIONS(47),
    [anon_sym_millisecond] = ACTIONS(47),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(77),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(79),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(63),
    [anon_sym_DQUOTE] = ACTIONS(66),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_expression] = STATE(161),
    [sym_expression_term] = STATE(150),
    [sym_term] = STATE(148),
    [sym_quantity] = STATE(141),
    [sym_literal] = STATE(157),
    [sym_qualified_identifier_expression] = STATE(374),
    [sym_boolean_expression] = STATE(150),
    [sym_type_expression] = STATE(150),
    [sym_cast_expression] = STATE(150),
    [sym_not_expression] = STATE(150),
    [sym_existence_expression] = STATE(150),
    [sym_between_expression] = STATE(150),
    [sym_equality_expression] = STATE(150),
    [sym_inequality_expression] = STATE(150),
    [sym_and_expression] = STATE(150),
    [sym_or_expression] = STATE(150),
    [sym_implies_expression] = STATE(150),
    [sym_in_fix_set_expression] = STATE(150),
    [sym_date_time_precision] = STATE(417),
    [sym_plural_date_time_precision] = STATE(396),
    [sym_duration_between_expression] = STATE(150),
    [sym_difference_between_expression] = STATE(150),
    [sym_date_time_precision_specifier] = STATE(29),
    [sym_membership_expression] = STATE(150),
    [sym_timing_expression] = STATE(150),
    [sym_query] = STATE(150),
    [sym_query_source] = STATE(301),
    [sym_aliased_query_source] = STATE(117),
    [sym_query_source_clause] = STATE(189),
    [sym_retrieve] = STATE(193),
    [sym_identifier] = STATE(349),
    [sym_quoted_identifier] = STATE(337),
    [sym_referential_identifier] = STATE(302),
    [sym_keyword_identifier] = STATE(349),
    [sym_string] = STATE(146),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(91),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(83),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(85),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_year] = ACTIONS(47),
    [anon_sym_month] = ACTIONS(47),
    [anon_sym_week] = ACTIONS(47),
    [anon_sym_day] = ACTIONS(47),
    [anon_sym_hour] = ACTIONS(47),
    [anon_sym_minute] = ACTIONS(47),
    [anon_sym_second] = ACTIONS(47),
    [anon_sym_millisecond] = ACTIONS(47),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(87),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(89),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(63),
    [anon_sym_DQUOTE] = ACTIONS(66),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_expression] = STATE(103),
    [sym_expression_term] = STATE(150),
    [sym_term] = STATE(148),
    [sym_quantity] = STATE(141),
    [sym_literal] = STATE(157),
    [sym_qualified_identifier_expression] = STATE(374),
    [sym_boolean_expression] = STATE(150),
    [sym_type_expression] = STATE(150),
    [sym_cast_expression] = STATE(150),
    [sym_not_expression] = STATE(150),
    [sym_existence_expression] = STATE(150),
    [sym_between_expression] = STATE(150),
    [sym_equality_expression] = STATE(150),
    [sym_inequality_expression] = STATE(150),
    [sym_and_expression] = STATE(150),
    [sym_or_expression] = STATE(150),
    [sym_implies_expression] = STATE(150),
    [sym_in_fix_set_expression] = STATE(150),
    [sym_date_time_precision] = STATE(417),
    [sym_plural_date_time_precision] = STATE(396),
    [sym_duration_between_expression] = STATE(150),
    [sym_difference_between_expression] = STATE(150),
    [sym_date_time_precision_specifier] = STATE(43),
    [sym_membership_expression] = STATE(150),
    [sym_timing_expression] = STATE(150),
    [sym_query] = STATE(150),
    [sym_query_source] = STATE(301),
    [sym_aliased_query_source] = STATE(117),
    [sym_query_source_clause] = STATE(125),
    [sym_retrieve] = STATE(126),
    [sym_identifier] = STATE(349),
    [sym_quoted_identifier] = STATE(337),
    [sym_referential_identifier] = STATE(302),
    [sym_keyword_identifier] = STATE(349),
    [sym_string] = STATE(146),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(91),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(45),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_year] = ACTIONS(47),
    [anon_sym_month] = ACTIONS(47),
    [anon_sym_week] = ACTIONS(47),
    [anon_sym_day] = ACTIONS(47),
    [anon_sym_hour] = ACTIONS(47),
    [anon_sym_minute] = ACTIONS(47),
    [anon_sym_second] = ACTIONS(47),
    [anon_sym_millisecond] = ACTIONS(47),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(53),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_expression] = STATE(161),
    [sym_expression_term] = STATE(150),
    [sym_term] = STATE(148),
    [sym_quantity] = STATE(141),
    [sym_literal] = STATE(157),
    [sym_qualified_identifier_expression] = STATE(374),
    [sym_boolean_expression] = STATE(150),
    [sym_type_expression] = STATE(150),
    [sym_cast_expression] = STATE(150),
    [sym_not_expression] = STATE(150),
    [sym_existence_expression] = STATE(150),
    [sym_between_expression] = STATE(150),
    [sym_equality_expression] = STATE(150),
    [sym_inequality_expression] = STATE(150),
    [sym_and_expression] = STATE(150),
    [sym_or_expression] = STATE(150),
    [sym_implies_expression] = STATE(150),
    [sym_in_fix_set_expression] = STATE(150),
    [sym_date_time_precision] = STATE(417),
    [sym_plural_date_time_precision] = STATE(396),
    [sym_duration_between_expression] = STATE(150),
    [sym_difference_between_expression] = STATE(150),
    [sym_date_time_precision_specifier] = STATE(29),
    [sym_membership_expression] = STATE(150),
    [sym_timing_expression] = STATE(150),
    [sym_query] = STATE(150),
    [sym_query_source] = STATE(301),
    [sym_aliased_query_source] = STATE(117),
    [sym_query_source_clause] = STATE(189),
    [sym_retrieve] = STATE(193),
    [sym_identifier] = STATE(349),
    [sym_quoted_identifier] = STATE(337),
    [sym_referential_identifier] = STATE(302),
    [sym_keyword_identifier] = STATE(349),
    [sym_string] = STATE(146),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(91),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(83),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(85),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_year] = ACTIONS(47),
    [anon_sym_month] = ACTIONS(47),
    [anon_sym_week] = ACTIONS(47),
    [anon_sym_day] = ACTIONS(47),
    [anon_sym_hour] = ACTIONS(47),
    [anon_sym_minute] = ACTIONS(47),
    [anon_sym_second] = ACTIONS(47),
    [anon_sym_millisecond] = ACTIONS(47),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(87),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(89),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_expression] = STATE(182),
    [sym_expression_term] = STATE(150),
    [sym_term] = STATE(148),
    [sym_quantity] = STATE(141),
    [sym_literal] = STATE(157),
    [sym_qualified_identifier_expression] = STATE(374),
    [sym_boolean_expression] = STATE(150),
    [sym_type_expression] = STATE(150),
    [sym_cast_expression] = STATE(150),
    [sym_not_expression] = STATE(150),
    [sym_existence_expression] = STATE(150),
    [sym_between_expression] = STATE(150),
    [sym_equality_expression] = STATE(150),
    [sym_inequality_expression] = STATE(150),
    [sym_and_expression] = STATE(150),
    [sym_or_expression] = STATE(150),
    [sym_implies_expression] = STATE(150),
    [sym_in_fix_set_expression] = STATE(150),
    [sym_date_time_precision] = STATE(417),
    [sym_plural_date_time_precision] = STATE(396),
    [sym_duration_between_expression] = STATE(150),
    [sym_difference_between_expression] = STATE(150),
    [sym_date_time_precision_specifier] = STATE(19),
    [sym_membership_expression] = STATE(150),
    [sym_timing_expression] = STATE(150),
    [sym_query] = STATE(150),
    [sym_query_source] = STATE(301),
    [sym_aliased_query_source] = STATE(117),
    [sym_query_source_clause] = STATE(196),
    [sym_retrieve] = STATE(197),
    [sym_identifier] = STATE(349),
    [sym_quoted_identifier] = STATE(337),
    [sym_referential_identifier] = STATE(302),
    [sym_keyword_identifier] = STATE(349),
    [sym_string] = STATE(146),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(91),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(73),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(75),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_year] = ACTIONS(47),
    [anon_sym_month] = ACTIONS(47),
    [anon_sym_week] = ACTIONS(47),
    [anon_sym_day] = ACTIONS(47),
    [anon_sym_hour] = ACTIONS(47),
    [anon_sym_minute] = ACTIONS(47),
    [anon_sym_second] = ACTIONS(47),
    [anon_sym_millisecond] = ACTIONS(47),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(77),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(79),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_expression] = STATE(160),
    [sym_expression_term] = STATE(150),
    [sym_term] = STATE(148),
    [sym_quantity] = STATE(141),
    [sym_literal] = STATE(157),
    [sym_qualified_identifier_expression] = STATE(374),
    [sym_boolean_expression] = STATE(150),
    [sym_type_expression] = STATE(150),
    [sym_cast_expression] = STATE(150),
    [sym_not_expression] = STATE(150),
    [sym_existence_expression] = STATE(150),
    [sym_between_expression] = STATE(150),
    [sym_equality_expression] = STATE(150),
    [sym_inequality_expression] = STATE(150),
    [sym_and_expression] = STATE(150),
    [sym_or_expression] = STATE(150),
    [sym_implies_expression] = STATE(150),
    [sym_in_fix_set_expression] = STATE(150),
    [sym_plural_date_time_precision] = STATE(396),
    [sym_duration_between_expression] = STATE(150),
    [sym_difference_between_expression] = STATE(150),
    [sym_membership_expression] = STATE(150),
    [sym_timing_expression] = STATE(150),
    [sym_query] = STATE(150),
    [sym_query_source] = STATE(301),
    [sym_aliased_query_source] = STATE(117),
    [sym_query_source_clause] = STATE(189),
    [sym_retrieve] = STATE(193),
    [sym_identifier] = STATE(349),
    [sym_quoted_identifier] = STATE(337),
    [sym_referential_identifier] = STATE(302),
    [sym_keyword_identifier] = STATE(349),
    [sym_string] = STATE(146),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(91),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_external] = ACTIONS(97),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(83),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(85),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(87),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(89),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym_expression] = STATE(100),
    [sym_expression_term] = STATE(150),
    [sym_term] = STATE(148),
    [sym_quantity] = STATE(141),
    [sym_literal] = STATE(157),
    [sym_qualified_identifier_expression] = STATE(374),
    [sym_boolean_expression] = STATE(150),
    [sym_type_expression] = STATE(150),
    [sym_cast_expression] = STATE(150),
    [sym_not_expression] = STATE(150),
    [sym_existence_expression] = STATE(150),
    [sym_between_expression] = STATE(150),
    [sym_equality_expression] = STATE(150),
    [sym_inequality_expression] = STATE(150),
    [sym_and_expression] = STATE(150),
    [sym_or_expression] = STATE(150),
    [sym_implies_expression] = STATE(150),
    [sym_in_fix_set_expression] = STATE(150),
    [sym_plural_date_time_precision] = STATE(396),
    [sym_duration_between_expression] = STATE(150),
    [sym_difference_between_expression] = STATE(150),
    [sym_membership_expression] = STATE(150),
    [sym_timing_expression] = STATE(150),
    [sym_query] = STATE(150),
    [sym_query_source] = STATE(301),
    [sym_aliased_query_source] = STATE(117),
    [sym_query_source_clause] = STATE(125),
    [sym_retrieve] = STATE(126),
    [sym_identifier] = STATE(349),
    [sym_quoted_identifier] = STATE(337),
    [sym_referential_identifier] = STATE(302),
    [sym_keyword_identifier] = STATE(349),
    [sym_string] = STATE(146),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(91),
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(45),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(53),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym_expression] = STATE(109),
    [sym_expression_term] = STATE(150),
    [sym_term] = STATE(148),
    [sym_quantity] = STATE(141),
    [sym_literal] = STATE(157),
    [sym_qualified_identifier_expression] = STATE(374),
    [sym_boolean_expression] = STATE(150),
    [sym_type_expression] = STATE(150),
    [sym_cast_expression] = STATE(150),
    [sym_not_expression] = STATE(150),
    [sym_existence_expression] = STATE(150),
    [sym_between_expression] = STATE(150),
    [sym_equality_expression] = STATE(150),
    [sym_inequality_expression] = STATE(150),
    [sym_and_expression] = STATE(150),
    [sym_or_expression] = STATE(150),
    [sym_implies_expression] = STATE(150),
    [sym_in_fix_set_expression] = STATE(150),
    [sym_plural_date_time_precision] = STATE(396),
    [sym_duration_between_expression] = STATE(150),
    [sym_difference_between_expression] = STATE(150),
    [sym_membership_expression] = STATE(150),
    [sym_timing_expression] = STATE(150),
    [sym_query] = STATE(150),
    [sym_query_source] = STATE(301),
    [sym_aliased_query_source] = STATE(117),
    [sym_query_source_clause] = STATE(125),
    [sym_retrieve] = STATE(126),
    [sym_identifier] = STATE(349),
    [sym_quoted_identifier] = STATE(337),
    [sym_referential_identifier] = STATE(302),
    [sym_keyword_identifier] = STATE(349),
    [sym_string] = STATE(146),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(91),
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(45),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(53),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym_expression] = STATE(163),
    [sym_expression_term] = STATE(150),
    [sym_term] = STATE(148),
    [sym_quantity] = STATE(141),
    [sym_literal] = STATE(157),
    [sym_qualified_identifier_expression] = STATE(374),
    [sym_boolean_expression] = STATE(150),
    [sym_type_expression] = STATE(150),
    [sym_cast_expression] = STATE(150),
    [sym_not_expression] = STATE(150),
    [sym_existence_expression] = STATE(150),
    [sym_between_expression] = STATE(150),
    [sym_equality_expression] = STATE(150),
    [sym_inequality_expression] = STATE(150),
    [sym_and_expression] = STATE(150),
    [sym_or_expression] = STATE(150),
    [sym_implies_expression] = STATE(150),
    [sym_in_fix_set_expression] = STATE(150),
    [sym_plural_date_time_precision] = STATE(396),
    [sym_duration_between_expression] = STATE(150),
    [sym_difference_between_expression] = STATE(150),
    [sym_membership_expression] = STATE(150),
    [sym_timing_expression] = STATE(150),
    [sym_query] = STATE(150),
    [sym_query_source] = STATE(301),
    [sym_aliased_query_source] = STATE(117),
    [sym_query_source_clause] = STATE(189),
    [sym_retrieve] = STATE(193),
    [sym_identifier] = STATE(349),
    [sym_quoted_identifier] = STATE(337),
    [sym_referential_identifier] = STATE(302),
    [sym_keyword_identifier] = STATE(349),
    [sym_string] = STATE(146),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(91),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_external] = ACTIONS(99),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(83),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(85),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(87),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(89),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym_expression] = STATE(167),
    [sym_expression_term] = STATE(150),
    [sym_term] = STATE(148),
    [sym_quantity] = STATE(141),
    [sym_literal] = STATE(157),
    [sym_qualified_identifier_expression] = STATE(374),
    [sym_boolean_expression] = STATE(150),
    [sym_type_expression] = STATE(150),
    [sym_cast_expression] = STATE(150),
    [sym_not_expression] = STATE(150),
    [sym_existence_expression] = STATE(150),
    [sym_between_expression] = STATE(150),
    [sym_equality_expression] = STATE(150),
    [sym_inequality_expression] = STATE(150),
    [sym_and_expression] = STATE(150),
    [sym_or_expression] = STATE(150),
    [sym_implies_expression] = STATE(150),
    [sym_in_fix_set_expression] = STATE(150),
    [sym_plural_date_time_precision] = STATE(396),
    [sym_duration_between_expression] = STATE(150),
    [sym_difference_between_expression] = STATE(150),
    [sym_membership_expression] = STATE(150),
    [sym_timing_expression] = STATE(150),
    [sym_query] = STATE(150),
    [sym_query_source] = STATE(301),
    [sym_aliased_query_source] = STATE(117),
    [sym_query_source_clause] = STATE(189),
    [sym_retrieve] = STATE(193),
    [sym_identifier] = STATE(349),
    [sym_quoted_identifier] = STATE(337),
    [sym_referential_identifier] = STATE(302),
    [sym_keyword_identifier] = STATE(349),
    [sym_string] = STATE(146),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(91),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(83),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(85),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(87),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(89),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [sym_expression] = STATE(192),
    [sym_expression_term] = STATE(150),
    [sym_term] = STATE(148),
    [sym_quantity] = STATE(141),
    [sym_literal] = STATE(157),
    [sym_qualified_identifier_expression] = STATE(374),
    [sym_boolean_expression] = STATE(150),
    [sym_type_expression] = STATE(150),
    [sym_cast_expression] = STATE(150),
    [sym_not_expression] = STATE(150),
    [sym_existence_expression] = STATE(150),
    [sym_between_expression] = STATE(150),
    [sym_equality_expression] = STATE(150),
    [sym_inequality_expression] = STATE(150),
    [sym_and_expression] = STATE(150),
    [sym_or_expression] = STATE(150),
    [sym_implies_expression] = STATE(150),
    [sym_in_fix_set_expression] = STATE(150),
    [sym_plural_date_time_precision] = STATE(396),
    [sym_duration_between_expression] = STATE(150),
    [sym_difference_between_expression] = STATE(150),
    [sym_membership_expression] = STATE(150),
    [sym_timing_expression] = STATE(150),
    [sym_query] = STATE(150),
    [sym_query_source] = STATE(301),
    [sym_aliased_query_source] = STATE(117),
    [sym_query_source_clause] = STATE(196),
    [sym_retrieve] = STATE(197),
    [sym_identifier] = STATE(349),
    [sym_quoted_identifier] = STATE(337),
    [sym_referential_identifier] = STATE(302),
    [sym_keyword_identifier] = STATE(349),
    [sym_string] = STATE(146),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(91),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(73),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(75),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(77),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(79),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [sym_expression] = STATE(177),
    [sym_expression_term] = STATE(150),
    [sym_term] = STATE(148),
    [sym_quantity] = STATE(141),
    [sym_literal] = STATE(157),
    [sym_qualified_identifier_expression] = STATE(374),
    [sym_boolean_expression] = STATE(150),
    [sym_type_expression] = STATE(150),
    [sym_cast_expression] = STATE(150),
    [sym_not_expression] = STATE(150),
    [sym_existence_expression] = STATE(150),
    [sym_between_expression] = STATE(150),
    [sym_equality_expression] = STATE(150),
    [sym_inequality_expression] = STATE(150),
    [sym_and_expression] = STATE(150),
    [sym_or_expression] = STATE(150),
    [sym_implies_expression] = STATE(150),
    [sym_in_fix_set_expression] = STATE(150),
    [sym_plural_date_time_precision] = STATE(396),
    [sym_duration_between_expression] = STATE(150),
    [sym_difference_between_expression] = STATE(150),
    [sym_membership_expression] = STATE(150),
    [sym_timing_expression] = STATE(150),
    [sym_query] = STATE(150),
    [sym_query_source] = STATE(301),
    [sym_aliased_query_source] = STATE(117),
    [sym_query_source_clause] = STATE(196),
    [sym_retrieve] = STATE(197),
    [sym_identifier] = STATE(349),
    [sym_quoted_identifier] = STATE(337),
    [sym_referential_identifier] = STATE(302),
    [sym_keyword_identifier] = STATE(349),
    [sym_string] = STATE(146),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(91),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(73),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(75),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(77),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(79),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [sym_expression] = STATE(188),
    [sym_expression_term] = STATE(150),
    [sym_term] = STATE(148),
    [sym_quantity] = STATE(141),
    [sym_literal] = STATE(157),
    [sym_qualified_identifier_expression] = STATE(374),
    [sym_boolean_expression] = STATE(150),
    [sym_type_expression] = STATE(150),
    [sym_cast_expression] = STATE(150),
    [sym_not_expression] = STATE(150),
    [sym_existence_expression] = STATE(150),
    [sym_between_expression] = STATE(150),
    [sym_equality_expression] = STATE(150),
    [sym_inequality_expression] = STATE(150),
    [sym_and_expression] = STATE(150),
    [sym_or_expression] = STATE(150),
    [sym_implies_expression] = STATE(150),
    [sym_in_fix_set_expression] = STATE(150),
    [sym_plural_date_time_precision] = STATE(396),
    [sym_duration_between_expression] = STATE(150),
    [sym_difference_between_expression] = STATE(150),
    [sym_membership_expression] = STATE(150),
    [sym_timing_expression] = STATE(150),
    [sym_query] = STATE(150),
    [sym_query_source] = STATE(301),
    [sym_aliased_query_source] = STATE(117),
    [sym_query_source_clause] = STATE(196),
    [sym_retrieve] = STATE(197),
    [sym_identifier] = STATE(349),
    [sym_quoted_identifier] = STATE(337),
    [sym_referential_identifier] = STATE(302),
    [sym_keyword_identifier] = STATE(349),
    [sym_string] = STATE(146),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(91),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(73),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(75),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(77),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(79),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [sym_expression] = STATE(183),
    [sym_expression_term] = STATE(150),
    [sym_term] = STATE(148),
    [sym_quantity] = STATE(141),
    [sym_literal] = STATE(157),
    [sym_qualified_identifier_expression] = STATE(374),
    [sym_boolean_expression] = STATE(150),
    [sym_type_expression] = STATE(150),
    [sym_cast_expression] = STATE(150),
    [sym_not_expression] = STATE(150),
    [sym_existence_expression] = STATE(150),
    [sym_between_expression] = STATE(150),
    [sym_equality_expression] = STATE(150),
    [sym_inequality_expression] = STATE(150),
    [sym_and_expression] = STATE(150),
    [sym_or_expression] = STATE(150),
    [sym_implies_expression] = STATE(150),
    [sym_in_fix_set_expression] = STATE(150),
    [sym_plural_date_time_precision] = STATE(396),
    [sym_duration_between_expression] = STATE(150),
    [sym_difference_between_expression] = STATE(150),
    [sym_membership_expression] = STATE(150),
    [sym_timing_expression] = STATE(150),
    [sym_query] = STATE(150),
    [sym_query_source] = STATE(301),
    [sym_aliased_query_source] = STATE(117),
    [sym_query_source_clause] = STATE(196),
    [sym_retrieve] = STATE(197),
    [sym_identifier] = STATE(349),
    [sym_quoted_identifier] = STATE(337),
    [sym_referential_identifier] = STATE(302),
    [sym_keyword_identifier] = STATE(349),
    [sym_string] = STATE(146),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(91),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(73),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(75),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(77),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(79),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [sym_expression] = STATE(181),
    [sym_expression_term] = STATE(150),
    [sym_term] = STATE(148),
    [sym_quantity] = STATE(141),
    [sym_literal] = STATE(157),
    [sym_qualified_identifier_expression] = STATE(374),
    [sym_boolean_expression] = STATE(150),
    [sym_type_expression] = STATE(150),
    [sym_cast_expression] = STATE(150),
    [sym_not_expression] = STATE(150),
    [sym_existence_expression] = STATE(150),
    [sym_between_expression] = STATE(150),
    [sym_equality_expression] = STATE(150),
    [sym_inequality_expression] = STATE(150),
    [sym_and_expression] = STATE(150),
    [sym_or_expression] = STATE(150),
    [sym_implies_expression] = STATE(150),
    [sym_in_fix_set_expression] = STATE(150),
    [sym_plural_date_time_precision] = STATE(396),
    [sym_duration_between_expression] = STATE(150),
    [sym_difference_between_expression] = STATE(150),
    [sym_membership_expression] = STATE(150),
    [sym_timing_expression] = STATE(150),
    [sym_query] = STATE(150),
    [sym_query_source] = STATE(301),
    [sym_aliased_query_source] = STATE(117),
    [sym_query_source_clause] = STATE(196),
    [sym_retrieve] = STATE(197),
    [sym_identifier] = STATE(349),
    [sym_quoted_identifier] = STATE(337),
    [sym_referential_identifier] = STATE(302),
    [sym_keyword_identifier] = STATE(349),
    [sym_string] = STATE(146),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(91),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(73),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(75),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(77),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(79),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [sym_expression] = STATE(178),
    [sym_expression_term] = STATE(150),
    [sym_term] = STATE(148),
    [sym_quantity] = STATE(141),
    [sym_literal] = STATE(157),
    [sym_qualified_identifier_expression] = STATE(374),
    [sym_boolean_expression] = STATE(150),
    [sym_type_expression] = STATE(150),
    [sym_cast_expression] = STATE(150),
    [sym_not_expression] = STATE(150),
    [sym_existence_expression] = STATE(150),
    [sym_between_expression] = STATE(150),
    [sym_equality_expression] = STATE(150),
    [sym_inequality_expression] = STATE(150),
    [sym_and_expression] = STATE(150),
    [sym_or_expression] = STATE(150),
    [sym_implies_expression] = STATE(150),
    [sym_in_fix_set_expression] = STATE(150),
    [sym_plural_date_time_precision] = STATE(396),
    [sym_duration_between_expression] = STATE(150),
    [sym_difference_between_expression] = STATE(150),
    [sym_membership_expression] = STATE(150),
    [sym_timing_expression] = STATE(150),
    [sym_query] = STATE(150),
    [sym_query_source] = STATE(301),
    [sym_aliased_query_source] = STATE(117),
    [sym_query_source_clause] = STATE(196),
    [sym_retrieve] = STATE(197),
    [sym_identifier] = STATE(349),
    [sym_quoted_identifier] = STATE(337),
    [sym_referential_identifier] = STATE(302),
    [sym_keyword_identifier] = STATE(349),
    [sym_string] = STATE(146),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(91),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(73),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(75),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(77),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(79),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [19] = {
    [sym_expression] = STATE(179),
    [sym_expression_term] = STATE(150),
    [sym_term] = STATE(148),
    [sym_quantity] = STATE(141),
    [sym_literal] = STATE(157),
    [sym_qualified_identifier_expression] = STATE(374),
    [sym_boolean_expression] = STATE(150),
    [sym_type_expression] = STATE(150),
    [sym_cast_expression] = STATE(150),
    [sym_not_expression] = STATE(150),
    [sym_existence_expression] = STATE(150),
    [sym_between_expression] = STATE(150),
    [sym_equality_expression] = STATE(150),
    [sym_inequality_expression] = STATE(150),
    [sym_and_expression] = STATE(150),
    [sym_or_expression] = STATE(150),
    [sym_implies_expression] = STATE(150),
    [sym_in_fix_set_expression] = STATE(150),
    [sym_plural_date_time_precision] = STATE(396),
    [sym_duration_between_expression] = STATE(150),
    [sym_difference_between_expression] = STATE(150),
    [sym_membership_expression] = STATE(150),
    [sym_timing_expression] = STATE(150),
    [sym_query] = STATE(150),
    [sym_query_source] = STATE(301),
    [sym_aliased_query_source] = STATE(117),
    [sym_query_source_clause] = STATE(196),
    [sym_retrieve] = STATE(197),
    [sym_identifier] = STATE(349),
    [sym_quoted_identifier] = STATE(337),
    [sym_referential_identifier] = STATE(302),
    [sym_keyword_identifier] = STATE(349),
    [sym_string] = STATE(146),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(91),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(73),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(75),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(77),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(79),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [sym_expression] = STATE(187),
    [sym_expression_term] = STATE(150),
    [sym_term] = STATE(148),
    [sym_quantity] = STATE(141),
    [sym_literal] = STATE(157),
    [sym_qualified_identifier_expression] = STATE(374),
    [sym_boolean_expression] = STATE(150),
    [sym_type_expression] = STATE(150),
    [sym_cast_expression] = STATE(150),
    [sym_not_expression] = STATE(150),
    [sym_existence_expression] = STATE(150),
    [sym_between_expression] = STATE(150),
    [sym_equality_expression] = STATE(150),
    [sym_inequality_expression] = STATE(150),
    [sym_and_expression] = STATE(150),
    [sym_or_expression] = STATE(150),
    [sym_implies_expression] = STATE(150),
    [sym_in_fix_set_expression] = STATE(150),
    [sym_plural_date_time_precision] = STATE(396),
    [sym_duration_between_expression] = STATE(150),
    [sym_difference_between_expression] = STATE(150),
    [sym_membership_expression] = STATE(150),
    [sym_timing_expression] = STATE(150),
    [sym_query] = STATE(150),
    [sym_query_source] = STATE(301),
    [sym_aliased_query_source] = STATE(117),
    [sym_query_source_clause] = STATE(196),
    [sym_retrieve] = STATE(197),
    [sym_identifier] = STATE(349),
    [sym_quoted_identifier] = STATE(337),
    [sym_referential_identifier] = STATE(302),
    [sym_keyword_identifier] = STATE(349),
    [sym_string] = STATE(146),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(91),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(73),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(75),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(77),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(79),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [21] = {
    [sym_expression] = STATE(180),
    [sym_expression_term] = STATE(150),
    [sym_term] = STATE(148),
    [sym_quantity] = STATE(141),
    [sym_literal] = STATE(157),
    [sym_qualified_identifier_expression] = STATE(374),
    [sym_boolean_expression] = STATE(150),
    [sym_type_expression] = STATE(150),
    [sym_cast_expression] = STATE(150),
    [sym_not_expression] = STATE(150),
    [sym_existence_expression] = STATE(150),
    [sym_between_expression] = STATE(150),
    [sym_equality_expression] = STATE(150),
    [sym_inequality_expression] = STATE(150),
    [sym_and_expression] = STATE(150),
    [sym_or_expression] = STATE(150),
    [sym_implies_expression] = STATE(150),
    [sym_in_fix_set_expression] = STATE(150),
    [sym_plural_date_time_precision] = STATE(396),
    [sym_duration_between_expression] = STATE(150),
    [sym_difference_between_expression] = STATE(150),
    [sym_membership_expression] = STATE(150),
    [sym_timing_expression] = STATE(150),
    [sym_query] = STATE(150),
    [sym_query_source] = STATE(301),
    [sym_aliased_query_source] = STATE(117),
    [sym_query_source_clause] = STATE(196),
    [sym_retrieve] = STATE(197),
    [sym_identifier] = STATE(349),
    [sym_quoted_identifier] = STATE(337),
    [sym_referential_identifier] = STATE(302),
    [sym_keyword_identifier] = STATE(349),
    [sym_string] = STATE(146),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(91),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(73),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(75),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(77),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(79),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
    [sym_expression] = STATE(175),
    [sym_expression_term] = STATE(150),
    [sym_term] = STATE(148),
    [sym_quantity] = STATE(141),
    [sym_literal] = STATE(157),
    [sym_qualified_identifier_expression] = STATE(374),
    [sym_boolean_expression] = STATE(150),
    [sym_type_expression] = STATE(150),
    [sym_cast_expression] = STATE(150),
    [sym_not_expression] = STATE(150),
    [sym_existence_expression] = STATE(150),
    [sym_between_expression] = STATE(150),
    [sym_equality_expression] = STATE(150),
    [sym_inequality_expression] = STATE(150),
    [sym_and_expression] = STATE(150),
    [sym_or_expression] = STATE(150),
    [sym_implies_expression] = STATE(150),
    [sym_in_fix_set_expression] = STATE(150),
    [sym_plural_date_time_precision] = STATE(396),
    [sym_duration_between_expression] = STATE(150),
    [sym_difference_between_expression] = STATE(150),
    [sym_membership_expression] = STATE(150),
    [sym_timing_expression] = STATE(150),
    [sym_query] = STATE(150),
    [sym_query_source] = STATE(301),
    [sym_aliased_query_source] = STATE(117),
    [sym_query_source_clause] = STATE(189),
    [sym_retrieve] = STATE(193),
    [sym_identifier] = STATE(349),
    [sym_quoted_identifier] = STATE(337),
    [sym_referential_identifier] = STATE(302),
    [sym_keyword_identifier] = STATE(349),
    [sym_string] = STATE(146),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(91),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(83),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(85),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(87),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(89),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [23] = {
    [sym_expression] = STATE(170),
    [sym_expression_term] = STATE(150),
    [sym_term] = STATE(148),
    [sym_quantity] = STATE(141),
    [sym_literal] = STATE(157),
    [sym_qualified_identifier_expression] = STATE(374),
    [sym_boolean_expression] = STATE(150),
    [sym_type_expression] = STATE(150),
    [sym_cast_expression] = STATE(150),
    [sym_not_expression] = STATE(150),
    [sym_existence_expression] = STATE(150),
    [sym_between_expression] = STATE(150),
    [sym_equality_expression] = STATE(150),
    [sym_inequality_expression] = STATE(150),
    [sym_and_expression] = STATE(150),
    [sym_or_expression] = STATE(150),
    [sym_implies_expression] = STATE(150),
    [sym_in_fix_set_expression] = STATE(150),
    [sym_plural_date_time_precision] = STATE(396),
    [sym_duration_between_expression] = STATE(150),
    [sym_difference_between_expression] = STATE(150),
    [sym_membership_expression] = STATE(150),
    [sym_timing_expression] = STATE(150),
    [sym_query] = STATE(150),
    [sym_query_source] = STATE(301),
    [sym_aliased_query_source] = STATE(117),
    [sym_query_source_clause] = STATE(189),
    [sym_retrieve] = STATE(193),
    [sym_identifier] = STATE(349),
    [sym_quoted_identifier] = STATE(337),
    [sym_referential_identifier] = STATE(302),
    [sym_keyword_identifier] = STATE(349),
    [sym_string] = STATE(146),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(91),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(83),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(85),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(87),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(89),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [24] = {
    [sym_expression] = STATE(165),
    [sym_expression_term] = STATE(150),
    [sym_term] = STATE(148),
    [sym_quantity] = STATE(141),
    [sym_literal] = STATE(157),
    [sym_qualified_identifier_expression] = STATE(374),
    [sym_boolean_expression] = STATE(150),
    [sym_type_expression] = STATE(150),
    [sym_cast_expression] = STATE(150),
    [sym_not_expression] = STATE(150),
    [sym_existence_expression] = STATE(150),
    [sym_between_expression] = STATE(150),
    [sym_equality_expression] = STATE(150),
    [sym_inequality_expression] = STATE(150),
    [sym_and_expression] = STATE(150),
    [sym_or_expression] = STATE(150),
    [sym_implies_expression] = STATE(150),
    [sym_in_fix_set_expression] = STATE(150),
    [sym_plural_date_time_precision] = STATE(396),
    [sym_duration_between_expression] = STATE(150),
    [sym_difference_between_expression] = STATE(150),
    [sym_membership_expression] = STATE(150),
    [sym_timing_expression] = STATE(150),
    [sym_query] = STATE(150),
    [sym_query_source] = STATE(301),
    [sym_aliased_query_source] = STATE(117),
    [sym_query_source_clause] = STATE(189),
    [sym_retrieve] = STATE(193),
    [sym_identifier] = STATE(349),
    [sym_quoted_identifier] = STATE(337),
    [sym_referential_identifier] = STATE(302),
    [sym_keyword_identifier] = STATE(349),
    [sym_string] = STATE(146),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(91),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(83),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(85),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(87),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(89),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [25] = {
    [sym_expression] = STATE(172),
    [sym_expression_term] = STATE(150),
    [sym_term] = STATE(148),
    [sym_quantity] = STATE(141),
    [sym_literal] = STATE(157),
    [sym_qualified_identifier_expression] = STATE(374),
    [sym_boolean_expression] = STATE(150),
    [sym_type_expression] = STATE(150),
    [sym_cast_expression] = STATE(150),
    [sym_not_expression] = STATE(150),
    [sym_existence_expression] = STATE(150),
    [sym_between_expression] = STATE(150),
    [sym_equality_expression] = STATE(150),
    [sym_inequality_expression] = STATE(150),
    [sym_and_expression] = STATE(150),
    [sym_or_expression] = STATE(150),
    [sym_implies_expression] = STATE(150),
    [sym_in_fix_set_expression] = STATE(150),
    [sym_plural_date_time_precision] = STATE(396),
    [sym_duration_between_expression] = STATE(150),
    [sym_difference_between_expression] = STATE(150),
    [sym_membership_expression] = STATE(150),
    [sym_timing_expression] = STATE(150),
    [sym_query] = STATE(150),
    [sym_query_source] = STATE(301),
    [sym_aliased_query_source] = STATE(117),
    [sym_query_source_clause] = STATE(189),
    [sym_retrieve] = STATE(193),
    [sym_identifier] = STATE(349),
    [sym_quoted_identifier] = STATE(337),
    [sym_referential_identifier] = STATE(302),
    [sym_keyword_identifier] = STATE(349),
    [sym_string] = STATE(146),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(91),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(83),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(85),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(87),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(89),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [26] = {
    [sym_expression] = STATE(164),
    [sym_expression_term] = STATE(150),
    [sym_term] = STATE(148),
    [sym_quantity] = STATE(141),
    [sym_literal] = STATE(157),
    [sym_qualified_identifier_expression] = STATE(374),
    [sym_boolean_expression] = STATE(150),
    [sym_type_expression] = STATE(150),
    [sym_cast_expression] = STATE(150),
    [sym_not_expression] = STATE(150),
    [sym_existence_expression] = STATE(150),
    [sym_between_expression] = STATE(150),
    [sym_equality_expression] = STATE(150),
    [sym_inequality_expression] = STATE(150),
    [sym_and_expression] = STATE(150),
    [sym_or_expression] = STATE(150),
    [sym_implies_expression] = STATE(150),
    [sym_in_fix_set_expression] = STATE(150),
    [sym_plural_date_time_precision] = STATE(396),
    [sym_duration_between_expression] = STATE(150),
    [sym_difference_between_expression] = STATE(150),
    [sym_membership_expression] = STATE(150),
    [sym_timing_expression] = STATE(150),
    [sym_query] = STATE(150),
    [sym_query_source] = STATE(301),
    [sym_aliased_query_source] = STATE(117),
    [sym_query_source_clause] = STATE(189),
    [sym_retrieve] = STATE(193),
    [sym_identifier] = STATE(349),
    [sym_quoted_identifier] = STATE(337),
    [sym_referential_identifier] = STATE(302),
    [sym_keyword_identifier] = STATE(349),
    [sym_string] = STATE(146),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(91),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(83),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(85),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(87),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(89),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [27] = {
    [sym_expression] = STATE(171),
    [sym_expression_term] = STATE(150),
    [sym_term] = STATE(148),
    [sym_quantity] = STATE(141),
    [sym_literal] = STATE(157),
    [sym_qualified_identifier_expression] = STATE(374),
    [sym_boolean_expression] = STATE(150),
    [sym_type_expression] = STATE(150),
    [sym_cast_expression] = STATE(150),
    [sym_not_expression] = STATE(150),
    [sym_existence_expression] = STATE(150),
    [sym_between_expression] = STATE(150),
    [sym_equality_expression] = STATE(150),
    [sym_inequality_expression] = STATE(150),
    [sym_and_expression] = STATE(150),
    [sym_or_expression] = STATE(150),
    [sym_implies_expression] = STATE(150),
    [sym_in_fix_set_expression] = STATE(150),
    [sym_plural_date_time_precision] = STATE(396),
    [sym_duration_between_expression] = STATE(150),
    [sym_difference_between_expression] = STATE(150),
    [sym_membership_expression] = STATE(150),
    [sym_timing_expression] = STATE(150),
    [sym_query] = STATE(150),
    [sym_query_source] = STATE(301),
    [sym_aliased_query_source] = STATE(117),
    [sym_query_source_clause] = STATE(189),
    [sym_retrieve] = STATE(193),
    [sym_identifier] = STATE(349),
    [sym_quoted_identifier] = STATE(337),
    [sym_referential_identifier] = STATE(302),
    [sym_keyword_identifier] = STATE(349),
    [sym_string] = STATE(146),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(91),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(83),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(85),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(87),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(89),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [28] = {
    [sym_expression] = STATE(173),
    [sym_expression_term] = STATE(150),
    [sym_term] = STATE(148),
    [sym_quantity] = STATE(141),
    [sym_literal] = STATE(157),
    [sym_qualified_identifier_expression] = STATE(374),
    [sym_boolean_expression] = STATE(150),
    [sym_type_expression] = STATE(150),
    [sym_cast_expression] = STATE(150),
    [sym_not_expression] = STATE(150),
    [sym_existence_expression] = STATE(150),
    [sym_between_expression] = STATE(150),
    [sym_equality_expression] = STATE(150),
    [sym_inequality_expression] = STATE(150),
    [sym_and_expression] = STATE(150),
    [sym_or_expression] = STATE(150),
    [sym_implies_expression] = STATE(150),
    [sym_in_fix_set_expression] = STATE(150),
    [sym_plural_date_time_precision] = STATE(396),
    [sym_duration_between_expression] = STATE(150),
    [sym_difference_between_expression] = STATE(150),
    [sym_membership_expression] = STATE(150),
    [sym_timing_expression] = STATE(150),
    [sym_query] = STATE(150),
    [sym_query_source] = STATE(301),
    [sym_aliased_query_source] = STATE(117),
    [sym_query_source_clause] = STATE(189),
    [sym_retrieve] = STATE(193),
    [sym_identifier] = STATE(349),
    [sym_quoted_identifier] = STATE(337),
    [sym_referential_identifier] = STATE(302),
    [sym_keyword_identifier] = STATE(349),
    [sym_string] = STATE(146),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(91),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(83),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(85),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(87),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(89),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [29] = {
    [sym_expression] = STATE(174),
    [sym_expression_term] = STATE(150),
    [sym_term] = STATE(148),
    [sym_quantity] = STATE(141),
    [sym_literal] = STATE(157),
    [sym_qualified_identifier_expression] = STATE(374),
    [sym_boolean_expression] = STATE(150),
    [sym_type_expression] = STATE(150),
    [sym_cast_expression] = STATE(150),
    [sym_not_expression] = STATE(150),
    [sym_existence_expression] = STATE(150),
    [sym_between_expression] = STATE(150),
    [sym_equality_expression] = STATE(150),
    [sym_inequality_expression] = STATE(150),
    [sym_and_expression] = STATE(150),
    [sym_or_expression] = STATE(150),
    [sym_implies_expression] = STATE(150),
    [sym_in_fix_set_expression] = STATE(150),
    [sym_plural_date_time_precision] = STATE(396),
    [sym_duration_between_expression] = STATE(150),
    [sym_difference_between_expression] = STATE(150),
    [sym_membership_expression] = STATE(150),
    [sym_timing_expression] = STATE(150),
    [sym_query] = STATE(150),
    [sym_query_source] = STATE(301),
    [sym_aliased_query_source] = STATE(117),
    [sym_query_source_clause] = STATE(189),
    [sym_retrieve] = STATE(193),
    [sym_identifier] = STATE(349),
    [sym_quoted_identifier] = STATE(337),
    [sym_referential_identifier] = STATE(302),
    [sym_keyword_identifier] = STATE(349),
    [sym_string] = STATE(146),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(91),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(83),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(85),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(87),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(89),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [30] = {
    [sym_expression] = STATE(162),
    [sym_expression_term] = STATE(150),
    [sym_term] = STATE(148),
    [sym_quantity] = STATE(141),
    [sym_literal] = STATE(157),
    [sym_qualified_identifier_expression] = STATE(374),
    [sym_boolean_expression] = STATE(150),
    [sym_type_expression] = STATE(150),
    [sym_cast_expression] = STATE(150),
    [sym_not_expression] = STATE(150),
    [sym_existence_expression] = STATE(150),
    [sym_between_expression] = STATE(150),
    [sym_equality_expression] = STATE(150),
    [sym_inequality_expression] = STATE(150),
    [sym_and_expression] = STATE(150),
    [sym_or_expression] = STATE(150),
    [sym_implies_expression] = STATE(150),
    [sym_in_fix_set_expression] = STATE(150),
    [sym_plural_date_time_precision] = STATE(396),
    [sym_duration_between_expression] = STATE(150),
    [sym_difference_between_expression] = STATE(150),
    [sym_membership_expression] = STATE(150),
    [sym_timing_expression] = STATE(150),
    [sym_query] = STATE(150),
    [sym_query_source] = STATE(301),
    [sym_aliased_query_source] = STATE(117),
    [sym_query_source_clause] = STATE(189),
    [sym_retrieve] = STATE(193),
    [sym_identifier] = STATE(349),
    [sym_quoted_identifier] = STATE(337),
    [sym_referential_identifier] = STATE(302),
    [sym_keyword_identifier] = STATE(349),
    [sym_string] = STATE(146),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(91),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(83),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(85),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(87),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(89),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [31] = {
    [sym_expression] = STATE(186),
    [sym_expression_term] = STATE(150),
    [sym_term] = STATE(148),
    [sym_quantity] = STATE(141),
    [sym_literal] = STATE(157),
    [sym_qualified_identifier_expression] = STATE(374),
    [sym_boolean_expression] = STATE(150),
    [sym_type_expression] = STATE(150),
    [sym_cast_expression] = STATE(150),
    [sym_not_expression] = STATE(150),
    [sym_existence_expression] = STATE(150),
    [sym_between_expression] = STATE(150),
    [sym_equality_expression] = STATE(150),
    [sym_inequality_expression] = STATE(150),
    [sym_and_expression] = STATE(150),
    [sym_or_expression] = STATE(150),
    [sym_implies_expression] = STATE(150),
    [sym_in_fix_set_expression] = STATE(150),
    [sym_plural_date_time_precision] = STATE(396),
    [sym_duration_between_expression] = STATE(150),
    [sym_difference_between_expression] = STATE(150),
    [sym_membership_expression] = STATE(150),
    [sym_timing_expression] = STATE(150),
    [sym_query] = STATE(150),
    [sym_query_source] = STATE(301),
    [sym_aliased_query_source] = STATE(117),
    [sym_query_source_clause] = STATE(196),
    [sym_retrieve] = STATE(197),
    [sym_identifier] = STATE(349),
    [sym_quoted_identifier] = STATE(337),
    [sym_referential_identifier] = STATE(302),
    [sym_keyword_identifier] = STATE(349),
    [sym_string] = STATE(146),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(91),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(73),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(75),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(77),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(79),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [32] = {
    [sym_expression] = STATE(176),
    [sym_expression_term] = STATE(150),
    [sym_term] = STATE(148),
    [sym_quantity] = STATE(141),
    [sym_literal] = STATE(157),
    [sym_qualified_identifier_expression] = STATE(374),
    [sym_boolean_expression] = STATE(150),
    [sym_type_expression] = STATE(150),
    [sym_cast_expression] = STATE(150),
    [sym_not_expression] = STATE(150),
    [sym_existence_expression] = STATE(150),
    [sym_between_expression] = STATE(150),
    [sym_equality_expression] = STATE(150),
    [sym_inequality_expression] = STATE(150),
    [sym_and_expression] = STATE(150),
    [sym_or_expression] = STATE(150),
    [sym_implies_expression] = STATE(150),
    [sym_in_fix_set_expression] = STATE(150),
    [sym_plural_date_time_precision] = STATE(396),
    [sym_duration_between_expression] = STATE(150),
    [sym_difference_between_expression] = STATE(150),
    [sym_membership_expression] = STATE(150),
    [sym_timing_expression] = STATE(150),
    [sym_query] = STATE(150),
    [sym_query_source] = STATE(301),
    [sym_aliased_query_source] = STATE(117),
    [sym_query_source_clause] = STATE(196),
    [sym_retrieve] = STATE(197),
    [sym_identifier] = STATE(349),
    [sym_quoted_identifier] = STATE(337),
    [sym_referential_identifier] = STATE(302),
    [sym_keyword_identifier] = STATE(349),
    [sym_string] = STATE(146),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(91),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(73),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(75),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(77),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(79),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [33] = {
    [sym_expression] = STATE(169),
    [sym_expression_term] = STATE(150),
    [sym_term] = STATE(148),
    [sym_quantity] = STATE(141),
    [sym_literal] = STATE(157),
    [sym_qualified_identifier_expression] = STATE(374),
    [sym_boolean_expression] = STATE(150),
    [sym_type_expression] = STATE(150),
    [sym_cast_expression] = STATE(150),
    [sym_not_expression] = STATE(150),
    [sym_existence_expression] = STATE(150),
    [sym_between_expression] = STATE(150),
    [sym_equality_expression] = STATE(150),
    [sym_inequality_expression] = STATE(150),
    [sym_and_expression] = STATE(150),
    [sym_or_expression] = STATE(150),
    [sym_implies_expression] = STATE(150),
    [sym_in_fix_set_expression] = STATE(150),
    [sym_plural_date_time_precision] = STATE(396),
    [sym_duration_between_expression] = STATE(150),
    [sym_difference_between_expression] = STATE(150),
    [sym_membership_expression] = STATE(150),
    [sym_timing_expression] = STATE(150),
    [sym_query] = STATE(150),
    [sym_query_source] = STATE(301),
    [sym_aliased_query_source] = STATE(117),
    [sym_query_source_clause] = STATE(189),
    [sym_retrieve] = STATE(193),
    [sym_identifier] = STATE(349),
    [sym_quoted_identifier] = STATE(337),
    [sym_referential_identifier] = STATE(302),
    [sym_keyword_identifier] = STATE(349),
    [sym_string] = STATE(146),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(91),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(83),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(85),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(87),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(89),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [34] = {
    [sym_expression] = STATE(166),
    [sym_expression_term] = STATE(150),
    [sym_term] = STATE(148),
    [sym_quantity] = STATE(141),
    [sym_literal] = STATE(157),
    [sym_qualified_identifier_expression] = STATE(374),
    [sym_boolean_expression] = STATE(150),
    [sym_type_expression] = STATE(150),
    [sym_cast_expression] = STATE(150),
    [sym_not_expression] = STATE(150),
    [sym_existence_expression] = STATE(150),
    [sym_between_expression] = STATE(150),
    [sym_equality_expression] = STATE(150),
    [sym_inequality_expression] = STATE(150),
    [sym_and_expression] = STATE(150),
    [sym_or_expression] = STATE(150),
    [sym_implies_expression] = STATE(150),
    [sym_in_fix_set_expression] = STATE(150),
    [sym_plural_date_time_precision] = STATE(396),
    [sym_duration_between_expression] = STATE(150),
    [sym_difference_between_expression] = STATE(150),
    [sym_membership_expression] = STATE(150),
    [sym_timing_expression] = STATE(150),
    [sym_query] = STATE(150),
    [sym_query_source] = STATE(301),
    [sym_aliased_query_source] = STATE(117),
    [sym_query_source_clause] = STATE(189),
    [sym_retrieve] = STATE(193),
    [sym_identifier] = STATE(349),
    [sym_quoted_identifier] = STATE(337),
    [sym_referential_identifier] = STATE(302),
    [sym_keyword_identifier] = STATE(349),
    [sym_string] = STATE(146),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(91),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(83),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(85),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(87),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(89),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [35] = {
    [sym_expression] = STATE(110),
    [sym_expression_term] = STATE(150),
    [sym_term] = STATE(148),
    [sym_quantity] = STATE(141),
    [sym_literal] = STATE(157),
    [sym_qualified_identifier_expression] = STATE(374),
    [sym_boolean_expression] = STATE(150),
    [sym_type_expression] = STATE(150),
    [sym_cast_expression] = STATE(150),
    [sym_not_expression] = STATE(150),
    [sym_existence_expression] = STATE(150),
    [sym_between_expression] = STATE(150),
    [sym_equality_expression] = STATE(150),
    [sym_inequality_expression] = STATE(150),
    [sym_and_expression] = STATE(150),
    [sym_or_expression] = STATE(150),
    [sym_implies_expression] = STATE(150),
    [sym_in_fix_set_expression] = STATE(150),
    [sym_plural_date_time_precision] = STATE(396),
    [sym_duration_between_expression] = STATE(150),
    [sym_difference_between_expression] = STATE(150),
    [sym_membership_expression] = STATE(150),
    [sym_timing_expression] = STATE(150),
    [sym_query] = STATE(150),
    [sym_query_source] = STATE(301),
    [sym_aliased_query_source] = STATE(117),
    [sym_query_source_clause] = STATE(125),
    [sym_retrieve] = STATE(126),
    [sym_identifier] = STATE(349),
    [sym_quoted_identifier] = STATE(337),
    [sym_referential_identifier] = STATE(302),
    [sym_keyword_identifier] = STATE(349),
    [sym_string] = STATE(146),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(91),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(45),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(53),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [36] = {
    [sym_expression] = STATE(185),
    [sym_expression_term] = STATE(150),
    [sym_term] = STATE(148),
    [sym_quantity] = STATE(141),
    [sym_literal] = STATE(157),
    [sym_qualified_identifier_expression] = STATE(374),
    [sym_boolean_expression] = STATE(150),
    [sym_type_expression] = STATE(150),
    [sym_cast_expression] = STATE(150),
    [sym_not_expression] = STATE(150),
    [sym_existence_expression] = STATE(150),
    [sym_between_expression] = STATE(150),
    [sym_equality_expression] = STATE(150),
    [sym_inequality_expression] = STATE(150),
    [sym_and_expression] = STATE(150),
    [sym_or_expression] = STATE(150),
    [sym_implies_expression] = STATE(150),
    [sym_in_fix_set_expression] = STATE(150),
    [sym_plural_date_time_precision] = STATE(396),
    [sym_duration_between_expression] = STATE(150),
    [sym_difference_between_expression] = STATE(150),
    [sym_membership_expression] = STATE(150),
    [sym_timing_expression] = STATE(150),
    [sym_query] = STATE(150),
    [sym_query_source] = STATE(301),
    [sym_aliased_query_source] = STATE(117),
    [sym_query_source_clause] = STATE(196),
    [sym_retrieve] = STATE(197),
    [sym_identifier] = STATE(349),
    [sym_quoted_identifier] = STATE(337),
    [sym_referential_identifier] = STATE(302),
    [sym_keyword_identifier] = STATE(349),
    [sym_string] = STATE(146),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(91),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(73),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(75),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(77),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(79),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [37] = {
    [sym_expression] = STATE(104),
    [sym_expression_term] = STATE(150),
    [sym_term] = STATE(148),
    [sym_quantity] = STATE(141),
    [sym_literal] = STATE(157),
    [sym_qualified_identifier_expression] = STATE(374),
    [sym_boolean_expression] = STATE(150),
    [sym_type_expression] = STATE(150),
    [sym_cast_expression] = STATE(150),
    [sym_not_expression] = STATE(150),
    [sym_existence_expression] = STATE(150),
    [sym_between_expression] = STATE(150),
    [sym_equality_expression] = STATE(150),
    [sym_inequality_expression] = STATE(150),
    [sym_and_expression] = STATE(150),
    [sym_or_expression] = STATE(150),
    [sym_implies_expression] = STATE(150),
    [sym_in_fix_set_expression] = STATE(150),
    [sym_plural_date_time_precision] = STATE(396),
    [sym_duration_between_expression] = STATE(150),
    [sym_difference_between_expression] = STATE(150),
    [sym_membership_expression] = STATE(150),
    [sym_timing_expression] = STATE(150),
    [sym_query] = STATE(150),
    [sym_query_source] = STATE(301),
    [sym_aliased_query_source] = STATE(117),
    [sym_query_source_clause] = STATE(125),
    [sym_retrieve] = STATE(126),
    [sym_identifier] = STATE(349),
    [sym_quoted_identifier] = STATE(337),
    [sym_referential_identifier] = STATE(302),
    [sym_keyword_identifier] = STATE(349),
    [sym_string] = STATE(146),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(91),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(45),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(53),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [38] = {
    [sym_expression] = STATE(113),
    [sym_expression_term] = STATE(150),
    [sym_term] = STATE(148),
    [sym_quantity] = STATE(141),
    [sym_literal] = STATE(157),
    [sym_qualified_identifier_expression] = STATE(374),
    [sym_boolean_expression] = STATE(150),
    [sym_type_expression] = STATE(150),
    [sym_cast_expression] = STATE(150),
    [sym_not_expression] = STATE(150),
    [sym_existence_expression] = STATE(150),
    [sym_between_expression] = STATE(150),
    [sym_equality_expression] = STATE(150),
    [sym_inequality_expression] = STATE(150),
    [sym_and_expression] = STATE(150),
    [sym_or_expression] = STATE(150),
    [sym_implies_expression] = STATE(150),
    [sym_in_fix_set_expression] = STATE(150),
    [sym_plural_date_time_precision] = STATE(396),
    [sym_duration_between_expression] = STATE(150),
    [sym_difference_between_expression] = STATE(150),
    [sym_membership_expression] = STATE(150),
    [sym_timing_expression] = STATE(150),
    [sym_query] = STATE(150),
    [sym_query_source] = STATE(301),
    [sym_aliased_query_source] = STATE(117),
    [sym_query_source_clause] = STATE(125),
    [sym_retrieve] = STATE(126),
    [sym_identifier] = STATE(349),
    [sym_quoted_identifier] = STATE(337),
    [sym_referential_identifier] = STATE(302),
    [sym_keyword_identifier] = STATE(349),
    [sym_string] = STATE(146),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(91),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(45),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(53),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [39] = {
    [sym_expression] = STATE(111),
    [sym_expression_term] = STATE(150),
    [sym_term] = STATE(148),
    [sym_quantity] = STATE(141),
    [sym_literal] = STATE(157),
    [sym_qualified_identifier_expression] = STATE(374),
    [sym_boolean_expression] = STATE(150),
    [sym_type_expression] = STATE(150),
    [sym_cast_expression] = STATE(150),
    [sym_not_expression] = STATE(150),
    [sym_existence_expression] = STATE(150),
    [sym_between_expression] = STATE(150),
    [sym_equality_expression] = STATE(150),
    [sym_inequality_expression] = STATE(150),
    [sym_and_expression] = STATE(150),
    [sym_or_expression] = STATE(150),
    [sym_implies_expression] = STATE(150),
    [sym_in_fix_set_expression] = STATE(150),
    [sym_plural_date_time_precision] = STATE(396),
    [sym_duration_between_expression] = STATE(150),
    [sym_difference_between_expression] = STATE(150),
    [sym_membership_expression] = STATE(150),
    [sym_timing_expression] = STATE(150),
    [sym_query] = STATE(150),
    [sym_query_source] = STATE(301),
    [sym_aliased_query_source] = STATE(117),
    [sym_query_source_clause] = STATE(125),
    [sym_retrieve] = STATE(126),
    [sym_identifier] = STATE(349),
    [sym_quoted_identifier] = STATE(337),
    [sym_referential_identifier] = STATE(302),
    [sym_keyword_identifier] = STATE(349),
    [sym_string] = STATE(146),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(91),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(45),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(53),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [40] = {
    [sym_expression] = STATE(108),
    [sym_expression_term] = STATE(150),
    [sym_term] = STATE(148),
    [sym_quantity] = STATE(141),
    [sym_literal] = STATE(157),
    [sym_qualified_identifier_expression] = STATE(374),
    [sym_boolean_expression] = STATE(150),
    [sym_type_expression] = STATE(150),
    [sym_cast_expression] = STATE(150),
    [sym_not_expression] = STATE(150),
    [sym_existence_expression] = STATE(150),
    [sym_between_expression] = STATE(150),
    [sym_equality_expression] = STATE(150),
    [sym_inequality_expression] = STATE(150),
    [sym_and_expression] = STATE(150),
    [sym_or_expression] = STATE(150),
    [sym_implies_expression] = STATE(150),
    [sym_in_fix_set_expression] = STATE(150),
    [sym_plural_date_time_precision] = STATE(396),
    [sym_duration_between_expression] = STATE(150),
    [sym_difference_between_expression] = STATE(150),
    [sym_membership_expression] = STATE(150),
    [sym_timing_expression] = STATE(150),
    [sym_query] = STATE(150),
    [sym_query_source] = STATE(301),
    [sym_aliased_query_source] = STATE(117),
    [sym_query_source_clause] = STATE(125),
    [sym_retrieve] = STATE(126),
    [sym_identifier] = STATE(349),
    [sym_quoted_identifier] = STATE(337),
    [sym_referential_identifier] = STATE(302),
    [sym_keyword_identifier] = STATE(349),
    [sym_string] = STATE(146),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(91),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(45),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(53),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [41] = {
    [sym_expression] = STATE(107),
    [sym_expression_term] = STATE(150),
    [sym_term] = STATE(148),
    [sym_quantity] = STATE(141),
    [sym_literal] = STATE(157),
    [sym_qualified_identifier_expression] = STATE(374),
    [sym_boolean_expression] = STATE(150),
    [sym_type_expression] = STATE(150),
    [sym_cast_expression] = STATE(150),
    [sym_not_expression] = STATE(150),
    [sym_existence_expression] = STATE(150),
    [sym_between_expression] = STATE(150),
    [sym_equality_expression] = STATE(150),
    [sym_inequality_expression] = STATE(150),
    [sym_and_expression] = STATE(150),
    [sym_or_expression] = STATE(150),
    [sym_implies_expression] = STATE(150),
    [sym_in_fix_set_expression] = STATE(150),
    [sym_plural_date_time_precision] = STATE(396),
    [sym_duration_between_expression] = STATE(150),
    [sym_difference_between_expression] = STATE(150),
    [sym_membership_expression] = STATE(150),
    [sym_timing_expression] = STATE(150),
    [sym_query] = STATE(150),
    [sym_query_source] = STATE(301),
    [sym_aliased_query_source] = STATE(117),
    [sym_query_source_clause] = STATE(125),
    [sym_retrieve] = STATE(126),
    [sym_identifier] = STATE(349),
    [sym_quoted_identifier] = STATE(337),
    [sym_referential_identifier] = STATE(302),
    [sym_keyword_identifier] = STATE(349),
    [sym_string] = STATE(146),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(91),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(45),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(53),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [42] = {
    [sym_expression] = STATE(99),
    [sym_expression_term] = STATE(150),
    [sym_term] = STATE(148),
    [sym_quantity] = STATE(141),
    [sym_literal] = STATE(157),
    [sym_qualified_identifier_expression] = STATE(374),
    [sym_boolean_expression] = STATE(150),
    [sym_type_expression] = STATE(150),
    [sym_cast_expression] = STATE(150),
    [sym_not_expression] = STATE(150),
    [sym_existence_expression] = STATE(150),
    [sym_between_expression] = STATE(150),
    [sym_equality_expression] = STATE(150),
    [sym_inequality_expression] = STATE(150),
    [sym_and_expression] = STATE(150),
    [sym_or_expression] = STATE(150),
    [sym_implies_expression] = STATE(150),
    [sym_in_fix_set_expression] = STATE(150),
    [sym_plural_date_time_precision] = STATE(396),
    [sym_duration_between_expression] = STATE(150),
    [sym_difference_between_expression] = STATE(150),
    [sym_membership_expression] = STATE(150),
    [sym_timing_expression] = STATE(150),
    [sym_query] = STATE(150),
    [sym_query_source] = STATE(301),
    [sym_aliased_query_source] = STATE(117),
    [sym_query_source_clause] = STATE(125),
    [sym_retrieve] = STATE(126),
    [sym_identifier] = STATE(349),
    [sym_quoted_identifier] = STATE(337),
    [sym_referential_identifier] = STATE(302),
    [sym_keyword_identifier] = STATE(349),
    [sym_string] = STATE(146),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(91),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(45),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(53),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [43] = {
    [sym_expression] = STATE(102),
    [sym_expression_term] = STATE(150),
    [sym_term] = STATE(148),
    [sym_quantity] = STATE(141),
    [sym_literal] = STATE(157),
    [sym_qualified_identifier_expression] = STATE(374),
    [sym_boolean_expression] = STATE(150),
    [sym_type_expression] = STATE(150),
    [sym_cast_expression] = STATE(150),
    [sym_not_expression] = STATE(150),
    [sym_existence_expression] = STATE(150),
    [sym_between_expression] = STATE(150),
    [sym_equality_expression] = STATE(150),
    [sym_inequality_expression] = STATE(150),
    [sym_and_expression] = STATE(150),
    [sym_or_expression] = STATE(150),
    [sym_implies_expression] = STATE(150),
    [sym_in_fix_set_expression] = STATE(150),
    [sym_plural_date_time_precision] = STATE(396),
    [sym_duration_between_expression] = STATE(150),
    [sym_difference_between_expression] = STATE(150),
    [sym_membership_expression] = STATE(150),
    [sym_timing_expression] = STATE(150),
    [sym_query] = STATE(150),
    [sym_query_source] = STATE(301),
    [sym_aliased_query_source] = STATE(117),
    [sym_query_source_clause] = STATE(125),
    [sym_retrieve] = STATE(126),
    [sym_identifier] = STATE(349),
    [sym_quoted_identifier] = STATE(337),
    [sym_referential_identifier] = STATE(302),
    [sym_keyword_identifier] = STATE(349),
    [sym_string] = STATE(146),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(91),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(45),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(53),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [44] = {
    [sym_expression] = STATE(100),
    [sym_expression_term] = STATE(150),
    [sym_term] = STATE(148),
    [sym_quantity] = STATE(141),
    [sym_literal] = STATE(157),
    [sym_qualified_identifier_expression] = STATE(374),
    [sym_boolean_expression] = STATE(150),
    [sym_type_expression] = STATE(150),
    [sym_cast_expression] = STATE(150),
    [sym_not_expression] = STATE(150),
    [sym_existence_expression] = STATE(150),
    [sym_between_expression] = STATE(150),
    [sym_equality_expression] = STATE(150),
    [sym_inequality_expression] = STATE(150),
    [sym_and_expression] = STATE(150),
    [sym_or_expression] = STATE(150),
    [sym_implies_expression] = STATE(150),
    [sym_in_fix_set_expression] = STATE(150),
    [sym_plural_date_time_precision] = STATE(396),
    [sym_duration_between_expression] = STATE(150),
    [sym_difference_between_expression] = STATE(150),
    [sym_membership_expression] = STATE(150),
    [sym_timing_expression] = STATE(150),
    [sym_query] = STATE(150),
    [sym_query_source] = STATE(301),
    [sym_aliased_query_source] = STATE(117),
    [sym_query_source_clause] = STATE(125),
    [sym_retrieve] = STATE(126),
    [sym_identifier] = STATE(349),
    [sym_quoted_identifier] = STATE(337),
    [sym_referential_identifier] = STATE(302),
    [sym_keyword_identifier] = STATE(349),
    [sym_string] = STATE(146),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(91),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(45),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(53),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [45] = {
    [sym_expression] = STATE(106),
    [sym_expression_term] = STATE(150),
    [sym_term] = STATE(148),
    [sym_quantity] = STATE(141),
    [sym_literal] = STATE(157),
    [sym_qualified_identifier_expression] = STATE(374),
    [sym_boolean_expression] = STATE(150),
    [sym_type_expression] = STATE(150),
    [sym_cast_expression] = STATE(150),
    [sym_not_expression] = STATE(150),
    [sym_existence_expression] = STATE(150),
    [sym_between_expression] = STATE(150),
    [sym_equality_expression] = STATE(150),
    [sym_inequality_expression] = STATE(150),
    [sym_and_expression] = STATE(150),
    [sym_or_expression] = STATE(150),
    [sym_implies_expression] = STATE(150),
    [sym_in_fix_set_expression] = STATE(150),
    [sym_plural_date_time_precision] = STATE(396),
    [sym_duration_between_expression] = STATE(150),
    [sym_difference_between_expression] = STATE(150),
    [sym_membership_expression] = STATE(150),
    [sym_timing_expression] = STATE(150),
    [sym_query] = STATE(150),
    [sym_query_source] = STATE(301),
    [sym_aliased_query_source] = STATE(117),
    [sym_query_source_clause] = STATE(125),
    [sym_retrieve] = STATE(126),
    [sym_identifier] = STATE(349),
    [sym_quoted_identifier] = STATE(337),
    [sym_referential_identifier] = STATE(302),
    [sym_keyword_identifier] = STATE(349),
    [sym_string] = STATE(146),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(91),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(45),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(53),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [46] = {
    [sym_expression] = STATE(101),
    [sym_expression_term] = STATE(150),
    [sym_term] = STATE(148),
    [sym_quantity] = STATE(141),
    [sym_literal] = STATE(157),
    [sym_qualified_identifier_expression] = STATE(374),
    [sym_boolean_expression] = STATE(150),
    [sym_type_expression] = STATE(150),
    [sym_cast_expression] = STATE(150),
    [sym_not_expression] = STATE(150),
    [sym_existence_expression] = STATE(150),
    [sym_between_expression] = STATE(150),
    [sym_equality_expression] = STATE(150),
    [sym_inequality_expression] = STATE(150),
    [sym_and_expression] = STATE(150),
    [sym_or_expression] = STATE(150),
    [sym_implies_expression] = STATE(150),
    [sym_in_fix_set_expression] = STATE(150),
    [sym_plural_date_time_precision] = STATE(396),
    [sym_duration_between_expression] = STATE(150),
    [sym_difference_between_expression] = STATE(150),
    [sym_membership_expression] = STATE(150),
    [sym_timing_expression] = STATE(150),
    [sym_query] = STATE(150),
    [sym_query_source] = STATE(301),
    [sym_aliased_query_source] = STATE(117),
    [sym_query_source_clause] = STATE(125),
    [sym_retrieve] = STATE(126),
    [sym_identifier] = STATE(349),
    [sym_quoted_identifier] = STATE(337),
    [sym_referential_identifier] = STATE(302),
    [sym_keyword_identifier] = STATE(349),
    [sym_string] = STATE(146),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(91),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(45),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(53),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [47] = {
    [sym_expression] = STATE(184),
    [sym_expression_term] = STATE(150),
    [sym_term] = STATE(148),
    [sym_quantity] = STATE(141),
    [sym_literal] = STATE(157),
    [sym_qualified_identifier_expression] = STATE(374),
    [sym_boolean_expression] = STATE(150),
    [sym_type_expression] = STATE(150),
    [sym_cast_expression] = STATE(150),
    [sym_not_expression] = STATE(150),
    [sym_existence_expression] = STATE(150),
    [sym_between_expression] = STATE(150),
    [sym_equality_expression] = STATE(150),
    [sym_inequality_expression] = STATE(150),
    [sym_and_expression] = STATE(150),
    [sym_or_expression] = STATE(150),
    [sym_implies_expression] = STATE(150),
    [sym_in_fix_set_expression] = STATE(150),
    [sym_plural_date_time_precision] = STATE(396),
    [sym_duration_between_expression] = STATE(150),
    [sym_difference_between_expression] = STATE(150),
    [sym_membership_expression] = STATE(150),
    [sym_timing_expression] = STATE(150),
    [sym_query] = STATE(150),
    [sym_query_source] = STATE(301),
    [sym_aliased_query_source] = STATE(117),
    [sym_query_source_clause] = STATE(196),
    [sym_retrieve] = STATE(197),
    [sym_identifier] = STATE(349),
    [sym_quoted_identifier] = STATE(337),
    [sym_referential_identifier] = STATE(302),
    [sym_keyword_identifier] = STATE(349),
    [sym_string] = STATE(146),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(91),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(73),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(75),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(77),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(79),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [48] = {
    [sym_expression] = STATE(112),
    [sym_expression_term] = STATE(150),
    [sym_term] = STATE(148),
    [sym_quantity] = STATE(141),
    [sym_literal] = STATE(157),
    [sym_qualified_identifier_expression] = STATE(374),
    [sym_boolean_expression] = STATE(150),
    [sym_type_expression] = STATE(150),
    [sym_cast_expression] = STATE(150),
    [sym_not_expression] = STATE(150),
    [sym_existence_expression] = STATE(150),
    [sym_between_expression] = STATE(150),
    [sym_equality_expression] = STATE(150),
    [sym_inequality_expression] = STATE(150),
    [sym_and_expression] = STATE(150),
    [sym_or_expression] = STATE(150),
    [sym_implies_expression] = STATE(150),
    [sym_in_fix_set_expression] = STATE(150),
    [sym_plural_date_time_precision] = STATE(396),
    [sym_duration_between_expression] = STATE(150),
    [sym_difference_between_expression] = STATE(150),
    [sym_membership_expression] = STATE(150),
    [sym_timing_expression] = STATE(150),
    [sym_query] = STATE(150),
    [sym_query_source] = STATE(301),
    [sym_aliased_query_source] = STATE(117),
    [sym_query_source_clause] = STATE(125),
    [sym_retrieve] = STATE(126),
    [sym_identifier] = STATE(349),
    [sym_quoted_identifier] = STATE(337),
    [sym_referential_identifier] = STATE(302),
    [sym_keyword_identifier] = STATE(349),
    [sym_string] = STATE(146),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(91),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(45),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(53),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [49] = {
    [sym_expression] = STATE(168),
    [sym_expression_term] = STATE(150),
    [sym_term] = STATE(148),
    [sym_quantity] = STATE(141),
    [sym_literal] = STATE(157),
    [sym_qualified_identifier_expression] = STATE(374),
    [sym_boolean_expression] = STATE(150),
    [sym_type_expression] = STATE(150),
    [sym_cast_expression] = STATE(150),
    [sym_not_expression] = STATE(150),
    [sym_existence_expression] = STATE(150),
    [sym_between_expression] = STATE(150),
    [sym_equality_expression] = STATE(150),
    [sym_inequality_expression] = STATE(150),
    [sym_and_expression] = STATE(150),
    [sym_or_expression] = STATE(150),
    [sym_implies_expression] = STATE(150),
    [sym_in_fix_set_expression] = STATE(150),
    [sym_plural_date_time_precision] = STATE(396),
    [sym_duration_between_expression] = STATE(150),
    [sym_difference_between_expression] = STATE(150),
    [sym_membership_expression] = STATE(150),
    [sym_timing_expression] = STATE(150),
    [sym_query] = STATE(150),
    [sym_query_source] = STATE(301),
    [sym_aliased_query_source] = STATE(117),
    [sym_query_source_clause] = STATE(189),
    [sym_retrieve] = STATE(193),
    [sym_identifier] = STATE(349),
    [sym_quoted_identifier] = STATE(337),
    [sym_referential_identifier] = STATE(302),
    [sym_keyword_identifier] = STATE(349),
    [sym_string] = STATE(146),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(91),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(83),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(85),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(87),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(89),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [50] = {
    [sym_expression] = STATE(105),
    [sym_expression_term] = STATE(150),
    [sym_term] = STATE(148),
    [sym_quantity] = STATE(141),
    [sym_literal] = STATE(157),
    [sym_qualified_identifier_expression] = STATE(374),
    [sym_boolean_expression] = STATE(150),
    [sym_type_expression] = STATE(150),
    [sym_cast_expression] = STATE(150),
    [sym_not_expression] = STATE(150),
    [sym_existence_expression] = STATE(150),
    [sym_between_expression] = STATE(150),
    [sym_equality_expression] = STATE(150),
    [sym_inequality_expression] = STATE(150),
    [sym_and_expression] = STATE(150),
    [sym_or_expression] = STATE(150),
    [sym_implies_expression] = STATE(150),
    [sym_in_fix_set_expression] = STATE(150),
    [sym_plural_date_time_precision] = STATE(396),
    [sym_duration_between_expression] = STATE(150),
    [sym_difference_between_expression] = STATE(150),
    [sym_membership_expression] = STATE(150),
    [sym_timing_expression] = STATE(150),
    [sym_query] = STATE(150),
    [sym_query_source] = STATE(301),
    [sym_aliased_query_source] = STATE(117),
    [sym_query_source_clause] = STATE(125),
    [sym_retrieve] = STATE(126),
    [sym_identifier] = STATE(349),
    [sym_quoted_identifier] = STATE(337),
    [sym_referential_identifier] = STATE(302),
    [sym_keyword_identifier] = STATE(349),
    [sym_string] = STATE(146),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(91),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_literal_token1] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [anon_sym_cast] = ACTIONS(43),
    [anon_sym_exists] = ACTIONS(45),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_years] = ACTIONS(49),
    [anon_sym_months] = ACTIONS(49),
    [anon_sym_weeks] = ACTIONS(49),
    [anon_sym_days] = ACTIONS(49),
    [anon_sym_hours] = ACTIONS(49),
    [anon_sym_minutes] = ACTIONS(49),
    [anon_sym_seconds] = ACTIONS(49),
    [anon_sym_milliseconds] = ACTIONS(49),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_duration] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(53),
    [anon_sym_difference] = ACTIONS(55),
    [anon_sym_contains] = ACTIONS(57),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [51] = {
    [sym_quantity] = STATE(277),
    [sym_date_time_precision] = STATE(417),
    [sym_date_time_precision_specifier] = STATE(68),
    [sym_exclusive_relative_qualifier] = STATE(377),
    [sym_quantity_offset] = STATE(309),
    [sym_temporal_relationship] = STATE(58),
    [anon_sym_library] = ACTIONS(101),
    [anon_sym_using] = ACTIONS(101),
    [anon_sym_called] = ACTIONS(101),
    [anon_sym_include] = ACTIONS(101),
    [anon_sym_valueset] = ACTIONS(101),
    [anon_sym_codesystem] = ACTIONS(101),
    [anon_sym_code] = ACTIONS(101),
    [anon_sym_from] = ACTIONS(101),
    [anon_sym_concept] = ACTIONS(101),
    [anon_sym_parameter] = ACTIONS(101),
    [anon_sym_default] = ACTIONS(101),
    [anon_sym_public] = ACTIONS(101),
    [anon_sym_private] = ACTIONS(101),
    [anon_sym_context] = ACTIONS(101),
    [anon_sym_define] = ACTIONS(101),
    [anon_sym_function] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(103),
    [aux_sym_literal_token1] = ACTIONS(101),
    [anon_sym_null] = ACTIONS(101),
    [anon_sym_not] = ACTIONS(101),
    [anon_sym_cast] = ACTIONS(101),
    [anon_sym_exists] = ACTIONS(101),
    [anon_sym_properly] = ACTIONS(105),
    [anon_sym_xor] = ACTIONS(101),
    [anon_sym_implies] = ACTIONS(101),
    [anon_sym_union] = ACTIONS(101),
    [anon_sym_intersect] = ACTIONS(101),
    [anon_sym_except] = ACTIONS(101),
    [anon_sym_year] = ACTIONS(47),
    [anon_sym_month] = ACTIONS(47),
    [anon_sym_week] = ACTIONS(47),
    [anon_sym_day] = ACTIONS(47),
    [anon_sym_hour] = ACTIONS(47),
    [anon_sym_minute] = ACTIONS(47),
    [anon_sym_second] = ACTIONS(47),
    [anon_sym_millisecond] = ACTIONS(47),
    [anon_sym_years] = ACTIONS(101),
    [anon_sym_months] = ACTIONS(101),
    [anon_sym_weeks] = ACTIONS(101),
    [anon_sym_days] = ACTIONS(101),
    [anon_sym_hours] = ACTIONS(101),
    [anon_sym_minutes] = ACTIONS(101),
    [anon_sym_seconds] = ACTIONS(101),
    [anon_sym_milliseconds] = ACTIONS(101),
    [anon_sym_date] = ACTIONS(101),
    [anon_sym_time] = ACTIONS(101),
    [anon_sym_timezone] = ACTIONS(101),
    [anon_sym_timezoneoffset] = ACTIONS(101),
    [anon_sym_duration] = ACTIONS(101),
    [anon_sym_in] = ACTIONS(101),
    [anon_sym_difference] = ACTIONS(101),
    [anon_sym_contains] = ACTIONS(101),
    [anon_sym_orbefore] = ACTIONS(103),
    [anon_sym_orafter] = ACTIONS(103),
    [anon_sym_ormore] = ACTIONS(103),
    [anon_sym_orless] = ACTIONS(103),
    [anon_sym_lessthan] = ACTIONS(107),
    [anon_sym_morethan] = ACTIONS(107),
    [anon_sym_onor] = ACTIONS(109),
    [anon_sym_before] = ACTIONS(111),
    [anon_sym_after] = ACTIONS(111),
    [anon_sym_starts] = ACTIONS(101),
    [anon_sym_ends] = ACTIONS(101),
    [anon_sym_same] = ACTIONS(113),
    [anon_sym_start] = ACTIONS(101),
    [anon_sym_end] = ACTIONS(101),
    [anon_sym_includes] = ACTIONS(101),
    [anon_sym_during] = ACTIONS(115),
    [anon_sym_includedin] = ACTIONS(117),
    [anon_sym_meets] = ACTIONS(101),
    [anon_sym_overlaps] = ACTIONS(101),
    [anon_sym_within] = ACTIONS(119),
    [anon_sym_where] = ACTIONS(101),
    [anon_sym_LBRACK] = ACTIONS(103),
    [anon_sym_version] = ACTIONS(101),
    [sym_default_identifier] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [anon_sym_asc] = ACTIONS(101),
    [anon_sym_ascending] = ACTIONS(101),
    [anon_sym_by] = ACTIONS(101),
    [anon_sym_codesystems] = ACTIONS(101),
    [anon_sym_desc] = ACTIONS(101),
    [anon_sym_descending] = ACTIONS(101),
    [anon_sym_display] = ACTIONS(101),
    [anon_sym_div] = ACTIONS(101),
    [anon_sym_fluent] = ACTIONS(101),
    [anon_sym_mod] = ACTIONS(101),
    [anon_sym_predecessor] = ACTIONS(101),
    [anon_sym_starting] = ACTIONS(101),
    [anon_sym_successor] = ACTIONS(101),
    [anon_sym_width] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(101),
    [sym_number] = ACTIONS(121),
    [sym_comment] = ACTIONS(3),
  },
  [52] = {
    [sym_date_time_precision] = STATE(417),
    [sym_date_time_precision_specifier] = STATE(68),
    [anon_sym_library] = ACTIONS(101),
    [anon_sym_using] = ACTIONS(101),
    [anon_sym_called] = ACTIONS(101),
    [anon_sym_include] = ACTIONS(101),
    [anon_sym_valueset] = ACTIONS(101),
    [anon_sym_codesystem] = ACTIONS(101),
    [anon_sym_code] = ACTIONS(101),
    [anon_sym_from] = ACTIONS(101),
    [anon_sym_concept] = ACTIONS(101),
    [anon_sym_parameter] = ACTIONS(101),
    [anon_sym_default] = ACTIONS(101),
    [anon_sym_public] = ACTIONS(101),
    [anon_sym_private] = ACTIONS(101),
    [anon_sym_context] = ACTIONS(101),
    [anon_sym_define] = ACTIONS(101),
    [anon_sym_function] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(103),
    [aux_sym_literal_token1] = ACTIONS(101),
    [anon_sym_null] = ACTIONS(101),
    [anon_sym_not] = ACTIONS(101),
    [anon_sym_cast] = ACTIONS(101),
    [anon_sym_exists] = ACTIONS(101),
    [anon_sym_xor] = ACTIONS(101),
    [anon_sym_implies] = ACTIONS(101),
    [anon_sym_union] = ACTIONS(101),
    [anon_sym_intersect] = ACTIONS(101),
    [anon_sym_except] = ACTIONS(101),
    [anon_sym_year] = ACTIONS(47),
    [anon_sym_month] = ACTIONS(47),
    [anon_sym_week] = ACTIONS(47),
    [anon_sym_day] = ACTIONS(47),
    [anon_sym_hour] = ACTIONS(47),
    [anon_sym_minute] = ACTIONS(47),
    [anon_sym_second] = ACTIONS(47),
    [anon_sym_millisecond] = ACTIONS(47),
    [anon_sym_years] = ACTIONS(101),
    [anon_sym_months] = ACTIONS(101),
    [anon_sym_weeks] = ACTIONS(101),
    [anon_sym_days] = ACTIONS(101),
    [anon_sym_hours] = ACTIONS(101),
    [anon_sym_minutes] = ACTIONS(101),
    [anon_sym_seconds] = ACTIONS(101),
    [anon_sym_milliseconds] = ACTIONS(101),
    [anon_sym_date] = ACTIONS(101),
    [anon_sym_time] = ACTIONS(101),
    [anon_sym_timezone] = ACTIONS(101),
    [anon_sym_timezoneoffset] = ACTIONS(101),
    [anon_sym_duration] = ACTIONS(101),
    [anon_sym_in] = ACTIONS(101),
    [anon_sym_difference] = ACTIONS(101),
    [anon_sym_contains] = ACTIONS(101),
    [anon_sym_orbefore] = ACTIONS(103),
    [anon_sym_orafter] = ACTIONS(103),
    [anon_sym_ormore] = ACTIONS(103),
    [anon_sym_orless] = ACTIONS(103),
    [anon_sym_before] = ACTIONS(115),
    [anon_sym_after] = ACTIONS(115),
    [anon_sym_starts] = ACTIONS(101),
    [anon_sym_ends] = ACTIONS(101),
    [anon_sym_start] = ACTIONS(101),
    [anon_sym_end] = ACTIONS(101),
    [anon_sym_includes] = ACTIONS(101),
    [anon_sym_meets] = ACTIONS(101),
    [anon_sym_overlaps] = ACTIONS(101),
    [anon_sym_where] = ACTIONS(101),
    [anon_sym_LBRACK] = ACTIONS(103),
    [anon_sym_version] = ACTIONS(101),
    [sym_default_identifier] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [anon_sym_asc] = ACTIONS(101),
    [anon_sym_ascending] = ACTIONS(101),
    [anon_sym_by] = ACTIONS(101),
    [anon_sym_codesystems] = ACTIONS(101),
    [anon_sym_desc] = ACTIONS(101),
    [anon_sym_descending] = ACTIONS(101),
    [anon_sym_display] = ACTIONS(101),
    [anon_sym_div] = ACTIONS(101),
    [anon_sym_fluent] = ACTIONS(101),
    [anon_sym_mod] = ACTIONS(101),
    [anon_sym_predecessor] = ACTIONS(101),
    [anon_sym_starting] = ACTIONS(101),
    [anon_sym_successor] = ACTIONS(101),
    [anon_sym_width] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(101),
    [sym_number] = ACTIONS(103),
    [sym_comment] = ACTIONS(3),
  },
  [53] = {
    [sym_date_time_precision] = STATE(417),
    [sym_date_time_precision_specifier] = STATE(70),
    [anon_sym_library] = ACTIONS(124),
    [anon_sym_using] = ACTIONS(124),
    [anon_sym_called] = ACTIONS(124),
    [anon_sym_include] = ACTIONS(124),
    [anon_sym_valueset] = ACTIONS(124),
    [anon_sym_codesystem] = ACTIONS(124),
    [anon_sym_code] = ACTIONS(124),
    [anon_sym_from] = ACTIONS(124),
    [anon_sym_concept] = ACTIONS(124),
    [anon_sym_parameter] = ACTIONS(124),
    [anon_sym_default] = ACTIONS(124),
    [anon_sym_public] = ACTIONS(124),
    [anon_sym_private] = ACTIONS(124),
    [anon_sym_context] = ACTIONS(124),
    [anon_sym_define] = ACTIONS(124),
    [anon_sym_function] = ACTIONS(124),
    [anon_sym_LPAREN] = ACTIONS(126),
    [aux_sym_literal_token1] = ACTIONS(124),
    [anon_sym_null] = ACTIONS(124),
    [anon_sym_not] = ACTIONS(124),
    [anon_sym_cast] = ACTIONS(124),
    [anon_sym_exists] = ACTIONS(124),
    [anon_sym_xor] = ACTIONS(124),
    [anon_sym_implies] = ACTIONS(124),
    [anon_sym_union] = ACTIONS(124),
    [anon_sym_intersect] = ACTIONS(124),
    [anon_sym_except] = ACTIONS(124),
    [anon_sym_year] = ACTIONS(47),
    [anon_sym_month] = ACTIONS(47),
    [anon_sym_week] = ACTIONS(47),
    [anon_sym_day] = ACTIONS(47),
    [anon_sym_hour] = ACTIONS(47),
    [anon_sym_minute] = ACTIONS(47),
    [anon_sym_second] = ACTIONS(47),
    [anon_sym_millisecond] = ACTIONS(47),
    [anon_sym_years] = ACTIONS(124),
    [anon_sym_months] = ACTIONS(124),
    [anon_sym_weeks] = ACTIONS(124),
    [anon_sym_days] = ACTIONS(124),
    [anon_sym_hours] = ACTIONS(124),
    [anon_sym_minutes] = ACTIONS(124),
    [anon_sym_seconds] = ACTIONS(124),
    [anon_sym_milliseconds] = ACTIONS(124),
    [anon_sym_date] = ACTIONS(124),
    [anon_sym_time] = ACTIONS(124),
    [anon_sym_timezone] = ACTIONS(124),
    [anon_sym_timezoneoffset] = ACTIONS(124),
    [anon_sym_duration] = ACTIONS(124),
    [anon_sym_in] = ACTIONS(124),
    [anon_sym_difference] = ACTIONS(124),
    [anon_sym_contains] = ACTIONS(124),
    [anon_sym_orbefore] = ACTIONS(126),
    [anon_sym_orafter] = ACTIONS(126),
    [anon_sym_ormore] = ACTIONS(126),
    [anon_sym_orless] = ACTIONS(126),
    [anon_sym_starts] = ACTIONS(124),
    [anon_sym_ends] = ACTIONS(124),
    [anon_sym_start] = ACTIONS(124),
    [anon_sym_end] = ACTIONS(124),
    [anon_sym_includes] = ACTIONS(124),
    [anon_sym_meets] = ACTIONS(124),
    [anon_sym_overlaps] = ACTIONS(124),
    [anon_sym_where] = ACTIONS(124),
    [anon_sym_LBRACK] = ACTIONS(126),
    [anon_sym_version] = ACTIONS(124),
    [sym_default_identifier] = ACTIONS(124),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [anon_sym_asc] = ACTIONS(124),
    [anon_sym_ascending] = ACTIONS(124),
    [anon_sym_by] = ACTIONS(124),
    [anon_sym_codesystems] = ACTIONS(124),
    [anon_sym_desc] = ACTIONS(124),
    [anon_sym_descending] = ACTIONS(124),
    [anon_sym_display] = ACTIONS(124),
    [anon_sym_div] = ACTIONS(124),
    [anon_sym_fluent] = ACTIONS(124),
    [anon_sym_mod] = ACTIONS(124),
    [anon_sym_predecessor] = ACTIONS(124),
    [anon_sym_starting] = ACTIONS(124),
    [anon_sym_successor] = ACTIONS(124),
    [anon_sym_width] = ACTIONS(124),
    [anon_sym_SQUOTE] = ACTIONS(124),
    [sym_number] = ACTIONS(126),
    [sym_comment] = ACTIONS(3),
  },
  [54] = {
    [sym_date_time_precision] = STATE(417),
    [sym_date_time_precision_specifier] = STATE(66),
    [anon_sym_library] = ACTIONS(101),
    [anon_sym_using] = ACTIONS(101),
    [anon_sym_called] = ACTIONS(101),
    [anon_sym_include] = ACTIONS(101),
    [anon_sym_valueset] = ACTIONS(101),
    [anon_sym_codesystem] = ACTIONS(101),
    [anon_sym_code] = ACTIONS(101),
    [anon_sym_from] = ACTIONS(101),
    [anon_sym_concept] = ACTIONS(101),
    [anon_sym_parameter] = ACTIONS(101),
    [anon_sym_default] = ACTIONS(101),
    [anon_sym_public] = ACTIONS(101),
    [anon_sym_private] = ACTIONS(101),
    [anon_sym_context] = ACTIONS(101),
    [anon_sym_define] = ACTIONS(101),
    [anon_sym_function] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(103),
    [aux_sym_literal_token1] = ACTIONS(101),
    [anon_sym_null] = ACTIONS(101),
    [anon_sym_not] = ACTIONS(101),
    [anon_sym_cast] = ACTIONS(101),
    [anon_sym_exists] = ACTIONS(101),
    [anon_sym_xor] = ACTIONS(101),
    [anon_sym_implies] = ACTIONS(101),
    [anon_sym_union] = ACTIONS(101),
    [anon_sym_intersect] = ACTIONS(101),
    [anon_sym_except] = ACTIONS(101),
    [anon_sym_year] = ACTIONS(47),
    [anon_sym_month] = ACTIONS(47),
    [anon_sym_week] = ACTIONS(47),
    [anon_sym_day] = ACTIONS(47),
    [anon_sym_hour] = ACTIONS(47),
    [anon_sym_minute] = ACTIONS(47),
    [anon_sym_second] = ACTIONS(47),
    [anon_sym_millisecond] = ACTIONS(47),
    [anon_sym_years] = ACTIONS(101),
    [anon_sym_months] = ACTIONS(101),
    [anon_sym_weeks] = ACTIONS(101),
    [anon_sym_days] = ACTIONS(101),
    [anon_sym_hours] = ACTIONS(101),
    [anon_sym_minutes] = ACTIONS(101),
    [anon_sym_seconds] = ACTIONS(101),
    [anon_sym_milliseconds] = ACTIONS(101),
    [anon_sym_date] = ACTIONS(101),
    [anon_sym_time] = ACTIONS(101),
    [anon_sym_timezone] = ACTIONS(101),
    [anon_sym_timezoneoffset] = ACTIONS(101),
    [anon_sym_duration] = ACTIONS(101),
    [anon_sym_in] = ACTIONS(101),
    [anon_sym_difference] = ACTIONS(101),
    [anon_sym_contains] = ACTIONS(101),
    [anon_sym_orbefore] = ACTIONS(103),
    [anon_sym_orafter] = ACTIONS(103),
    [anon_sym_ormore] = ACTIONS(103),
    [anon_sym_orless] = ACTIONS(103),
    [anon_sym_starts] = ACTIONS(101),
    [anon_sym_ends] = ACTIONS(101),
    [anon_sym_start] = ACTIONS(128),
    [anon_sym_end] = ACTIONS(128),
    [anon_sym_includes] = ACTIONS(101),
    [anon_sym_meets] = ACTIONS(101),
    [anon_sym_overlaps] = ACTIONS(101),
    [anon_sym_where] = ACTIONS(101),
    [anon_sym_LBRACK] = ACTIONS(103),
    [anon_sym_version] = ACTIONS(101),
    [sym_default_identifier] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [anon_sym_asc] = ACTIONS(101),
    [anon_sym_ascending] = ACTIONS(101),
    [anon_sym_by] = ACTIONS(101),
    [anon_sym_codesystems] = ACTIONS(101),
    [anon_sym_desc] = ACTIONS(101),
    [anon_sym_descending] = ACTIONS(101),
    [anon_sym_display] = ACTIONS(101),
    [anon_sym_div] = ACTIONS(101),
    [anon_sym_fluent] = ACTIONS(101),
    [anon_sym_mod] = ACTIONS(101),
    [anon_sym_predecessor] = ACTIONS(101),
    [anon_sym_starting] = ACTIONS(101),
    [anon_sym_successor] = ACTIONS(101),
    [anon_sym_width] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(101),
    [sym_number] = ACTIONS(103),
    [sym_comment] = ACTIONS(3),
  },
  [55] = {
    [sym_date_time_precision] = STATE(417),
    [sym_date_time_precision_specifier] = STATE(68),
    [anon_sym_library] = ACTIONS(101),
    [anon_sym_using] = ACTIONS(101),
    [anon_sym_called] = ACTIONS(101),
    [anon_sym_include] = ACTIONS(101),
    [anon_sym_valueset] = ACTIONS(101),
    [anon_sym_codesystem] = ACTIONS(101),
    [anon_sym_code] = ACTIONS(101),
    [anon_sym_from] = ACTIONS(101),
    [anon_sym_concept] = ACTIONS(101),
    [anon_sym_parameter] = ACTIONS(101),
    [anon_sym_default] = ACTIONS(101),
    [anon_sym_public] = ACTIONS(101),
    [anon_sym_private] = ACTIONS(101),
    [anon_sym_context] = ACTIONS(101),
    [anon_sym_define] = ACTIONS(101),
    [anon_sym_function] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(103),
    [aux_sym_literal_token1] = ACTIONS(101),
    [anon_sym_null] = ACTIONS(101),
    [anon_sym_not] = ACTIONS(101),
    [anon_sym_cast] = ACTIONS(101),
    [anon_sym_exists] = ACTIONS(101),
    [anon_sym_xor] = ACTIONS(101),
    [anon_sym_implies] = ACTIONS(101),
    [anon_sym_union] = ACTIONS(101),
    [anon_sym_intersect] = ACTIONS(101),
    [anon_sym_except] = ACTIONS(101),
    [anon_sym_year] = ACTIONS(47),
    [anon_sym_month] = ACTIONS(47),
    [anon_sym_week] = ACTIONS(47),
    [anon_sym_day] = ACTIONS(47),
    [anon_sym_hour] = ACTIONS(47),
    [anon_sym_minute] = ACTIONS(47),
    [anon_sym_second] = ACTIONS(47),
    [anon_sym_millisecond] = ACTIONS(47),
    [anon_sym_years] = ACTIONS(101),
    [anon_sym_months] = ACTIONS(101),
    [anon_sym_weeks] = ACTIONS(101),
    [anon_sym_days] = ACTIONS(101),
    [anon_sym_hours] = ACTIONS(101),
    [anon_sym_minutes] = ACTIONS(101),
    [anon_sym_seconds] = ACTIONS(101),
    [anon_sym_milliseconds] = ACTIONS(101),
    [anon_sym_date] = ACTIONS(101),
    [anon_sym_time] = ACTIONS(101),
    [anon_sym_timezone] = ACTIONS(101),
    [anon_sym_timezoneoffset] = ACTIONS(101),
    [anon_sym_duration] = ACTIONS(101),
    [anon_sym_in] = ACTIONS(101),
    [anon_sym_difference] = ACTIONS(101),
    [anon_sym_contains] = ACTIONS(101),
    [anon_sym_orbefore] = ACTIONS(103),
    [anon_sym_orafter] = ACTIONS(103),
    [anon_sym_ormore] = ACTIONS(103),
    [anon_sym_orless] = ACTIONS(103),
    [anon_sym_starts] = ACTIONS(101),
    [anon_sym_ends] = ACTIONS(101),
    [anon_sym_start] = ACTIONS(101),
    [anon_sym_end] = ACTIONS(101),
    [anon_sym_includes] = ACTIONS(101),
    [anon_sym_meets] = ACTIONS(101),
    [anon_sym_overlaps] = ACTIONS(101),
    [anon_sym_where] = ACTIONS(101),
    [anon_sym_LBRACK] = ACTIONS(103),
    [anon_sym_version] = ACTIONS(101),
    [sym_default_identifier] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [anon_sym_asc] = ACTIONS(101),
    [anon_sym_ascending] = ACTIONS(101),
    [anon_sym_by] = ACTIONS(101),
    [anon_sym_codesystems] = ACTIONS(101),
    [anon_sym_desc] = ACTIONS(101),
    [anon_sym_descending] = ACTIONS(101),
    [anon_sym_display] = ACTIONS(101),
    [anon_sym_div] = ACTIONS(101),
    [anon_sym_fluent] = ACTIONS(101),
    [anon_sym_mod] = ACTIONS(101),
    [anon_sym_predecessor] = ACTIONS(101),
    [anon_sym_starting] = ACTIONS(101),
    [anon_sym_successor] = ACTIONS(101),
    [anon_sym_width] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(101),
    [sym_number] = ACTIONS(103),
    [sym_comment] = ACTIONS(3),
  },
  [56] = {
    [sym_date_time_precision] = STATE(417),
    [sym_date_time_precision_specifier] = STATE(61),
    [anon_sym_library] = ACTIONS(131),
    [anon_sym_using] = ACTIONS(131),
    [anon_sym_called] = ACTIONS(131),
    [anon_sym_include] = ACTIONS(131),
    [anon_sym_valueset] = ACTIONS(131),
    [anon_sym_codesystem] = ACTIONS(131),
    [anon_sym_code] = ACTIONS(131),
    [anon_sym_from] = ACTIONS(131),
    [anon_sym_concept] = ACTIONS(131),
    [anon_sym_parameter] = ACTIONS(131),
    [anon_sym_default] = ACTIONS(131),
    [anon_sym_public] = ACTIONS(131),
    [anon_sym_private] = ACTIONS(131),
    [anon_sym_context] = ACTIONS(131),
    [anon_sym_define] = ACTIONS(131),
    [anon_sym_function] = ACTIONS(131),
    [anon_sym_LPAREN] = ACTIONS(133),
    [aux_sym_literal_token1] = ACTIONS(131),
    [anon_sym_null] = ACTIONS(131),
    [anon_sym_not] = ACTIONS(131),
    [anon_sym_cast] = ACTIONS(131),
    [anon_sym_exists] = ACTIONS(131),
    [anon_sym_xor] = ACTIONS(131),
    [anon_sym_implies] = ACTIONS(131),
    [anon_sym_union] = ACTIONS(131),
    [anon_sym_intersect] = ACTIONS(131),
    [anon_sym_except] = ACTIONS(131),
    [anon_sym_year] = ACTIONS(47),
    [anon_sym_month] = ACTIONS(47),
    [anon_sym_week] = ACTIONS(47),
    [anon_sym_day] = ACTIONS(47),
    [anon_sym_hour] = ACTIONS(47),
    [anon_sym_minute] = ACTIONS(47),
    [anon_sym_second] = ACTIONS(47),
    [anon_sym_millisecond] = ACTIONS(47),
    [anon_sym_years] = ACTIONS(131),
    [anon_sym_months] = ACTIONS(131),
    [anon_sym_weeks] = ACTIONS(131),
    [anon_sym_days] = ACTIONS(131),
    [anon_sym_hours] = ACTIONS(131),
    [anon_sym_minutes] = ACTIONS(131),
    [anon_sym_seconds] = ACTIONS(131),
    [anon_sym_milliseconds] = ACTIONS(131),
    [anon_sym_date] = ACTIONS(131),
    [anon_sym_time] = ACTIONS(131),
    [anon_sym_timezone] = ACTIONS(131),
    [anon_sym_timezoneoffset] = ACTIONS(131),
    [anon_sym_duration] = ACTIONS(131),
    [anon_sym_in] = ACTIONS(131),
    [anon_sym_difference] = ACTIONS(131),
    [anon_sym_contains] = ACTIONS(131),
    [anon_sym_orbefore] = ACTIONS(133),
    [anon_sym_orafter] = ACTIONS(133),
    [anon_sym_ormore] = ACTIONS(133),
    [anon_sym_orless] = ACTIONS(133),
    [anon_sym_starts] = ACTIONS(131),
    [anon_sym_ends] = ACTIONS(131),
    [anon_sym_start] = ACTIONS(135),
    [anon_sym_end] = ACTIONS(135),
    [anon_sym_includes] = ACTIONS(131),
    [anon_sym_meets] = ACTIONS(131),
    [anon_sym_overlaps] = ACTIONS(131),
    [anon_sym_where] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(133),
    [anon_sym_version] = ACTIONS(131),
    [sym_default_identifier] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [anon_sym_asc] = ACTIONS(131),
    [anon_sym_ascending] = ACTIONS(131),
    [anon_sym_by] = ACTIONS(131),
    [anon_sym_codesystems] = ACTIONS(131),
    [anon_sym_desc] = ACTIONS(131),
    [anon_sym_descending] = ACTIONS(131),
    [anon_sym_display] = ACTIONS(131),
    [anon_sym_div] = ACTIONS(131),
    [anon_sym_fluent] = ACTIONS(131),
    [anon_sym_mod] = ACTIONS(131),
    [anon_sym_predecessor] = ACTIONS(131),
    [anon_sym_starting] = ACTIONS(131),
    [anon_sym_successor] = ACTIONS(131),
    [anon_sym_width] = ACTIONS(131),
    [anon_sym_SQUOTE] = ACTIONS(131),
    [sym_number] = ACTIONS(133),
    [sym_comment] = ACTIONS(3),
  },
  [57] = {
    [sym_date_time_precision] = STATE(417),
    [sym_date_time_precision_specifier] = STATE(67),
    [anon_sym_library] = ACTIONS(131),
    [anon_sym_using] = ACTIONS(131),
    [anon_sym_called] = ACTIONS(131),
    [anon_sym_include] = ACTIONS(131),
    [anon_sym_valueset] = ACTIONS(131),
    [anon_sym_codesystem] = ACTIONS(131),
    [anon_sym_code] = ACTIONS(131),
    [anon_sym_from] = ACTIONS(131),
    [anon_sym_concept] = ACTIONS(131),
    [anon_sym_parameter] = ACTIONS(131),
    [anon_sym_default] = ACTIONS(131),
    [anon_sym_public] = ACTIONS(131),
    [anon_sym_private] = ACTIONS(131),
    [anon_sym_context] = ACTIONS(131),
    [anon_sym_define] = ACTIONS(131),
    [anon_sym_function] = ACTIONS(131),
    [anon_sym_LPAREN] = ACTIONS(133),
    [aux_sym_literal_token1] = ACTIONS(131),
    [anon_sym_null] = ACTIONS(131),
    [anon_sym_not] = ACTIONS(131),
    [anon_sym_cast] = ACTIONS(131),
    [anon_sym_exists] = ACTIONS(131),
    [anon_sym_xor] = ACTIONS(131),
    [anon_sym_implies] = ACTIONS(131),
    [anon_sym_union] = ACTIONS(131),
    [anon_sym_intersect] = ACTIONS(131),
    [anon_sym_except] = ACTIONS(131),
    [anon_sym_year] = ACTIONS(47),
    [anon_sym_month] = ACTIONS(47),
    [anon_sym_week] = ACTIONS(47),
    [anon_sym_day] = ACTIONS(47),
    [anon_sym_hour] = ACTIONS(47),
    [anon_sym_minute] = ACTIONS(47),
    [anon_sym_second] = ACTIONS(47),
    [anon_sym_millisecond] = ACTIONS(47),
    [anon_sym_years] = ACTIONS(131),
    [anon_sym_months] = ACTIONS(131),
    [anon_sym_weeks] = ACTIONS(131),
    [anon_sym_days] = ACTIONS(131),
    [anon_sym_hours] = ACTIONS(131),
    [anon_sym_minutes] = ACTIONS(131),
    [anon_sym_seconds] = ACTIONS(131),
    [anon_sym_milliseconds] = ACTIONS(131),
    [anon_sym_date] = ACTIONS(131),
    [anon_sym_time] = ACTIONS(131),
    [anon_sym_timezone] = ACTIONS(131),
    [anon_sym_timezoneoffset] = ACTIONS(131),
    [anon_sym_duration] = ACTIONS(131),
    [anon_sym_in] = ACTIONS(131),
    [anon_sym_difference] = ACTIONS(131),
    [anon_sym_contains] = ACTIONS(131),
    [anon_sym_orbefore] = ACTIONS(133),
    [anon_sym_orafter] = ACTIONS(133),
    [anon_sym_ormore] = ACTIONS(133),
    [anon_sym_orless] = ACTIONS(133),
    [anon_sym_starts] = ACTIONS(131),
    [anon_sym_ends] = ACTIONS(131),
    [anon_sym_start] = ACTIONS(131),
    [anon_sym_end] = ACTIONS(131),
    [anon_sym_includes] = ACTIONS(131),
    [anon_sym_meets] = ACTIONS(131),
    [anon_sym_overlaps] = ACTIONS(131),
    [anon_sym_where] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(133),
    [anon_sym_version] = ACTIONS(131),
    [sym_default_identifier] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [anon_sym_asc] = ACTIONS(131),
    [anon_sym_ascending] = ACTIONS(131),
    [anon_sym_by] = ACTIONS(131),
    [anon_sym_codesystems] = ACTIONS(131),
    [anon_sym_desc] = ACTIONS(131),
    [anon_sym_descending] = ACTIONS(131),
    [anon_sym_display] = ACTIONS(131),
    [anon_sym_div] = ACTIONS(131),
    [anon_sym_fluent] = ACTIONS(131),
    [anon_sym_mod] = ACTIONS(131),
    [anon_sym_predecessor] = ACTIONS(131),
    [anon_sym_starting] = ACTIONS(131),
    [anon_sym_successor] = ACTIONS(131),
    [anon_sym_width] = ACTIONS(131),
    [anon_sym_SQUOTE] = ACTIONS(131),
    [sym_number] = ACTIONS(133),
    [sym_comment] = ACTIONS(3),
  },
  [58] = {
    [sym_date_time_precision] = STATE(417),
    [sym_date_time_precision_specifier] = STATE(69),
    [anon_sym_library] = ACTIONS(124),
    [anon_sym_using] = ACTIONS(124),
    [anon_sym_called] = ACTIONS(124),
    [anon_sym_include] = ACTIONS(124),
    [anon_sym_valueset] = ACTIONS(124),
    [anon_sym_codesystem] = ACTIONS(124),
    [anon_sym_code] = ACTIONS(124),
    [anon_sym_from] = ACTIONS(124),
    [anon_sym_concept] = ACTIONS(124),
    [anon_sym_parameter] = ACTIONS(124),
    [anon_sym_default] = ACTIONS(124),
    [anon_sym_public] = ACTIONS(124),
    [anon_sym_private] = ACTIONS(124),
    [anon_sym_context] = ACTIONS(124),
    [anon_sym_define] = ACTIONS(124),
    [anon_sym_function] = ACTIONS(124),
    [anon_sym_LPAREN] = ACTIONS(126),
    [aux_sym_literal_token1] = ACTIONS(124),
    [anon_sym_null] = ACTIONS(124),
    [anon_sym_not] = ACTIONS(124),
    [anon_sym_cast] = ACTIONS(124),
    [anon_sym_exists] = ACTIONS(124),
    [anon_sym_xor] = ACTIONS(124),
    [anon_sym_implies] = ACTIONS(124),
    [anon_sym_union] = ACTIONS(124),
    [anon_sym_intersect] = ACTIONS(124),
    [anon_sym_except] = ACTIONS(124),
    [anon_sym_year] = ACTIONS(47),
    [anon_sym_month] = ACTIONS(47),
    [anon_sym_week] = ACTIONS(47),
    [anon_sym_day] = ACTIONS(47),
    [anon_sym_hour] = ACTIONS(47),
    [anon_sym_minute] = ACTIONS(47),
    [anon_sym_second] = ACTIONS(47),
    [anon_sym_millisecond] = ACTIONS(47),
    [anon_sym_years] = ACTIONS(124),
    [anon_sym_months] = ACTIONS(124),
    [anon_sym_weeks] = ACTIONS(124),
    [anon_sym_days] = ACTIONS(124),
    [anon_sym_hours] = ACTIONS(124),
    [anon_sym_minutes] = ACTIONS(124),
    [anon_sym_seconds] = ACTIONS(124),
    [anon_sym_milliseconds] = ACTIONS(124),
    [anon_sym_date] = ACTIONS(124),
    [anon_sym_time] = ACTIONS(124),
    [anon_sym_timezone] = ACTIONS(124),
    [anon_sym_timezoneoffset] = ACTIONS(124),
    [anon_sym_duration] = ACTIONS(124),
    [anon_sym_in] = ACTIONS(124),
    [anon_sym_difference] = ACTIONS(124),
    [anon_sym_contains] = ACTIONS(124),
    [anon_sym_orbefore] = ACTIONS(126),
    [anon_sym_orafter] = ACTIONS(126),
    [anon_sym_ormore] = ACTIONS(126),
    [anon_sym_orless] = ACTIONS(126),
    [anon_sym_starts] = ACTIONS(124),
    [anon_sym_ends] = ACTIONS(124),
    [anon_sym_start] = ACTIONS(138),
    [anon_sym_end] = ACTIONS(138),
    [anon_sym_includes] = ACTIONS(124),
    [anon_sym_meets] = ACTIONS(124),
    [anon_sym_overlaps] = ACTIONS(124),
    [anon_sym_where] = ACTIONS(124),
    [anon_sym_LBRACK] = ACTIONS(126),
    [anon_sym_version] = ACTIONS(124),
    [sym_default_identifier] = ACTIONS(124),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [anon_sym_asc] = ACTIONS(124),
    [anon_sym_ascending] = ACTIONS(124),
    [anon_sym_by] = ACTIONS(124),
    [anon_sym_codesystems] = ACTIONS(124),
    [anon_sym_desc] = ACTIONS(124),
    [anon_sym_descending] = ACTIONS(124),
    [anon_sym_display] = ACTIONS(124),
    [anon_sym_div] = ACTIONS(124),
    [anon_sym_fluent] = ACTIONS(124),
    [anon_sym_mod] = ACTIONS(124),
    [anon_sym_predecessor] = ACTIONS(124),
    [anon_sym_starting] = ACTIONS(124),
    [anon_sym_successor] = ACTIONS(124),
    [anon_sym_width] = ACTIONS(124),
    [anon_sym_SQUOTE] = ACTIONS(124),
    [sym_number] = ACTIONS(126),
    [sym_comment] = ACTIONS(3),
  },
  [59] = {
    [anon_sym_library] = ACTIONS(141),
    [anon_sym_using] = ACTIONS(141),
    [anon_sym_called] = ACTIONS(141),
    [anon_sym_include] = ACTIONS(141),
    [anon_sym_valueset] = ACTIONS(141),
    [anon_sym_codesystem] = ACTIONS(141),
    [anon_sym_code] = ACTIONS(141),
    [anon_sym_from] = ACTIONS(141),
    [anon_sym_concept] = ACTIONS(141),
    [anon_sym_parameter] = ACTIONS(141),
    [anon_sym_default] = ACTIONS(141),
    [anon_sym_public] = ACTIONS(141),
    [anon_sym_private] = ACTIONS(141),
    [anon_sym_context] = ACTIONS(141),
    [anon_sym_define] = ACTIONS(141),
    [anon_sym_function] = ACTIONS(141),
    [anon_sym_LPAREN] = ACTIONS(143),
    [aux_sym_literal_token1] = ACTIONS(141),
    [anon_sym_null] = ACTIONS(141),
    [anon_sym_not] = ACTIONS(141),
    [anon_sym_cast] = ACTIONS(141),
    [anon_sym_exists] = ACTIONS(141),
    [anon_sym_xor] = ACTIONS(141),
    [anon_sym_implies] = ACTIONS(141),
    [anon_sym_union] = ACTIONS(141),
    [anon_sym_intersect] = ACTIONS(141),
    [anon_sym_except] = ACTIONS(141),
    [anon_sym_year] = ACTIONS(141),
    [anon_sym_month] = ACTIONS(141),
    [anon_sym_week] = ACTIONS(141),
    [anon_sym_day] = ACTIONS(141),
    [anon_sym_hour] = ACTIONS(141),
    [anon_sym_minute] = ACTIONS(141),
    [anon_sym_second] = ACTIONS(141),
    [anon_sym_millisecond] = ACTIONS(141),
    [anon_sym_years] = ACTIONS(141),
    [anon_sym_months] = ACTIONS(141),
    [anon_sym_weeks] = ACTIONS(141),
    [anon_sym_days] = ACTIONS(141),
    [anon_sym_hours] = ACTIONS(141),
    [anon_sym_minutes] = ACTIONS(141),
    [anon_sym_seconds] = ACTIONS(141),
    [anon_sym_milliseconds] = ACTIONS(141),
    [anon_sym_date] = ACTIONS(141),
    [anon_sym_time] = ACTIONS(141),
    [anon_sym_timezone] = ACTIONS(141),
    [anon_sym_timezoneoffset] = ACTIONS(141),
    [anon_sym_duration] = ACTIONS(141),
    [anon_sym_in] = ACTIONS(141),
    [anon_sym_difference] = ACTIONS(141),
    [anon_sym_contains] = ACTIONS(141),
    [anon_sym_orbefore] = ACTIONS(143),
    [anon_sym_orafter] = ACTIONS(143),
    [anon_sym_ormore] = ACTIONS(143),
    [anon_sym_orless] = ACTIONS(143),
    [anon_sym_oron] = ACTIONS(145),
    [anon_sym_starts] = ACTIONS(141),
    [anon_sym_ends] = ACTIONS(141),
    [anon_sym_start] = ACTIONS(141),
    [anon_sym_end] = ACTIONS(141),
    [anon_sym_includes] = ACTIONS(141),
    [anon_sym_meets] = ACTIONS(141),
    [anon_sym_overlaps] = ACTIONS(141),
    [anon_sym_where] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(143),
    [anon_sym_version] = ACTIONS(141),
    [sym_default_identifier] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [anon_sym_asc] = ACTIONS(141),
    [anon_sym_ascending] = ACTIONS(141),
    [anon_sym_by] = ACTIONS(141),
    [anon_sym_codesystems] = ACTIONS(141),
    [anon_sym_desc] = ACTIONS(141),
    [anon_sym_descending] = ACTIONS(141),
    [anon_sym_display] = ACTIONS(141),
    [anon_sym_div] = ACTIONS(141),
    [anon_sym_fluent] = ACTIONS(141),
    [anon_sym_mod] = ACTIONS(141),
    [anon_sym_predecessor] = ACTIONS(141),
    [anon_sym_starting] = ACTIONS(141),
    [anon_sym_successor] = ACTIONS(141),
    [anon_sym_width] = ACTIONS(141),
    [anon_sym_SQUOTE] = ACTIONS(141),
    [sym_number] = ACTIONS(143),
    [sym_comment] = ACTIONS(3),
  },
  [60] = {
    [anon_sym_library] = ACTIONS(147),
    [anon_sym_using] = ACTIONS(147),
    [anon_sym_called] = ACTIONS(147),
    [anon_sym_include] = ACTIONS(147),
    [anon_sym_valueset] = ACTIONS(147),
    [anon_sym_codesystem] = ACTIONS(147),
    [anon_sym_code] = ACTIONS(147),
    [anon_sym_from] = ACTIONS(147),
    [anon_sym_concept] = ACTIONS(147),
    [anon_sym_parameter] = ACTIONS(147),
    [anon_sym_default] = ACTIONS(147),
    [anon_sym_public] = ACTIONS(147),
    [anon_sym_private] = ACTIONS(147),
    [anon_sym_context] = ACTIONS(147),
    [anon_sym_define] = ACTIONS(147),
    [anon_sym_function] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(149),
    [aux_sym_literal_token1] = ACTIONS(147),
    [anon_sym_null] = ACTIONS(147),
    [anon_sym_not] = ACTIONS(147),
    [anon_sym_cast] = ACTIONS(147),
    [anon_sym_exists] = ACTIONS(147),
    [anon_sym_xor] = ACTIONS(147),
    [anon_sym_implies] = ACTIONS(147),
    [anon_sym_union] = ACTIONS(147),
    [anon_sym_intersect] = ACTIONS(147),
    [anon_sym_except] = ACTIONS(147),
    [anon_sym_year] = ACTIONS(147),
    [anon_sym_month] = ACTIONS(147),
    [anon_sym_week] = ACTIONS(147),
    [anon_sym_day] = ACTIONS(147),
    [anon_sym_hour] = ACTIONS(147),
    [anon_sym_minute] = ACTIONS(147),
    [anon_sym_second] = ACTIONS(147),
    [anon_sym_millisecond] = ACTIONS(147),
    [anon_sym_years] = ACTIONS(147),
    [anon_sym_months] = ACTIONS(147),
    [anon_sym_weeks] = ACTIONS(147),
    [anon_sym_days] = ACTIONS(147),
    [anon_sym_hours] = ACTIONS(147),
    [anon_sym_minutes] = ACTIONS(147),
    [anon_sym_seconds] = ACTIONS(147),
    [anon_sym_milliseconds] = ACTIONS(147),
    [anon_sym_date] = ACTIONS(147),
    [anon_sym_time] = ACTIONS(147),
    [anon_sym_timezone] = ACTIONS(147),
    [anon_sym_timezoneoffset] = ACTIONS(147),
    [anon_sym_duration] = ACTIONS(147),
    [anon_sym_in] = ACTIONS(147),
    [anon_sym_difference] = ACTIONS(147),
    [anon_sym_contains] = ACTIONS(147),
    [anon_sym_orbefore] = ACTIONS(149),
    [anon_sym_orafter] = ACTIONS(149),
    [anon_sym_ormore] = ACTIONS(149),
    [anon_sym_orless] = ACTIONS(149),
    [anon_sym_starts] = ACTIONS(147),
    [anon_sym_ends] = ACTIONS(147),
    [anon_sym_start] = ACTIONS(147),
    [anon_sym_end] = ACTIONS(147),
    [anon_sym_includes] = ACTIONS(147),
    [anon_sym_meets] = ACTIONS(147),
    [anon_sym_overlaps] = ACTIONS(147),
    [anon_sym_where] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_version] = ACTIONS(147),
    [sym_default_identifier] = ACTIONS(147),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [anon_sym_asc] = ACTIONS(147),
    [anon_sym_ascending] = ACTIONS(147),
    [anon_sym_by] = ACTIONS(147),
    [anon_sym_codesystems] = ACTIONS(147),
    [anon_sym_desc] = ACTIONS(147),
    [anon_sym_descending] = ACTIONS(147),
    [anon_sym_display] = ACTIONS(147),
    [anon_sym_div] = ACTIONS(147),
    [anon_sym_fluent] = ACTIONS(147),
    [anon_sym_mod] = ACTIONS(147),
    [anon_sym_predecessor] = ACTIONS(147),
    [anon_sym_starting] = ACTIONS(147),
    [anon_sym_successor] = ACTIONS(147),
    [anon_sym_width] = ACTIONS(147),
    [anon_sym_SQUOTE] = ACTIONS(147),
    [sym_number] = ACTIONS(149),
    [sym_comment] = ACTIONS(3),
  },
  [61] = {
    [anon_sym_library] = ACTIONS(151),
    [anon_sym_using] = ACTIONS(151),
    [anon_sym_called] = ACTIONS(151),
    [anon_sym_include] = ACTIONS(151),
    [anon_sym_valueset] = ACTIONS(151),
    [anon_sym_codesystem] = ACTIONS(151),
    [anon_sym_code] = ACTIONS(151),
    [anon_sym_from] = ACTIONS(151),
    [anon_sym_concept] = ACTIONS(151),
    [anon_sym_parameter] = ACTIONS(151),
    [anon_sym_default] = ACTIONS(151),
    [anon_sym_public] = ACTIONS(151),
    [anon_sym_private] = ACTIONS(151),
    [anon_sym_context] = ACTIONS(151),
    [anon_sym_define] = ACTIONS(151),
    [anon_sym_function] = ACTIONS(151),
    [anon_sym_LPAREN] = ACTIONS(153),
    [aux_sym_literal_token1] = ACTIONS(151),
    [anon_sym_null] = ACTIONS(151),
    [anon_sym_not] = ACTIONS(151),
    [anon_sym_cast] = ACTIONS(151),
    [anon_sym_exists] = ACTIONS(151),
    [anon_sym_xor] = ACTIONS(151),
    [anon_sym_implies] = ACTIONS(151),
    [anon_sym_union] = ACTIONS(151),
    [anon_sym_intersect] = ACTIONS(151),
    [anon_sym_except] = ACTIONS(151),
    [anon_sym_years] = ACTIONS(151),
    [anon_sym_months] = ACTIONS(151),
    [anon_sym_weeks] = ACTIONS(151),
    [anon_sym_days] = ACTIONS(151),
    [anon_sym_hours] = ACTIONS(151),
    [anon_sym_minutes] = ACTIONS(151),
    [anon_sym_seconds] = ACTIONS(151),
    [anon_sym_milliseconds] = ACTIONS(151),
    [anon_sym_date] = ACTIONS(151),
    [anon_sym_time] = ACTIONS(151),
    [anon_sym_timezone] = ACTIONS(151),
    [anon_sym_timezoneoffset] = ACTIONS(151),
    [anon_sym_duration] = ACTIONS(151),
    [anon_sym_in] = ACTIONS(151),
    [anon_sym_difference] = ACTIONS(151),
    [anon_sym_contains] = ACTIONS(151),
    [anon_sym_orbefore] = ACTIONS(153),
    [anon_sym_orafter] = ACTIONS(153),
    [anon_sym_ormore] = ACTIONS(153),
    [anon_sym_orless] = ACTIONS(153),
    [anon_sym_starts] = ACTIONS(151),
    [anon_sym_ends] = ACTIONS(151),
    [anon_sym_start] = ACTIONS(155),
    [anon_sym_end] = ACTIONS(155),
    [anon_sym_includes] = ACTIONS(151),
    [anon_sym_meets] = ACTIONS(151),
    [anon_sym_overlaps] = ACTIONS(151),
    [anon_sym_where] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_version] = ACTIONS(151),
    [sym_default_identifier] = ACTIONS(151),
    [anon_sym_DQUOTE] = ACTIONS(153),
    [anon_sym_asc] = ACTIONS(151),
    [anon_sym_ascending] = ACTIONS(151),
    [anon_sym_by] = ACTIONS(151),
    [anon_sym_codesystems] = ACTIONS(151),
    [anon_sym_desc] = ACTIONS(151),
    [anon_sym_descending] = ACTIONS(151),
    [anon_sym_display] = ACTIONS(151),
    [anon_sym_div] = ACTIONS(151),
    [anon_sym_fluent] = ACTIONS(151),
    [anon_sym_mod] = ACTIONS(151),
    [anon_sym_predecessor] = ACTIONS(151),
    [anon_sym_starting] = ACTIONS(151),
    [anon_sym_successor] = ACTIONS(151),
    [anon_sym_width] = ACTIONS(151),
    [anon_sym_SQUOTE] = ACTIONS(151),
    [sym_number] = ACTIONS(153),
    [sym_comment] = ACTIONS(3),
  },
  [62] = {
    [anon_sym_library] = ACTIONS(158),
    [anon_sym_using] = ACTIONS(158),
    [anon_sym_called] = ACTIONS(158),
    [anon_sym_include] = ACTIONS(158),
    [anon_sym_valueset] = ACTIONS(158),
    [anon_sym_codesystem] = ACTIONS(158),
    [anon_sym_code] = ACTIONS(158),
    [anon_sym_from] = ACTIONS(158),
    [anon_sym_concept] = ACTIONS(158),
    [anon_sym_parameter] = ACTIONS(158),
    [anon_sym_default] = ACTIONS(158),
    [anon_sym_public] = ACTIONS(158),
    [anon_sym_private] = ACTIONS(158),
    [anon_sym_context] = ACTIONS(158),
    [anon_sym_define] = ACTIONS(158),
    [anon_sym_function] = ACTIONS(158),
    [anon_sym_LPAREN] = ACTIONS(160),
    [aux_sym_literal_token1] = ACTIONS(158),
    [anon_sym_null] = ACTIONS(158),
    [anon_sym_not] = ACTIONS(158),
    [anon_sym_cast] = ACTIONS(158),
    [anon_sym_exists] = ACTIONS(158),
    [anon_sym_xor] = ACTIONS(158),
    [anon_sym_implies] = ACTIONS(158),
    [anon_sym_union] = ACTIONS(158),
    [anon_sym_intersect] = ACTIONS(158),
    [anon_sym_except] = ACTIONS(158),
    [anon_sym_years] = ACTIONS(158),
    [anon_sym_months] = ACTIONS(158),
    [anon_sym_weeks] = ACTIONS(158),
    [anon_sym_days] = ACTIONS(158),
    [anon_sym_hours] = ACTIONS(158),
    [anon_sym_minutes] = ACTIONS(158),
    [anon_sym_seconds] = ACTIONS(158),
    [anon_sym_milliseconds] = ACTIONS(158),
    [anon_sym_date] = ACTIONS(158),
    [anon_sym_time] = ACTIONS(158),
    [anon_sym_timezone] = ACTIONS(158),
    [anon_sym_timezoneoffset] = ACTIONS(158),
    [anon_sym_duration] = ACTIONS(158),
    [anon_sym_in] = ACTIONS(158),
    [anon_sym_difference] = ACTIONS(158),
    [anon_sym_contains] = ACTIONS(158),
    [anon_sym_orbefore] = ACTIONS(160),
    [anon_sym_orafter] = ACTIONS(160),
    [anon_sym_ormore] = ACTIONS(160),
    [anon_sym_orless] = ACTIONS(160),
    [anon_sym_starts] = ACTIONS(158),
    [anon_sym_ends] = ACTIONS(158),
    [anon_sym_start] = ACTIONS(162),
    [anon_sym_end] = ACTIONS(162),
    [anon_sym_includes] = ACTIONS(158),
    [anon_sym_meets] = ACTIONS(158),
    [anon_sym_overlaps] = ACTIONS(158),
    [anon_sym_where] = ACTIONS(158),
    [anon_sym_LBRACK] = ACTIONS(160),
    [anon_sym_version] = ACTIONS(158),
    [sym_default_identifier] = ACTIONS(158),
    [anon_sym_DQUOTE] = ACTIONS(160),
    [anon_sym_asc] = ACTIONS(158),
    [anon_sym_ascending] = ACTIONS(158),
    [anon_sym_by] = ACTIONS(158),
    [anon_sym_codesystems] = ACTIONS(158),
    [anon_sym_desc] = ACTIONS(158),
    [anon_sym_descending] = ACTIONS(158),
    [anon_sym_display] = ACTIONS(158),
    [anon_sym_div] = ACTIONS(158),
    [anon_sym_fluent] = ACTIONS(158),
    [anon_sym_mod] = ACTIONS(158),
    [anon_sym_predecessor] = ACTIONS(158),
    [anon_sym_starting] = ACTIONS(158),
    [anon_sym_successor] = ACTIONS(158),
    [anon_sym_width] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(158),
    [sym_number] = ACTIONS(160),
    [sym_comment] = ACTIONS(3),
  },
  [63] = {
    [anon_sym_library] = ACTIONS(165),
    [anon_sym_using] = ACTIONS(165),
    [anon_sym_called] = ACTIONS(165),
    [anon_sym_include] = ACTIONS(165),
    [anon_sym_valueset] = ACTIONS(165),
    [anon_sym_codesystem] = ACTIONS(165),
    [anon_sym_code] = ACTIONS(165),
    [anon_sym_from] = ACTIONS(165),
    [anon_sym_concept] = ACTIONS(165),
    [anon_sym_parameter] = ACTIONS(165),
    [anon_sym_default] = ACTIONS(165),
    [anon_sym_public] = ACTIONS(165),
    [anon_sym_private] = ACTIONS(165),
    [anon_sym_context] = ACTIONS(165),
    [anon_sym_define] = ACTIONS(165),
    [anon_sym_function] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [aux_sym_literal_token1] = ACTIONS(165),
    [anon_sym_null] = ACTIONS(165),
    [anon_sym_not] = ACTIONS(165),
    [anon_sym_cast] = ACTIONS(165),
    [anon_sym_exists] = ACTIONS(165),
    [anon_sym_xor] = ACTIONS(165),
    [anon_sym_implies] = ACTIONS(165),
    [anon_sym_union] = ACTIONS(165),
    [anon_sym_intersect] = ACTIONS(165),
    [anon_sym_except] = ACTIONS(165),
    [anon_sym_years] = ACTIONS(165),
    [anon_sym_months] = ACTIONS(165),
    [anon_sym_weeks] = ACTIONS(165),
    [anon_sym_days] = ACTIONS(165),
    [anon_sym_hours] = ACTIONS(165),
    [anon_sym_minutes] = ACTIONS(165),
    [anon_sym_seconds] = ACTIONS(165),
    [anon_sym_milliseconds] = ACTIONS(165),
    [anon_sym_date] = ACTIONS(165),
    [anon_sym_time] = ACTIONS(165),
    [anon_sym_timezone] = ACTIONS(165),
    [anon_sym_timezoneoffset] = ACTIONS(165),
    [anon_sym_duration] = ACTIONS(165),
    [anon_sym_in] = ACTIONS(165),
    [anon_sym_difference] = ACTIONS(165),
    [anon_sym_contains] = ACTIONS(165),
    [anon_sym_orbefore] = ACTIONS(167),
    [anon_sym_orafter] = ACTIONS(167),
    [anon_sym_ormore] = ACTIONS(167),
    [anon_sym_orless] = ACTIONS(167),
    [anon_sym_starts] = ACTIONS(165),
    [anon_sym_ends] = ACTIONS(165),
    [anon_sym_start] = ACTIONS(165),
    [anon_sym_end] = ACTIONS(165),
    [anon_sym_includes] = ACTIONS(165),
    [anon_sym_meets] = ACTIONS(165),
    [anon_sym_overlaps] = ACTIONS(165),
    [anon_sym_where] = ACTIONS(165),
    [anon_sym_LBRACK] = ACTIONS(167),
    [anon_sym_version] = ACTIONS(165),
    [sym_default_identifier] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(167),
    [anon_sym_asc] = ACTIONS(165),
    [anon_sym_ascending] = ACTIONS(165),
    [anon_sym_by] = ACTIONS(165),
    [anon_sym_codesystems] = ACTIONS(165),
    [anon_sym_desc] = ACTIONS(165),
    [anon_sym_descending] = ACTIONS(165),
    [anon_sym_display] = ACTIONS(165),
    [anon_sym_div] = ACTIONS(165),
    [anon_sym_fluent] = ACTIONS(165),
    [anon_sym_mod] = ACTIONS(165),
    [anon_sym_predecessor] = ACTIONS(165),
    [anon_sym_starting] = ACTIONS(165),
    [anon_sym_successor] = ACTIONS(165),
    [anon_sym_width] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [sym_number] = ACTIONS(167),
    [sym_comment] = ACTIONS(3),
  },
  [64] = {
    [anon_sym_library] = ACTIONS(158),
    [anon_sym_using] = ACTIONS(158),
    [anon_sym_called] = ACTIONS(158),
    [anon_sym_include] = ACTIONS(158),
    [anon_sym_valueset] = ACTIONS(158),
    [anon_sym_codesystem] = ACTIONS(158),
    [anon_sym_code] = ACTIONS(158),
    [anon_sym_from] = ACTIONS(158),
    [anon_sym_concept] = ACTIONS(158),
    [anon_sym_parameter] = ACTIONS(158),
    [anon_sym_default] = ACTIONS(158),
    [anon_sym_public] = ACTIONS(158),
    [anon_sym_private] = ACTIONS(158),
    [anon_sym_context] = ACTIONS(158),
    [anon_sym_define] = ACTIONS(158),
    [anon_sym_function] = ACTIONS(158),
    [anon_sym_LPAREN] = ACTIONS(160),
    [aux_sym_literal_token1] = ACTIONS(158),
    [anon_sym_null] = ACTIONS(158),
    [anon_sym_not] = ACTIONS(158),
    [anon_sym_cast] = ACTIONS(158),
    [anon_sym_exists] = ACTIONS(158),
    [anon_sym_xor] = ACTIONS(158),
    [anon_sym_implies] = ACTIONS(158),
    [anon_sym_union] = ACTIONS(158),
    [anon_sym_intersect] = ACTIONS(158),
    [anon_sym_except] = ACTIONS(158),
    [anon_sym_years] = ACTIONS(158),
    [anon_sym_months] = ACTIONS(158),
    [anon_sym_weeks] = ACTIONS(158),
    [anon_sym_days] = ACTIONS(158),
    [anon_sym_hours] = ACTIONS(158),
    [anon_sym_minutes] = ACTIONS(158),
    [anon_sym_seconds] = ACTIONS(158),
    [anon_sym_milliseconds] = ACTIONS(158),
    [anon_sym_date] = ACTIONS(158),
    [anon_sym_time] = ACTIONS(158),
    [anon_sym_timezone] = ACTIONS(158),
    [anon_sym_timezoneoffset] = ACTIONS(158),
    [anon_sym_duration] = ACTIONS(158),
    [anon_sym_in] = ACTIONS(158),
    [anon_sym_difference] = ACTIONS(158),
    [anon_sym_contains] = ACTIONS(158),
    [anon_sym_orbefore] = ACTIONS(160),
    [anon_sym_orafter] = ACTIONS(160),
    [anon_sym_ormore] = ACTIONS(160),
    [anon_sym_orless] = ACTIONS(160),
    [anon_sym_starts] = ACTIONS(158),
    [anon_sym_ends] = ACTIONS(158),
    [anon_sym_start] = ACTIONS(158),
    [anon_sym_end] = ACTIONS(158),
    [anon_sym_includes] = ACTIONS(158),
    [anon_sym_meets] = ACTIONS(158),
    [anon_sym_overlaps] = ACTIONS(158),
    [anon_sym_where] = ACTIONS(158),
    [anon_sym_LBRACK] = ACTIONS(160),
    [anon_sym_version] = ACTIONS(158),
    [sym_default_identifier] = ACTIONS(158),
    [anon_sym_DQUOTE] = ACTIONS(160),
    [anon_sym_asc] = ACTIONS(158),
    [anon_sym_ascending] = ACTIONS(158),
    [anon_sym_by] = ACTIONS(158),
    [anon_sym_codesystems] = ACTIONS(158),
    [anon_sym_desc] = ACTIONS(158),
    [anon_sym_descending] = ACTIONS(158),
    [anon_sym_display] = ACTIONS(158),
    [anon_sym_div] = ACTIONS(158),
    [anon_sym_fluent] = ACTIONS(158),
    [anon_sym_mod] = ACTIONS(158),
    [anon_sym_predecessor] = ACTIONS(158),
    [anon_sym_starting] = ACTIONS(158),
    [anon_sym_successor] = ACTIONS(158),
    [anon_sym_width] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(158),
    [sym_number] = ACTIONS(160),
    [sym_comment] = ACTIONS(3),
  },
  [65] = {
    [anon_sym_library] = ACTIONS(169),
    [anon_sym_using] = ACTIONS(169),
    [anon_sym_called] = ACTIONS(169),
    [anon_sym_include] = ACTIONS(169),
    [anon_sym_valueset] = ACTIONS(169),
    [anon_sym_codesystem] = ACTIONS(169),
    [anon_sym_code] = ACTIONS(169),
    [anon_sym_from] = ACTIONS(169),
    [anon_sym_concept] = ACTIONS(169),
    [anon_sym_parameter] = ACTIONS(169),
    [anon_sym_default] = ACTIONS(169),
    [anon_sym_public] = ACTIONS(169),
    [anon_sym_private] = ACTIONS(169),
    [anon_sym_context] = ACTIONS(169),
    [anon_sym_define] = ACTIONS(169),
    [anon_sym_function] = ACTIONS(169),
    [anon_sym_LPAREN] = ACTIONS(171),
    [aux_sym_literal_token1] = ACTIONS(169),
    [anon_sym_null] = ACTIONS(169),
    [anon_sym_not] = ACTIONS(169),
    [anon_sym_cast] = ACTIONS(169),
    [anon_sym_exists] = ACTIONS(169),
    [anon_sym_xor] = ACTIONS(169),
    [anon_sym_implies] = ACTIONS(169),
    [anon_sym_union] = ACTIONS(169),
    [anon_sym_intersect] = ACTIONS(169),
    [anon_sym_except] = ACTIONS(169),
    [anon_sym_years] = ACTIONS(169),
    [anon_sym_months] = ACTIONS(169),
    [anon_sym_weeks] = ACTIONS(169),
    [anon_sym_days] = ACTIONS(169),
    [anon_sym_hours] = ACTIONS(169),
    [anon_sym_minutes] = ACTIONS(169),
    [anon_sym_seconds] = ACTIONS(169),
    [anon_sym_milliseconds] = ACTIONS(169),
    [anon_sym_date] = ACTIONS(169),
    [anon_sym_time] = ACTIONS(169),
    [anon_sym_timezone] = ACTIONS(169),
    [anon_sym_timezoneoffset] = ACTIONS(169),
    [anon_sym_duration] = ACTIONS(169),
    [anon_sym_in] = ACTIONS(169),
    [anon_sym_difference] = ACTIONS(169),
    [anon_sym_contains] = ACTIONS(169),
    [anon_sym_orbefore] = ACTIONS(171),
    [anon_sym_orafter] = ACTIONS(171),
    [anon_sym_ormore] = ACTIONS(171),
    [anon_sym_orless] = ACTIONS(171),
    [anon_sym_starts] = ACTIONS(169),
    [anon_sym_ends] = ACTIONS(169),
    [anon_sym_start] = ACTIONS(169),
    [anon_sym_end] = ACTIONS(169),
    [anon_sym_includes] = ACTIONS(169),
    [anon_sym_meets] = ACTIONS(169),
    [anon_sym_overlaps] = ACTIONS(169),
    [anon_sym_where] = ACTIONS(169),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_version] = ACTIONS(169),
    [sym_default_identifier] = ACTIONS(169),
    [anon_sym_DQUOTE] = ACTIONS(171),
    [anon_sym_asc] = ACTIONS(169),
    [anon_sym_ascending] = ACTIONS(169),
    [anon_sym_by] = ACTIONS(169),
    [anon_sym_codesystems] = ACTIONS(169),
    [anon_sym_desc] = ACTIONS(169),
    [anon_sym_descending] = ACTIONS(169),
    [anon_sym_display] = ACTIONS(169),
    [anon_sym_div] = ACTIONS(169),
    [anon_sym_fluent] = ACTIONS(169),
    [anon_sym_mod] = ACTIONS(169),
    [anon_sym_predecessor] = ACTIONS(169),
    [anon_sym_starting] = ACTIONS(169),
    [anon_sym_successor] = ACTIONS(169),
    [anon_sym_width] = ACTIONS(169),
    [anon_sym_SQUOTE] = ACTIONS(169),
    [sym_number] = ACTIONS(171),
    [sym_comment] = ACTIONS(3),
  },
  [66] = {
    [anon_sym_library] = ACTIONS(124),
    [anon_sym_using] = ACTIONS(124),
    [anon_sym_called] = ACTIONS(124),
    [anon_sym_include] = ACTIONS(124),
    [anon_sym_valueset] = ACTIONS(124),
    [anon_sym_codesystem] = ACTIONS(124),
    [anon_sym_code] = ACTIONS(124),
    [anon_sym_from] = ACTIONS(124),
    [anon_sym_concept] = ACTIONS(124),
    [anon_sym_parameter] = ACTIONS(124),
    [anon_sym_default] = ACTIONS(124),
    [anon_sym_public] = ACTIONS(124),
    [anon_sym_private] = ACTIONS(124),
    [anon_sym_context] = ACTIONS(124),
    [anon_sym_define] = ACTIONS(124),
    [anon_sym_function] = ACTIONS(124),
    [anon_sym_LPAREN] = ACTIONS(126),
    [aux_sym_literal_token1] = ACTIONS(124),
    [anon_sym_null] = ACTIONS(124),
    [anon_sym_not] = ACTIONS(124),
    [anon_sym_cast] = ACTIONS(124),
    [anon_sym_exists] = ACTIONS(124),
    [anon_sym_xor] = ACTIONS(124),
    [anon_sym_implies] = ACTIONS(124),
    [anon_sym_union] = ACTIONS(124),
    [anon_sym_intersect] = ACTIONS(124),
    [anon_sym_except] = ACTIONS(124),
    [anon_sym_years] = ACTIONS(124),
    [anon_sym_months] = ACTIONS(124),
    [anon_sym_weeks] = ACTIONS(124),
    [anon_sym_days] = ACTIONS(124),
    [anon_sym_hours] = ACTIONS(124),
    [anon_sym_minutes] = ACTIONS(124),
    [anon_sym_seconds] = ACTIONS(124),
    [anon_sym_milliseconds] = ACTIONS(124),
    [anon_sym_date] = ACTIONS(124),
    [anon_sym_time] = ACTIONS(124),
    [anon_sym_timezone] = ACTIONS(124),
    [anon_sym_timezoneoffset] = ACTIONS(124),
    [anon_sym_duration] = ACTIONS(124),
    [anon_sym_in] = ACTIONS(124),
    [anon_sym_difference] = ACTIONS(124),
    [anon_sym_contains] = ACTIONS(124),
    [anon_sym_orbefore] = ACTIONS(126),
    [anon_sym_orafter] = ACTIONS(126),
    [anon_sym_ormore] = ACTIONS(126),
    [anon_sym_orless] = ACTIONS(126),
    [anon_sym_starts] = ACTIONS(124),
    [anon_sym_ends] = ACTIONS(124),
    [anon_sym_start] = ACTIONS(138),
    [anon_sym_end] = ACTIONS(138),
    [anon_sym_includes] = ACTIONS(124),
    [anon_sym_meets] = ACTIONS(124),
    [anon_sym_overlaps] = ACTIONS(124),
    [anon_sym_where] = ACTIONS(124),
    [anon_sym_LBRACK] = ACTIONS(126),
    [anon_sym_version] = ACTIONS(124),
    [sym_default_identifier] = ACTIONS(124),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [anon_sym_asc] = ACTIONS(124),
    [anon_sym_ascending] = ACTIONS(124),
    [anon_sym_by] = ACTIONS(124),
    [anon_sym_codesystems] = ACTIONS(124),
    [anon_sym_desc] = ACTIONS(124),
    [anon_sym_descending] = ACTIONS(124),
    [anon_sym_display] = ACTIONS(124),
    [anon_sym_div] = ACTIONS(124),
    [anon_sym_fluent] = ACTIONS(124),
    [anon_sym_mod] = ACTIONS(124),
    [anon_sym_predecessor] = ACTIONS(124),
    [anon_sym_starting] = ACTIONS(124),
    [anon_sym_successor] = ACTIONS(124),
    [anon_sym_width] = ACTIONS(124),
    [anon_sym_SQUOTE] = ACTIONS(124),
    [sym_number] = ACTIONS(126),
    [sym_comment] = ACTIONS(3),
  },
  [67] = {
    [anon_sym_library] = ACTIONS(151),
    [anon_sym_using] = ACTIONS(151),
    [anon_sym_called] = ACTIONS(151),
    [anon_sym_include] = ACTIONS(151),
    [anon_sym_valueset] = ACTIONS(151),
    [anon_sym_codesystem] = ACTIONS(151),
    [anon_sym_code] = ACTIONS(151),
    [anon_sym_from] = ACTIONS(151),
    [anon_sym_concept] = ACTIONS(151),
    [anon_sym_parameter] = ACTIONS(151),
    [anon_sym_default] = ACTIONS(151),
    [anon_sym_public] = ACTIONS(151),
    [anon_sym_private] = ACTIONS(151),
    [anon_sym_context] = ACTIONS(151),
    [anon_sym_define] = ACTIONS(151),
    [anon_sym_function] = ACTIONS(151),
    [anon_sym_LPAREN] = ACTIONS(153),
    [aux_sym_literal_token1] = ACTIONS(151),
    [anon_sym_null] = ACTIONS(151),
    [anon_sym_not] = ACTIONS(151),
    [anon_sym_cast] = ACTIONS(151),
    [anon_sym_exists] = ACTIONS(151),
    [anon_sym_xor] = ACTIONS(151),
    [anon_sym_implies] = ACTIONS(151),
    [anon_sym_union] = ACTIONS(151),
    [anon_sym_intersect] = ACTIONS(151),
    [anon_sym_except] = ACTIONS(151),
    [anon_sym_years] = ACTIONS(151),
    [anon_sym_months] = ACTIONS(151),
    [anon_sym_weeks] = ACTIONS(151),
    [anon_sym_days] = ACTIONS(151),
    [anon_sym_hours] = ACTIONS(151),
    [anon_sym_minutes] = ACTIONS(151),
    [anon_sym_seconds] = ACTIONS(151),
    [anon_sym_milliseconds] = ACTIONS(151),
    [anon_sym_date] = ACTIONS(151),
    [anon_sym_time] = ACTIONS(151),
    [anon_sym_timezone] = ACTIONS(151),
    [anon_sym_timezoneoffset] = ACTIONS(151),
    [anon_sym_duration] = ACTIONS(151),
    [anon_sym_in] = ACTIONS(151),
    [anon_sym_difference] = ACTIONS(151),
    [anon_sym_contains] = ACTIONS(151),
    [anon_sym_orbefore] = ACTIONS(153),
    [anon_sym_orafter] = ACTIONS(153),
    [anon_sym_ormore] = ACTIONS(153),
    [anon_sym_orless] = ACTIONS(153),
    [anon_sym_starts] = ACTIONS(151),
    [anon_sym_ends] = ACTIONS(151),
    [anon_sym_start] = ACTIONS(151),
    [anon_sym_end] = ACTIONS(151),
    [anon_sym_includes] = ACTIONS(151),
    [anon_sym_meets] = ACTIONS(151),
    [anon_sym_overlaps] = ACTIONS(151),
    [anon_sym_where] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_version] = ACTIONS(151),
    [sym_default_identifier] = ACTIONS(151),
    [anon_sym_DQUOTE] = ACTIONS(153),
    [anon_sym_asc] = ACTIONS(151),
    [anon_sym_ascending] = ACTIONS(151),
    [anon_sym_by] = ACTIONS(151),
    [anon_sym_codesystems] = ACTIONS(151),
    [anon_sym_desc] = ACTIONS(151),
    [anon_sym_descending] = ACTIONS(151),
    [anon_sym_display] = ACTIONS(151),
    [anon_sym_div] = ACTIONS(151),
    [anon_sym_fluent] = ACTIONS(151),
    [anon_sym_mod] = ACTIONS(151),
    [anon_sym_predecessor] = ACTIONS(151),
    [anon_sym_starting] = ACTIONS(151),
    [anon_sym_successor] = ACTIONS(151),
    [anon_sym_width] = ACTIONS(151),
    [anon_sym_SQUOTE] = ACTIONS(151),
    [sym_number] = ACTIONS(153),
    [sym_comment] = ACTIONS(3),
  },
  [68] = {
    [anon_sym_library] = ACTIONS(124),
    [anon_sym_using] = ACTIONS(124),
    [anon_sym_called] = ACTIONS(124),
    [anon_sym_include] = ACTIONS(124),
    [anon_sym_valueset] = ACTIONS(124),
    [anon_sym_codesystem] = ACTIONS(124),
    [anon_sym_code] = ACTIONS(124),
    [anon_sym_from] = ACTIONS(124),
    [anon_sym_concept] = ACTIONS(124),
    [anon_sym_parameter] = ACTIONS(124),
    [anon_sym_default] = ACTIONS(124),
    [anon_sym_public] = ACTIONS(124),
    [anon_sym_private] = ACTIONS(124),
    [anon_sym_context] = ACTIONS(124),
    [anon_sym_define] = ACTIONS(124),
    [anon_sym_function] = ACTIONS(124),
    [anon_sym_LPAREN] = ACTIONS(126),
    [aux_sym_literal_token1] = ACTIONS(124),
    [anon_sym_null] = ACTIONS(124),
    [anon_sym_not] = ACTIONS(124),
    [anon_sym_cast] = ACTIONS(124),
    [anon_sym_exists] = ACTIONS(124),
    [anon_sym_xor] = ACTIONS(124),
    [anon_sym_implies] = ACTIONS(124),
    [anon_sym_union] = ACTIONS(124),
    [anon_sym_intersect] = ACTIONS(124),
    [anon_sym_except] = ACTIONS(124),
    [anon_sym_years] = ACTIONS(124),
    [anon_sym_months] = ACTIONS(124),
    [anon_sym_weeks] = ACTIONS(124),
    [anon_sym_days] = ACTIONS(124),
    [anon_sym_hours] = ACTIONS(124),
    [anon_sym_minutes] = ACTIONS(124),
    [anon_sym_seconds] = ACTIONS(124),
    [anon_sym_milliseconds] = ACTIONS(124),
    [anon_sym_date] = ACTIONS(124),
    [anon_sym_time] = ACTIONS(124),
    [anon_sym_timezone] = ACTIONS(124),
    [anon_sym_timezoneoffset] = ACTIONS(124),
    [anon_sym_duration] = ACTIONS(124),
    [anon_sym_in] = ACTIONS(124),
    [anon_sym_difference] = ACTIONS(124),
    [anon_sym_contains] = ACTIONS(124),
    [anon_sym_orbefore] = ACTIONS(126),
    [anon_sym_orafter] = ACTIONS(126),
    [anon_sym_ormore] = ACTIONS(126),
    [anon_sym_orless] = ACTIONS(126),
    [anon_sym_starts] = ACTIONS(124),
    [anon_sym_ends] = ACTIONS(124),
    [anon_sym_start] = ACTIONS(124),
    [anon_sym_end] = ACTIONS(124),
    [anon_sym_includes] = ACTIONS(124),
    [anon_sym_meets] = ACTIONS(124),
    [anon_sym_overlaps] = ACTIONS(124),
    [anon_sym_where] = ACTIONS(124),
    [anon_sym_LBRACK] = ACTIONS(126),
    [anon_sym_version] = ACTIONS(124),
    [sym_default_identifier] = ACTIONS(124),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [anon_sym_asc] = ACTIONS(124),
    [anon_sym_ascending] = ACTIONS(124),
    [anon_sym_by] = ACTIONS(124),
    [anon_sym_codesystems] = ACTIONS(124),
    [anon_sym_desc] = ACTIONS(124),
    [anon_sym_descending] = ACTIONS(124),
    [anon_sym_display] = ACTIONS(124),
    [anon_sym_div] = ACTIONS(124),
    [anon_sym_fluent] = ACTIONS(124),
    [anon_sym_mod] = ACTIONS(124),
    [anon_sym_predecessor] = ACTIONS(124),
    [anon_sym_starting] = ACTIONS(124),
    [anon_sym_successor] = ACTIONS(124),
    [anon_sym_width] = ACTIONS(124),
    [anon_sym_SQUOTE] = ACTIONS(124),
    [sym_number] = ACTIONS(126),
    [sym_comment] = ACTIONS(3),
  },
  [69] = {
    [anon_sym_library] = ACTIONS(131),
    [anon_sym_using] = ACTIONS(131),
    [anon_sym_called] = ACTIONS(131),
    [anon_sym_include] = ACTIONS(131),
    [anon_sym_valueset] = ACTIONS(131),
    [anon_sym_codesystem] = ACTIONS(131),
    [anon_sym_code] = ACTIONS(131),
    [anon_sym_from] = ACTIONS(131),
    [anon_sym_concept] = ACTIONS(131),
    [anon_sym_parameter] = ACTIONS(131),
    [anon_sym_default] = ACTIONS(131),
    [anon_sym_public] = ACTIONS(131),
    [anon_sym_private] = ACTIONS(131),
    [anon_sym_context] = ACTIONS(131),
    [anon_sym_define] = ACTIONS(131),
    [anon_sym_function] = ACTIONS(131),
    [anon_sym_LPAREN] = ACTIONS(133),
    [aux_sym_literal_token1] = ACTIONS(131),
    [anon_sym_null] = ACTIONS(131),
    [anon_sym_not] = ACTIONS(131),
    [anon_sym_cast] = ACTIONS(131),
    [anon_sym_exists] = ACTIONS(131),
    [anon_sym_xor] = ACTIONS(131),
    [anon_sym_implies] = ACTIONS(131),
    [anon_sym_union] = ACTIONS(131),
    [anon_sym_intersect] = ACTIONS(131),
    [anon_sym_except] = ACTIONS(131),
    [anon_sym_years] = ACTIONS(131),
    [anon_sym_months] = ACTIONS(131),
    [anon_sym_weeks] = ACTIONS(131),
    [anon_sym_days] = ACTIONS(131),
    [anon_sym_hours] = ACTIONS(131),
    [anon_sym_minutes] = ACTIONS(131),
    [anon_sym_seconds] = ACTIONS(131),
    [anon_sym_milliseconds] = ACTIONS(131),
    [anon_sym_date] = ACTIONS(131),
    [anon_sym_time] = ACTIONS(131),
    [anon_sym_timezone] = ACTIONS(131),
    [anon_sym_timezoneoffset] = ACTIONS(131),
    [anon_sym_duration] = ACTIONS(131),
    [anon_sym_in] = ACTIONS(131),
    [anon_sym_difference] = ACTIONS(131),
    [anon_sym_contains] = ACTIONS(131),
    [anon_sym_orbefore] = ACTIONS(133),
    [anon_sym_orafter] = ACTIONS(133),
    [anon_sym_ormore] = ACTIONS(133),
    [anon_sym_orless] = ACTIONS(133),
    [anon_sym_starts] = ACTIONS(131),
    [anon_sym_ends] = ACTIONS(131),
    [anon_sym_start] = ACTIONS(135),
    [anon_sym_end] = ACTIONS(135),
    [anon_sym_includes] = ACTIONS(131),
    [anon_sym_meets] = ACTIONS(131),
    [anon_sym_overlaps] = ACTIONS(131),
    [anon_sym_where] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(133),
    [anon_sym_version] = ACTIONS(131),
    [sym_default_identifier] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [anon_sym_asc] = ACTIONS(131),
    [anon_sym_ascending] = ACTIONS(131),
    [anon_sym_by] = ACTIONS(131),
    [anon_sym_codesystems] = ACTIONS(131),
    [anon_sym_desc] = ACTIONS(131),
    [anon_sym_descending] = ACTIONS(131),
    [anon_sym_display] = ACTIONS(131),
    [anon_sym_div] = ACTIONS(131),
    [anon_sym_fluent] = ACTIONS(131),
    [anon_sym_mod] = ACTIONS(131),
    [anon_sym_predecessor] = ACTIONS(131),
    [anon_sym_starting] = ACTIONS(131),
    [anon_sym_successor] = ACTIONS(131),
    [anon_sym_width] = ACTIONS(131),
    [anon_sym_SQUOTE] = ACTIONS(131),
    [sym_number] = ACTIONS(133),
    [sym_comment] = ACTIONS(3),
  },
  [70] = {
    [anon_sym_library] = ACTIONS(131),
    [anon_sym_using] = ACTIONS(131),
    [anon_sym_called] = ACTIONS(131),
    [anon_sym_include] = ACTIONS(131),
    [anon_sym_valueset] = ACTIONS(131),
    [anon_sym_codesystem] = ACTIONS(131),
    [anon_sym_code] = ACTIONS(131),
    [anon_sym_from] = ACTIONS(131),
    [anon_sym_concept] = ACTIONS(131),
    [anon_sym_parameter] = ACTIONS(131),
    [anon_sym_default] = ACTIONS(131),
    [anon_sym_public] = ACTIONS(131),
    [anon_sym_private] = ACTIONS(131),
    [anon_sym_context] = ACTIONS(131),
    [anon_sym_define] = ACTIONS(131),
    [anon_sym_function] = ACTIONS(131),
    [anon_sym_LPAREN] = ACTIONS(133),
    [aux_sym_literal_token1] = ACTIONS(131),
    [anon_sym_null] = ACTIONS(131),
    [anon_sym_not] = ACTIONS(131),
    [anon_sym_cast] = ACTIONS(131),
    [anon_sym_exists] = ACTIONS(131),
    [anon_sym_xor] = ACTIONS(131),
    [anon_sym_implies] = ACTIONS(131),
    [anon_sym_union] = ACTIONS(131),
    [anon_sym_intersect] = ACTIONS(131),
    [anon_sym_except] = ACTIONS(131),
    [anon_sym_years] = ACTIONS(131),
    [anon_sym_months] = ACTIONS(131),
    [anon_sym_weeks] = ACTIONS(131),
    [anon_sym_days] = ACTIONS(131),
    [anon_sym_hours] = ACTIONS(131),
    [anon_sym_minutes] = ACTIONS(131),
    [anon_sym_seconds] = ACTIONS(131),
    [anon_sym_milliseconds] = ACTIONS(131),
    [anon_sym_date] = ACTIONS(131),
    [anon_sym_time] = ACTIONS(131),
    [anon_sym_timezone] = ACTIONS(131),
    [anon_sym_timezoneoffset] = ACTIONS(131),
    [anon_sym_duration] = ACTIONS(131),
    [anon_sym_in] = ACTIONS(131),
    [anon_sym_difference] = ACTIONS(131),
    [anon_sym_contains] = ACTIONS(131),
    [anon_sym_orbefore] = ACTIONS(133),
    [anon_sym_orafter] = ACTIONS(133),
    [anon_sym_ormore] = ACTIONS(133),
    [anon_sym_orless] = ACTIONS(133),
    [anon_sym_starts] = ACTIONS(131),
    [anon_sym_ends] = ACTIONS(131),
    [anon_sym_start] = ACTIONS(131),
    [anon_sym_end] = ACTIONS(131),
    [anon_sym_includes] = ACTIONS(131),
    [anon_sym_meets] = ACTIONS(131),
    [anon_sym_overlaps] = ACTIONS(131),
    [anon_sym_where] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(133),
    [anon_sym_version] = ACTIONS(131),
    [sym_default_identifier] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [anon_sym_asc] = ACTIONS(131),
    [anon_sym_ascending] = ACTIONS(131),
    [anon_sym_by] = ACTIONS(131),
    [anon_sym_codesystems] = ACTIONS(131),
    [anon_sym_desc] = ACTIONS(131),
    [anon_sym_descending] = ACTIONS(131),
    [anon_sym_display] = ACTIONS(131),
    [anon_sym_div] = ACTIONS(131),
    [anon_sym_fluent] = ACTIONS(131),
    [anon_sym_mod] = ACTIONS(131),
    [anon_sym_predecessor] = ACTIONS(131),
    [anon_sym_starting] = ACTIONS(131),
    [anon_sym_successor] = ACTIONS(131),
    [anon_sym_width] = ACTIONS(131),
    [anon_sym_SQUOTE] = ACTIONS(131),
    [sym_number] = ACTIONS(133),
    [sym_comment] = ACTIONS(3),
  },
  [71] = {
    [anon_sym_library] = ACTIONS(173),
    [anon_sym_using] = ACTIONS(173),
    [anon_sym_called] = ACTIONS(173),
    [anon_sym_include] = ACTIONS(173),
    [anon_sym_valueset] = ACTIONS(173),
    [anon_sym_codesystem] = ACTIONS(173),
    [anon_sym_code] = ACTIONS(173),
    [anon_sym_from] = ACTIONS(173),
    [anon_sym_concept] = ACTIONS(173),
    [anon_sym_parameter] = ACTIONS(173),
    [anon_sym_default] = ACTIONS(173),
    [anon_sym_public] = ACTIONS(173),
    [anon_sym_private] = ACTIONS(173),
    [anon_sym_context] = ACTIONS(173),
    [anon_sym_define] = ACTIONS(173),
    [anon_sym_function] = ACTIONS(173),
    [anon_sym_LPAREN] = ACTIONS(175),
    [aux_sym_literal_token1] = ACTIONS(173),
    [anon_sym_null] = ACTIONS(173),
    [anon_sym_not] = ACTIONS(173),
    [anon_sym_cast] = ACTIONS(173),
    [anon_sym_exists] = ACTIONS(173),
    [anon_sym_xor] = ACTIONS(173),
    [anon_sym_implies] = ACTIONS(173),
    [anon_sym_union] = ACTIONS(173),
    [anon_sym_intersect] = ACTIONS(173),
    [anon_sym_except] = ACTIONS(173),
    [anon_sym_years] = ACTIONS(173),
    [anon_sym_months] = ACTIONS(173),
    [anon_sym_weeks] = ACTIONS(173),
    [anon_sym_days] = ACTIONS(173),
    [anon_sym_hours] = ACTIONS(173),
    [anon_sym_minutes] = ACTIONS(173),
    [anon_sym_seconds] = ACTIONS(173),
    [anon_sym_milliseconds] = ACTIONS(173),
    [anon_sym_date] = ACTIONS(173),
    [anon_sym_time] = ACTIONS(173),
    [anon_sym_timezone] = ACTIONS(173),
    [anon_sym_timezoneoffset] = ACTIONS(173),
    [anon_sym_duration] = ACTIONS(173),
    [anon_sym_in] = ACTIONS(173),
    [anon_sym_difference] = ACTIONS(173),
    [anon_sym_contains] = ACTIONS(173),
    [anon_sym_orbefore] = ACTIONS(175),
    [anon_sym_orafter] = ACTIONS(175),
    [anon_sym_ormore] = ACTIONS(175),
    [anon_sym_orless] = ACTIONS(175),
    [anon_sym_starts] = ACTIONS(173),
    [anon_sym_ends] = ACTIONS(173),
    [anon_sym_start] = ACTIONS(173),
    [anon_sym_end] = ACTIONS(173),
    [anon_sym_includes] = ACTIONS(173),
    [anon_sym_meets] = ACTIONS(173),
    [anon_sym_overlaps] = ACTIONS(173),
    [anon_sym_where] = ACTIONS(173),
    [anon_sym_LBRACK] = ACTIONS(175),
    [anon_sym_version] = ACTIONS(173),
    [sym_default_identifier] = ACTIONS(173),
    [anon_sym_DQUOTE] = ACTIONS(175),
    [anon_sym_asc] = ACTIONS(173),
    [anon_sym_ascending] = ACTIONS(173),
    [anon_sym_by] = ACTIONS(173),
    [anon_sym_codesystems] = ACTIONS(173),
    [anon_sym_desc] = ACTIONS(173),
    [anon_sym_descending] = ACTIONS(173),
    [anon_sym_display] = ACTIONS(173),
    [anon_sym_div] = ACTIONS(173),
    [anon_sym_fluent] = ACTIONS(173),
    [anon_sym_mod] = ACTIONS(173),
    [anon_sym_predecessor] = ACTIONS(173),
    [anon_sym_starting] = ACTIONS(173),
    [anon_sym_successor] = ACTIONS(173),
    [anon_sym_width] = ACTIONS(173),
    [anon_sym_SQUOTE] = ACTIONS(173),
    [sym_number] = ACTIONS(175),
    [sym_comment] = ACTIONS(3),
  },
  [72] = {
    [sym_date_time_precision] = STATE(131),
    [sym_plural_date_time_precision] = STATE(131),
    [sym_string] = STATE(131),
    [sym_unit] = STATE(130),
    [ts_builtin_sym_end] = ACTIONS(177),
    [anon_sym_using] = ACTIONS(177),
    [anon_sym_include] = ACTIONS(180),
    [anon_sym_valueset] = ACTIONS(177),
    [anon_sym_codesystem] = ACTIONS(177),
    [anon_sym_code] = ACTIONS(180),
    [anon_sym_concept] = ACTIONS(177),
    [anon_sym_parameter] = ACTIONS(177),
    [anon_sym_public] = ACTIONS(177),
    [anon_sym_private] = ACTIONS(177),
    [anon_sym_context] = ACTIONS(177),
    [anon_sym_define] = ACTIONS(177),
    [anon_sym_RPAREN] = ACTIONS(177),
    [anon_sym_is] = ACTIONS(177),
    [anon_sym_as] = ACTIONS(177),
    [anon_sym_properly] = ACTIONS(177),
    [anon_sym_between] = ACTIONS(177),
    [anon_sym_and] = ACTIONS(177),
    [anon_sym_EQ] = ACTIONS(177),
    [anon_sym_BANG_EQ] = ACTIONS(177),
    [anon_sym_TILDE] = ACTIONS(177),
    [anon_sym_BANG_TILDE] = ACTIONS(177),
    [anon_sym_LT_EQ] = ACTIONS(177),
    [anon_sym_LT] = ACTIONS(180),
    [anon_sym_GT] = ACTIONS(180),
    [anon_sym_GT_EQ] = ACTIONS(177),
    [anon_sym_or] = ACTIONS(177),
    [anon_sym_xor] = ACTIONS(177),
    [anon_sym_implies] = ACTIONS(177),
    [anon_sym_PIPE] = ACTIONS(177),
    [anon_sym_union] = ACTIONS(177),
    [anon_sym_intersect] = ACTIONS(177),
    [anon_sym_except] = ACTIONS(177),
    [anon_sym_year] = ACTIONS(47),
    [anon_sym_month] = ACTIONS(47),
    [anon_sym_week] = ACTIONS(47),
    [anon_sym_day] = ACTIONS(47),
    [anon_sym_hour] = ACTIONS(47),
    [anon_sym_minute] = ACTIONS(47),
    [anon_sym_second] = ACTIONS(47),
    [anon_sym_millisecond] = ACTIONS(47),
    [anon_sym_years] = ACTIONS(183),
    [anon_sym_months] = ACTIONS(183),
    [anon_sym_weeks] = ACTIONS(183),
    [anon_sym_days] = ACTIONS(183),
    [anon_sym_hours] = ACTIONS(183),
    [anon_sym_minutes] = ACTIONS(183),
    [anon_sym_seconds] = ACTIONS(183),
    [anon_sym_milliseconds] = ACTIONS(183),
    [anon_sym_lessthan] = ACTIONS(177),
    [anon_sym_morethan] = ACTIONS(177),
    [anon_sym_onor] = ACTIONS(177),
    [anon_sym_before] = ACTIONS(177),
    [anon_sym_after] = ACTIONS(177),
    [anon_sym_starts] = ACTIONS(177),
    [anon_sym_ends] = ACTIONS(177),
    [anon_sym_occurs] = ACTIONS(177),
    [anon_sym_same] = ACTIONS(177),
    [anon_sym_includes] = ACTIONS(177),
    [anon_sym_during] = ACTIONS(177),
    [anon_sym_includedin] = ACTIONS(177),
    [anon_sym_meets] = ACTIONS(177),
    [anon_sym_overlaps] = ACTIONS(177),
    [anon_sym_within] = ACTIONS(177),
    [anon_sym_SQUOTE] = ACTIONS(185),
    [sym_number] = ACTIONS(177),
    [sym_comment] = ACTIONS(3),
  },
  [73] = {
    [sym_type_specifier] = STATE(158),
    [sym_named_type_specifier] = STATE(133),
    [sym_identifier] = STATE(124),
    [sym_quoted_identifier] = STATE(116),
    [sym_referential_identifier] = STATE(134),
    [sym_type_name_identifier] = STATE(134),
    [sym_referential_or_type_name_identifier] = STATE(145),
    [sym_keyword_identifier] = STATE(138),
    [aux_sym_named_type_specifier_repeat1] = STATE(85),
    [anon_sym_library] = ACTIONS(187),
    [anon_sym_using] = ACTIONS(187),
    [anon_sym_called] = ACTIONS(187),
    [anon_sym_include] = ACTIONS(187),
    [anon_sym_valueset] = ACTIONS(187),
    [anon_sym_codesystem] = ACTIONS(187),
    [anon_sym_code] = ACTIONS(187),
    [anon_sym_concept] = ACTIONS(187),
    [anon_sym_parameter] = ACTIONS(187),
    [anon_sym_default] = ACTIONS(187),
    [anon_sym_public] = ACTIONS(187),
    [anon_sym_private] = ACTIONS(187),
    [anon_sym_context] = ACTIONS(187),
    [anon_sym_define] = ACTIONS(187),
    [anon_sym_function] = ACTIONS(187),
    [anon_sym_null] = ACTIONS(189),
    [anon_sym_not] = ACTIONS(191),
    [anon_sym_true] = ACTIONS(189),
    [anon_sym_false] = ACTIONS(189),
    [anon_sym_xor] = ACTIONS(187),
    [anon_sym_implies] = ACTIONS(187),
    [anon_sym_union] = ACTIONS(187),
    [anon_sym_intersect] = ACTIONS(187),
    [anon_sym_except] = ACTIONS(187),
    [anon_sym_date] = ACTIONS(193),
    [anon_sym_time] = ACTIONS(193),
    [anon_sym_timezone] = ACTIONS(187),
    [anon_sym_timezoneoffset] = ACTIONS(187),
    [anon_sym_contains] = ACTIONS(187),
    [anon_sym_orbefore] = ACTIONS(195),
    [anon_sym_orafter] = ACTIONS(195),
    [anon_sym_ormore] = ACTIONS(195),
    [anon_sym_orless] = ACTIONS(195),
    [anon_sym_starts] = ACTIONS(187),
    [anon_sym_ends] = ACTIONS(187),
    [anon_sym_start] = ACTIONS(187),
    [anon_sym_end] = ACTIONS(187),
    [anon_sym_includes] = ACTIONS(187),
    [anon_sym_meets] = ACTIONS(187),
    [anon_sym_overlaps] = ACTIONS(187),
    [anon_sym_where] = ACTIONS(187),
    [anon_sym_version] = ACTIONS(187),
    [sym_default_identifier] = ACTIONS(197),
    [anon_sym_DQUOTE] = ACTIONS(199),
    [anon_sym_Code] = ACTIONS(201),
    [anon_sym_Concept] = ACTIONS(201),
    [anon_sym_asc] = ACTIONS(187),
    [anon_sym_ascending] = ACTIONS(187),
    [anon_sym_by] = ACTIONS(187),
    [anon_sym_codesystems] = ACTIONS(187),
    [anon_sym_desc] = ACTIONS(187),
    [anon_sym_descending] = ACTIONS(187),
    [anon_sym_display] = ACTIONS(187),
    [anon_sym_div] = ACTIONS(187),
    [anon_sym_fluent] = ACTIONS(187),
    [anon_sym_mod] = ACTIONS(187),
    [anon_sym_predecessor] = ACTIONS(187),
    [anon_sym_starting] = ACTIONS(187),
    [anon_sym_successor] = ACTIONS(187),
    [anon_sym_width] = ACTIONS(187),
    [sym_comment] = ACTIONS(3),
  },
  [74] = {
    [sym_type_specifier] = STATE(239),
    [sym_named_type_specifier] = STATE(240),
    [sym_identifier] = STATE(213),
    [sym_quoted_identifier] = STATE(205),
    [sym_referential_identifier] = STATE(222),
    [sym_type_name_identifier] = STATE(222),
    [sym_referential_or_type_name_identifier] = STATE(220),
    [sym_keyword_identifier] = STATE(210),
    [aux_sym_named_type_specifier_repeat1] = STATE(84),
    [ts_builtin_sym_end] = ACTIONS(203),
    [anon_sym_library] = ACTIONS(205),
    [anon_sym_using] = ACTIONS(205),
    [anon_sym_called] = ACTIONS(205),
    [anon_sym_include] = ACTIONS(205),
    [anon_sym_valueset] = ACTIONS(205),
    [anon_sym_codesystem] = ACTIONS(205),
    [anon_sym_code] = ACTIONS(205),
    [anon_sym_concept] = ACTIONS(205),
    [anon_sym_parameter] = ACTIONS(205),
    [anon_sym_default] = ACTIONS(207),
    [anon_sym_public] = ACTIONS(205),
    [anon_sym_private] = ACTIONS(205),
    [anon_sym_context] = ACTIONS(205),
    [anon_sym_define] = ACTIONS(205),
    [anon_sym_function] = ACTIONS(205),
    [anon_sym_xor] = ACTIONS(205),
    [anon_sym_implies] = ACTIONS(205),
    [anon_sym_union] = ACTIONS(205),
    [anon_sym_intersect] = ACTIONS(205),
    [anon_sym_except] = ACTIONS(205),
    [anon_sym_date] = ACTIONS(209),
    [anon_sym_time] = ACTIONS(209),
    [anon_sym_timezone] = ACTIONS(205),
    [anon_sym_timezoneoffset] = ACTIONS(205),
    [anon_sym_contains] = ACTIONS(205),
    [anon_sym_orbefore] = ACTIONS(211),
    [anon_sym_orafter] = ACTIONS(211),
    [anon_sym_ormore] = ACTIONS(211),
    [anon_sym_orless] = ACTIONS(211),
    [anon_sym_starts] = ACTIONS(205),
    [anon_sym_ends] = ACTIONS(205),
    [anon_sym_start] = ACTIONS(205),
    [anon_sym_end] = ACTIONS(205),
    [anon_sym_includes] = ACTIONS(205),
    [anon_sym_meets] = ACTIONS(205),
    [anon_sym_overlaps] = ACTIONS(205),
    [anon_sym_where] = ACTIONS(205),
    [anon_sym_version] = ACTIONS(205),
    [sym_default_identifier] = ACTIONS(213),
    [anon_sym_DQUOTE] = ACTIONS(215),
    [anon_sym_Code] = ACTIONS(217),
    [anon_sym_Concept] = ACTIONS(217),
    [anon_sym_asc] = ACTIONS(205),
    [anon_sym_ascending] = ACTIONS(205),
    [anon_sym_by] = ACTIONS(205),
    [anon_sym_codesystems] = ACTIONS(205),
    [anon_sym_desc] = ACTIONS(205),
    [anon_sym_descending] = ACTIONS(205),
    [anon_sym_display] = ACTIONS(205),
    [anon_sym_div] = ACTIONS(205),
    [anon_sym_fluent] = ACTIONS(205),
    [anon_sym_mod] = ACTIONS(205),
    [anon_sym_predecessor] = ACTIONS(205),
    [anon_sym_starting] = ACTIONS(205),
    [anon_sym_successor] = ACTIONS(205),
    [anon_sym_width] = ACTIONS(205),
    [sym_comment] = ACTIONS(3),
  },
  [75] = {
    [sym_type_specifier] = STATE(238),
    [sym_named_type_specifier] = STATE(240),
    [sym_identifier] = STATE(213),
    [sym_quoted_identifier] = STATE(205),
    [sym_referential_identifier] = STATE(222),
    [sym_type_name_identifier] = STATE(222),
    [sym_referential_or_type_name_identifier] = STATE(220),
    [sym_keyword_identifier] = STATE(210),
    [aux_sym_named_type_specifier_repeat1] = STATE(84),
    [ts_builtin_sym_end] = ACTIONS(219),
    [anon_sym_library] = ACTIONS(205),
    [anon_sym_using] = ACTIONS(205),
    [anon_sym_called] = ACTIONS(205),
    [anon_sym_include] = ACTIONS(205),
    [anon_sym_valueset] = ACTIONS(205),
    [anon_sym_codesystem] = ACTIONS(205),
    [anon_sym_code] = ACTIONS(205),
    [anon_sym_concept] = ACTIONS(205),
    [anon_sym_parameter] = ACTIONS(205),
    [anon_sym_default] = ACTIONS(221),
    [anon_sym_public] = ACTIONS(205),
    [anon_sym_private] = ACTIONS(205),
    [anon_sym_context] = ACTIONS(205),
    [anon_sym_define] = ACTIONS(205),
    [anon_sym_function] = ACTIONS(205),
    [anon_sym_xor] = ACTIONS(205),
    [anon_sym_implies] = ACTIONS(205),
    [anon_sym_union] = ACTIONS(205),
    [anon_sym_intersect] = ACTIONS(205),
    [anon_sym_except] = ACTIONS(205),
    [anon_sym_date] = ACTIONS(209),
    [anon_sym_time] = ACTIONS(209),
    [anon_sym_timezone] = ACTIONS(205),
    [anon_sym_timezoneoffset] = ACTIONS(205),
    [anon_sym_contains] = ACTIONS(205),
    [anon_sym_orbefore] = ACTIONS(211),
    [anon_sym_orafter] = ACTIONS(211),
    [anon_sym_ormore] = ACTIONS(211),
    [anon_sym_orless] = ACTIONS(211),
    [anon_sym_starts] = ACTIONS(205),
    [anon_sym_ends] = ACTIONS(205),
    [anon_sym_start] = ACTIONS(205),
    [anon_sym_end] = ACTIONS(205),
    [anon_sym_includes] = ACTIONS(205),
    [anon_sym_meets] = ACTIONS(205),
    [anon_sym_overlaps] = ACTIONS(205),
    [anon_sym_where] = ACTIONS(205),
    [anon_sym_version] = ACTIONS(205),
    [sym_default_identifier] = ACTIONS(213),
    [anon_sym_DQUOTE] = ACTIONS(215),
    [anon_sym_Code] = ACTIONS(217),
    [anon_sym_Concept] = ACTIONS(217),
    [anon_sym_asc] = ACTIONS(205),
    [anon_sym_ascending] = ACTIONS(205),
    [anon_sym_by] = ACTIONS(205),
    [anon_sym_codesystems] = ACTIONS(205),
    [anon_sym_desc] = ACTIONS(205),
    [anon_sym_descending] = ACTIONS(205),
    [anon_sym_display] = ACTIONS(205),
    [anon_sym_div] = ACTIONS(205),
    [anon_sym_fluent] = ACTIONS(205),
    [anon_sym_mod] = ACTIONS(205),
    [anon_sym_predecessor] = ACTIONS(205),
    [anon_sym_starting] = ACTIONS(205),
    [anon_sym_successor] = ACTIONS(205),
    [anon_sym_width] = ACTIONS(205),
    [sym_comment] = ACTIONS(3),
  },
  [76] = {
    [sym_qualified_identifier_expression] = STATE(374),
    [sym_query_source] = STATE(301),
    [sym_aliased_query_source] = STATE(122),
    [sym_retrieve] = STATE(374),
    [sym_identifier] = STATE(349),
    [sym_quoted_identifier] = STATE(337),
    [sym_referential_identifier] = STATE(302),
    [sym_keyword_identifier] = STATE(349),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(91),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_contains] = ACTIONS(29),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(223),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [77] = {
    [sym_type_specifier] = STATE(140),
    [sym_named_type_specifier] = STATE(133),
    [sym_identifier] = STATE(124),
    [sym_quoted_identifier] = STATE(116),
    [sym_referential_identifier] = STATE(134),
    [sym_type_name_identifier] = STATE(134),
    [sym_referential_or_type_name_identifier] = STATE(145),
    [sym_keyword_identifier] = STATE(138),
    [aux_sym_named_type_specifier_repeat1] = STATE(85),
    [anon_sym_library] = ACTIONS(187),
    [anon_sym_using] = ACTIONS(187),
    [anon_sym_called] = ACTIONS(187),
    [anon_sym_include] = ACTIONS(187),
    [anon_sym_valueset] = ACTIONS(187),
    [anon_sym_codesystem] = ACTIONS(187),
    [anon_sym_code] = ACTIONS(187),
    [anon_sym_concept] = ACTIONS(187),
    [anon_sym_parameter] = ACTIONS(187),
    [anon_sym_default] = ACTIONS(187),
    [anon_sym_public] = ACTIONS(187),
    [anon_sym_private] = ACTIONS(187),
    [anon_sym_context] = ACTIONS(187),
    [anon_sym_define] = ACTIONS(187),
    [anon_sym_function] = ACTIONS(187),
    [anon_sym_xor] = ACTIONS(187),
    [anon_sym_implies] = ACTIONS(187),
    [anon_sym_union] = ACTIONS(187),
    [anon_sym_intersect] = ACTIONS(187),
    [anon_sym_except] = ACTIONS(187),
    [anon_sym_date] = ACTIONS(193),
    [anon_sym_time] = ACTIONS(193),
    [anon_sym_timezone] = ACTIONS(187),
    [anon_sym_timezoneoffset] = ACTIONS(187),
    [anon_sym_contains] = ACTIONS(187),
    [anon_sym_orbefore] = ACTIONS(195),
    [anon_sym_orafter] = ACTIONS(195),
    [anon_sym_ormore] = ACTIONS(195),
    [anon_sym_orless] = ACTIONS(195),
    [anon_sym_starts] = ACTIONS(187),
    [anon_sym_ends] = ACTIONS(187),
    [anon_sym_start] = ACTIONS(187),
    [anon_sym_end] = ACTIONS(187),
    [anon_sym_includes] = ACTIONS(187),
    [anon_sym_meets] = ACTIONS(187),
    [anon_sym_overlaps] = ACTIONS(187),
    [anon_sym_where] = ACTIONS(187),
    [anon_sym_version] = ACTIONS(187),
    [sym_default_identifier] = ACTIONS(197),
    [anon_sym_DQUOTE] = ACTIONS(199),
    [anon_sym_Code] = ACTIONS(201),
    [anon_sym_Concept] = ACTIONS(201),
    [anon_sym_asc] = ACTIONS(187),
    [anon_sym_ascending] = ACTIONS(187),
    [anon_sym_by] = ACTIONS(187),
    [anon_sym_codesystems] = ACTIONS(187),
    [anon_sym_desc] = ACTIONS(187),
    [anon_sym_descending] = ACTIONS(187),
    [anon_sym_display] = ACTIONS(187),
    [anon_sym_div] = ACTIONS(187),
    [anon_sym_fluent] = ACTIONS(187),
    [anon_sym_mod] = ACTIONS(187),
    [anon_sym_predecessor] = ACTIONS(187),
    [anon_sym_starting] = ACTIONS(187),
    [anon_sym_successor] = ACTIONS(187),
    [anon_sym_width] = ACTIONS(187),
    [sym_comment] = ACTIONS(3),
  },
  [78] = {
    [sym_type_specifier] = STATE(158),
    [sym_named_type_specifier] = STATE(133),
    [sym_identifier] = STATE(124),
    [sym_quoted_identifier] = STATE(116),
    [sym_referential_identifier] = STATE(134),
    [sym_type_name_identifier] = STATE(134),
    [sym_referential_or_type_name_identifier] = STATE(145),
    [sym_keyword_identifier] = STATE(138),
    [aux_sym_named_type_specifier_repeat1] = STATE(85),
    [anon_sym_library] = ACTIONS(187),
    [anon_sym_using] = ACTIONS(187),
    [anon_sym_called] = ACTIONS(187),
    [anon_sym_include] = ACTIONS(187),
    [anon_sym_valueset] = ACTIONS(187),
    [anon_sym_codesystem] = ACTIONS(187),
    [anon_sym_code] = ACTIONS(187),
    [anon_sym_concept] = ACTIONS(187),
    [anon_sym_parameter] = ACTIONS(187),
    [anon_sym_default] = ACTIONS(187),
    [anon_sym_public] = ACTIONS(187),
    [anon_sym_private] = ACTIONS(187),
    [anon_sym_context] = ACTIONS(187),
    [anon_sym_define] = ACTIONS(187),
    [anon_sym_function] = ACTIONS(187),
    [anon_sym_xor] = ACTIONS(187),
    [anon_sym_implies] = ACTIONS(187),
    [anon_sym_union] = ACTIONS(187),
    [anon_sym_intersect] = ACTIONS(187),
    [anon_sym_except] = ACTIONS(187),
    [anon_sym_date] = ACTIONS(193),
    [anon_sym_time] = ACTIONS(193),
    [anon_sym_timezone] = ACTIONS(187),
    [anon_sym_timezoneoffset] = ACTIONS(187),
    [anon_sym_contains] = ACTIONS(187),
    [anon_sym_orbefore] = ACTIONS(195),
    [anon_sym_orafter] = ACTIONS(195),
    [anon_sym_ormore] = ACTIONS(195),
    [anon_sym_orless] = ACTIONS(195),
    [anon_sym_starts] = ACTIONS(187),
    [anon_sym_ends] = ACTIONS(187),
    [anon_sym_start] = ACTIONS(187),
    [anon_sym_end] = ACTIONS(187),
    [anon_sym_includes] = ACTIONS(187),
    [anon_sym_meets] = ACTIONS(187),
    [anon_sym_overlaps] = ACTIONS(187),
    [anon_sym_where] = ACTIONS(187),
    [anon_sym_version] = ACTIONS(187),
    [sym_default_identifier] = ACTIONS(197),
    [anon_sym_DQUOTE] = ACTIONS(199),
    [anon_sym_Code] = ACTIONS(201),
    [anon_sym_Concept] = ACTIONS(201),
    [anon_sym_asc] = ACTIONS(187),
    [anon_sym_ascending] = ACTIONS(187),
    [anon_sym_by] = ACTIONS(187),
    [anon_sym_codesystems] = ACTIONS(187),
    [anon_sym_desc] = ACTIONS(187),
    [anon_sym_descending] = ACTIONS(187),
    [anon_sym_display] = ACTIONS(187),
    [anon_sym_div] = ACTIONS(187),
    [anon_sym_fluent] = ACTIONS(187),
    [anon_sym_mod] = ACTIONS(187),
    [anon_sym_predecessor] = ACTIONS(187),
    [anon_sym_starting] = ACTIONS(187),
    [anon_sym_successor] = ACTIONS(187),
    [anon_sym_width] = ACTIONS(187),
    [sym_comment] = ACTIONS(3),
  },
  [79] = {
    [sym_qualified_identifier_expression] = STATE(374),
    [sym_query_source] = STATE(301),
    [sym_aliased_query_source] = STATE(120),
    [sym_retrieve] = STATE(374),
    [sym_identifier] = STATE(349),
    [sym_quoted_identifier] = STATE(337),
    [sym_referential_identifier] = STATE(302),
    [sym_keyword_identifier] = STATE(349),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(91),
    [anon_sym_library] = ACTIONS(29),
    [anon_sym_using] = ACTIONS(29),
    [anon_sym_called] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_valueset] = ACTIONS(29),
    [anon_sym_codesystem] = ACTIONS(29),
    [anon_sym_code] = ACTIONS(29),
    [anon_sym_concept] = ACTIONS(29),
    [anon_sym_parameter] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_context] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_implies] = ACTIONS(29),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_intersect] = ACTIONS(29),
    [anon_sym_except] = ACTIONS(29),
    [anon_sym_date] = ACTIONS(29),
    [anon_sym_time] = ACTIONS(29),
    [anon_sym_timezone] = ACTIONS(29),
    [anon_sym_timezoneoffset] = ACTIONS(29),
    [anon_sym_contains] = ACTIONS(29),
    [anon_sym_orbefore] = ACTIONS(59),
    [anon_sym_orafter] = ACTIONS(59),
    [anon_sym_ormore] = ACTIONS(59),
    [anon_sym_orless] = ACTIONS(59),
    [anon_sym_starts] = ACTIONS(29),
    [anon_sym_ends] = ACTIONS(29),
    [anon_sym_start] = ACTIONS(29),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_includes] = ACTIONS(29),
    [anon_sym_meets] = ACTIONS(29),
    [anon_sym_overlaps] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(223),
    [anon_sym_version] = ACTIONS(29),
    [sym_default_identifier] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_asc] = ACTIONS(29),
    [anon_sym_ascending] = ACTIONS(29),
    [anon_sym_by] = ACTIONS(29),
    [anon_sym_codesystems] = ACTIONS(29),
    [anon_sym_desc] = ACTIONS(29),
    [anon_sym_descending] = ACTIONS(29),
    [anon_sym_display] = ACTIONS(29),
    [anon_sym_div] = ACTIONS(29),
    [anon_sym_fluent] = ACTIONS(29),
    [anon_sym_mod] = ACTIONS(29),
    [anon_sym_predecessor] = ACTIONS(29),
    [anon_sym_starting] = ACTIONS(29),
    [anon_sym_successor] = ACTIONS(29),
    [anon_sym_width] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [80] = {
    [sym_named_type_specifier] = STATE(355),
    [sym_identifier] = STATE(213),
    [sym_quoted_identifier] = STATE(205),
    [sym_referential_identifier] = STATE(222),
    [sym_type_name_identifier] = STATE(222),
    [sym_referential_or_type_name_identifier] = STATE(220),
    [sym_keyword_identifier] = STATE(210),
    [aux_sym_named_type_specifier_repeat1] = STATE(84),
    [anon_sym_library] = ACTIONS(205),
    [anon_sym_using] = ACTIONS(205),
    [anon_sym_called] = ACTIONS(205),
    [anon_sym_include] = ACTIONS(205),
    [anon_sym_valueset] = ACTIONS(205),
    [anon_sym_codesystem] = ACTIONS(205),
    [anon_sym_code] = ACTIONS(205),
    [anon_sym_concept] = ACTIONS(205),
    [anon_sym_parameter] = ACTIONS(205),
    [anon_sym_default] = ACTIONS(205),
    [anon_sym_public] = ACTIONS(205),
    [anon_sym_private] = ACTIONS(205),
    [anon_sym_context] = ACTIONS(205),
    [anon_sym_define] = ACTIONS(205),
    [anon_sym_function] = ACTIONS(205),
    [anon_sym_xor] = ACTIONS(205),
    [anon_sym_implies] = ACTIONS(205),
    [anon_sym_union] = ACTIONS(205),
    [anon_sym_intersect] = ACTIONS(205),
    [anon_sym_except] = ACTIONS(205),
    [anon_sym_date] = ACTIONS(209),
    [anon_sym_time] = ACTIONS(209),
    [anon_sym_timezone] = ACTIONS(205),
    [anon_sym_timezoneoffset] = ACTIONS(205),
    [anon_sym_contains] = ACTIONS(205),
    [anon_sym_orbefore] = ACTIONS(211),
    [anon_sym_orafter] = ACTIONS(211),
    [anon_sym_ormore] = ACTIONS(211),
    [anon_sym_orless] = ACTIONS(211),
    [anon_sym_starts] = ACTIONS(205),
    [anon_sym_ends] = ACTIONS(205),
    [anon_sym_start] = ACTIONS(205),
    [anon_sym_end] = ACTIONS(205),
    [anon_sym_includes] = ACTIONS(205),
    [anon_sym_meets] = ACTIONS(205),
    [anon_sym_overlaps] = ACTIONS(205),
    [anon_sym_where] = ACTIONS(205),
    [anon_sym_version] = ACTIONS(205),
    [sym_default_identifier] = ACTIONS(213),
    [anon_sym_DQUOTE] = ACTIONS(215),
    [anon_sym_Code] = ACTIONS(217),
    [anon_sym_Concept] = ACTIONS(217),
    [anon_sym_asc] = ACTIONS(205),
    [anon_sym_ascending] = ACTIONS(205),
    [anon_sym_by] = ACTIONS(205),
    [anon_sym_codesystems] = ACTIONS(205),
    [anon_sym_desc] = ACTIONS(205),
    [anon_sym_descending] = ACTIONS(205),
    [anon_sym_display] = ACTIONS(205),
    [anon_sym_div] = ACTIONS(205),
    [anon_sym_fluent] = ACTIONS(205),
    [anon_sym_mod] = ACTIONS(205),
    [anon_sym_predecessor] = ACTIONS(205),
    [anon_sym_starting] = ACTIONS(205),
    [anon_sym_successor] = ACTIONS(205),
    [anon_sym_width] = ACTIONS(205),
    [sym_comment] = ACTIONS(3),
  },
  [81] = {
    [sym_named_type_specifier] = STATE(362),
    [sym_identifier] = STATE(213),
    [sym_quoted_identifier] = STATE(205),
    [sym_referential_identifier] = STATE(222),
    [sym_type_name_identifier] = STATE(222),
    [sym_referential_or_type_name_identifier] = STATE(220),
    [sym_keyword_identifier] = STATE(210),
    [aux_sym_named_type_specifier_repeat1] = STATE(84),
    [anon_sym_library] = ACTIONS(205),
    [anon_sym_using] = ACTIONS(205),
    [anon_sym_called] = ACTIONS(205),
    [anon_sym_include] = ACTIONS(205),
    [anon_sym_valueset] = ACTIONS(205),
    [anon_sym_codesystem] = ACTIONS(205),
    [anon_sym_code] = ACTIONS(205),
    [anon_sym_concept] = ACTIONS(205),
    [anon_sym_parameter] = ACTIONS(205),
    [anon_sym_default] = ACTIONS(205),
    [anon_sym_public] = ACTIONS(205),
    [anon_sym_private] = ACTIONS(205),
    [anon_sym_context] = ACTIONS(205),
    [anon_sym_define] = ACTIONS(205),
    [anon_sym_function] = ACTIONS(205),
    [anon_sym_xor] = ACTIONS(205),
    [anon_sym_implies] = ACTIONS(205),
    [anon_sym_union] = ACTIONS(205),
    [anon_sym_intersect] = ACTIONS(205),
    [anon_sym_except] = ACTIONS(205),
    [anon_sym_date] = ACTIONS(209),
    [anon_sym_time] = ACTIONS(209),
    [anon_sym_timezone] = ACTIONS(205),
    [anon_sym_timezoneoffset] = ACTIONS(205),
    [anon_sym_contains] = ACTIONS(205),
    [anon_sym_orbefore] = ACTIONS(211),
    [anon_sym_orafter] = ACTIONS(211),
    [anon_sym_ormore] = ACTIONS(211),
    [anon_sym_orless] = ACTIONS(211),
    [anon_sym_starts] = ACTIONS(205),
    [anon_sym_ends] = ACTIONS(205),
    [anon_sym_start] = ACTIONS(205),
    [anon_sym_end] = ACTIONS(205),
    [anon_sym_includes] = ACTIONS(205),
    [anon_sym_meets] = ACTIONS(205),
    [anon_sym_overlaps] = ACTIONS(205),
    [anon_sym_where] = ACTIONS(205),
    [anon_sym_version] = ACTIONS(205),
    [sym_default_identifier] = ACTIONS(213),
    [anon_sym_DQUOTE] = ACTIONS(215),
    [anon_sym_Code] = ACTIONS(217),
    [anon_sym_Concept] = ACTIONS(217),
    [anon_sym_asc] = ACTIONS(205),
    [anon_sym_ascending] = ACTIONS(205),
    [anon_sym_by] = ACTIONS(205),
    [anon_sym_codesystems] = ACTIONS(205),
    [anon_sym_desc] = ACTIONS(205),
    [anon_sym_descending] = ACTIONS(205),
    [anon_sym_display] = ACTIONS(205),
    [anon_sym_div] = ACTIONS(205),
    [anon_sym_fluent] = ACTIONS(205),
    [anon_sym_mod] = ACTIONS(205),
    [anon_sym_predecessor] = ACTIONS(205),
    [anon_sym_starting] = ACTIONS(205),
    [anon_sym_successor] = ACTIONS(205),
    [anon_sym_width] = ACTIONS(205),
    [sym_comment] = ACTIONS(3),
  },
  [82] = {
    [sym_named_type_specifier] = STATE(361),
    [sym_identifier] = STATE(213),
    [sym_quoted_identifier] = STATE(205),
    [sym_referential_identifier] = STATE(222),
    [sym_type_name_identifier] = STATE(222),
    [sym_referential_or_type_name_identifier] = STATE(220),
    [sym_keyword_identifier] = STATE(210),
    [aux_sym_named_type_specifier_repeat1] = STATE(84),
    [anon_sym_library] = ACTIONS(205),
    [anon_sym_using] = ACTIONS(205),
    [anon_sym_called] = ACTIONS(205),
    [anon_sym_include] = ACTIONS(205),
    [anon_sym_valueset] = ACTIONS(205),
    [anon_sym_codesystem] = ACTIONS(205),
    [anon_sym_code] = ACTIONS(205),
    [anon_sym_concept] = ACTIONS(205),
    [anon_sym_parameter] = ACTIONS(205),
    [anon_sym_default] = ACTIONS(205),
    [anon_sym_public] = ACTIONS(205),
    [anon_sym_private] = ACTIONS(205),
    [anon_sym_context] = ACTIONS(205),
    [anon_sym_define] = ACTIONS(205),
    [anon_sym_function] = ACTIONS(205),
    [anon_sym_xor] = ACTIONS(205),
    [anon_sym_implies] = ACTIONS(205),
    [anon_sym_union] = ACTIONS(205),
    [anon_sym_intersect] = ACTIONS(205),
    [anon_sym_except] = ACTIONS(205),
    [anon_sym_date] = ACTIONS(209),
    [anon_sym_time] = ACTIONS(209),
    [anon_sym_timezone] = ACTIONS(205),
    [anon_sym_timezoneoffset] = ACTIONS(205),
    [anon_sym_contains] = ACTIONS(205),
    [anon_sym_orbefore] = ACTIONS(211),
    [anon_sym_orafter] = ACTIONS(211),
    [anon_sym_ormore] = ACTIONS(211),
    [anon_sym_orless] = ACTIONS(211),
    [anon_sym_starts] = ACTIONS(205),
    [anon_sym_ends] = ACTIONS(205),
    [anon_sym_start] = ACTIONS(205),
    [anon_sym_end] = ACTIONS(205),
    [anon_sym_includes] = ACTIONS(205),
    [anon_sym_meets] = ACTIONS(205),
    [anon_sym_overlaps] = ACTIONS(205),
    [anon_sym_where] = ACTIONS(205),
    [anon_sym_version] = ACTIONS(205),
    [sym_default_identifier] = ACTIONS(213),
    [anon_sym_DQUOTE] = ACTIONS(215),
    [anon_sym_Code] = ACTIONS(217),
    [anon_sym_Concept] = ACTIONS(217),
    [anon_sym_asc] = ACTIONS(205),
    [anon_sym_ascending] = ACTIONS(205),
    [anon_sym_by] = ACTIONS(205),
    [anon_sym_codesystems] = ACTIONS(205),
    [anon_sym_desc] = ACTIONS(205),
    [anon_sym_descending] = ACTIONS(205),
    [anon_sym_display] = ACTIONS(205),
    [anon_sym_div] = ACTIONS(205),
    [anon_sym_fluent] = ACTIONS(205),
    [anon_sym_mod] = ACTIONS(205),
    [anon_sym_predecessor] = ACTIONS(205),
    [anon_sym_starting] = ACTIONS(205),
    [anon_sym_successor] = ACTIONS(205),
    [anon_sym_width] = ACTIONS(205),
    [sym_comment] = ACTIONS(3),
  },
  [83] = {
    [sym_named_type_specifier] = STATE(372),
    [sym_identifier] = STATE(213),
    [sym_quoted_identifier] = STATE(205),
    [sym_referential_identifier] = STATE(222),
    [sym_type_name_identifier] = STATE(222),
    [sym_referential_or_type_name_identifier] = STATE(220),
    [sym_keyword_identifier] = STATE(210),
    [aux_sym_named_type_specifier_repeat1] = STATE(84),
    [anon_sym_library] = ACTIONS(205),
    [anon_sym_using] = ACTIONS(205),
    [anon_sym_called] = ACTIONS(205),
    [anon_sym_include] = ACTIONS(205),
    [anon_sym_valueset] = ACTIONS(205),
    [anon_sym_codesystem] = ACTIONS(205),
    [anon_sym_code] = ACTIONS(205),
    [anon_sym_concept] = ACTIONS(205),
    [anon_sym_parameter] = ACTIONS(205),
    [anon_sym_default] = ACTIONS(205),
    [anon_sym_public] = ACTIONS(205),
    [anon_sym_private] = ACTIONS(205),
    [anon_sym_context] = ACTIONS(205),
    [anon_sym_define] = ACTIONS(205),
    [anon_sym_function] = ACTIONS(205),
    [anon_sym_xor] = ACTIONS(205),
    [anon_sym_implies] = ACTIONS(205),
    [anon_sym_union] = ACTIONS(205),
    [anon_sym_intersect] = ACTIONS(205),
    [anon_sym_except] = ACTIONS(205),
    [anon_sym_date] = ACTIONS(209),
    [anon_sym_time] = ACTIONS(209),
    [anon_sym_timezone] = ACTIONS(205),
    [anon_sym_timezoneoffset] = ACTIONS(205),
    [anon_sym_contains] = ACTIONS(205),
    [anon_sym_orbefore] = ACTIONS(211),
    [anon_sym_orafter] = ACTIONS(211),
    [anon_sym_ormore] = ACTIONS(211),
    [anon_sym_orless] = ACTIONS(211),
    [anon_sym_starts] = ACTIONS(205),
    [anon_sym_ends] = ACTIONS(205),
    [anon_sym_start] = ACTIONS(205),
    [anon_sym_end] = ACTIONS(205),
    [anon_sym_includes] = ACTIONS(205),
    [anon_sym_meets] = ACTIONS(205),
    [anon_sym_overlaps] = ACTIONS(205),
    [anon_sym_where] = ACTIONS(205),
    [anon_sym_version] = ACTIONS(205),
    [sym_default_identifier] = ACTIONS(213),
    [anon_sym_DQUOTE] = ACTIONS(215),
    [anon_sym_Code] = ACTIONS(217),
    [anon_sym_Concept] = ACTIONS(217),
    [anon_sym_asc] = ACTIONS(205),
    [anon_sym_ascending] = ACTIONS(205),
    [anon_sym_by] = ACTIONS(205),
    [anon_sym_codesystems] = ACTIONS(205),
    [anon_sym_desc] = ACTIONS(205),
    [anon_sym_descending] = ACTIONS(205),
    [anon_sym_display] = ACTIONS(205),
    [anon_sym_div] = ACTIONS(205),
    [anon_sym_fluent] = ACTIONS(205),
    [anon_sym_mod] = ACTIONS(205),
    [anon_sym_predecessor] = ACTIONS(205),
    [anon_sym_starting] = ACTIONS(205),
    [anon_sym_successor] = ACTIONS(205),
    [anon_sym_width] = ACTIONS(205),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_default_identifier,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    STATE(92), 1,
      aux_sym_named_type_specifier_repeat1,
    STATE(205), 1,
      sym_quoted_identifier,
    STATE(210), 1,
      sym_keyword_identifier,
    STATE(213), 1,
      sym_identifier,
    STATE(217), 1,
      sym_referential_or_type_name_identifier,
    ACTIONS(209), 2,
      anon_sym_date,
      anon_sym_time,
    ACTIONS(217), 2,
      anon_sym_Code,
      anon_sym_Concept,
    STATE(222), 2,
      sym_referential_identifier,
      sym_type_name_identifier,
    ACTIONS(211), 4,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_ormore,
      anon_sym_orless,
    ACTIONS(205), 46,
      anon_sym_library,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_code,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_default,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_function,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_timezone,
      anon_sym_timezoneoffset,
      anon_sym_contains,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_start,
      anon_sym_end,
      anon_sym_includes,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_where,
      anon_sym_version,
      anon_sym_asc,
      anon_sym_ascending,
      anon_sym_by,
      anon_sym_codesystems,
      anon_sym_desc,
      anon_sym_descending,
      anon_sym_display,
      anon_sym_div,
      anon_sym_fluent,
      anon_sym_mod,
      anon_sym_predecessor,
      anon_sym_starting,
      anon_sym_successor,
      anon_sym_width,
  [91] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      sym_default_identifier,
    ACTIONS(199), 1,
      anon_sym_DQUOTE,
    STATE(92), 1,
      aux_sym_named_type_specifier_repeat1,
    STATE(116), 1,
      sym_quoted_identifier,
    STATE(124), 1,
      sym_identifier,
    STATE(138), 1,
      sym_keyword_identifier,
    STATE(144), 1,
      sym_referential_or_type_name_identifier,
    ACTIONS(193), 2,
      anon_sym_date,
      anon_sym_time,
    ACTIONS(201), 2,
      anon_sym_Code,
      anon_sym_Concept,
    STATE(134), 2,
      sym_referential_identifier,
      sym_type_name_identifier,
    ACTIONS(195), 4,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_ormore,
      anon_sym_orless,
    ACTIONS(187), 46,
      anon_sym_library,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_code,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_default,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_function,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_timezone,
      anon_sym_timezoneoffset,
      anon_sym_contains,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_start,
      anon_sym_end,
      anon_sym_includes,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_where,
      anon_sym_version,
      anon_sym_asc,
      anon_sym_ascending,
      anon_sym_by,
      anon_sym_codesystems,
      anon_sym_desc,
      anon_sym_descending,
      anon_sym_display,
      anon_sym_div,
      anon_sym_fluent,
      anon_sym_mod,
      anon_sym_predecessor,
      anon_sym_starting,
      anon_sym_successor,
      anon_sym_width,
  [182] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_default_identifier,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    STATE(90), 1,
      aux_sym_qualified_identifier_expression_repeat1,
    STATE(205), 1,
      sym_quoted_identifier,
    STATE(302), 1,
      sym_referential_identifier,
    STATE(394), 1,
      sym_qualified_identifier_expression,
    STATE(403), 1,
      sym_terminology,
    STATE(210), 2,
      sym_identifier,
      sym_keyword_identifier,
    ACTIONS(211), 4,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_ormore,
      anon_sym_orless,
    ACTIONS(205), 48,
      anon_sym_library,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_code,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_default,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_function,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_date,
      anon_sym_time,
      anon_sym_timezone,
      anon_sym_timezoneoffset,
      anon_sym_contains,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_start,
      anon_sym_end,
      anon_sym_includes,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_where,
      anon_sym_version,
      anon_sym_asc,
      anon_sym_ascending,
      anon_sym_by,
      anon_sym_codesystems,
      anon_sym_desc,
      anon_sym_descending,
      anon_sym_display,
      anon_sym_div,
      anon_sym_fluent,
      anon_sym_mod,
      anon_sym_predecessor,
      anon_sym_starting,
      anon_sym_successor,
      anon_sym_width,
  [267] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_default_identifier,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    STATE(90), 1,
      aux_sym_qualified_identifier_expression_repeat1,
    STATE(205), 1,
      sym_quoted_identifier,
    STATE(302), 1,
      sym_referential_identifier,
    STATE(393), 1,
      sym_terminology,
    STATE(394), 1,
      sym_qualified_identifier_expression,
    STATE(210), 2,
      sym_identifier,
      sym_keyword_identifier,
    ACTIONS(211), 4,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_ormore,
      anon_sym_orless,
    ACTIONS(205), 48,
      anon_sym_library,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_code,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_default,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_function,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_date,
      anon_sym_time,
      anon_sym_timezone,
      anon_sym_timezoneoffset,
      anon_sym_contains,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_start,
      anon_sym_end,
      anon_sym_includes,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_where,
      anon_sym_version,
      anon_sym_asc,
      anon_sym_ascending,
      anon_sym_by,
      anon_sym_codesystems,
      anon_sym_desc,
      anon_sym_descending,
      anon_sym_display,
      anon_sym_div,
      anon_sym_fluent,
      anon_sym_mod,
      anon_sym_predecessor,
      anon_sym_starting,
      anon_sym_successor,
      anon_sym_width,
  [352] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_default_identifier,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    STATE(90), 1,
      aux_sym_qualified_identifier_expression_repeat1,
    STATE(205), 1,
      sym_quoted_identifier,
    STATE(302), 1,
      sym_referential_identifier,
    STATE(384), 1,
      sym_terminology,
    STATE(394), 1,
      sym_qualified_identifier_expression,
    STATE(210), 2,
      sym_identifier,
      sym_keyword_identifier,
    ACTIONS(211), 4,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_ormore,
      anon_sym_orless,
    ACTIONS(205), 48,
      anon_sym_library,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_code,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_default,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_function,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_date,
      anon_sym_time,
      anon_sym_timezone,
      anon_sym_timezoneoffset,
      anon_sym_contains,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_start,
      anon_sym_end,
      anon_sym_includes,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_where,
      anon_sym_version,
      anon_sym_asc,
      anon_sym_ascending,
      anon_sym_by,
      anon_sym_codesystems,
      anon_sym_desc,
      anon_sym_descending,
      anon_sym_display,
      anon_sym_div,
      anon_sym_fluent,
      anon_sym_mod,
      anon_sym_predecessor,
      anon_sym_starting,
      anon_sym_successor,
      anon_sym_width,
  [437] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_default_identifier,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    STATE(90), 1,
      aux_sym_qualified_identifier_expression_repeat1,
    STATE(205), 1,
      sym_quoted_identifier,
    STATE(302), 1,
      sym_referential_identifier,
    STATE(394), 1,
      sym_qualified_identifier_expression,
    STATE(407), 1,
      sym_terminology,
    STATE(210), 2,
      sym_identifier,
      sym_keyword_identifier,
    ACTIONS(211), 4,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_ormore,
      anon_sym_orless,
    ACTIONS(205), 48,
      anon_sym_library,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_code,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_default,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_function,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_date,
      anon_sym_time,
      anon_sym_timezone,
      anon_sym_timezoneoffset,
      anon_sym_contains,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_start,
      anon_sym_end,
      anon_sym_includes,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_where,
      anon_sym_version,
      anon_sym_asc,
      anon_sym_ascending,
      anon_sym_by,
      anon_sym_codesystems,
      anon_sym_desc,
      anon_sym_descending,
      anon_sym_display,
      anon_sym_div,
      anon_sym_fluent,
      anon_sym_mod,
      anon_sym_predecessor,
      anon_sym_starting,
      anon_sym_successor,
      anon_sym_width,
  [522] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_default_identifier,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    STATE(93), 1,
      aux_sym_qualified_identifier_expression_repeat1,
    STATE(205), 1,
      sym_quoted_identifier,
    STATE(333), 1,
      sym_referential_identifier,
    STATE(210), 2,
      sym_identifier,
      sym_keyword_identifier,
    ACTIONS(211), 4,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_ormore,
      anon_sym_orless,
    ACTIONS(205), 48,
      anon_sym_library,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_code,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_default,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_function,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_date,
      anon_sym_time,
      anon_sym_timezone,
      anon_sym_timezoneoffset,
      anon_sym_contains,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_start,
      anon_sym_end,
      anon_sym_includes,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_where,
      anon_sym_version,
      anon_sym_asc,
      anon_sym_ascending,
      anon_sym_by,
      anon_sym_codesystems,
      anon_sym_desc,
      anon_sym_descending,
      anon_sym_display,
      anon_sym_div,
      anon_sym_fluent,
      anon_sym_mod,
      anon_sym_predecessor,
      anon_sym_starting,
      anon_sym_successor,
      anon_sym_width,
  [601] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_default_identifier,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    STATE(93), 1,
      aux_sym_qualified_identifier_expression_repeat1,
    STATE(333), 1,
      sym_referential_identifier,
    STATE(337), 1,
      sym_quoted_identifier,
    STATE(349), 2,
      sym_identifier,
      sym_keyword_identifier,
    ACTIONS(59), 4,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_ormore,
      anon_sym_orless,
    ACTIONS(29), 48,
      anon_sym_library,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_code,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_default,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_function,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_date,
      anon_sym_time,
      anon_sym_timezone,
      anon_sym_timezoneoffset,
      anon_sym_contains,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_start,
      anon_sym_end,
      anon_sym_includes,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_where,
      anon_sym_version,
      anon_sym_asc,
      anon_sym_ascending,
      anon_sym_by,
      anon_sym_codesystems,
      anon_sym_desc,
      anon_sym_descending,
      anon_sym_display,
      anon_sym_div,
      anon_sym_fluent,
      anon_sym_mod,
      anon_sym_predecessor,
      anon_sym_starting,
      anon_sym_successor,
      anon_sym_width,
  [680] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym_default_identifier,
    ACTIONS(232), 1,
      anon_sym_DQUOTE,
    STATE(92), 1,
      aux_sym_named_type_specifier_repeat1,
    STATE(205), 1,
      sym_quoted_identifier,
    STATE(382), 1,
      sym_identifier,
    ACTIONS(227), 4,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_ormore,
      anon_sym_orless,
    ACTIONS(225), 50,
      anon_sym_library,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_code,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_default,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_function,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_date,
      anon_sym_time,
      anon_sym_timezone,
      anon_sym_timezoneoffset,
      anon_sym_contains,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_start,
      anon_sym_end,
      anon_sym_includes,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_where,
      anon_sym_version,
      anon_sym_Code,
      anon_sym_Concept,
      anon_sym_asc,
      anon_sym_ascending,
      anon_sym_by,
      anon_sym_codesystems,
      anon_sym_desc,
      anon_sym_descending,
      anon_sym_display,
      anon_sym_div,
      anon_sym_fluent,
      anon_sym_mod,
      anon_sym_predecessor,
      anon_sym_starting,
      anon_sym_successor,
      anon_sym_width,
  [757] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      sym_default_identifier,
    ACTIONS(244), 1,
      anon_sym_DQUOTE,
    STATE(93), 1,
      aux_sym_qualified_identifier_expression_repeat1,
    STATE(205), 1,
      sym_quoted_identifier,
    STATE(386), 1,
      sym_referential_identifier,
    STATE(210), 2,
      sym_identifier,
      sym_keyword_identifier,
    ACTIONS(238), 4,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_ormore,
      anon_sym_orless,
    ACTIONS(235), 48,
      anon_sym_library,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_code,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_default,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_function,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_date,
      anon_sym_time,
      anon_sym_timezone,
      anon_sym_timezoneoffset,
      anon_sym_contains,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_start,
      anon_sym_end,
      anon_sym_includes,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_where,
      anon_sym_version,
      anon_sym_asc,
      anon_sym_ascending,
      anon_sym_by,
      anon_sym_codesystems,
      anon_sym_desc,
      anon_sym_descending,
      anon_sym_display,
      anon_sym_div,
      anon_sym_fluent,
      anon_sym_mod,
      anon_sym_predecessor,
      anon_sym_starting,
      anon_sym_successor,
      anon_sym_width,
  [836] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 6,
      ts_builtin_sym_end,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_ormore,
      anon_sym_orless,
      anon_sym_DQUOTE,
    ACTIONS(249), 51,
      anon_sym_library,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_code,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_default,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_function,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_date,
      anon_sym_time,
      anon_sym_timezone,
      anon_sym_timezoneoffset,
      anon_sym_contains,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_start,
      anon_sym_end,
      anon_sym_includes,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_where,
      anon_sym_version,
      sym_default_identifier,
      anon_sym_Code,
      anon_sym_Concept,
      anon_sym_asc,
      anon_sym_ascending,
      anon_sym_by,
      anon_sym_codesystems,
      anon_sym_desc,
      anon_sym_descending,
      anon_sym_display,
      anon_sym_div,
      anon_sym_fluent,
      anon_sym_mod,
      anon_sym_predecessor,
      anon_sym_starting,
      anon_sym_successor,
      anon_sym_width,
  [901] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 6,
      ts_builtin_sym_end,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_ormore,
      anon_sym_orless,
      anon_sym_DQUOTE,
    ACTIONS(253), 51,
      anon_sym_library,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_code,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_default,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_function,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_date,
      anon_sym_time,
      anon_sym_timezone,
      anon_sym_timezoneoffset,
      anon_sym_contains,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_start,
      anon_sym_end,
      anon_sym_includes,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_where,
      anon_sym_version,
      sym_default_identifier,
      anon_sym_Code,
      anon_sym_Concept,
      anon_sym_asc,
      anon_sym_ascending,
      anon_sym_by,
      anon_sym_codesystems,
      anon_sym_desc,
      anon_sym_descending,
      anon_sym_display,
      anon_sym_div,
      anon_sym_fluent,
      anon_sym_mod,
      anon_sym_predecessor,
      anon_sym_starting,
      anon_sym_successor,
      anon_sym_width,
  [966] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 6,
      ts_builtin_sym_end,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_ormore,
      anon_sym_orless,
      anon_sym_DQUOTE,
    ACTIONS(257), 51,
      anon_sym_library,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_code,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_default,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_function,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_date,
      anon_sym_time,
      anon_sym_timezone,
      anon_sym_timezoneoffset,
      anon_sym_contains,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_start,
      anon_sym_end,
      anon_sym_includes,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_where,
      anon_sym_version,
      sym_default_identifier,
      anon_sym_Code,
      anon_sym_Concept,
      anon_sym_asc,
      anon_sym_ascending,
      anon_sym_by,
      anon_sym_codesystems,
      anon_sym_desc,
      anon_sym_descending,
      anon_sym_display,
      anon_sym_div,
      anon_sym_fluent,
      anon_sym_mod,
      anon_sym_predecessor,
      anon_sym_starting,
      anon_sym_successor,
      anon_sym_width,
  [1031] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 5,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_ormore,
      anon_sym_orless,
      anon_sym_DQUOTE,
    ACTIONS(259), 51,
      anon_sym_library,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_code,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_default,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_function,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_date,
      anon_sym_time,
      anon_sym_timezone,
      anon_sym_timezoneoffset,
      anon_sym_contains,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_start,
      anon_sym_end,
      anon_sym_includes,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_where,
      anon_sym_version,
      sym_default_identifier,
      anon_sym_Code,
      anon_sym_Concept,
      anon_sym_asc,
      anon_sym_ascending,
      anon_sym_by,
      anon_sym_codesystems,
      anon_sym_desc,
      anon_sym_descending,
      anon_sym_display,
      anon_sym_div,
      anon_sym_fluent,
      anon_sym_mod,
      anon_sym_predecessor,
      anon_sym_starting,
      anon_sym_successor,
      anon_sym_width,
  [1095] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 5,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_ormore,
      anon_sym_orless,
      anon_sym_DQUOTE,
    ACTIONS(263), 49,
      anon_sym_library,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_code,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_default,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_function,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_date,
      anon_sym_time,
      anon_sym_timezone,
      anon_sym_timezoneoffset,
      anon_sym_contains,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_start,
      anon_sym_end,
      anon_sym_includes,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_where,
      anon_sym_version,
      sym_default_identifier,
      anon_sym_asc,
      anon_sym_ascending,
      anon_sym_by,
      anon_sym_codesystems,
      anon_sym_desc,
      anon_sym_descending,
      anon_sym_display,
      anon_sym_div,
      anon_sym_fluent,
      anon_sym_mod,
      anon_sym_predecessor,
      anon_sym_starting,
      anon_sym_successor,
      anon_sym_width,
  [1157] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(45), 1,
      sym_interval_operator_phrase,
    STATE(54), 1,
      sym_temporal_relationship,
    STATE(277), 1,
      sym_quantity,
    STATE(331), 1,
      sym_quantity_offset,
    STATE(377), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(269), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(267), 44,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [1228] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_onor,
    ACTIONS(275), 1,
      anon_sym_is,
    ACTIONS(277), 1,
      anon_sym_as,
    ACTIONS(279), 1,
      anon_sym_properly,
    ACTIONS(281), 1,
      anon_sym_between,
    ACTIONS(283), 1,
      anon_sym_and,
    ACTIONS(293), 1,
      anon_sym_implies,
    ACTIONS(301), 1,
      anon_sym_occurs,
    ACTIONS(303), 1,
      anon_sym_same,
    ACTIONS(305), 1,
      anon_sym_includes,
    ACTIONS(311), 1,
      anon_sym_within,
    ACTIONS(313), 1,
      sym_number,
    STATE(45), 1,
      sym_interval_operator_phrase,
    STATE(54), 1,
      sym_temporal_relationship,
    STATE(277), 1,
      sym_quantity,
    STATE(331), 1,
      sym_quantity_offset,
    STATE(377), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(107), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(273), 2,
      anon_sym_include,
      anon_sym_code,
    ACTIONS(287), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(289), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(291), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(297), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(299), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(307), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(309), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(285), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(295), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
    ACTIONS(271), 10,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [1343] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_and,
    ACTIONS(293), 1,
      anon_sym_implies,
    STATE(45), 1,
      sym_interval_operator_phrase,
    STATE(54), 1,
      sym_temporal_relationship,
    STATE(277), 1,
      sym_quantity,
    STATE(331), 1,
      sym_quantity_offset,
    STATE(377), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(287), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(289), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(291), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(317), 2,
      anon_sym_include,
      anon_sym_code,
    ACTIONS(285), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(295), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
    ACTIONS(315), 30,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [1428] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_and,
    ACTIONS(293), 1,
      anon_sym_implies,
    ACTIONS(323), 1,
      anon_sym_is,
    ACTIONS(326), 1,
      anon_sym_as,
    ACTIONS(329), 1,
      anon_sym_properly,
    ACTIONS(332), 1,
      anon_sym_between,
    ACTIONS(338), 1,
      anon_sym_onor,
    ACTIONS(347), 1,
      anon_sym_occurs,
    ACTIONS(350), 1,
      anon_sym_same,
    ACTIONS(353), 1,
      anon_sym_includes,
    ACTIONS(362), 1,
      anon_sym_within,
    ACTIONS(365), 1,
      sym_number,
    STATE(45), 1,
      sym_interval_operator_phrase,
    STATE(54), 1,
      sym_temporal_relationship,
    STATE(277), 1,
      sym_quantity,
    STATE(331), 1,
      sym_quantity_offset,
    STATE(377), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(287), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(289), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(291), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(321), 2,
      anon_sym_include,
      anon_sym_code,
    ACTIONS(335), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(341), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(344), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(356), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(359), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(285), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(295), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
    ACTIONS(319), 10,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [1543] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_and,
    ACTIONS(293), 1,
      anon_sym_implies,
    ACTIONS(372), 1,
      anon_sym_is,
    ACTIONS(375), 1,
      anon_sym_as,
    ACTIONS(378), 1,
      anon_sym_properly,
    ACTIONS(381), 1,
      anon_sym_between,
    ACTIONS(387), 1,
      anon_sym_onor,
    ACTIONS(396), 1,
      anon_sym_occurs,
    ACTIONS(399), 1,
      anon_sym_same,
    ACTIONS(402), 1,
      anon_sym_includes,
    ACTIONS(411), 1,
      anon_sym_within,
    ACTIONS(414), 1,
      sym_number,
    STATE(45), 1,
      sym_interval_operator_phrase,
    STATE(54), 1,
      sym_temporal_relationship,
    STATE(277), 1,
      sym_quantity,
    STATE(331), 1,
      sym_quantity_offset,
    STATE(377), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(287), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(289), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(291), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(370), 2,
      anon_sym_include,
      anon_sym_code,
    ACTIONS(384), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(390), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(393), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(405), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(408), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(285), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(295), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
    ACTIONS(368), 10,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [1658] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(45), 1,
      sym_interval_operator_phrase,
    STATE(54), 1,
      sym_temporal_relationship,
    STATE(277), 1,
      sym_quantity,
    STATE(331), 1,
      sym_quantity_offset,
    STATE(377), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(419), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(417), 44,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [1729] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(45), 1,
      sym_interval_operator_phrase,
    STATE(54), 1,
      sym_temporal_relationship,
    STATE(277), 1,
      sym_quantity,
    STATE(331), 1,
      sym_quantity_offset,
    STATE(377), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(423), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(421), 44,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [1800] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_and,
    ACTIONS(293), 1,
      anon_sym_implies,
    ACTIONS(429), 1,
      anon_sym_is,
    ACTIONS(432), 1,
      anon_sym_as,
    ACTIONS(435), 1,
      anon_sym_properly,
    ACTIONS(438), 1,
      anon_sym_between,
    ACTIONS(444), 1,
      anon_sym_onor,
    ACTIONS(453), 1,
      anon_sym_occurs,
    ACTIONS(456), 1,
      anon_sym_same,
    ACTIONS(459), 1,
      anon_sym_includes,
    ACTIONS(468), 1,
      anon_sym_within,
    ACTIONS(471), 1,
      sym_number,
    STATE(45), 1,
      sym_interval_operator_phrase,
    STATE(54), 1,
      sym_temporal_relationship,
    STATE(277), 1,
      sym_quantity,
    STATE(331), 1,
      sym_quantity_offset,
    STATE(377), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(287), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(289), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(291), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(427), 2,
      anon_sym_include,
      anon_sym_code,
    ACTIONS(441), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(447), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(450), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(462), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(465), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(285), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(295), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
    ACTIONS(425), 10,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [1915] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(45), 1,
      sym_interval_operator_phrase,
    STATE(54), 1,
      sym_temporal_relationship,
    STATE(277), 1,
      sym_quantity,
    STATE(331), 1,
      sym_quantity_offset,
    STATE(377), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(476), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(474), 44,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [1986] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(45), 1,
      sym_interval_operator_phrase,
    STATE(54), 1,
      sym_temporal_relationship,
    STATE(277), 1,
      sym_quantity,
    STATE(331), 1,
      sym_quantity_offset,
    STATE(377), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(480), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(478), 44,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [2057] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_onor,
    ACTIONS(275), 1,
      anon_sym_is,
    ACTIONS(277), 1,
      anon_sym_as,
    ACTIONS(279), 1,
      anon_sym_properly,
    ACTIONS(281), 1,
      anon_sym_between,
    ACTIONS(283), 1,
      anon_sym_and,
    ACTIONS(293), 1,
      anon_sym_implies,
    ACTIONS(301), 1,
      anon_sym_occurs,
    ACTIONS(303), 1,
      anon_sym_same,
    ACTIONS(305), 1,
      anon_sym_includes,
    ACTIONS(311), 1,
      anon_sym_within,
    ACTIONS(313), 1,
      sym_number,
    STATE(45), 1,
      sym_interval_operator_phrase,
    STATE(54), 1,
      sym_temporal_relationship,
    STATE(277), 1,
      sym_quantity,
    STATE(331), 1,
      sym_quantity_offset,
    STATE(377), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(107), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(287), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(289), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(291), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(297), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(299), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(307), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(309), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(484), 2,
      anon_sym_include,
      anon_sym_code,
    ACTIONS(285), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(295), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
    ACTIONS(482), 10,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [2172] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(45), 1,
      sym_interval_operator_phrase,
    STATE(54), 1,
      sym_temporal_relationship,
    STATE(277), 1,
      sym_quantity,
    STATE(331), 1,
      sym_quantity_offset,
    STATE(377), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(488), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(486), 44,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [2243] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(45), 1,
      sym_interval_operator_phrase,
    STATE(54), 1,
      sym_temporal_relationship,
    STATE(277), 1,
      sym_quantity,
    STATE(331), 1,
      sym_quantity_offset,
    STATE(377), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(492), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 44,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [2314] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_onor,
    ACTIONS(275), 1,
      anon_sym_is,
    ACTIONS(277), 1,
      anon_sym_as,
    ACTIONS(279), 1,
      anon_sym_properly,
    ACTIONS(281), 1,
      anon_sym_between,
    ACTIONS(283), 1,
      anon_sym_and,
    ACTIONS(293), 1,
      anon_sym_implies,
    ACTIONS(301), 1,
      anon_sym_occurs,
    ACTIONS(303), 1,
      anon_sym_same,
    ACTIONS(305), 1,
      anon_sym_includes,
    ACTIONS(311), 1,
      anon_sym_within,
    ACTIONS(313), 1,
      sym_number,
    STATE(45), 1,
      sym_interval_operator_phrase,
    STATE(54), 1,
      sym_temporal_relationship,
    STATE(277), 1,
      sym_quantity,
    STATE(331), 1,
      sym_quantity_offset,
    STATE(377), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(107), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(287), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(289), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(291), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(297), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(299), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(307), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(309), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(496), 2,
      anon_sym_include,
      anon_sym_code,
    ACTIONS(285), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(295), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
    ACTIONS(494), 10,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [2429] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(45), 1,
      sym_interval_operator_phrase,
    STATE(54), 1,
      sym_temporal_relationship,
    STATE(277), 1,
      sym_quantity,
    STATE(331), 1,
      sym_quantity_offset,
    STATE(377), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(500), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(498), 44,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [2500] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_COMMA,
    STATE(121), 1,
      aux_sym_query_source_clause_repeat1,
    ACTIONS(504), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(502), 46,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      anon_sym_where,
      sym_number,
  [2564] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_COMMA,
    STATE(121), 1,
      aux_sym_query_source_clause_repeat1,
    ACTIONS(510), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(508), 46,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      anon_sym_where,
      sym_number,
  [2628] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(247), 48,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_COMMA,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_DOT,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      anon_sym_where,
      sym_number,
  [2688] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_COMMA,
    STATE(115), 1,
      aux_sym_query_source_clause_repeat1,
    ACTIONS(514), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(512), 46,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      anon_sym_where,
      sym_number,
  [2752] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(251), 48,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_COMMA,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_DOT,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      anon_sym_where,
      sym_number,
  [2812] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(255), 48,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_COMMA,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_DOT,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      anon_sym_where,
      sym_number,
  [2872] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_COMMA,
    STATE(114), 1,
      aux_sym_query_source_clause_repeat1,
    ACTIONS(510), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(508), 46,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      anon_sym_where,
      sym_number,
  [2936] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_COMMA,
    STATE(121), 1,
      aux_sym_query_source_clause_repeat1,
    ACTIONS(518), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(516), 46,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      anon_sym_where,
      sym_number,
  [3000] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(516), 47,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_COMMA,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      anon_sym_where,
      sym_number,
  [3059] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(523), 47,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_COMMA,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      anon_sym_where,
      sym_number,
  [3118] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_DOT,
    ACTIONS(529), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(527), 45,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [3178] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_where,
    STATE(147), 1,
      sym_where_clause,
    ACTIONS(535), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(533), 44,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [3240] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      sym_default_identifier,
    ACTIONS(545), 1,
      anon_sym_DQUOTE,
    ACTIONS(539), 13,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_includedin,
      sym_number,
    ACTIONS(541), 35,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_code,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
  [3302] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 14,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_includedin,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(549), 36,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_code,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_default_identifier,
  [3360] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 14,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_includedin,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(553), 36,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_code,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_default_identifier,
  [3418] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(555), 46,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_of,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [3476] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(559), 46,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_of,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [3534] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(563), 46,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_of,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [3592] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(567), 46,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_of,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [3650] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(571), 45,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [3707] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(575), 45,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [3764] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(579), 45,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [3821] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(583), 45,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [3878] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 45,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [3935] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(527), 45,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [3992] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(589), 45,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [4049] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(593), 45,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [4106] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(597), 45,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [4163] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(601), 45,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [4220] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(605), 45,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [4277] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(609), 45,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [4334] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(613), 45,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [4391] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(617), 45,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [4448] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(621), 45,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [4505] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(625), 45,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [4562] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(629), 45,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [4619] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(539), 45,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [4676] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(633), 45,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [4733] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(637), 45,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [4790] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(641), 45,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [4847] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(645), 45,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [4904] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(649), 45,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [4961] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(637), 45,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [5018] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(653), 45,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [5075] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(657), 45,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [5132] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 4,
      anon_sym_include,
      anon_sym_code,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(661), 45,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [5189] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_onor,
    ACTIONS(275), 1,
      anon_sym_is,
    ACTIONS(277), 1,
      anon_sym_as,
    ACTIONS(279), 1,
      anon_sym_properly,
    ACTIONS(281), 1,
      anon_sym_between,
    ACTIONS(301), 1,
      anon_sym_occurs,
    ACTIONS(303), 1,
      anon_sym_same,
    ACTIONS(305), 1,
      anon_sym_includes,
    ACTIONS(311), 1,
      anon_sym_within,
    ACTIONS(313), 1,
      sym_number,
    ACTIONS(667), 1,
      anon_sym_and,
    ACTIONS(677), 1,
      anon_sym_implies,
    STATE(23), 1,
      sym_interval_operator_phrase,
    STATE(54), 1,
      sym_temporal_relationship,
    STATE(277), 1,
      sym_quantity,
    STATE(331), 1,
      sym_quantity_offset,
    STATE(377), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(107), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(297), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(299), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(307), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(309), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(671), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(673), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(675), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(665), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
    ACTIONS(669), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(679), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [5293] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_is,
    ACTIONS(375), 1,
      anon_sym_as,
    ACTIONS(378), 1,
      anon_sym_properly,
    ACTIONS(381), 1,
      anon_sym_between,
    ACTIONS(387), 1,
      anon_sym_onor,
    ACTIONS(396), 1,
      anon_sym_occurs,
    ACTIONS(399), 1,
      anon_sym_same,
    ACTIONS(402), 1,
      anon_sym_includes,
    ACTIONS(411), 1,
      anon_sym_within,
    ACTIONS(414), 1,
      sym_number,
    ACTIONS(667), 1,
      anon_sym_and,
    ACTIONS(677), 1,
      anon_sym_implies,
    STATE(23), 1,
      sym_interval_operator_phrase,
    STATE(54), 1,
      sym_temporal_relationship,
    STATE(277), 1,
      sym_quantity,
    STATE(331), 1,
      sym_quantity_offset,
    STATE(377), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(384), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(390), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(393), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(405), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(408), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(671), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(673), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(675), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(368), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
    ACTIONS(669), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(679), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [5397] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_onor,
    ACTIONS(275), 1,
      anon_sym_is,
    ACTIONS(277), 1,
      anon_sym_as,
    ACTIONS(279), 1,
      anon_sym_properly,
    ACTIONS(281), 1,
      anon_sym_between,
    ACTIONS(301), 1,
      anon_sym_occurs,
    ACTIONS(303), 1,
      anon_sym_same,
    ACTIONS(305), 1,
      anon_sym_includes,
    ACTIONS(311), 1,
      anon_sym_within,
    ACTIONS(313), 1,
      sym_number,
    ACTIONS(667), 1,
      anon_sym_and,
    ACTIONS(677), 1,
      anon_sym_implies,
    STATE(23), 1,
      sym_interval_operator_phrase,
    STATE(54), 1,
      sym_temporal_relationship,
    STATE(277), 1,
      sym_quantity,
    STATE(331), 1,
      sym_quantity_offset,
    STATE(377), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(107), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(297), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(299), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(307), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(309), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(671), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(673), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(675), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(681), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
    ACTIONS(669), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(679), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [5501] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_onor,
    ACTIONS(275), 1,
      anon_sym_is,
    ACTIONS(277), 1,
      anon_sym_as,
    ACTIONS(279), 1,
      anon_sym_properly,
    ACTIONS(281), 1,
      anon_sym_between,
    ACTIONS(301), 1,
      anon_sym_occurs,
    ACTIONS(303), 1,
      anon_sym_same,
    ACTIONS(305), 1,
      anon_sym_includes,
    ACTIONS(311), 1,
      anon_sym_within,
    ACTIONS(313), 1,
      sym_number,
    ACTIONS(667), 1,
      anon_sym_and,
    ACTIONS(677), 1,
      anon_sym_implies,
    STATE(23), 1,
      sym_interval_operator_phrase,
    STATE(54), 1,
      sym_temporal_relationship,
    STATE(277), 1,
      sym_quantity,
    STATE(331), 1,
      sym_quantity_offset,
    STATE(377), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(107), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(297), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(299), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(307), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(309), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(671), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(673), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(675), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(683), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
    ACTIONS(669), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(679), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [5605] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(23), 1,
      sym_interval_operator_phrase,
    STATE(54), 1,
      sym_temporal_relationship,
    STATE(277), 1,
      sym_quantity,
    STATE(331), 1,
      sym_quantity_offset,
    STATE(377), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(480), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(478), 37,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [5667] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(23), 1,
      sym_interval_operator_phrase,
    STATE(54), 1,
      sym_temporal_relationship,
    STATE(277), 1,
      sym_quantity,
    STATE(331), 1,
      sym_quantity_offset,
    STATE(377), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(269), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(267), 37,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [5729] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(23), 1,
      sym_interval_operator_phrase,
    STATE(54), 1,
      sym_temporal_relationship,
    STATE(277), 1,
      sym_quantity,
    STATE(331), 1,
      sym_quantity_offset,
    STATE(377), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(488), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(486), 37,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [5791] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(23), 1,
      sym_interval_operator_phrase,
    STATE(54), 1,
      sym_temporal_relationship,
    STATE(277), 1,
      sym_quantity,
    STATE(331), 1,
      sym_quantity_offset,
    STATE(377), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(492), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 37,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [5853] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_onor,
    ACTIONS(275), 1,
      anon_sym_is,
    ACTIONS(277), 1,
      anon_sym_as,
    ACTIONS(279), 1,
      anon_sym_properly,
    ACTIONS(281), 1,
      anon_sym_between,
    ACTIONS(301), 1,
      anon_sym_occurs,
    ACTIONS(303), 1,
      anon_sym_same,
    ACTIONS(305), 1,
      anon_sym_includes,
    ACTIONS(311), 1,
      anon_sym_within,
    ACTIONS(313), 1,
      sym_number,
    ACTIONS(667), 1,
      anon_sym_and,
    ACTIONS(677), 1,
      anon_sym_implies,
    STATE(23), 1,
      sym_interval_operator_phrase,
    STATE(54), 1,
      sym_temporal_relationship,
    STATE(277), 1,
      sym_quantity,
    STATE(331), 1,
      sym_quantity_offset,
    STATE(377), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(107), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(297), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(299), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(307), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(309), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(671), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(673), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(675), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(685), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
    ACTIONS(669), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(679), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [5957] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(23), 1,
      sym_interval_operator_phrase,
    STATE(54), 1,
      sym_temporal_relationship,
    STATE(277), 1,
      sym_quantity,
    STATE(331), 1,
      sym_quantity_offset,
    STATE(377), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(423), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(421), 37,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [6019] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_is,
    ACTIONS(432), 1,
      anon_sym_as,
    ACTIONS(435), 1,
      anon_sym_properly,
    ACTIONS(438), 1,
      anon_sym_between,
    ACTIONS(444), 1,
      anon_sym_onor,
    ACTIONS(453), 1,
      anon_sym_occurs,
    ACTIONS(456), 1,
      anon_sym_same,
    ACTIONS(459), 1,
      anon_sym_includes,
    ACTIONS(468), 1,
      anon_sym_within,
    ACTIONS(471), 1,
      sym_number,
    ACTIONS(667), 1,
      anon_sym_and,
    ACTIONS(677), 1,
      anon_sym_implies,
    STATE(23), 1,
      sym_interval_operator_phrase,
    STATE(54), 1,
      sym_temporal_relationship,
    STATE(277), 1,
      sym_quantity,
    STATE(331), 1,
      sym_quantity_offset,
    STATE(377), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(441), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(447), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(450), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(462), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(465), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(671), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(673), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(675), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(425), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
    ACTIONS(669), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(679), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [6123] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(23), 1,
      sym_interval_operator_phrase,
    STATE(54), 1,
      sym_temporal_relationship,
    STATE(277), 1,
      sym_quantity,
    STATE(331), 1,
      sym_quantity_offset,
    STATE(377), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(500), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(498), 37,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [6185] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(23), 1,
      sym_interval_operator_phrase,
    STATE(54), 1,
      sym_temporal_relationship,
    STATE(277), 1,
      sym_quantity,
    STATE(331), 1,
      sym_quantity_offset,
    STATE(377), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(476), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(474), 37,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [6247] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(23), 1,
      sym_interval_operator_phrase,
    STATE(54), 1,
      sym_temporal_relationship,
    STATE(277), 1,
      sym_quantity,
    STATE(331), 1,
      sym_quantity_offset,
    STATE(377), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(419), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(417), 37,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [6309] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_is,
    ACTIONS(326), 1,
      anon_sym_as,
    ACTIONS(329), 1,
      anon_sym_properly,
    ACTIONS(332), 1,
      anon_sym_between,
    ACTIONS(338), 1,
      anon_sym_onor,
    ACTIONS(347), 1,
      anon_sym_occurs,
    ACTIONS(350), 1,
      anon_sym_same,
    ACTIONS(353), 1,
      anon_sym_includes,
    ACTIONS(362), 1,
      anon_sym_within,
    ACTIONS(365), 1,
      sym_number,
    ACTIONS(667), 1,
      anon_sym_and,
    ACTIONS(677), 1,
      anon_sym_implies,
    STATE(23), 1,
      sym_interval_operator_phrase,
    STATE(54), 1,
      sym_temporal_relationship,
    STATE(277), 1,
      sym_quantity,
    STATE(331), 1,
      sym_quantity_offset,
    STATE(377), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(335), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(341), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(344), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(356), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(359), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(671), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(673), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(675), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(319), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
    ACTIONS(669), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(679), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [6413] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      anon_sym_and,
    ACTIONS(677), 1,
      anon_sym_implies,
    STATE(23), 1,
      sym_interval_operator_phrase,
    STATE(54), 1,
      sym_temporal_relationship,
    STATE(277), 1,
      sym_quantity,
    STATE(331), 1,
      sym_quantity_offset,
    STATE(377), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(671), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(673), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(675), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(669), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(679), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
    ACTIONS(315), 23,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [6487] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_RPAREN,
    ACTIONS(429), 1,
      anon_sym_is,
    ACTIONS(432), 1,
      anon_sym_as,
    ACTIONS(435), 1,
      anon_sym_properly,
    ACTIONS(438), 1,
      anon_sym_between,
    ACTIONS(444), 1,
      anon_sym_onor,
    ACTIONS(453), 1,
      anon_sym_occurs,
    ACTIONS(456), 1,
      anon_sym_same,
    ACTIONS(459), 1,
      anon_sym_includes,
    ACTIONS(468), 1,
      anon_sym_within,
    ACTIONS(471), 1,
      sym_number,
    ACTIONS(687), 1,
      anon_sym_and,
    ACTIONS(697), 1,
      anon_sym_implies,
    STATE(32), 1,
      sym_interval_operator_phrase,
    STATE(54), 1,
      sym_temporal_relationship,
    STATE(277), 1,
      sym_quantity,
    STATE(331), 1,
      sym_quantity_offset,
    STATE(377), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(441), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(447), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(450), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(462), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(465), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(691), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(693), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(695), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(689), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(699), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [6589] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(32), 1,
      sym_interval_operator_phrase,
    STATE(54), 1,
      sym_temporal_relationship,
    STATE(277), 1,
      sym_quantity,
    STATE(331), 1,
      sym_quantity_offset,
    STATE(377), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(476), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(474), 35,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [6649] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(32), 1,
      sym_interval_operator_phrase,
    STATE(54), 1,
      sym_temporal_relationship,
    STATE(277), 1,
      sym_quantity,
    STATE(331), 1,
      sym_quantity_offset,
    STATE(377), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(419), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(417), 35,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [6709] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_RPAREN,
    ACTIONS(323), 1,
      anon_sym_is,
    ACTIONS(326), 1,
      anon_sym_as,
    ACTIONS(329), 1,
      anon_sym_properly,
    ACTIONS(332), 1,
      anon_sym_between,
    ACTIONS(338), 1,
      anon_sym_onor,
    ACTIONS(347), 1,
      anon_sym_occurs,
    ACTIONS(350), 1,
      anon_sym_same,
    ACTIONS(353), 1,
      anon_sym_includes,
    ACTIONS(362), 1,
      anon_sym_within,
    ACTIONS(365), 1,
      sym_number,
    ACTIONS(687), 1,
      anon_sym_and,
    ACTIONS(697), 1,
      anon_sym_implies,
    STATE(32), 1,
      sym_interval_operator_phrase,
    STATE(54), 1,
      sym_temporal_relationship,
    STATE(277), 1,
      sym_quantity,
    STATE(331), 1,
      sym_quantity_offset,
    STATE(377), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(335), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(341), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(344), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(356), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(359), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(691), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(693), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(695), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(689), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(699), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [6811] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(32), 1,
      sym_interval_operator_phrase,
    STATE(54), 1,
      sym_temporal_relationship,
    STATE(277), 1,
      sym_quantity,
    STATE(331), 1,
      sym_quantity_offset,
    STATE(377), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(488), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(486), 35,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [6871] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(32), 1,
      sym_interval_operator_phrase,
    STATE(54), 1,
      sym_temporal_relationship,
    STATE(277), 1,
      sym_quantity,
    STATE(331), 1,
      sym_quantity_offset,
    STATE(377), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(500), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(498), 35,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [6931] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_RPAREN,
    ACTIONS(372), 1,
      anon_sym_is,
    ACTIONS(375), 1,
      anon_sym_as,
    ACTIONS(378), 1,
      anon_sym_properly,
    ACTIONS(381), 1,
      anon_sym_between,
    ACTIONS(387), 1,
      anon_sym_onor,
    ACTIONS(396), 1,
      anon_sym_occurs,
    ACTIONS(399), 1,
      anon_sym_same,
    ACTIONS(402), 1,
      anon_sym_includes,
    ACTIONS(411), 1,
      anon_sym_within,
    ACTIONS(414), 1,
      sym_number,
    ACTIONS(687), 1,
      anon_sym_and,
    ACTIONS(697), 1,
      anon_sym_implies,
    STATE(32), 1,
      sym_interval_operator_phrase,
    STATE(54), 1,
      sym_temporal_relationship,
    STATE(277), 1,
      sym_quantity,
    STATE(331), 1,
      sym_quantity_offset,
    STATE(377), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(384), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(390), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(393), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(405), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(408), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(691), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(693), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(695), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(689), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(699), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [7033] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(32), 1,
      sym_interval_operator_phrase,
    STATE(54), 1,
      sym_temporal_relationship,
    STATE(277), 1,
      sym_quantity,
    STATE(331), 1,
      sym_quantity_offset,
    STATE(377), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(492), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(490), 35,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [7093] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      anon_sym_and,
    ACTIONS(697), 1,
      anon_sym_implies,
    STATE(32), 1,
      sym_interval_operator_phrase,
    STATE(54), 1,
      sym_temporal_relationship,
    STATE(277), 1,
      sym_quantity,
    STATE(331), 1,
      sym_quantity_offset,
    STATE(377), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(691), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(693), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(695), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(689), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(699), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
    ACTIONS(315), 21,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [7165] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_onor,
    ACTIONS(275), 1,
      anon_sym_is,
    ACTIONS(277), 1,
      anon_sym_as,
    ACTIONS(279), 1,
      anon_sym_properly,
    ACTIONS(281), 1,
      anon_sym_between,
    ACTIONS(301), 1,
      anon_sym_occurs,
    ACTIONS(303), 1,
      anon_sym_same,
    ACTIONS(305), 1,
      anon_sym_includes,
    ACTIONS(311), 1,
      anon_sym_within,
    ACTIONS(313), 1,
      sym_number,
    ACTIONS(687), 1,
      anon_sym_and,
    ACTIONS(697), 1,
      anon_sym_implies,
    ACTIONS(701), 1,
      anon_sym_RPAREN,
    STATE(32), 1,
      sym_interval_operator_phrase,
    STATE(54), 1,
      sym_temporal_relationship,
    STATE(277), 1,
      sym_quantity,
    STATE(331), 1,
      sym_quantity_offset,
    STATE(377), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(107), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(297), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(299), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(307), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(309), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(691), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(693), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(695), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(689), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(699), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [7267] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(32), 1,
      sym_interval_operator_phrase,
    STATE(54), 1,
      sym_temporal_relationship,
    STATE(277), 1,
      sym_quantity,
    STATE(331), 1,
      sym_quantity_offset,
    STATE(377), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(269), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(267), 35,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [7327] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(32), 1,
      sym_interval_operator_phrase,
    STATE(54), 1,
      sym_temporal_relationship,
    STATE(277), 1,
      sym_quantity,
    STATE(331), 1,
      sym_quantity_offset,
    STATE(377), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(423), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(421), 35,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [7387] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(32), 1,
      sym_interval_operator_phrase,
    STATE(54), 1,
      sym_temporal_relationship,
    STATE(277), 1,
      sym_quantity,
    STATE(331), 1,
      sym_quantity_offset,
    STATE(377), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(480), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(478), 35,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [7447] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      anon_sym_where,
    STATE(147), 1,
      sym_where_clause,
    ACTIONS(535), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(533), 37,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [7500] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 14,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_includedin,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(549), 27,
      anon_sym_context,
      anon_sym_define,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_default_identifier,
  [7549] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 14,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_includedin,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(553), 27,
      anon_sym_context,
      anon_sym_define,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_default_identifier,
  [7598] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_onor,
    ACTIONS(275), 1,
      anon_sym_is,
    ACTIONS(279), 1,
      anon_sym_properly,
    ACTIONS(281), 1,
      anon_sym_between,
    ACTIONS(301), 1,
      anon_sym_occurs,
    ACTIONS(303), 1,
      anon_sym_same,
    ACTIONS(305), 1,
      anon_sym_includes,
    ACTIONS(311), 1,
      anon_sym_within,
    ACTIONS(313), 1,
      sym_number,
    ACTIONS(687), 1,
      anon_sym_and,
    ACTIONS(697), 1,
      anon_sym_implies,
    ACTIONS(705), 1,
      anon_sym_as,
    STATE(32), 1,
      sym_interval_operator_phrase,
    STATE(54), 1,
      sym_temporal_relationship,
    STATE(277), 1,
      sym_quantity,
    STATE(331), 1,
      sym_quantity_offset,
    STATE(377), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(107), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(297), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(299), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(307), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(309), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(691), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(693), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(695), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(689), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(699), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [7697] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      sym_default_identifier,
    ACTIONS(545), 1,
      anon_sym_DQUOTE,
    ACTIONS(539), 13,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_includedin,
      sym_number,
    ACTIONS(541), 26,
      anon_sym_context,
      anon_sym_define,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
  [7750] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 14,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_includedin,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(549), 25,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_default_identifier,
  [7797] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 14,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_includedin,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(553), 25,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_default_identifier,
  [7844] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      anon_sym_where,
    STATE(147), 1,
      sym_where_clause,
    ACTIONS(535), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(533), 35,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_includedin,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
      sym_number,
  [7895] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      sym_default_identifier,
    ACTIONS(545), 1,
      anon_sym_DQUOTE,
    ACTIONS(539), 13,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE,
      anon_sym_lessthan,
      anon_sym_morethan,
      anon_sym_onor,
      anon_sym_includedin,
      sym_number,
    ACTIONS(541), 24,
      anon_sym_is,
      anon_sym_as,
      anon_sym_properly,
      anon_sym_between,
      anon_sym_and,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_implies,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
      anon_sym_before,
      anon_sym_after,
      anon_sym_starts,
      anon_sym_ends,
      anon_sym_occurs,
      anon_sym_same,
      anon_sym_includes,
      anon_sym_during,
      anon_sym_meets,
      anon_sym_overlaps,
      anon_sym_within,
  [7946] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_using,
    ACTIONS(11), 1,
      anon_sym_include,
    ACTIONS(13), 1,
      anon_sym_valueset,
    ACTIONS(15), 1,
      anon_sym_codesystem,
    ACTIONS(17), 1,
      anon_sym_code,
    ACTIONS(19), 1,
      anon_sym_concept,
    ACTIONS(21), 1,
      anon_sym_parameter,
    ACTIONS(25), 1,
      anon_sym_context,
    ACTIONS(27), 1,
      anon_sym_define,
    ACTIONS(709), 1,
      ts_builtin_sym_end,
    STATE(295), 1,
      sym_access_modifier,
    ACTIONS(23), 2,
      anon_sym_public,
      anon_sym_private,
    STATE(204), 2,
      sym_definition,
      aux_sym_cql_library_repeat1,
    STATE(272), 2,
      sym_statement,
      aux_sym_cql_library_repeat2,
    STATE(338), 3,
      sym_context_definition,
      sym_function_definition,
      sym_expression_definition,
    STATE(246), 7,
      sym_using_definition,
      sym_include_definition,
      sym_valueset_definition,
      sym_codesystem_definition,
      sym_code_definition,
      sym_concept_definition,
      sym_parameter_definition,
  [8009] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_using,
    ACTIONS(11), 1,
      anon_sym_include,
    ACTIONS(13), 1,
      anon_sym_valueset,
    ACTIONS(15), 1,
      anon_sym_codesystem,
    ACTIONS(17), 1,
      anon_sym_code,
    ACTIONS(19), 1,
      anon_sym_concept,
    ACTIONS(21), 1,
      anon_sym_parameter,
    ACTIONS(25), 1,
      anon_sym_context,
    ACTIONS(27), 1,
      anon_sym_define,
    ACTIONS(711), 1,
      ts_builtin_sym_end,
    STATE(295), 1,
      sym_access_modifier,
    ACTIONS(23), 2,
      anon_sym_public,
      anon_sym_private,
    STATE(198), 2,
      sym_definition,
      aux_sym_cql_library_repeat1,
    STATE(274), 2,
      sym_statement,
      aux_sym_cql_library_repeat2,
    STATE(338), 3,
      sym_context_definition,
      sym_function_definition,
      sym_expression_definition,
    STATE(246), 7,
      sym_using_definition,
      sym_include_definition,
      sym_valueset_definition,
      sym_codesystem_definition,
      sym_code_definition,
      sym_concept_definition,
      sym_parameter_definition,
  [8072] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_using,
    ACTIONS(11), 1,
      anon_sym_include,
    ACTIONS(13), 1,
      anon_sym_valueset,
    ACTIONS(15), 1,
      anon_sym_codesystem,
    ACTIONS(17), 1,
      anon_sym_code,
    ACTIONS(19), 1,
      anon_sym_concept,
    ACTIONS(21), 1,
      anon_sym_parameter,
    ACTIONS(25), 1,
      anon_sym_context,
    ACTIONS(27), 1,
      anon_sym_define,
    ACTIONS(711), 1,
      ts_builtin_sym_end,
    STATE(295), 1,
      sym_access_modifier,
    ACTIONS(23), 2,
      anon_sym_public,
      anon_sym_private,
    STATE(204), 2,
      sym_definition,
      aux_sym_cql_library_repeat1,
    STATE(274), 2,
      sym_statement,
      aux_sym_cql_library_repeat2,
    STATE(338), 3,
      sym_context_definition,
      sym_function_definition,
      sym_expression_definition,
    STATE(246), 7,
      sym_using_definition,
      sym_include_definition,
      sym_valueset_definition,
      sym_codesystem_definition,
      sym_code_definition,
      sym_concept_definition,
      sym_parameter_definition,
  [8135] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_SQUOTE,
    STATE(291), 1,
      sym_unit,
    STATE(292), 3,
      sym_date_time_precision,
      sym_plural_date_time_precision,
      sym_string,
    ACTIONS(717), 5,
      anon_sym_ormore,
      anon_sym_orless,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(713), 8,
      anon_sym_year,
      anon_sym_month,
      anon_sym_week,
      anon_sym_day,
      anon_sym_hour,
      anon_sym_minute,
      anon_sym_second,
      anon_sym_millisecond,
    ACTIONS(715), 8,
      anon_sym_years,
      anon_sym_months,
      anon_sym_weeks,
      anon_sym_days,
      anon_sym_hours,
      anon_sym_minutes,
      anon_sym_seconds,
      anon_sym_milliseconds,
  [8177] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_SQUOTE,
    STATE(130), 1,
      sym_unit,
    STATE(131), 3,
      sym_date_time_precision,
      sym_plural_date_time_precision,
      sym_string,
    ACTIONS(717), 4,
      anon_sym_of,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(47), 8,
      anon_sym_year,
      anon_sym_month,
      anon_sym_week,
      anon_sym_day,
      anon_sym_hour,
      anon_sym_minute,
      anon_sym_second,
      anon_sym_millisecond,
    ACTIONS(183), 8,
      anon_sym_years,
      anon_sym_months,
      anon_sym_weeks,
      anon_sym_days,
      anon_sym_hours,
      anon_sym_minutes,
      anon_sym_seconds,
      anon_sym_milliseconds,
  [8218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_code,
    ACTIONS(583), 21,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_from,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_and,
      anon_sym_of,
      anon_sym_ormore,
      anon_sym_orless,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_version,
  [8248] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 1,
      anon_sym_using,
    ACTIONS(726), 1,
      anon_sym_include,
    ACTIONS(729), 1,
      anon_sym_valueset,
    ACTIONS(732), 1,
      anon_sym_codesystem,
    ACTIONS(735), 1,
      anon_sym_code,
    ACTIONS(738), 1,
      anon_sym_concept,
    ACTIONS(741), 1,
      anon_sym_parameter,
    STATE(295), 1,
      sym_access_modifier,
    ACTIONS(744), 2,
      anon_sym_public,
      anon_sym_private,
    STATE(204), 2,
      sym_definition,
      aux_sym_cql_library_repeat1,
    ACTIONS(721), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
    STATE(246), 7,
      sym_using_definition,
      sym_include_definition,
      sym_valueset_definition,
      sym_codesystem_definition,
      sym_code_definition,
      sym_concept_definition,
      sym_parameter_definition,
  [8298] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_code,
    ACTIONS(247), 21,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_COLON,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_parameter,
      anon_sym_default,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_DOT,
      anon_sym_define,
      anon_sym_LPAREN,
      anon_sym_RBRACK,
      anon_sym_version,
      anon_sym_display,
  [8328] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_code,
    ACTIONS(251), 21,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_COLON,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_parameter,
      anon_sym_default,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_DOT,
      anon_sym_define,
      anon_sym_LPAREN,
      anon_sym_RBRACK,
      anon_sym_version,
      anon_sym_display,
  [8358] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_code,
    ACTIONS(601), 21,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_from,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_and,
      anon_sym_of,
      anon_sym_ormore,
      anon_sym_orless,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
      anon_sym_version,
  [8388] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_and,
    ACTIONS(719), 1,
      anon_sym_SQUOTE,
    STATE(130), 1,
      sym_unit,
    STATE(131), 3,
      sym_date_time_precision,
      sym_plural_date_time_precision,
      sym_string,
    ACTIONS(47), 8,
      anon_sym_year,
      anon_sym_month,
      anon_sym_week,
      anon_sym_day,
      anon_sym_hour,
      anon_sym_minute,
      anon_sym_second,
      anon_sym_millisecond,
    ACTIONS(183), 8,
      anon_sym_years,
      anon_sym_months,
      anon_sym_weeks,
      anon_sym_days,
      anon_sym_hours,
      anon_sym_minutes,
      anon_sym_seconds,
      anon_sym_milliseconds,
  [8426] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_code,
    ACTIONS(255), 21,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_COLON,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_parameter,
      anon_sym_default,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_DOT,
      anon_sym_define,
      anon_sym_LPAREN,
      anon_sym_RBRACK,
      anon_sym_version,
      anon_sym_display,
  [8456] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_code,
    ACTIONS(527), 15,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_COLON,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_default,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_DOT,
      anon_sym_define,
      anon_sym_RBRACK,
  [8480] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      anon_sym_code,
    ACTIONS(751), 1,
      anon_sym_DOT,
    ACTIONS(747), 14,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_display,
  [8506] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      anon_sym_code,
    ACTIONS(757), 1,
      anon_sym_DOT,
    ACTIONS(753), 14,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_COLON,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_version,
  [8532] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_code,
    ACTIONS(531), 1,
      anon_sym_DOT,
    ACTIONS(527), 14,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_COLON,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_default,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RBRACK,
  [8558] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 1,
      anon_sym_DOT,
    ACTIONS(761), 1,
      anon_sym_code,
    ACTIONS(759), 14,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_COLON,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_version,
  [8584] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_code,
    ACTIONS(33), 15,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_COLON,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_default,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_DOT,
      anon_sym_define,
      anon_sym_RBRACK,
  [8608] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_onor,
    ACTIONS(313), 1,
      sym_number,
    ACTIONS(763), 1,
      anon_sym_properly,
    ACTIONS(765), 1,
      anon_sym_same,
    ACTIONS(767), 1,
      anon_sym_within,
    STATE(58), 1,
      sym_temporal_relationship,
    STATE(277), 1,
      sym_quantity,
    STATE(309), 1,
      sym_quantity_offset,
    STATE(377), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(107), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(117), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(297), 2,
      anon_sym_before,
      anon_sym_after,
  [8651] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_code,
    ACTIONS(609), 14,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_COLON,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_default,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RBRACK,
  [8674] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_called,
    ACTIONS(773), 1,
      anon_sym_code,
    ACTIONS(775), 1,
      anon_sym_version,
    STATE(242), 1,
      sym_version_specifier,
    ACTIONS(769), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [8703] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 1,
      anon_sym_code,
    ACTIONS(777), 14,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_display,
  [8726] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_code,
    ACTIONS(613), 14,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_COLON,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_default,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RBRACK,
  [8749] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(775), 1,
      anon_sym_version,
    ACTIONS(783), 1,
      anon_sym_called,
    ACTIONS(785), 1,
      anon_sym_code,
    STATE(236), 1,
      sym_version_specifier,
    ACTIONS(781), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [8778] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_code,
    ACTIONS(575), 14,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_COLON,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_default,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RBRACK,
  [8801] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      anon_sym_code,
    ACTIONS(637), 14,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_COLON,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_default,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RBRACK,
  [8824] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      anon_sym_code,
    ACTIONS(637), 14,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_COLON,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_default,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_RBRACK,
  [8847] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(775), 1,
      anon_sym_version,
    ACTIONS(789), 1,
      anon_sym_code,
    STATE(249), 1,
      sym_version_specifier,
    ACTIONS(787), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [8873] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      anon_sym_code,
    ACTIONS(795), 1,
      anon_sym_display,
    STATE(247), 1,
      sym_display_clause,
    ACTIONS(791), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [8899] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 1,
      anon_sym_display,
    ACTIONS(799), 1,
      anon_sym_code,
    STATE(245), 1,
      sym_display_clause,
    ACTIONS(797), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [8925] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 1,
      anon_sym_display,
    ACTIONS(803), 1,
      anon_sym_code,
    STATE(255), 1,
      sym_display_clause,
    ACTIONS(801), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [8951] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 1,
      anon_sym_display,
    ACTIONS(807), 1,
      anon_sym_code,
    STATE(253), 1,
      sym_display_clause,
    ACTIONS(805), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [8977] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(775), 1,
      anon_sym_version,
    ACTIONS(811), 1,
      anon_sym_code,
    STATE(243), 1,
      sym_version_specifier,
    ACTIONS(809), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9003] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 1,
      anon_sym_display,
    ACTIONS(815), 1,
      anon_sym_code,
    STATE(254), 1,
      sym_display_clause,
    ACTIONS(813), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9029] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(775), 1,
      anon_sym_version,
    ACTIONS(819), 1,
      anon_sym_code,
    STATE(252), 1,
      sym_version_specifier,
    ACTIONS(817), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9055] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(775), 1,
      anon_sym_version,
    ACTIONS(823), 1,
      anon_sym_code,
    STATE(256), 1,
      sym_version_specifier,
    ACTIONS(821), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9081] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(775), 1,
      anon_sym_version,
    ACTIONS(827), 1,
      anon_sym_code,
    STATE(251), 1,
      sym_version_specifier,
    ACTIONS(825), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9107] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 1,
      anon_sym_as,
    STATE(66), 1,
      sym_relative_qualifier,
    STATE(297), 1,
      sym_date_time_precision,
    ACTIONS(833), 2,
      anon_sym_orbefore,
      anon_sym_orafter,
    ACTIONS(831), 8,
      anon_sym_year,
      anon_sym_month,
      anon_sym_week,
      anon_sym_day,
      anon_sym_hour,
      anon_sym_minute,
      anon_sym_second,
      anon_sym_millisecond,
  [9134] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_called,
    ACTIONS(839), 1,
      anon_sym_code,
    ACTIONS(835), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9157] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_code,
    ACTIONS(841), 12,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9178] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_code,
    ACTIONS(845), 1,
      anon_sym_default,
    ACTIONS(482), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9201] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      anon_sym_code,
    ACTIONS(849), 1,
      anon_sym_default,
    ACTIONS(219), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9224] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_code,
    ACTIONS(571), 12,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_default,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9245] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      anon_sym_as,
    STATE(69), 1,
      sym_relative_qualifier,
    STATE(300), 1,
      sym_date_time_precision,
    ACTIONS(833), 2,
      anon_sym_orbefore,
      anon_sym_orafter,
    ACTIONS(831), 8,
      anon_sym_year,
      anon_sym_month,
      anon_sym_week,
      anon_sym_day,
      anon_sym_hour,
      anon_sym_minute,
      anon_sym_second,
      anon_sym_millisecond,
  [9272] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      anon_sym_called,
    ACTIONS(857), 1,
      anon_sym_code,
    ACTIONS(853), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9295] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(861), 1,
      anon_sym_code,
    ACTIONS(859), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9315] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_code,
    ACTIONS(863), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9335] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      anon_sym_code,
    ACTIONS(867), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9355] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      anon_sym_code,
    ACTIONS(871), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9375] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_code,
    ACTIONS(813), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9395] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      anon_sym_code,
    ACTIONS(875), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9415] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      anon_sym_code,
    ACTIONS(879), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9435] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(885), 1,
      anon_sym_code,
    ACTIONS(883), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9455] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 1,
      anon_sym_code,
    ACTIONS(887), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9475] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 1,
      anon_sym_code,
    ACTIONS(891), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9495] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_code,
    ACTIONS(895), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9515] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(901), 1,
      anon_sym_code,
    ACTIONS(899), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9535] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      anon_sym_code,
    ACTIONS(791), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9555] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 1,
      anon_sym_code,
    ACTIONS(903), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9575] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(909), 1,
      anon_sym_code,
    ACTIONS(907), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9595] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 1,
      anon_sym_code,
    ACTIONS(911), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [9615] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_SQUOTE,
    ACTIONS(915), 1,
      aux_sym_literal_token1,
    ACTIONS(917), 1,
      anon_sym_null,
    ACTIONS(919), 1,
      sym_number,
    STATE(141), 1,
      sym_quantity,
    STATE(146), 1,
      sym_string,
    STATE(148), 1,
      sym_term,
    STATE(157), 1,
      sym_literal,
    STATE(388), 1,
      sym_expression_term,
  [9646] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(404), 1,
      sym_plural_date_time_precision,
    ACTIONS(183), 8,
      anon_sym_years,
      anon_sym_months,
      anon_sym_weeks,
      anon_sym_days,
      anon_sym_hours,
      anon_sym_minutes,
      anon_sym_seconds,
      anon_sym_milliseconds,
  [9663] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      sym_number,
    ACTIONS(185), 1,
      anon_sym_SQUOTE,
    ACTIONS(915), 1,
      aux_sym_literal_token1,
    ACTIONS(917), 1,
      anon_sym_null,
    STATE(141), 1,
      sym_quantity,
    STATE(143), 1,
      sym_expression_term,
    STATE(146), 1,
      sym_string,
    STATE(148), 1,
      sym_term,
    STATE(157), 1,
      sym_literal,
  [9694] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_SQUOTE,
    ACTIONS(915), 1,
      aux_sym_literal_token1,
    ACTIONS(917), 1,
      anon_sym_null,
    ACTIONS(919), 1,
      sym_number,
    STATE(141), 1,
      sym_quantity,
    STATE(146), 1,
      sym_string,
    STATE(148), 1,
      sym_term,
    STATE(157), 1,
      sym_literal,
    STATE(390), 1,
      sym_expression_term,
  [9725] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_SQUOTE,
    ACTIONS(915), 1,
      aux_sym_literal_token1,
    ACTIONS(917), 1,
      anon_sym_null,
    ACTIONS(919), 1,
      sym_number,
    STATE(141), 1,
      sym_quantity,
    STATE(146), 1,
      sym_string,
    STATE(148), 1,
      sym_term,
    STATE(157), 1,
      sym_literal,
    STATE(400), 1,
      sym_expression_term,
  [9756] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      sym_number,
    ACTIONS(185), 1,
      anon_sym_SQUOTE,
    ACTIONS(915), 1,
      aux_sym_literal_token1,
    ACTIONS(917), 1,
      anon_sym_null,
    STATE(135), 1,
      sym_expression_term,
    STATE(141), 1,
      sym_quantity,
    STATE(146), 1,
      sym_string,
    STATE(148), 1,
      sym_term,
    STATE(157), 1,
      sym_literal,
  [9787] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_SQUOTE,
    ACTIONS(915), 1,
      aux_sym_literal_token1,
    ACTIONS(917), 1,
      anon_sym_null,
    ACTIONS(919), 1,
      sym_number,
    STATE(141), 1,
      sym_quantity,
    STATE(146), 1,
      sym_string,
    STATE(148), 1,
      sym_term,
    STATE(157), 1,
      sym_literal,
    STATE(392), 1,
      sym_expression_term,
  [9818] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_SQUOTE,
    ACTIONS(915), 1,
      aux_sym_literal_token1,
    ACTIONS(917), 1,
      anon_sym_null,
    ACTIONS(919), 1,
      sym_number,
    STATE(141), 1,
      sym_quantity,
    STATE(146), 1,
      sym_string,
    STATE(148), 1,
      sym_term,
    STATE(157), 1,
      sym_literal,
    STATE(397), 1,
      sym_expression_term,
  [9849] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      sym_number,
    ACTIONS(185), 1,
      anon_sym_SQUOTE,
    ACTIONS(915), 1,
      aux_sym_literal_token1,
    ACTIONS(917), 1,
      anon_sym_null,
    STATE(141), 1,
      sym_quantity,
    STATE(146), 1,
      sym_string,
    STATE(148), 1,
      sym_term,
    STATE(151), 1,
      sym_expression_term,
    STATE(157), 1,
      sym_literal,
  [9880] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      sym_number,
    ACTIONS(185), 1,
      anon_sym_SQUOTE,
    ACTIONS(915), 1,
      aux_sym_literal_token1,
    ACTIONS(917), 1,
      anon_sym_null,
    STATE(141), 1,
      sym_quantity,
    STATE(146), 1,
      sym_string,
    STATE(148), 1,
      sym_term,
    STATE(155), 1,
      sym_expression_term,
    STATE(157), 1,
      sym_literal,
  [9911] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      sym_number,
    ACTIONS(185), 1,
      anon_sym_SQUOTE,
    ACTIONS(915), 1,
      aux_sym_literal_token1,
    ACTIONS(917), 1,
      anon_sym_null,
    STATE(141), 1,
      sym_quantity,
    STATE(146), 1,
      sym_string,
    STATE(148), 1,
      sym_term,
    STATE(149), 1,
      sym_expression_term,
    STATE(157), 1,
      sym_literal,
  [9942] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(401), 1,
      sym_plural_date_time_precision,
    ACTIONS(183), 8,
      anon_sym_years,
      anon_sym_months,
      anon_sym_weeks,
      anon_sym_days,
      anon_sym_hours,
      anon_sym_minutes,
      anon_sym_seconds,
      anon_sym_milliseconds,
  [9959] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_default_identifier,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(923), 1,
      anon_sym_function,
    STATE(205), 1,
      sym_quoted_identifier,
    STATE(290), 1,
      sym_access_modifier,
    STATE(385), 1,
      sym_identifier,
    ACTIONS(921), 2,
      anon_sym_public,
      anon_sym_private,
  [9985] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_context,
    ACTIONS(27), 1,
      anon_sym_define,
    ACTIONS(925), 1,
      ts_builtin_sym_end,
    STATE(273), 2,
      sym_statement,
      aux_sym_cql_library_repeat2,
    STATE(338), 3,
      sym_context_definition,
      sym_function_definition,
      sym_expression_definition,
  [10007] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(927), 1,
      ts_builtin_sym_end,
    ACTIONS(929), 1,
      anon_sym_context,
    ACTIONS(932), 1,
      anon_sym_define,
    STATE(273), 2,
      sym_statement,
      aux_sym_cql_library_repeat2,
    STATE(338), 3,
      sym_context_definition,
      sym_function_definition,
      sym_expression_definition,
  [10029] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_context,
    ACTIONS(27), 1,
      anon_sym_define,
    ACTIONS(709), 1,
      ts_builtin_sym_end,
    STATE(273), 2,
      sym_statement,
      aux_sym_cql_library_repeat2,
    STATE(338), 3,
      sym_context_definition,
      sym_function_definition,
      sym_expression_definition,
  [10051] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 8,
      anon_sym_as,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_ormore,
      anon_sym_orless,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
  [10065] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_context,
    ACTIONS(27), 1,
      anon_sym_define,
    ACTIONS(711), 1,
      ts_builtin_sym_end,
    STATE(273), 2,
      sym_statement,
      aux_sym_cql_library_repeat2,
    STATE(338), 3,
      sym_context_definition,
      sym_function_definition,
      sym_expression_definition,
  [10087] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(342), 1,
      sym_offset_relative_qualifier,
    ACTIONS(935), 2,
      anon_sym_ormore,
      anon_sym_orless,
    ACTIONS(937), 3,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
  [10103] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(939), 1,
      sym_default_identifier,
    STATE(205), 1,
      sym_quoted_identifier,
    STATE(214), 1,
      sym_identifier,
    STATE(221), 1,
      sym_qualified_identifier,
    STATE(287), 1,
      aux_sym_named_type_specifier_repeat1,
  [10125] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(939), 1,
      sym_default_identifier,
    STATE(205), 1,
      sym_quoted_identifier,
    STATE(214), 1,
      sym_identifier,
    STATE(218), 1,
      sym_qualified_identifier,
    STATE(287), 1,
      aux_sym_named_type_specifier_repeat1,
  [10147] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(939), 1,
      sym_default_identifier,
    STATE(205), 1,
      sym_quoted_identifier,
    STATE(214), 1,
      sym_identifier,
    STATE(287), 1,
      aux_sym_named_type_specifier_repeat1,
    STATE(381), 1,
      sym_qualified_identifier,
  [10169] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(939), 1,
      sym_default_identifier,
    STATE(205), 1,
      sym_quoted_identifier,
    STATE(214), 1,
      sym_identifier,
    STATE(233), 1,
      sym_qualified_identifier,
    STATE(287), 1,
      aux_sym_named_type_specifier_repeat1,
  [10191] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(939), 1,
      sym_default_identifier,
    STATE(205), 1,
      sym_quoted_identifier,
    STATE(214), 1,
      sym_identifier,
    STATE(287), 1,
      aux_sym_named_type_specifier_repeat1,
    STATE(406), 1,
      sym_qualified_identifier,
  [10213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 5,
      anon_sym_ormore,
      anon_sym_orless,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
  [10224] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 1,
      anon_sym_code,
    ACTIONS(941), 4,
      anon_sym_valueset,
      anon_sym_codesystem,
      anon_sym_concept,
      anon_sym_parameter,
  [10237] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(939), 1,
      sym_default_identifier,
    STATE(205), 1,
      sym_quoted_identifier,
    STATE(211), 1,
      sym_identifier,
    STATE(229), 1,
      sym_code_or_codesystem_identifier,
  [10256] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      anon_sym_within,
    ACTIONS(945), 1,
      anon_sym_between,
    ACTIONS(947), 1,
      anon_sym_includes,
    ACTIONS(117), 2,
      anon_sym_during,
      anon_sym_includedin,
  [10273] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(939), 1,
      sym_default_identifier,
    STATE(205), 1,
      sym_quoted_identifier,
    STATE(212), 1,
      sym_identifier,
    STATE(289), 1,
      aux_sym_named_type_specifier_repeat1,
  [10292] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(939), 1,
      sym_default_identifier,
    STATE(205), 1,
      sym_quoted_identifier,
    STATE(211), 1,
      sym_identifier,
    STATE(346), 1,
      sym_code_or_codesystem_identifier,
  [10311] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_DQUOTE,
    ACTIONS(949), 1,
      sym_default_identifier,
    STATE(205), 1,
      sym_quoted_identifier,
    STATE(289), 1,
      aux_sym_named_type_specifier_repeat1,
    STATE(413), 1,
      sym_identifier,
  [10330] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_default_identifier,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(952), 1,
      anon_sym_function,
    STATE(205), 1,
      sym_quoted_identifier,
    STATE(405), 1,
      sym_identifier,
  [10349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 5,
      anon_sym_ormore,
      anon_sym_orless,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
  [10360] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 5,
      anon_sym_ormore,
      anon_sym_orless,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
  [10371] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(939), 1,
      sym_default_identifier,
    STATE(205), 1,
      sym_quoted_identifier,
    STATE(211), 1,
      sym_identifier,
    STATE(341), 1,
      sym_code_or_codesystem_identifier,
  [10390] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(939), 1,
      sym_default_identifier,
    STATE(205), 1,
      sym_quoted_identifier,
    STATE(211), 1,
      sym_identifier,
    STATE(227), 1,
      sym_code_or_codesystem_identifier,
  [10409] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(954), 1,
      anon_sym_valueset,
    ACTIONS(956), 1,
      anon_sym_codesystem,
    ACTIONS(958), 1,
      anon_sym_code,
    ACTIONS(960), 1,
      anon_sym_concept,
    ACTIONS(962), 1,
      anon_sym_parameter,
  [10428] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(939), 1,
      sym_default_identifier,
    STATE(205), 1,
      sym_quoted_identifier,
    STATE(211), 1,
      sym_identifier,
    STATE(364), 1,
      sym_code_or_codesystem_identifier,
  [10447] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      anon_sym_as,
    STATE(69), 1,
      sym_relative_qualifier,
    ACTIONS(833), 2,
      anon_sym_orbefore,
      anon_sym_orafter,
  [10461] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(939), 1,
      sym_default_identifier,
    STATE(205), 1,
      sym_quoted_identifier,
    STATE(258), 1,
      sym_identifier,
  [10477] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(964), 1,
      sym_default_identifier,
    ACTIONS(966), 1,
      anon_sym_DQUOTE,
    STATE(74), 1,
      sym_identifier,
    STATE(94), 1,
      sym_quoted_identifier,
  [10493] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(968), 1,
      anon_sym_as,
    STATE(61), 1,
      sym_relative_qualifier,
    ACTIONS(833), 2,
      anon_sym_orbefore,
      anon_sym_orafter,
  [10507] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_DQUOTE,
    ACTIONS(970), 1,
      sym_default_identifier,
    STATE(116), 1,
      sym_quoted_identifier,
    STATE(123), 1,
      sym_identifier,
  [10523] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(972), 1,
      anon_sym_DOT,
    ACTIONS(974), 3,
      anon_sym_RBRACK,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [10535] = 4,
    ACTIONS(976), 1,
      anon_sym_DQUOTE,
    ACTIONS(980), 1,
      sym_comment,
    STATE(329), 1,
      aux_sym_quoted_identifier_repeat1,
    ACTIONS(978), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [10549] = 4,
    ACTIONS(980), 1,
      sym_comment,
    ACTIONS(982), 1,
      anon_sym_DQUOTE,
    STATE(334), 1,
      aux_sym_quoted_identifier_repeat1,
    ACTIONS(984), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [10563] = 4,
    ACTIONS(980), 1,
      sym_comment,
    ACTIONS(986), 1,
      anon_sym_DQUOTE,
    STATE(304), 1,
      aux_sym_quoted_identifier_repeat1,
    ACTIONS(988), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [10577] = 4,
    ACTIONS(980), 1,
      sym_comment,
    ACTIONS(990), 1,
      anon_sym_SQUOTE,
    STATE(326), 1,
      aux_sym_string_repeat1,
    ACTIONS(992), 2,
      sym_single_quote_string_fragment,
      sym_escape_sequence,
  [10591] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(939), 1,
      sym_default_identifier,
    STATE(205), 1,
      sym_quoted_identifier,
    STATE(244), 1,
      sym_identifier,
  [10607] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(939), 1,
      sym_default_identifier,
    STATE(205), 1,
      sym_quoted_identifier,
    STATE(317), 1,
      sym_identifier,
  [10623] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_onor,
    STATE(56), 1,
      sym_temporal_relationship,
    ACTIONS(297), 2,
      anon_sym_before,
      anon_sym_after,
  [10637] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(939), 1,
      sym_default_identifier,
    STATE(205), 1,
      sym_quoted_identifier,
    STATE(380), 1,
      sym_identifier,
  [10653] = 4,
    ACTIONS(980), 1,
      sym_comment,
    ACTIONS(994), 1,
      anon_sym_SQUOTE,
    STATE(326), 1,
      aux_sym_string_repeat1,
    ACTIONS(992), 2,
      sym_single_quote_string_fragment,
      sym_escape_sequence,
  [10667] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(964), 1,
      sym_default_identifier,
    ACTIONS(966), 1,
      anon_sym_DQUOTE,
    STATE(75), 1,
      sym_identifier,
    STATE(94), 1,
      sym_quoted_identifier,
  [10683] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(939), 1,
      sym_default_identifier,
    STATE(205), 1,
      sym_quoted_identifier,
    STATE(378), 1,
      sym_identifier,
  [10699] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(939), 1,
      sym_default_identifier,
    STATE(205), 1,
      sym_quoted_identifier,
    STATE(412), 1,
      sym_identifier,
  [10715] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(939), 1,
      sym_default_identifier,
    STATE(205), 1,
      sym_quoted_identifier,
    STATE(411), 1,
      sym_identifier,
  [10731] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(939), 1,
      sym_default_identifier,
    STATE(205), 1,
      sym_quoted_identifier,
    STATE(250), 1,
      sym_identifier,
  [10747] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(998), 1,
      anon_sym_DOT,
    ACTIONS(996), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
  [10759] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(939), 1,
      sym_default_identifier,
    STATE(205), 1,
      sym_quoted_identifier,
    STATE(402), 1,
      sym_identifier,
  [10775] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(939), 1,
      sym_default_identifier,
    STATE(205), 1,
      sym_quoted_identifier,
    STATE(344), 1,
      sym_identifier,
  [10791] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(939), 1,
      sym_default_identifier,
    STATE(205), 1,
      sym_quoted_identifier,
    STATE(420), 1,
      sym_identifier,
  [10807] = 4,
    ACTIONS(980), 1,
      sym_comment,
    ACTIONS(1000), 1,
      anon_sym_DQUOTE,
    STATE(327), 1,
      aux_sym_quoted_identifier_repeat1,
    ACTIONS(1002), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [10821] = 4,
    ACTIONS(980), 1,
      sym_comment,
    ACTIONS(1004), 1,
      anon_sym_SQUOTE,
    STATE(311), 1,
      aux_sym_string_repeat1,
    ACTIONS(1006), 2,
      sym_single_quote_string_fragment,
      sym_escape_sequence,
  [10835] = 4,
    ACTIONS(980), 1,
      sym_comment,
    ACTIONS(1008), 1,
      anon_sym_DQUOTE,
    STATE(334), 1,
      aux_sym_quoted_identifier_repeat1,
    ACTIONS(984), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [10849] = 4,
    ACTIONS(980), 1,
      sym_comment,
    ACTIONS(1010), 1,
      anon_sym_DQUOTE,
    STATE(323), 1,
      aux_sym_quoted_identifier_repeat1,
    ACTIONS(1012), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [10863] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(939), 1,
      sym_default_identifier,
    STATE(205), 1,
      sym_quoted_identifier,
    STATE(219), 1,
      sym_identifier,
  [10879] = 4,
    ACTIONS(980), 1,
      sym_comment,
    ACTIONS(1014), 1,
      anon_sym_SQUOTE,
    STATE(326), 1,
      aux_sym_string_repeat1,
    ACTIONS(1016), 2,
      sym_single_quote_string_fragment,
      sym_escape_sequence,
  [10893] = 4,
    ACTIONS(980), 1,
      sym_comment,
    ACTIONS(1019), 1,
      anon_sym_DQUOTE,
    STATE(334), 1,
      aux_sym_quoted_identifier_repeat1,
    ACTIONS(984), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [10907] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(939), 1,
      sym_default_identifier,
    STATE(205), 1,
      sym_quoted_identifier,
    STATE(379), 1,
      sym_identifier,
  [10923] = 4,
    ACTIONS(980), 1,
      sym_comment,
    ACTIONS(1021), 1,
      anon_sym_DQUOTE,
    STATE(334), 1,
      aux_sym_quoted_identifier_repeat1,
    ACTIONS(984), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [10937] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(939), 1,
      sym_default_identifier,
    STATE(205), 1,
      sym_quoted_identifier,
    STATE(257), 1,
      sym_identifier,
  [10953] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_onor,
    STATE(58), 1,
      sym_temporal_relationship,
    ACTIONS(297), 2,
      anon_sym_before,
      anon_sym_after,
  [10967] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(939), 1,
      sym_default_identifier,
    STATE(205), 1,
      sym_quoted_identifier,
    STATE(383), 1,
      sym_identifier,
  [10983] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(972), 1,
      anon_sym_DOT,
    ACTIONS(1023), 3,
      anon_sym_RBRACK,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [10995] = 4,
    ACTIONS(980), 1,
      sym_comment,
    ACTIONS(1025), 1,
      anon_sym_DQUOTE,
    STATE(334), 1,
      aux_sym_quoted_identifier_repeat1,
    ACTIONS(1027), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [11009] = 4,
    ACTIONS(980), 1,
      sym_comment,
    ACTIONS(1030), 1,
      anon_sym_SQUOTE,
    STATE(306), 1,
      aux_sym_string_repeat1,
    ACTIONS(1032), 2,
      sym_single_quote_string_fragment,
      sym_escape_sequence,
  [11023] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(941), 1,
      anon_sym_DQUOTE,
    ACTIONS(943), 2,
      anon_sym_function,
      sym_default_identifier,
  [11034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 3,
      anon_sym_DOT,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [11043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1034), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
  [11052] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 3,
      anon_sym_DOT,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [11061] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1036), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
  [11070] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1038), 1,
      anon_sym_COMMA,
    ACTIONS(1040), 1,
      anon_sym_RBRACE,
    STATE(345), 1,
      aux_sym_concept_definition_repeat1,
  [11083] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1042), 3,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
  [11092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1044), 3,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
  [11101] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1046), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
  [11110] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1038), 1,
      anon_sym_COMMA,
    ACTIONS(1048), 1,
      anon_sym_RBRACE,
    STATE(351), 1,
      aux_sym_concept_definition_repeat1,
  [11123] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1038), 1,
      anon_sym_COMMA,
    ACTIONS(1050), 1,
      anon_sym_RBRACE,
    STATE(348), 1,
      aux_sym_concept_definition_repeat1,
  [11136] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1052), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
  [11145] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1038), 1,
      anon_sym_COMMA,
    ACTIONS(1040), 1,
      anon_sym_RBRACE,
    STATE(351), 1,
      aux_sym_concept_definition_repeat1,
  [11158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 3,
      anon_sym_DOT,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [11167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 3,
      anon_sym_DOT,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [11176] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1054), 1,
      anon_sym_COMMA,
    ACTIONS(1057), 1,
      anon_sym_RBRACE,
    STATE(351), 1,
      aux_sym_concept_definition_repeat1,
  [11189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1059), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
  [11198] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1063), 1,
      anon_sym_within,
    ACTIONS(1061), 2,
      anon_sym_during,
      anon_sym_includedin,
  [11209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 3,
      anon_sym_DOT,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [11218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1065), 1,
      anon_sym_COLON,
    ACTIONS(1067), 1,
      anon_sym_RBRACK,
  [11228] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_SQUOTE,
    STATE(232), 1,
      sym_string,
  [11238] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1069), 1,
      sym_number,
    STATE(391), 1,
      sym_quantity,
  [11248] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_SQUOTE,
    STATE(248), 1,
      sym_string,
  [11258] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1069), 1,
      sym_number,
    STATE(387), 1,
      sym_quantity,
  [11268] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_SQUOTE,
    STATE(415), 1,
      sym_string,
  [11278] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1071), 1,
      anon_sym_COLON,
    ACTIONS(1073), 1,
      anon_sym_RBRACK,
  [11288] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 1,
      anon_sym_COLON,
    ACTIONS(1077), 1,
      anon_sym_RBRACK,
  [11298] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_SQUOTE,
    STATE(230), 1,
      sym_string,
  [11308] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1057), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [11316] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_SQUOTE,
    STATE(408), 1,
      sym_string,
  [11326] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1079), 2,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [11334] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_SQUOTE,
    STATE(234), 1,
      sym_string,
  [11344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 2,
      anon_sym_before,
      anon_sym_after,
  [11352] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_SQUOTE,
    STATE(237), 1,
      sym_string,
  [11362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 2,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [11370] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1069), 1,
      sym_number,
    STATE(398), 1,
      sym_quantity,
  [11380] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1081), 1,
      anon_sym_COLON,
    ACTIONS(1083), 1,
      anon_sym_RBRACK,
  [11390] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_SQUOTE,
    STATE(225), 1,
      sym_string,
  [11400] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 2,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [11408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 2,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [11416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 2,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [11424] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1069), 1,
      sym_number,
    STATE(342), 1,
      sym_quantity,
  [11434] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1085), 1,
      anon_sym_COLON,
  [11441] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1087), 1,
      anon_sym_COLON,
  [11448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1089), 1,
      anon_sym_COLON,
  [11455] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1091), 1,
      anon_sym_COLON,
  [11462] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_DOT,
  [11469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1093), 1,
      anon_sym_COLON,
  [11476] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1095), 1,
      anon_sym_RBRACK,
  [11483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1097), 1,
      anon_sym_COLON,
  [11490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(972), 1,
      anon_sym_DOT,
  [11497] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1099), 1,
      anon_sym_of,
  [11504] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1101), 1,
      anon_sym_and,
  [11511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1103), 1,
      ts_builtin_sym_end,
  [11518] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1105), 1,
      anon_sym_and,
  [11525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(968), 1,
      anon_sym_of,
  [11532] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1107), 1,
      anon_sym_and,
  [11539] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1109), 1,
      anon_sym_RBRACK,
  [11546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1111), 1,
      anon_sym_RBRACK,
  [11553] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1113), 1,
      anon_sym_COLON,
  [11560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1115), 1,
      anon_sym_between,
  [11567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1117), 1,
      anon_sym_and,
  [11574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      anon_sym_of,
  [11581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1119), 1,
      anon_sym_LBRACE,
  [11588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1121), 1,
      anon_sym_and,
  [11595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1123), 1,
      anon_sym_between,
  [11602] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1125), 1,
      anon_sym_LPAREN,
  [11609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1127), 1,
      anon_sym_RBRACK,
  [11616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1129), 1,
      anon_sym_between,
  [11623] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1131), 1,
      anon_sym_COLON,
  [11630] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1133), 1,
      anon_sym_COLON,
  [11637] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1135), 1,
      anon_sym_RBRACK,
  [11644] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1137), 1,
      anon_sym_from,
  [11651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1139), 1,
      anon_sym_RPAREN,
  [11658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1141), 1,
      anon_sym_COLON,
  [11665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1143), 1,
      anon_sym_COLON,
  [11672] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1145), 1,
      anon_sym_COLON,
  [11679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 1,
      anon_sym_DOT,
  [11686] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1147), 1,
      sym_number,
  [11693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1149), 1,
      anon_sym_from,
  [11700] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1151), 1,
      anon_sym_in,
  [11707] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1153), 1,
      anon_sym_of,
  [11714] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1155), 1,
      anon_sym_in,
  [11721] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1157), 1,
      anon_sym_LBRACE,
  [11728] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1159), 1,
      anon_sym_LPAREN,
  [11735] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1161), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(84)] = 0,
  [SMALL_STATE(85)] = 91,
  [SMALL_STATE(86)] = 182,
  [SMALL_STATE(87)] = 267,
  [SMALL_STATE(88)] = 352,
  [SMALL_STATE(89)] = 437,
  [SMALL_STATE(90)] = 522,
  [SMALL_STATE(91)] = 601,
  [SMALL_STATE(92)] = 680,
  [SMALL_STATE(93)] = 757,
  [SMALL_STATE(94)] = 836,
  [SMALL_STATE(95)] = 901,
  [SMALL_STATE(96)] = 966,
  [SMALL_STATE(97)] = 1031,
  [SMALL_STATE(98)] = 1095,
  [SMALL_STATE(99)] = 1157,
  [SMALL_STATE(100)] = 1228,
  [SMALL_STATE(101)] = 1343,
  [SMALL_STATE(102)] = 1428,
  [SMALL_STATE(103)] = 1543,
  [SMALL_STATE(104)] = 1658,
  [SMALL_STATE(105)] = 1729,
  [SMALL_STATE(106)] = 1800,
  [SMALL_STATE(107)] = 1915,
  [SMALL_STATE(108)] = 1986,
  [SMALL_STATE(109)] = 2057,
  [SMALL_STATE(110)] = 2172,
  [SMALL_STATE(111)] = 2243,
  [SMALL_STATE(112)] = 2314,
  [SMALL_STATE(113)] = 2429,
  [SMALL_STATE(114)] = 2500,
  [SMALL_STATE(115)] = 2564,
  [SMALL_STATE(116)] = 2628,
  [SMALL_STATE(117)] = 2688,
  [SMALL_STATE(118)] = 2752,
  [SMALL_STATE(119)] = 2812,
  [SMALL_STATE(120)] = 2872,
  [SMALL_STATE(121)] = 2936,
  [SMALL_STATE(122)] = 3000,
  [SMALL_STATE(123)] = 3059,
  [SMALL_STATE(124)] = 3118,
  [SMALL_STATE(125)] = 3178,
  [SMALL_STATE(126)] = 3240,
  [SMALL_STATE(127)] = 3302,
  [SMALL_STATE(128)] = 3360,
  [SMALL_STATE(129)] = 3418,
  [SMALL_STATE(130)] = 3476,
  [SMALL_STATE(131)] = 3534,
  [SMALL_STATE(132)] = 3592,
  [SMALL_STATE(133)] = 3650,
  [SMALL_STATE(134)] = 3707,
  [SMALL_STATE(135)] = 3764,
  [SMALL_STATE(136)] = 3821,
  [SMALL_STATE(137)] = 3878,
  [SMALL_STATE(138)] = 3935,
  [SMALL_STATE(139)] = 3992,
  [SMALL_STATE(140)] = 4049,
  [SMALL_STATE(141)] = 4106,
  [SMALL_STATE(142)] = 4163,
  [SMALL_STATE(143)] = 4220,
  [SMALL_STATE(144)] = 4277,
  [SMALL_STATE(145)] = 4334,
  [SMALL_STATE(146)] = 4391,
  [SMALL_STATE(147)] = 4448,
  [SMALL_STATE(148)] = 4505,
  [SMALL_STATE(149)] = 4562,
  [SMALL_STATE(150)] = 4619,
  [SMALL_STATE(151)] = 4676,
  [SMALL_STATE(152)] = 4733,
  [SMALL_STATE(153)] = 4790,
  [SMALL_STATE(154)] = 4847,
  [SMALL_STATE(155)] = 4904,
  [SMALL_STATE(156)] = 4961,
  [SMALL_STATE(157)] = 5018,
  [SMALL_STATE(158)] = 5075,
  [SMALL_STATE(159)] = 5132,
  [SMALL_STATE(160)] = 5189,
  [SMALL_STATE(161)] = 5293,
  [SMALL_STATE(162)] = 5397,
  [SMALL_STATE(163)] = 5501,
  [SMALL_STATE(164)] = 5605,
  [SMALL_STATE(165)] = 5667,
  [SMALL_STATE(166)] = 5729,
  [SMALL_STATE(167)] = 5791,
  [SMALL_STATE(168)] = 5853,
  [SMALL_STATE(169)] = 5957,
  [SMALL_STATE(170)] = 6019,
  [SMALL_STATE(171)] = 6123,
  [SMALL_STATE(172)] = 6185,
  [SMALL_STATE(173)] = 6247,
  [SMALL_STATE(174)] = 6309,
  [SMALL_STATE(175)] = 6413,
  [SMALL_STATE(176)] = 6487,
  [SMALL_STATE(177)] = 6589,
  [SMALL_STATE(178)] = 6649,
  [SMALL_STATE(179)] = 6709,
  [SMALL_STATE(180)] = 6811,
  [SMALL_STATE(181)] = 6871,
  [SMALL_STATE(182)] = 6931,
  [SMALL_STATE(183)] = 7033,
  [SMALL_STATE(184)] = 7093,
  [SMALL_STATE(185)] = 7165,
  [SMALL_STATE(186)] = 7267,
  [SMALL_STATE(187)] = 7327,
  [SMALL_STATE(188)] = 7387,
  [SMALL_STATE(189)] = 7447,
  [SMALL_STATE(190)] = 7500,
  [SMALL_STATE(191)] = 7549,
  [SMALL_STATE(192)] = 7598,
  [SMALL_STATE(193)] = 7697,
  [SMALL_STATE(194)] = 7750,
  [SMALL_STATE(195)] = 7797,
  [SMALL_STATE(196)] = 7844,
  [SMALL_STATE(197)] = 7895,
  [SMALL_STATE(198)] = 7946,
  [SMALL_STATE(199)] = 8009,
  [SMALL_STATE(200)] = 8072,
  [SMALL_STATE(201)] = 8135,
  [SMALL_STATE(202)] = 8177,
  [SMALL_STATE(203)] = 8218,
  [SMALL_STATE(204)] = 8248,
  [SMALL_STATE(205)] = 8298,
  [SMALL_STATE(206)] = 8328,
  [SMALL_STATE(207)] = 8358,
  [SMALL_STATE(208)] = 8388,
  [SMALL_STATE(209)] = 8426,
  [SMALL_STATE(210)] = 8456,
  [SMALL_STATE(211)] = 8480,
  [SMALL_STATE(212)] = 8506,
  [SMALL_STATE(213)] = 8532,
  [SMALL_STATE(214)] = 8558,
  [SMALL_STATE(215)] = 8584,
  [SMALL_STATE(216)] = 8608,
  [SMALL_STATE(217)] = 8651,
  [SMALL_STATE(218)] = 8674,
  [SMALL_STATE(219)] = 8703,
  [SMALL_STATE(220)] = 8726,
  [SMALL_STATE(221)] = 8749,
  [SMALL_STATE(222)] = 8778,
  [SMALL_STATE(223)] = 8801,
  [SMALL_STATE(224)] = 8824,
  [SMALL_STATE(225)] = 8847,
  [SMALL_STATE(226)] = 8873,
  [SMALL_STATE(227)] = 8899,
  [SMALL_STATE(228)] = 8925,
  [SMALL_STATE(229)] = 8951,
  [SMALL_STATE(230)] = 8977,
  [SMALL_STATE(231)] = 9003,
  [SMALL_STATE(232)] = 9029,
  [SMALL_STATE(233)] = 9055,
  [SMALL_STATE(234)] = 9081,
  [SMALL_STATE(235)] = 9107,
  [SMALL_STATE(236)] = 9134,
  [SMALL_STATE(237)] = 9157,
  [SMALL_STATE(238)] = 9178,
  [SMALL_STATE(239)] = 9201,
  [SMALL_STATE(240)] = 9224,
  [SMALL_STATE(241)] = 9245,
  [SMALL_STATE(242)] = 9272,
  [SMALL_STATE(243)] = 9295,
  [SMALL_STATE(244)] = 9315,
  [SMALL_STATE(245)] = 9335,
  [SMALL_STATE(246)] = 9355,
  [SMALL_STATE(247)] = 9375,
  [SMALL_STATE(248)] = 9395,
  [SMALL_STATE(249)] = 9415,
  [SMALL_STATE(250)] = 9435,
  [SMALL_STATE(251)] = 9455,
  [SMALL_STATE(252)] = 9475,
  [SMALL_STATE(253)] = 9495,
  [SMALL_STATE(254)] = 9515,
  [SMALL_STATE(255)] = 9535,
  [SMALL_STATE(256)] = 9555,
  [SMALL_STATE(257)] = 9575,
  [SMALL_STATE(258)] = 9595,
  [SMALL_STATE(259)] = 9615,
  [SMALL_STATE(260)] = 9646,
  [SMALL_STATE(261)] = 9663,
  [SMALL_STATE(262)] = 9694,
  [SMALL_STATE(263)] = 9725,
  [SMALL_STATE(264)] = 9756,
  [SMALL_STATE(265)] = 9787,
  [SMALL_STATE(266)] = 9818,
  [SMALL_STATE(267)] = 9849,
  [SMALL_STATE(268)] = 9880,
  [SMALL_STATE(269)] = 9911,
  [SMALL_STATE(270)] = 9942,
  [SMALL_STATE(271)] = 9959,
  [SMALL_STATE(272)] = 9985,
  [SMALL_STATE(273)] = 10007,
  [SMALL_STATE(274)] = 10029,
  [SMALL_STATE(275)] = 10051,
  [SMALL_STATE(276)] = 10065,
  [SMALL_STATE(277)] = 10087,
  [SMALL_STATE(278)] = 10103,
  [SMALL_STATE(279)] = 10125,
  [SMALL_STATE(280)] = 10147,
  [SMALL_STATE(281)] = 10169,
  [SMALL_STATE(282)] = 10191,
  [SMALL_STATE(283)] = 10213,
  [SMALL_STATE(284)] = 10224,
  [SMALL_STATE(285)] = 10237,
  [SMALL_STATE(286)] = 10256,
  [SMALL_STATE(287)] = 10273,
  [SMALL_STATE(288)] = 10292,
  [SMALL_STATE(289)] = 10311,
  [SMALL_STATE(290)] = 10330,
  [SMALL_STATE(291)] = 10349,
  [SMALL_STATE(292)] = 10360,
  [SMALL_STATE(293)] = 10371,
  [SMALL_STATE(294)] = 10390,
  [SMALL_STATE(295)] = 10409,
  [SMALL_STATE(296)] = 10428,
  [SMALL_STATE(297)] = 10447,
  [SMALL_STATE(298)] = 10461,
  [SMALL_STATE(299)] = 10477,
  [SMALL_STATE(300)] = 10493,
  [SMALL_STATE(301)] = 10507,
  [SMALL_STATE(302)] = 10523,
  [SMALL_STATE(303)] = 10535,
  [SMALL_STATE(304)] = 10549,
  [SMALL_STATE(305)] = 10563,
  [SMALL_STATE(306)] = 10577,
  [SMALL_STATE(307)] = 10591,
  [SMALL_STATE(308)] = 10607,
  [SMALL_STATE(309)] = 10623,
  [SMALL_STATE(310)] = 10637,
  [SMALL_STATE(311)] = 10653,
  [SMALL_STATE(312)] = 10667,
  [SMALL_STATE(313)] = 10683,
  [SMALL_STATE(314)] = 10699,
  [SMALL_STATE(315)] = 10715,
  [SMALL_STATE(316)] = 10731,
  [SMALL_STATE(317)] = 10747,
  [SMALL_STATE(318)] = 10759,
  [SMALL_STATE(319)] = 10775,
  [SMALL_STATE(320)] = 10791,
  [SMALL_STATE(321)] = 10807,
  [SMALL_STATE(322)] = 10821,
  [SMALL_STATE(323)] = 10835,
  [SMALL_STATE(324)] = 10849,
  [SMALL_STATE(325)] = 10863,
  [SMALL_STATE(326)] = 10879,
  [SMALL_STATE(327)] = 10893,
  [SMALL_STATE(328)] = 10907,
  [SMALL_STATE(329)] = 10923,
  [SMALL_STATE(330)] = 10937,
  [SMALL_STATE(331)] = 10953,
  [SMALL_STATE(332)] = 10967,
  [SMALL_STATE(333)] = 10983,
  [SMALL_STATE(334)] = 10995,
  [SMALL_STATE(335)] = 11009,
  [SMALL_STATE(336)] = 11023,
  [SMALL_STATE(337)] = 11034,
  [SMALL_STATE(338)] = 11043,
  [SMALL_STATE(339)] = 11052,
  [SMALL_STATE(340)] = 11061,
  [SMALL_STATE(341)] = 11070,
  [SMALL_STATE(342)] = 11083,
  [SMALL_STATE(343)] = 11092,
  [SMALL_STATE(344)] = 11101,
  [SMALL_STATE(345)] = 11110,
  [SMALL_STATE(346)] = 11123,
  [SMALL_STATE(347)] = 11136,
  [SMALL_STATE(348)] = 11145,
  [SMALL_STATE(349)] = 11158,
  [SMALL_STATE(350)] = 11167,
  [SMALL_STATE(351)] = 11176,
  [SMALL_STATE(352)] = 11189,
  [SMALL_STATE(353)] = 11198,
  [SMALL_STATE(354)] = 11209,
  [SMALL_STATE(355)] = 11218,
  [SMALL_STATE(356)] = 11228,
  [SMALL_STATE(357)] = 11238,
  [SMALL_STATE(358)] = 11248,
  [SMALL_STATE(359)] = 11258,
  [SMALL_STATE(360)] = 11268,
  [SMALL_STATE(361)] = 11278,
  [SMALL_STATE(362)] = 11288,
  [SMALL_STATE(363)] = 11298,
  [SMALL_STATE(364)] = 11308,
  [SMALL_STATE(365)] = 11316,
  [SMALL_STATE(366)] = 11326,
  [SMALL_STATE(367)] = 11334,
  [SMALL_STATE(368)] = 11344,
  [SMALL_STATE(369)] = 11352,
  [SMALL_STATE(370)] = 11362,
  [SMALL_STATE(371)] = 11370,
  [SMALL_STATE(372)] = 11380,
  [SMALL_STATE(373)] = 11390,
  [SMALL_STATE(374)] = 11400,
  [SMALL_STATE(375)] = 11408,
  [SMALL_STATE(376)] = 11416,
  [SMALL_STATE(377)] = 11424,
  [SMALL_STATE(378)] = 11434,
  [SMALL_STATE(379)] = 11441,
  [SMALL_STATE(380)] = 11448,
  [SMALL_STATE(381)] = 11455,
  [SMALL_STATE(382)] = 11462,
  [SMALL_STATE(383)] = 11469,
  [SMALL_STATE(384)] = 11476,
  [SMALL_STATE(385)] = 11483,
  [SMALL_STATE(386)] = 11490,
  [SMALL_STATE(387)] = 11497,
  [SMALL_STATE(388)] = 11504,
  [SMALL_STATE(389)] = 11511,
  [SMALL_STATE(390)] = 11518,
  [SMALL_STATE(391)] = 11525,
  [SMALL_STATE(392)] = 11532,
  [SMALL_STATE(393)] = 11539,
  [SMALL_STATE(394)] = 11546,
  [SMALL_STATE(395)] = 11553,
  [SMALL_STATE(396)] = 11560,
  [SMALL_STATE(397)] = 11567,
  [SMALL_STATE(398)] = 11574,
  [SMALL_STATE(399)] = 11581,
  [SMALL_STATE(400)] = 11588,
  [SMALL_STATE(401)] = 11595,
  [SMALL_STATE(402)] = 11602,
  [SMALL_STATE(403)] = 11609,
  [SMALL_STATE(404)] = 11616,
  [SMALL_STATE(405)] = 11623,
  [SMALL_STATE(406)] = 11630,
  [SMALL_STATE(407)] = 11637,
  [SMALL_STATE(408)] = 11644,
  [SMALL_STATE(409)] = 11651,
  [SMALL_STATE(410)] = 11658,
  [SMALL_STATE(411)] = 11665,
  [SMALL_STATE(412)] = 11672,
  [SMALL_STATE(413)] = 11679,
  [SMALL_STATE(414)] = 11686,
  [SMALL_STATE(415)] = 11693,
  [SMALL_STATE(416)] = 11700,
  [SMALL_STATE(417)] = 11707,
  [SMALL_STATE(418)] = 11714,
  [SMALL_STATE(419)] = 11721,
  [SMALL_STATE(420)] = 11728,
  [SMALL_STATE(421)] = 11735,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cql_library, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_identifier, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_keyword_identifier, 1), SHIFT(337),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_keyword_identifier, 1), SHIFT(305),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interval_operator_phrase, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interval_operator_phrase, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_interval_operator_phrase, 1), SHIFT(201),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interval_operator_phrase, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interval_operator_phrase, 2),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_interval_operator_phrase, 1), SHIFT(68),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interval_operator_phrase, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interval_operator_phrase, 3),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_interval_operator_phrase, 3), SHIFT(67),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_interval_operator_phrase, 2), SHIFT(70),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_temporal_relationship, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_temporal_relationship, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_temporal_relationship, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_temporal_relationship, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interval_operator_phrase, 4),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interval_operator_phrase, 4),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_interval_operator_phrase, 4), SHIFT(64),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interval_operator_phrase, 5),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interval_operator_phrase, 5),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_interval_operator_phrase, 5), SHIFT(63),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interval_operator_phrase, 6),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interval_operator_phrase, 6),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative_qualifier, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative_qualifier, 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date_time_precision_specifier, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date_time_precision_specifier, 2),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_quantity, 1), REDUCE(sym_literal, 1, .production_id = 7),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_quantity, 1), REDUCE(sym_literal, 1, .production_id = 7),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_definition, 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_definition, 3),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_named_type_specifier_repeat1, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_type_specifier_repeat1, 2),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_named_type_specifier_repeat1, 2), SHIFT_REPEAT(205),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_type_specifier_repeat1, 2), SHIFT_REPEAT(303),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_identifier_expression_repeat1, 2), SHIFT_REPEAT(215),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_identifier_expression_repeat1, 2), SHIFT_REPEAT(215),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_identifier_expression_repeat1, 2), SHIFT_REPEAT(205),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_identifier_expression_repeat1, 2), SHIFT_REPEAT(303),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_identifier, 2),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_identifier, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_identifier, 3),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_identifier, 3),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_named_type_specifier_repeat1, 2, .production_id = 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_type_specifier_repeat1, 2, .production_id = 1),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_qualified_identifier_expression_repeat1, 2, .production_id = 13),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qualified_identifier_expression_repeat1, 2, .production_id = 13),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_fix_set_expression, 3),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_fix_set_expression, 3),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_definition, 5),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_definition, 5),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_where_clause, 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_membership_expression, 3),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_membership_expression, 3),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(73),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(78),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(286),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(263),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(414),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(368),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(59),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(51),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(216),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(235),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(54),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(55),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(52),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(371),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(201),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_membership_expression, 2),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_membership_expression, 2),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(73),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(78),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(286),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(263),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(414),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(368),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(59),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(51),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(216),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(235),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(54),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(55),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(52),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(371),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(201),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_expression, 3),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and_expression, 3),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_existence_expression, 2),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_existence_expression, 2),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timing_expression, 3),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timing_expression, 3),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(73),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(78),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(286),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(263),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(414),
  [444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(368),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(59),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(51),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(216),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(235),
  [459] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(54),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(55),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(52),
  [468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(371),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(201),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implies_expression, 3),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implies_expression, 3),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_expression, 3),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_or_expression, 3),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_definition, 4),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_definition, 4),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_expression, 2),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_expression, 2),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inequality_expression, 3),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inequality_expression, 3),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_definition, 6),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_definition, 6),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equality_expression, 3),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equality_expression, 3),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_source_clause, 3),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_source_clause, 3),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_source_clause, 2),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_source_clause, 2),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_source_clause, 1),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_source_clause, 1),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_source_clause_repeat1, 2),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_source_clause_repeat1, 2),
  [520] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_source_clause_repeat1, 2), SHIFT_REPEAT(76),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aliased_query_source, 2, .production_id = 12),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aliased_query_source, 2, .production_id = 12),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_referential_identifier, 1),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_referential_identifier, 1),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 1),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_source, 1),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_source, 1),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retrieve, 5),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retrieve, 5),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retrieve, 3),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retrieve, 3),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plural_date_time_precision, 1),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plural_date_time_precision, 1),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 2),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 2),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 1),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date_time_precision, 1),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date_time_precision, 1),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_specifier, 1),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_specifier, 1),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_referential_or_type_name_identifier, 1),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_referential_or_type_name_identifier, 1),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration_between_expression, 5),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_duration_between_expression, 5),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_identifier, 1),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_expression, 4),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_expression, 4),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_expression, 4),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cast_expression, 4),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, .production_id = 8),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, .production_id = 8),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_between_expression, 5),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_between_expression, 5),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_type_specifier, 2),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_type_specifier, 2),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_type_specifier, 1),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_type_specifier, 1),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, .production_id = 9),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, .production_id = 9),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 2),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 2),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_term, 1),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_term, 1),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_between_expression, 6),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_between_expression, 6),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration_between_expression, 7),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_duration_between_expression, 7),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name_identifier, 1),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name_identifier, 1),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_expression, 3),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_expression, 3),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_difference_between_expression, 7),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_difference_between_expression, 7),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expression, 3),
  [659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_expression, 3),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, .production_id = 6),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, .production_id = 6),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, .production_id = 18),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_definition, 5),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8, .production_id = 20),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_definition, 4),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cql_library, 2),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cql_library, 1),
  [713] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 1),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat1, 2),
  [723] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat1, 2), SHIFT_REPEAT(278),
  [726] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat1, 2), SHIFT_REPEAT(279),
  [729] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat1, 2), SHIFT_REPEAT(280),
  [732] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat1, 2), SHIFT_REPEAT(310),
  [735] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cql_library_repeat1, 2), SHIFT_REPEAT(328),
  [738] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat1, 2), SHIFT_REPEAT(332),
  [741] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat1, 2), SHIFT_REPEAT(299),
  [744] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat1, 2), SHIFT_REPEAT(284),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_or_codesystem_identifier, 1),
  [749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_or_codesystem_identifier, 1),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 2),
  [755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_identifier, 2),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 1),
  [761] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_identifier, 1),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_definition, 2),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [773] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_definition, 2),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_or_codesystem_identifier, 3, .production_id = 17),
  [779] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_or_codesystem_identifier, 3, .production_id = 17),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_definition, 2),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [785] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_using_definition, 2),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset_definition, 4, .production_id = 4),
  [789] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_valueset_definition, 4, .production_id = 4),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concept_definition, 7),
  [793] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_concept_definition, 7),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_definition, 7, .production_id = 19),
  [799] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_definition, 7, .production_id = 19),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concept_definition, 6),
  [803] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_concept_definition, 6),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_definition, 6, .production_id = 16),
  [807] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_definition, 6, .production_id = 16),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codesystem_definition, 4, .production_id = 5),
  [811] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_codesystem_definition, 4, .production_id = 5),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concept_definition, 8),
  [815] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_concept_definition, 8),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codesystem_definition, 5, .production_id = 15),
  [819] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_codesystem_definition, 5, .production_id = 15),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_library_definition, 2),
  [823] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_library_definition, 2),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset_definition, 5, .production_id = 14),
  [827] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_valueset_definition, 5, .production_id = 14),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_definition, 3),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [839] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_using_definition, 3),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_specifier, 2, .production_id = 2),
  [843] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_specifier, 2, .production_id = 2),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [847] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_definition, 3),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_definition, 3),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [857] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_definition, 3),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codesystem_definition, 5, .production_id = 5),
  [861] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_codesystem_definition, 5, .production_id = 5),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_definition, 4, .production_id = 3),
  [865] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_definition, 4, .production_id = 3),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_definition, 8, .production_id = 19),
  [869] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_definition, 8, .production_id = 19),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 1),
  [873] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition, 1),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_display_clause, 2),
  [877] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_display_clause, 2),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset_definition, 5, .production_id = 4),
  [881] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_valueset_definition, 5, .production_id = 4),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_definition, 5, .production_id = 11),
  [885] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_definition, 5, .production_id = 11),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset_definition, 6, .production_id = 14),
  [889] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_valueset_definition, 6, .production_id = 14),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codesystem_definition, 6, .production_id = 15),
  [893] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_codesystem_definition, 6, .production_id = 15),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_definition, 7, .production_id = 16),
  [897] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_definition, 7, .production_id = 16),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concept_definition, 9),
  [901] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_concept_definition, 9),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_library_definition, 3),
  [905] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_library_definition, 3),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_definition, 5, .production_id = 11),
  [909] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_using_definition, 5, .production_id = 11),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_definition, 4, .production_id = 3),
  [913] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_using_definition, 4, .production_id = 3),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [921] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [923] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cql_library, 3),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat2, 2),
  [929] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat2, 2), SHIFT_REPEAT(308),
  [932] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat2, 2), SHIFT_REPEAT(271),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity_offset, 1),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_modifier, 1),
  [943] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access_modifier, 1),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [949] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_type_specifier_repeat1, 2), SHIFT_REPEAT(205),
  [952] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [958] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier_expression, 1),
  [976] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [980] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [982] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [986] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [990] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [994] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_definition, 2),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1000] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1004] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1008] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [1010] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1014] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [1016] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(326),
  [1019] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [1021] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier_expression, 2),
  [1025] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_identifier_repeat1, 2),
  [1027] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_identifier_repeat1, 2), SHIFT_REPEAT(334),
  [1030] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [1036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity_offset, 2),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset_relative_qualifier, 1),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_definition, 4, .production_id = 10),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7),
  [1054] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concept_definition_repeat1, 2), SHIFT_REPEAT(296),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_concept_definition_repeat1, 2),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1079] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_source, 3),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1103] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_terminology, 1),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exclusive_relative_qualifier, 1),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
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
