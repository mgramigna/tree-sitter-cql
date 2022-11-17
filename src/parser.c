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
#define STATE_COUNT 312
#define LARGE_STATE_COUNT 63
#define SYMBOL_COUNT 193
#define ALIAS_COUNT 12
#define TOKEN_COUNT 125
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 16

enum {
  anon_sym_library = 1,
  anon_sym_using = 2,
  anon_sym_called = 3,
  anon_sym_include = 4,
  anon_sym_valueset = 5,
  anon_sym_COLON = 6,
  anon_sym_public = 7,
  anon_sym_private = 8,
  anon_sym_context = 9,
  anon_sym_DOT = 10,
  anon_sym_define = 11,
  anon_sym_function = 12,
  anon_sym_LPAREN = 13,
  anon_sym_RPAREN = 14,
  anon_sym_external = 15,
  aux_sym_literal_token1 = 16,
  anon_sym_null = 17,
  anon_sym_is = 18,
  anon_sym_not = 19,
  anon_sym_true = 20,
  anon_sym_false = 21,
  anon_sym_as = 22,
  anon_sym_cast = 23,
  anon_sym_exists = 24,
  anon_sym_properly = 25,
  anon_sym_between = 26,
  anon_sym_and = 27,
  anon_sym_EQ = 28,
  anon_sym_BANG_EQ = 29,
  anon_sym_TILDE = 30,
  anon_sym_BANG_TILDE = 31,
  anon_sym_LT_EQ = 32,
  anon_sym_LT = 33,
  anon_sym_GT = 34,
  anon_sym_GT_EQ = 35,
  anon_sym_or = 36,
  anon_sym_xor = 37,
  anon_sym_implies = 38,
  anon_sym_PIPE = 39,
  anon_sym_union = 40,
  anon_sym_intersect = 41,
  anon_sym_except = 42,
  anon_sym_year = 43,
  anon_sym_month = 44,
  anon_sym_week = 45,
  anon_sym_day = 46,
  anon_sym_hour = 47,
  anon_sym_minute = 48,
  anon_sym_second = 49,
  anon_sym_millisecond = 50,
  anon_sym_years = 51,
  anon_sym_months = 52,
  anon_sym_weeks = 53,
  anon_sym_days = 54,
  anon_sym_hours = 55,
  anon_sym_minutes = 56,
  anon_sym_seconds = 57,
  anon_sym_milliseconds = 58,
  anon_sym_date = 59,
  anon_sym_time = 60,
  anon_sym_timezone = 61,
  anon_sym_timezoneoffset = 62,
  anon_sym_duration = 63,
  anon_sym_in = 64,
  anon_sym_difference = 65,
  anon_sym_of = 66,
  anon_sym_contains = 67,
  anon_sym_orbefore = 68,
  anon_sym_orafter = 69,
  anon_sym_ormore = 70,
  anon_sym_orless = 71,
  anon_sym_lessthan = 72,
  anon_sym_morethan = 73,
  anon_sym_onor = 74,
  anon_sym_before = 75,
  anon_sym_after = 76,
  anon_sym_oron = 77,
  anon_sym_starts = 78,
  anon_sym_ends = 79,
  anon_sym_occurs = 80,
  anon_sym_same = 81,
  anon_sym_start = 82,
  anon_sym_end = 83,
  anon_sym_includes = 84,
  anon_sym_during = 85,
  anon_sym_includedin = 86,
  anon_sym_meets = 87,
  anon_sym_overlaps = 88,
  anon_sym_within = 89,
  anon_sym_where = 90,
  anon_sym_from = 91,
  anon_sym_COMMA = 92,
  anon_sym_LBRACK = 93,
  anon_sym_RBRACK = 94,
  anon_sym_version = 95,
  sym_default_identifier = 96,
  anon_sym_DQUOTE = 97,
  anon_sym_Code = 98,
  anon_sym_Concept = 99,
  anon_sym_asc = 100,
  anon_sym_ascending = 101,
  anon_sym_by = 102,
  anon_sym_code = 103,
  anon_sym_codesystem = 104,
  anon_sym_codesystems = 105,
  anon_sym_concept = 106,
  anon_sym_default = 107,
  anon_sym_desc = 108,
  anon_sym_descending = 109,
  anon_sym_display = 110,
  anon_sym_div = 111,
  anon_sym_fluent = 112,
  anon_sym_mod = 113,
  anon_sym_parameter = 114,
  anon_sym_predecessor = 115,
  anon_sym_starting = 116,
  anon_sym_successor = 117,
  anon_sym_width = 118,
  anon_sym_SQUOTE = 119,
  sym_single_quote_string_fragment = 120,
  sym_double_quote_string_fragment = 121,
  sym_escape_sequence = 122,
  sym_number = 123,
  sym_comment = 124,
  sym_cql_library = 125,
  sym_definition = 126,
  sym_library_definition = 127,
  sym_using_definition = 128,
  sym_include_definition = 129,
  sym_valueset_definition = 130,
  sym_access_modifier = 131,
  sym_statement = 132,
  sym_context_definition = 133,
  sym_function_definition = 134,
  sym_expression_definition = 135,
  sym_expression = 136,
  sym_expression_term = 137,
  sym_term = 138,
  sym_quantity = 139,
  sym_literal = 140,
  sym_qualified_identifier_expression = 141,
  sym_boolean_expression = 142,
  sym_type_expression = 143,
  sym_cast_expression = 144,
  sym_not_expression = 145,
  sym_existence_expression = 146,
  sym_between_expression = 147,
  sym_equality_expression = 148,
  sym_inequality_expression = 149,
  sym_and_expression = 150,
  sym_or_expression = 151,
  sym_implies_expression = 152,
  sym_in_fix_set_expression = 153,
  sym_date_time_precision = 154,
  sym_plural_date_time_precision = 155,
  sym_duration_between_expression = 156,
  sym_difference_between_expression = 157,
  sym_date_time_precision_specifier = 158,
  sym_membership_expression = 159,
  sym_relative_qualifier = 160,
  sym_offset_relative_qualifier = 161,
  sym_exclusive_relative_qualifier = 162,
  sym_quantity_offset = 163,
  sym_temporal_relationship = 164,
  sym_interval_operator_phrase = 165,
  sym_timing_expression = 166,
  sym_query = 167,
  sym_where_clause = 168,
  sym_query_source = 169,
  sym_aliased_query_source = 170,
  sym_query_source_clause = 171,
  sym_retrieve = 172,
  sym_terminology = 173,
  sym_type_specifier = 174,
  sym_named_type_specifier = 175,
  sym_version_specifier = 176,
  sym_identifier = 177,
  sym_qualified_identifier = 178,
  sym_quoted_identifier = 179,
  sym_referential_identifier = 180,
  sym_type_name_identifier = 181,
  sym_referential_or_type_name_identifier = 182,
  sym_keyword_identifier = 183,
  sym_string = 184,
  sym_unit = 185,
  aux_sym_cql_library_repeat1 = 186,
  aux_sym_cql_library_repeat2 = 187,
  aux_sym_qualified_identifier_expression_repeat1 = 188,
  aux_sym_query_source_clause_repeat1 = 189,
  aux_sym_named_type_specifier_repeat1 = 190,
  aux_sym_quoted_identifier_repeat1 = 191,
  aux_sym_string_repeat1 = 192,
  alias_sym_function_body = 193,
  alias_sym_local_identifier = 194,
  alias_sym_model_identifier = 195,
  alias_sym_null_literal = 196,
  alias_sym_number_literal = 197,
  alias_sym_qualifier = 198,
  alias_sym_qualifier_expression = 199,
  alias_sym_quantity_literal = 200,
  alias_sym_query_alias = 201,
  alias_sym_string_literal = 202,
  alias_sym_valueset_id = 203,
  alias_sym_version = 204,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_library] = "library",
  [anon_sym_using] = "using",
  [anon_sym_called] = "called",
  [anon_sym_include] = "include",
  [anon_sym_valueset] = "valueset",
  [anon_sym_COLON] = ":",
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
  [anon_sym_from] = "from",
  [anon_sym_COMMA] = ",",
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
  [anon_sym_code] = "code",
  [anon_sym_codesystem] = "codesystem",
  [anon_sym_codesystems] = "codesystems",
  [anon_sym_concept] = "concept",
  [anon_sym_default] = "default",
  [anon_sym_desc] = "desc",
  [anon_sym_descending] = "descending",
  [anon_sym_display] = "display",
  [anon_sym_div] = "div",
  [anon_sym_fluent] = "fluent",
  [anon_sym_mod] = "mod",
  [anon_sym_parameter] = "parameter",
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
  [sym_qualified_identifier] = "qualified_identifier",
  [sym_quoted_identifier] = "quoted_identifier",
  [sym_referential_identifier] = "referential_identifier",
  [sym_type_name_identifier] = "type_name_identifier",
  [sym_referential_or_type_name_identifier] = "referential_or_type_name_identifier",
  [sym_keyword_identifier] = "keyword_identifier",
  [sym_string] = "string",
  [sym_unit] = "unit",
  [aux_sym_cql_library_repeat1] = "cql_library_repeat1",
  [aux_sym_cql_library_repeat2] = "cql_library_repeat2",
  [aux_sym_qualified_identifier_expression_repeat1] = "qualified_identifier_expression_repeat1",
  [aux_sym_query_source_clause_repeat1] = "query_source_clause_repeat1",
  [aux_sym_named_type_specifier_repeat1] = "named_type_specifier_repeat1",
  [aux_sym_quoted_identifier_repeat1] = "quoted_identifier_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [alias_sym_function_body] = "function_body",
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
  [anon_sym_from] = anon_sym_from,
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [anon_sym_code] = anon_sym_code,
  [anon_sym_codesystem] = anon_sym_codesystem,
  [anon_sym_codesystems] = anon_sym_codesystems,
  [anon_sym_concept] = anon_sym_concept,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_desc] = anon_sym_desc,
  [anon_sym_descending] = anon_sym_descending,
  [anon_sym_display] = anon_sym_display,
  [anon_sym_div] = anon_sym_div,
  [anon_sym_fluent] = anon_sym_fluent,
  [anon_sym_mod] = anon_sym_mod,
  [anon_sym_parameter] = anon_sym_parameter,
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
  [sym_qualified_identifier] = sym_qualified_identifier,
  [sym_quoted_identifier] = sym_quoted_identifier,
  [sym_referential_identifier] = sym_referential_identifier,
  [sym_type_name_identifier] = sym_type_name_identifier,
  [sym_referential_or_type_name_identifier] = sym_referential_or_type_name_identifier,
  [sym_keyword_identifier] = sym_keyword_identifier,
  [sym_string] = sym_string,
  [sym_unit] = sym_unit,
  [aux_sym_cql_library_repeat1] = aux_sym_cql_library_repeat1,
  [aux_sym_cql_library_repeat2] = aux_sym_cql_library_repeat2,
  [aux_sym_qualified_identifier_expression_repeat1] = aux_sym_qualified_identifier_expression_repeat1,
  [aux_sym_query_source_clause_repeat1] = aux_sym_query_source_clause_repeat1,
  [aux_sym_named_type_specifier_repeat1] = aux_sym_named_type_specifier_repeat1,
  [aux_sym_quoted_identifier_repeat1] = aux_sym_quoted_identifier_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [alias_sym_function_body] = alias_sym_function_body,
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
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [anon_sym_fluent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mod] = {
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
    [1] = alias_sym_model_identifier,
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
    [4] = alias_sym_local_identifier,
  },
  [11] = {
    [1] = alias_sym_query_alias,
  },
  [12] = {
    [0] = alias_sym_qualifier_expression,
  },
  [13] = {
    [4] = alias_sym_valueset_id,
  },
  [14] = {
    [6] = alias_sym_function_body,
  },
  [15] = {
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
  sym_identifier, 5,
    sym_identifier,
    alias_sym_local_identifier,
    alias_sym_model_identifier,
    alias_sym_qualifier,
    alias_sym_query_alias,
  sym_referential_identifier, 2,
    sym_referential_identifier,
    alias_sym_qualifier_expression,
  sym_string, 4,
    sym_string,
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
  [4] = 4,
  [5] = 4,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 9,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 8,
  [19] = 19,
  [20] = 16,
  [21] = 21,
  [22] = 13,
  [23] = 21,
  [24] = 24,
  [25] = 10,
  [26] = 15,
  [27] = 24,
  [28] = 19,
  [29] = 29,
  [30] = 11,
  [31] = 31,
  [32] = 32,
  [33] = 29,
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
  [45] = 45,
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
  [61] = 60,
  [62] = 60,
  [63] = 63,
  [64] = 63,
  [65] = 65,
  [66] = 65,
  [67] = 67,
  [68] = 65,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 70,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
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
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 75,
  [102] = 78,
  [103] = 84,
  [104] = 85,
  [105] = 105,
  [106] = 79,
  [107] = 76,
  [108] = 77,
  [109] = 80,
  [110] = 88,
  [111] = 87,
  [112] = 82,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 86,
  [119] = 119,
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
  [151] = 121,
  [152] = 120,
  [153] = 127,
  [154] = 128,
  [155] = 155,
  [156] = 155,
  [157] = 67,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 131,
  [162] = 132,
  [163] = 163,
  [164] = 98,
  [165] = 91,
  [166] = 166,
  [167] = 99,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 125,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 69,
  [213] = 134,
  [214] = 122,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 133,
  [219] = 123,
  [220] = 124,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 221,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 230,
  [235] = 235,
  [236] = 236,
  [237] = 225,
  [238] = 238,
  [239] = 230,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 221,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 238,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 99,
  [253] = 98,
  [254] = 254,
  [255] = 255,
  [256] = 91,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 73,
  [264] = 264,
  [265] = 261,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 128,
  [270] = 121,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 261,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 299,
  [301] = 301,
  [302] = 302,
  [303] = 299,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 249,
  [309] = 309,
  [310] = 310,
  [311] = 302,
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
      if (eof) ADVANCE(414);
      if (lookahead == '!') ADVANCE(29);
      if (lookahead == '"') ADVANCE(997);
      if (lookahead == '\'') ADVANCE(1038);
      if (lookahead == '(') ADVANCE(439);
      if (lookahead == ')') ADVANCE(440);
      if (lookahead == ',') ADVANCE(586);
      if (lookahead == '.') ADVANCE(434);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == ':') ADVANCE(427);
      if (lookahead == '<') ADVANCE(472);
      if (lookahead == '=') ADVANCE(467);
      if (lookahead == '>') ADVANCE(473);
      if (lookahead == 'C') ADVANCE(265);
      if (lookahead == '[') ADVANCE(587);
      if (lookahead == '\\') ADVANCE(380);
      if (lookahead == ']') ADVANCE(588);
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead == 'b') ADVANCE(94);
      if (lookahead == 'c') ADVANCE(31);
      if (lookahead == 'd') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(245);
      if (lookahead == 'f') ADVANCE(34);
      if (lookahead == 'h') ADVANCE(267);
      if (lookahead == 'i') ADVANCE(226);
      if (lookahead == 'l') ADVANCE(95);
      if (lookahead == 'm') ADVANCE(118);
      if (lookahead == 'n') ADVANCE(266);
      if (lookahead == 'o') ADVANCE(61);
      if (lookahead == 'p') ADVANCE(36);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == 't') ADVANCE(195);
      if (lookahead == 'u') ADVANCE(232);
      if (lookahead == 'v') ADVANCE(38);
      if (lookahead == 'w') ADVANCE(125);
      if (lookahead == 'x') ADVANCE(269);
      if (lookahead == 'y') ADVANCE(145);
      if (lookahead == '|') ADVANCE(481);
      if (lookahead == '~') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1055);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(411)
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(405);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(43);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(42);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(364);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(272);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(193);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(377);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(29);
      if (lookahead == '"') ADVANCE(997);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == ')') ADVANCE(440);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(472);
      if (lookahead == '=') ADVANCE(467);
      if (lookahead == '>') ADVANCE(473);
      if (lookahead == 'a') ADVANCE(750);
      if (lookahead == 'b') ADVANCE(690);
      if (lookahead == 'd') ADVANCE(980);
      if (lookahead == 'e') ADVANCE(846);
      if (lookahead == 'i') ADVANCE(811);
      if (lookahead == 'l') ADVANCE(732);
      if (lookahead == 'm') ADVANCE(696);
      if (lookahead == 'o') ADVANCE(635);
      if (lookahead == 'p') ADVANCE(890);
      if (lookahead == 's') ADVANCE(621);
      if (lookahead == 'u') ADVANCE(828);
      if (lookahead == 'w') ADVANCE(777);
      if (lookahead == 'x') ADVANCE(853);
      if (lookahead == '|') ADVANCE(481);
      if (lookahead == '~') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1055);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(997);
      if (lookahead == '\'') ADVANCE(1039);
      if (lookahead == '(') ADVANCE(439);
      if (lookahead == '.') ADVANCE(434);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '[') ADVANCE(587);
      if (lookahead == 'a') ADVANCE(907);
      if (lookahead == 'b') ADVANCE(991);
      if (lookahead == 'c') ADVANCE(597);
      if (lookahead == 'd') ADVANCE(598);
      if (lookahead == 'e') ADVANCE(817);
      if (lookahead == 'f') ADVANCE(600);
      if (lookahead == 'h') ADVANCE(850);
      if (lookahead == 'i') ADVANCE(808);
      if (lookahead == 'l') ADVANCE(762);
      if (lookahead == 'm') ADVANCE(693);
      if (lookahead == 'n') ADVANCE(849);
      if (lookahead == 'o') ADVANCE(876);
      if (lookahead == 'p') ADVANCE(615);
      if (lookahead == 's') ADVANCE(697);
      if (lookahead == 't') ADVANCE(763);
      if (lookahead == 'u') ADVANCE(827);
      if (lookahead == 'v') ADVANCE(603);
      if (lookahead == 'w') ADVANCE(705);
      if (lookahead == 'x') ADVANCE(853);
      if (lookahead == 'y') ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1055);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(997);
      if (lookahead == '\'') ADVANCE(1039);
      if (lookahead == '(') ADVANCE(439);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '[') ADVANCE(587);
      if (lookahead == 'a') ADVANCE(907);
      if (lookahead == 'b') ADVANCE(991);
      if (lookahead == 'c') ADVANCE(597);
      if (lookahead == 'd') ADVANCE(598);
      if (lookahead == 'e') ADVANCE(817);
      if (lookahead == 'f') ADVANCE(600);
      if (lookahead == 'h') ADVANCE(850);
      if (lookahead == 'i') ADVANCE(808);
      if (lookahead == 'l') ADVANCE(762);
      if (lookahead == 'm') ADVANCE(693);
      if (lookahead == 'n') ADVANCE(849);
      if (lookahead == 'o') ADVANCE(889);
      if (lookahead == 'p') ADVANCE(615);
      if (lookahead == 's') ADVANCE(697);
      if (lookahead == 't') ADVANCE(763);
      if (lookahead == 'u') ADVANCE(827);
      if (lookahead == 'v') ADVANCE(603);
      if (lookahead == 'w') ADVANCE(705);
      if (lookahead == 'x') ADVANCE(853);
      if (lookahead == 'y') ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1055);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(997);
      if (lookahead == '\'') ADVANCE(1039);
      if (lookahead == '(') ADVANCE(439);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '[') ADVANCE(587);
      if (lookahead == 'a') ADVANCE(907);
      if (lookahead == 'b') ADVANCE(991);
      if (lookahead == 'c') ADVANCE(597);
      if (lookahead == 'd') ADVANCE(601);
      if (lookahead == 'e') ADVANCE(817);
      if (lookahead == 'f') ADVANCE(600);
      if (lookahead == 'h') ADVANCE(855);
      if (lookahead == 'i') ADVANCE(808);
      if (lookahead == 'l') ADVANCE(762);
      if (lookahead == 'm') ADVANCE(694);
      if (lookahead == 'n') ADVANCE(849);
      if (lookahead == 'o') ADVANCE(876);
      if (lookahead == 'p') ADVANCE(615);
      if (lookahead == 's') ADVANCE(739);
      if (lookahead == 't') ADVANCE(763);
      if (lookahead == 'u') ADVANCE(827);
      if (lookahead == 'v') ADVANCE(603);
      if (lookahead == 'w') ADVANCE(723);
      if (lookahead == 'x') ADVANCE(853);
      if (lookahead == 'y') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1055);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(997);
      if (lookahead == '\'') ADVANCE(1039);
      if (lookahead == '(') ADVANCE(439);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '[') ADVANCE(587);
      if (lookahead == 'a') ADVANCE(907);
      if (lookahead == 'b') ADVANCE(991);
      if (lookahead == 'c') ADVANCE(597);
      if (lookahead == 'd') ADVANCE(601);
      if (lookahead == 'e') ADVANCE(818);
      if (lookahead == 'f') ADVANCE(600);
      if (lookahead == 'h') ADVANCE(855);
      if (lookahead == 'i') ADVANCE(808);
      if (lookahead == 'l') ADVANCE(762);
      if (lookahead == 'm') ADVANCE(694);
      if (lookahead == 'n') ADVANCE(849);
      if (lookahead == 'o') ADVANCE(876);
      if (lookahead == 'p') ADVANCE(615);
      if (lookahead == 's') ADVANCE(739);
      if (lookahead == 't') ADVANCE(763);
      if (lookahead == 'u') ADVANCE(827);
      if (lookahead == 'v') ADVANCE(603);
      if (lookahead == 'w') ADVANCE(723);
      if (lookahead == 'x') ADVANCE(853);
      if (lookahead == 'y') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1055);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(997);
      if (lookahead == '\'') ADVANCE(1039);
      if (lookahead == '(') ADVANCE(439);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '[') ADVANCE(587);
      if (lookahead == 'a') ADVANCE(751);
      if (lookahead == 'b') ADVANCE(706);
      if (lookahead == 'c') ADVANCE(597);
      if (lookahead == 'd') ADVANCE(598);
      if (lookahead == 'e') ADVANCE(817);
      if (lookahead == 'f') ADVANCE(600);
      if (lookahead == 'h') ADVANCE(850);
      if (lookahead == 'i') ADVANCE(808);
      if (lookahead == 'l') ADVANCE(762);
      if (lookahead == 'm') ADVANCE(693);
      if (lookahead == 'n') ADVANCE(849);
      if (lookahead == 'o') ADVANCE(876);
      if (lookahead == 'p') ADVANCE(615);
      if (lookahead == 's') ADVANCE(697);
      if (lookahead == 't') ADVANCE(763);
      if (lookahead == 'u') ADVANCE(827);
      if (lookahead == 'v') ADVANCE(603);
      if (lookahead == 'w') ADVANCE(705);
      if (lookahead == 'x') ADVANCE(853);
      if (lookahead == 'y') ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1055);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(997);
      if (lookahead == '\'') ADVANCE(1039);
      if (lookahead == '(') ADVANCE(439);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '[') ADVANCE(587);
      if (lookahead == 'a') ADVANCE(751);
      if (lookahead == 'b') ADVANCE(706);
      if (lookahead == 'c') ADVANCE(597);
      if (lookahead == 'd') ADVANCE(599);
      if (lookahead == 'e') ADVANCE(817);
      if (lookahead == 'f') ADVANCE(600);
      if (lookahead == 'h') ADVANCE(850);
      if (lookahead == 'i') ADVANCE(810);
      if (lookahead == 'l') ADVANCE(731);
      if (lookahead == 'm') ADVANCE(692);
      if (lookahead == 'n') ADVANCE(849);
      if (lookahead == 'o') ADVANCE(829);
      if (lookahead == 'p') ADVANCE(616);
      if (lookahead == 's') ADVANCE(620);
      if (lookahead == 't') ADVANCE(763);
      if (lookahead == 'u') ADVANCE(827);
      if (lookahead == 'v') ADVANCE(603);
      if (lookahead == 'w') ADVANCE(704);
      if (lookahead == 'x') ADVANCE(853);
      if (lookahead == 'y') ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1055);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(997);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == '(') ADVANCE(439);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '[') ADVANCE(587);
      if (lookahead == 'a') ADVANCE(907);
      if (lookahead == 'b') ADVANCE(991);
      if (lookahead == 'c') ADVANCE(618);
      if (lookahead == 'd') ADVANCE(614);
      if (lookahead == 'e') ADVANCE(819);
      if (lookahead == 'f') ADVANCE(785);
      if (lookahead == 'i') ADVANCE(809);
      if (lookahead == 'l') ADVANCE(762);
      if (lookahead == 'm') ADVANCE(695);
      if (lookahead == 'o') ADVANCE(876);
      if (lookahead == 'p') ADVANCE(615);
      if (lookahead == 's') ADVANCE(941);
      if (lookahead == 't') ADVANCE(765);
      if (lookahead == 'u') ADVANCE(827);
      if (lookahead == 'v') ADVANCE(603);
      if (lookahead == 'w') ADVANCE(760);
      if (lookahead == 'x') ADVANCE(853);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(997);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == '.') ADVANCE(434);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == ':') ADVANCE(427);
      if (lookahead == ']') ADVANCE(588);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(16)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(997);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == 'C') ADVANCE(852);
      if (lookahead == 'a') ADVANCE(907);
      if (lookahead == 'b') ADVANCE(991);
      if (lookahead == 'c') ADVANCE(618);
      if (lookahead == 'd') ADVANCE(614);
      if (lookahead == 'e') ADVANCE(819);
      if (lookahead == 'f') ADVANCE(623);
      if (lookahead == 'i') ADVANCE(809);
      if (lookahead == 'l') ADVANCE(762);
      if (lookahead == 'm') ADVANCE(695);
      if (lookahead == 'n') ADVANCE(849);
      if (lookahead == 'o') ADVANCE(876);
      if (lookahead == 'p') ADVANCE(615);
      if (lookahead == 's') ADVANCE(941);
      if (lookahead == 't') ADVANCE(764);
      if (lookahead == 'u') ADVANCE(827);
      if (lookahead == 'v') ADVANCE(603);
      if (lookahead == 'w') ADVANCE(760);
      if (lookahead == 'x') ADVANCE(853);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(997);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == 'C') ADVANCE(852);
      if (lookahead == 'a') ADVANCE(907);
      if (lookahead == 'b') ADVANCE(991);
      if (lookahead == 'c') ADVANCE(618);
      if (lookahead == 'd') ADVANCE(614);
      if (lookahead == 'e') ADVANCE(819);
      if (lookahead == 'f') ADVANCE(785);
      if (lookahead == 'i') ADVANCE(809);
      if (lookahead == 'l') ADVANCE(762);
      if (lookahead == 'm') ADVANCE(695);
      if (lookahead == 'o') ADVANCE(876);
      if (lookahead == 'p') ADVANCE(615);
      if (lookahead == 's') ADVANCE(941);
      if (lookahead == 't') ADVANCE(765);
      if (lookahead == 'u') ADVANCE(827);
      if (lookahead == 'v') ADVANCE(603);
      if (lookahead == 'w') ADVANCE(760);
      if (lookahead == 'x') ADVANCE(853);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(997);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == 'f') ADVANCE(973);
      if (lookahead == 'p') ADVANCE(892);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(997);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == 'f') ADVANCE(973);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(20)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(997);
      if (lookahead == '/') ADVANCE(1047);
      if (lookahead == '\\') ADVANCE(380);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(1050);
      if (lookahead != 0) ADVANCE(1051);
      END_STATE();
    case 22:
      if (lookahead == '\'') ADVANCE(1038);
      if (lookahead == '/') ADVANCE(1041);
      if (lookahead == '\\') ADVANCE(380);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(1044);
      if (lookahead != 0) ADVANCE(1045);
      END_STATE();
    case 23:
      if (lookahead == '\'') ADVANCE(996);
      END_STATE();
    case 24:
      if (lookahead == '\'') ADVANCE(1);
      END_STATE();
    case 25:
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '/') ADVANCE(1058);
      END_STATE();
    case 26:
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '/') ADVANCE(1057);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == '*') ADVANCE(26);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == 'a') ADVANCE(324);
      if (lookahead == 'd') ADVANCE(45);
      if (lookahead == 'f') ADVANCE(33);
      if (lookahead == 'h') ADVANCE(283);
      if (lookahead == 'i') ADVANCE(244);
      if (lookahead == 'm') ADVANCE(201);
      if (lookahead == 'n') ADVANCE(381);
      if (lookahead == 'o') ADVANCE(308);
      if (lookahead == 's') ADVANCE(157);
      if (lookahead == 't') ADVANCE(320);
      if (lookahead == 'w') ADVANCE(142);
      if (lookahead == 'y') ADVANCE(153);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(28)
      END_STATE();
    case 29:
      if (lookahead == '=') ADVANCE(468);
      if (lookahead == '~') ADVANCE(470);
      END_STATE();
    case 30:
      if (lookahead == '_') ADVANCE(23);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(210);
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(367);
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead == 'i') ADVANCE(165);
      if (lookahead == 'u') ADVANCE(305);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(207);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(207);
      if (lookahead == 'l') ADVANCE(383);
      if (lookahead == 'r') ADVANCE(268);
      if (lookahead == 'u') ADVANCE(252);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(229);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == 't') ADVANCE(47);
      if (lookahead == 'u') ADVANCE(70);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(304);
      if (lookahead == 'r') ADVANCE(121);
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(398);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(221);
      if (lookahead == 'e') ADVANCE(307);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(384);
      if (lookahead == 'i') ADVANCE(261);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(291);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(397);
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead == 'b') ADVANCE(160);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead == 'b') ADVANCE(160);
      if (lookahead == 'l') ADVANCE(150);
      if (lookahead == 'm') ADVANCE(284);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead == 'b') ADVANCE(160);
      if (lookahead == 'l') ADVANCE(150);
      if (lookahead == 'm') ADVANCE(284);
      if (lookahead == 'o') ADVANCE(243);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(401);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(378);
      if (lookahead == 'i') ADVANCE(246);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(309);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(295);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(306);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(206);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(240);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(241);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(303);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(209);
      if (lookahead == 'o') ADVANCE(264);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(191);
      if (lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(370);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(231);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(222);
      END_STATE();
    case 59:
      if (lookahead == 'b') ADVANCE(322);
      END_STATE();
    case 60:
      if (lookahead == 'b') ADVANCE(216);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(69);
      if (lookahead == 'f') ADVANCE(544);
      if (lookahead == 'n') ADVANCE(5);
      if (lookahead == 'r') ADVANCE(475);
      if (lookahead == 'v') ADVANCE(130);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(1017);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(428);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(270);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(122);
      if (lookahead == 'i') ADVANCE(342);
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(360);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(144);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(112);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(392);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(147);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(151);
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(278);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(279);
      END_STATE();
    case 75:
      if (lookahead == 'c') ADVANCE(280);
      END_STATE();
    case 76:
      if (lookahead == 'c') ADVANCE(223);
      END_STATE();
    case 77:
      if (lookahead == 'c') ADVANCE(379);
      END_STATE();
    case 78:
      if (lookahead == 'c') ADVANCE(156);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(465);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(570);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(1026);
      if (lookahead == 'n') ADVANCE(362);
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(419);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(508);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(511);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(506);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(509);
      END_STATE();
    case 87:
      if (lookahead == 'd') ADVANCE(97);
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 88:
      if (lookahead == 'd') ADVANCE(98);
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 89:
      if (lookahead == 'd') ADVANCE(363);
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 90:
      if (lookahead == 'd') ADVANCE(161);
      END_STATE();
    case 91:
      if (lookahead == 'd') ADVANCE(109);
      END_STATE();
    case 92:
      if (lookahead == 'd') ADVANCE(114);
      END_STATE();
    case 93:
      if (lookahead == 'd') ADVANCE(192);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead == 'y') ADVANCE(1004);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(334);
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(998);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(1007);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(528);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(565);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(531);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(451);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(453);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(582);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(554);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(435);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(505);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(424);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(430);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(533);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(542);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(443);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(549);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(547);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(503);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead == 'i') ADVANCE(217);
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(394);
      if (lookahead == 'o') ADVANCE(292);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(287);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead == 'h') ADVANCE(131);
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(366);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(296);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(328);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(298);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(359);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(361);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(301);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(335);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(321);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(314);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(317);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(375);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(348);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 162:
      if (lookahead == 'f') ADVANCE(374);
      if (lookahead == 'n') ADVANCE(79);
      if (lookahead == 's') ADVANCE(455);
      END_STATE();
    case 163:
      if (lookahead == 'f') ADVANCE(544);
      if (lookahead == 'n') ADVANCE(5);
      if (lookahead == 'r') ADVANCE(2);
      END_STATE();
    case 164:
      if (lookahead == 'f') ADVANCE(39);
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 165:
      if (lookahead == 'f') ADVANCE(170);
      if (lookahead == 's') ADVANCE(288);
      if (lookahead == 'v') ADVANCE(1022);
      END_STATE();
    case 166:
      if (lookahead == 'f') ADVANCE(171);
      END_STATE();
    case 167:
      if (lookahead == 'f') ADVANCE(188);
      END_STATE();
    case 168:
      if (lookahead == 'f') ADVANCE(282);
      END_STATE();
    case 169:
      if (lookahead == 'f') ADVANCE(282);
      if (lookahead == 't') ADVANCE(395);
      END_STATE();
    case 170:
      if (lookahead == 'f') ADVANCE(152);
      END_STATE();
    case 171:
      if (lookahead == 'f') ADVANCE(343);
      END_STATE();
    case 172:
      if (lookahead == 'f') ADVANCE(376);
      END_STATE();
    case 173:
      if (lookahead == 'f') ADVANCE(285);
      END_STATE();
    case 174:
      if (lookahead == 'g') ADVANCE(417);
      END_STATE();
    case 175:
      if (lookahead == 'g') ADVANCE(573);
      END_STATE();
    case 176:
      if (lookahead == 'g') ADVANCE(1032);
      END_STATE();
    case 177:
      if (lookahead == 'g') ADVANCE(1018);
      END_STATE();
    case 178:
      if (lookahead == 'h') ADVANCE(493);
      END_STATE();
    case 179:
      if (lookahead == 'h') ADVANCE(1036);
      END_STATE();
    case 180:
      if (lookahead == 'h') ADVANCE(491);
      END_STATE();
    case 181:
      if (lookahead == 'h') ADVANCE(190);
      END_STATE();
    case 182:
      if (lookahead == 'h') ADVANCE(51);
      END_STATE();
    case 183:
      if (lookahead == 'h') ADVANCE(52);
      END_STATE();
    case 184:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 185:
      if (lookahead == 'i') ADVANCE(217);
      if (lookahead == 'o') ADVANCE(249);
      END_STATE();
    case 186:
      if (lookahead == 'i') ADVANCE(394);
      END_STATE();
    case 187:
      if (lookahead == 'i') ADVANCE(233);
      END_STATE();
    case 188:
      if (lookahead == 'i') ADVANCE(261);
      END_STATE();
    case 189:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 190:
      if (lookahead == 'i') ADVANCE(235);
      END_STATE();
    case 191:
      if (lookahead == 'i') ADVANCE(259);
      END_STATE();
    case 192:
      if (lookahead == 'i') ADVANCE(248);
      END_STATE();
    case 193:
      if (lookahead == 'i') ADVANCE(242);
      END_STATE();
    case 194:
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 195:
      if (lookahead == 'i') ADVANCE(230);
      if (lookahead == 'r') ADVANCE(385);
      END_STATE();
    case 196:
      if (lookahead == 'i') ADVANCE(271);
      END_STATE();
    case 197:
      if (lookahead == 'i') ADVANCE(339);
      END_STATE();
    case 198:
      if (lookahead == 'i') ADVANCE(273);
      END_STATE();
    case 199:
      if (lookahead == 'i') ADVANCE(274);
      END_STATE();
    case 200:
      if (lookahead == 'i') ADVANCE(276);
      END_STATE();
    case 201:
      if (lookahead == 'i') ADVANCE(225);
      if (lookahead == 'o') ADVANCE(260);
      END_STATE();
    case 202:
      if (lookahead == 'i') ADVANCE(349);
      END_STATE();
    case 203:
      if (lookahead == 'k') ADVANCE(496);
      END_STATE();
    case 204:
      if (lookahead == 'k') ADVANCE(494);
      END_STATE();
    case 205:
      if (lookahead == 'l') ADVANCE(445);
      END_STATE();
    case 206:
      if (lookahead == 'l') ADVANCE(441);
      END_STATE();
    case 207:
      if (lookahead == 'l') ADVANCE(336);
      END_STATE();
    case 208:
      if (lookahead == 'l') ADVANCE(194);
      END_STATE();
    case 209:
      if (lookahead == 'l') ADVANCE(219);
      END_STATE();
    case 210:
      if (lookahead == 'l') ADVANCE(219);
      if (lookahead == 's') ADVANCE(351);
      END_STATE();
    case 211:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 212:
      if (lookahead == 'l') ADVANCE(197);
      END_STATE();
    case 213:
      if (lookahead == 'l') ADVANCE(400);
      END_STATE();
    case 214:
      if (lookahead == 'l') ADVANCE(390);
      END_STATE();
    case 215:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 216:
      if (lookahead == 'l') ADVANCE(189);
      END_STATE();
    case 217:
      if (lookahead == 'l') ADVANCE(212);
      if (lookahead == 'n') ADVANCE(389);
      END_STATE();
    case 218:
      if (lookahead == 'l') ADVANCE(205);
      END_STATE();
    case 219:
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 220:
      if (lookahead == 'l') ADVANCE(358);
      END_STATE();
    case 221:
      if (lookahead == 'l') ADVANCE(386);
      END_STATE();
    case 222:
      if (lookahead == 'l') ADVANCE(340);
      END_STATE();
    case 223:
      if (lookahead == 'l') ADVANCE(391);
      END_STATE();
    case 224:
      if (lookahead == 'l') ADVANCE(202);
      END_STATE();
    case 225:
      if (lookahead == 'l') ADVANCE(224);
      if (lookahead == 'n') ADVANCE(393);
      END_STATE();
    case 226:
      if (lookahead == 'm') ADVANCE(286);
      if (lookahead == 'n') ADVANCE(541);
      if (lookahead == 's') ADVANCE(447);
      END_STATE();
    case 227:
      if (lookahead == 'm') ADVANCE(584);
      END_STATE();
    case 228:
      if (lookahead == 'm') ADVANCE(1009);
      END_STATE();
    case 229:
      if (lookahead == 'm') ADVANCE(100);
      END_STATE();
    case 230:
      if (lookahead == 'm') ADVANCE(101);
      END_STATE();
    case 231:
      if (lookahead == 'm') ADVANCE(154);
      END_STATE();
    case 232:
      if (lookahead == 'n') ADVANCE(196);
      if (lookahead == 's') ADVANCE(187);
      END_STATE();
    case 233:
      if (lookahead == 'n') ADVANCE(174);
      END_STATE();
    case 234:
      if (lookahead == 'n') ADVANCE(482);
      END_STATE();
    case 235:
      if (lookahead == 'n') ADVANCE(580);
      END_STATE();
    case 236:
      if (lookahead == 'n') ADVANCE(463);
      END_STATE();
    case 237:
      if (lookahead == 'n') ADVANCE(589);
      END_STATE();
    case 238:
      if (lookahead == 'n') ADVANCE(536);
      END_STATE();
    case 239:
      if (lookahead == 'n') ADVANCE(437);
      END_STATE();
    case 240:
      if (lookahead == 'n') ADVANCE(551);
      END_STATE();
    case 241:
      if (lookahead == 'n') ADVANCE(552);
      END_STATE();
    case 242:
      if (lookahead == 'n') ADVANCE(575);
      END_STATE();
    case 243:
      if (lookahead == 'n') ADVANCE(558);
      END_STATE();
    case 244:
      if (lookahead == 'n') ADVANCE(538);
      END_STATE();
    case 245:
      if (lookahead == 'n') ADVANCE(80);
      if (lookahead == 'x') ADVANCE(65);
      END_STATE();
    case 246:
      if (lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 247:
      if (lookahead == 'n') ADVANCE(176);
      END_STATE();
    case 248:
      if (lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 249:
      if (lookahead == 'n') ADVANCE(362);
      END_STATE();
    case 250:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 251:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 252:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 253:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 254:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 255:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 256:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 257:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 258:
      if (lookahead == 'n') ADVANCE(354);
      END_STATE();
    case 259:
      if (lookahead == 'n') ADVANCE(329);
      END_STATE();
    case 260:
      if (lookahead == 'n') ADVANCE(365);
      END_STATE();
    case 261:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 262:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 263:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 264:
      if (lookahead == 'n') ADVANCE(372);
      END_STATE();
    case 265:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 266:
      if (lookahead == 'o') ADVANCE(350);
      if (lookahead == 'u') ADVANCE(218);
      END_STATE();
    case 267:
      if (lookahead == 'o') ADVANCE(382);
      END_STATE();
    case 268:
      if (lookahead == 'o') ADVANCE(227);
      END_STATE();
    case 269:
      if (lookahead == 'o') ADVANCE(293);
      END_STATE();
    case 270:
      if (lookahead == 'o') ADVANCE(250);
      END_STATE();
    case 271:
      if (lookahead == 'o') ADVANCE(234);
      END_STATE();
    case 272:
      if (lookahead == 'o') ADVANCE(297);
      END_STATE();
    case 273:
      if (lookahead == 'o') ADVANCE(237);
      END_STATE();
    case 274:
      if (lookahead == 'o') ADVANCE(238);
      END_STATE();
    case 275:
      if (lookahead == 'o') ADVANCE(299);
      END_STATE();
    case 276:
      if (lookahead == 'o') ADVANCE(239);
      END_STATE();
    case 277:
      if (lookahead == 'o') ADVANCE(300);
      END_STATE();
    case 278:
      if (lookahead == 'o') ADVANCE(254);
      END_STATE();
    case 279:
      if (lookahead == 'o') ADVANCE(255);
      END_STATE();
    case 280:
      if (lookahead == 'o') ADVANCE(257);
      END_STATE();
    case 281:
      if (lookahead == 'o') ADVANCE(262);
      END_STATE();
    case 282:
      if (lookahead == 'o') ADVANCE(316);
      END_STATE();
    case 283:
      if (lookahead == 'o') ADVANCE(387);
      END_STATE();
    case 284:
      if (lookahead == 'o') ADVANCE(318);
      END_STATE();
    case 285:
      if (lookahead == 'o') ADVANCE(319);
      END_STATE();
    case 286:
      if (lookahead == 'p') ADVANCE(208);
      END_STATE();
    case 287:
      if (lookahead == 'p') ADVANCE(353);
      END_STATE();
    case 288:
      if (lookahead == 'p') ADVANCE(211);
      END_STATE();
    case 289:
      if (lookahead == 'p') ADVANCE(355);
      END_STATE();
    case 290:
      if (lookahead == 'p') ADVANCE(356);
      END_STATE();
    case 291:
      if (lookahead == 'p') ADVANCE(330);
      END_STATE();
    case 292:
      if (lookahead == 'p') ADVANCE(149);
      END_STATE();
    case 293:
      if (lookahead == 'r') ADVANCE(477);
      END_STATE();
    case 294:
      if (lookahead == 'r') ADVANCE(502);
      END_STATE();
    case 295:
      if (lookahead == 'r') ADVANCE(490);
      END_STATE();
    case 296:
      if (lookahead == 'r') ADVANCE(556);
      END_STATE();
    case 297:
      if (lookahead == 'r') ADVANCE(553);
      END_STATE();
    case 298:
      if (lookahead == 'r') ADVANCE(1028);
      END_STATE();
    case 299:
      if (lookahead == 'r') ADVANCE(1034);
      END_STATE();
    case 300:
      if (lookahead == 'r') ADVANCE(1030);
      END_STATE();
    case 301:
      if (lookahead == 'r') ADVANCE(548);
      END_STATE();
    case 302:
      if (lookahead == 'r') ADVANCE(500);
      END_STATE();
    case 303:
      if (lookahead == 'r') ADVANCE(488);
      END_STATE();
    case 304:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 305:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 306:
      if (lookahead == 'r') ADVANCE(399);
      END_STATE();
    case 307:
      if (lookahead == 'r') ADVANCE(347);
      END_STATE();
    case 308:
      if (lookahead == 'r') ADVANCE(3);
      END_STATE();
    case 309:
      if (lookahead == 'r') ADVANCE(352);
      END_STATE();
    case 310:
      if (lookahead == 'r') ADVANCE(327);
      END_STATE();
    case 311:
      if (lookahead == 'r') ADVANCE(186);
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 312:
      if (lookahead == 'r') ADVANCE(253);
      END_STATE();
    case 313:
      if (lookahead == 'r') ADVANCE(215);
      END_STATE();
    case 314:
      if (lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 315:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 316:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 317:
      if (lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 318:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 319:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 320:
      if (lookahead == 'r') ADVANCE(385);
      END_STATE();
    case 321:
      if (lookahead == 'r') ADVANCE(338);
      END_STATE();
    case 322:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 323:
      if (lookahead == 'r') ADVANCE(388);
      END_STATE();
    case 324:
      if (lookahead == 's') ADVANCE(455);
      END_STATE();
    case 325:
      if (lookahead == 's') ADVANCE(576);
      END_STATE();
    case 326:
      if (lookahead == 's') ADVANCE(459);
      END_STATE();
    case 327:
      if (lookahead == 's') ADVANCE(563);
      END_STATE();
    case 328:
      if (lookahead == 's') ADVANCE(479);
      END_STATE();
    case 329:
      if (lookahead == 's') ADVANCE(545);
      END_STATE();
    case 330:
      if (lookahead == 's') ADVANCE(578);
      END_STATE();
    case 331:
      if (lookahead == 's') ADVANCE(550);
      END_STATE();
    case 332:
      if (lookahead == 's') ADVANCE(4);
      END_STATE();
    case 333:
      if (lookahead == 's') ADVANCE(187);
      END_STATE();
    case 334:
      if (lookahead == 's') ADVANCE(332);
      END_STATE();
    case 335:
      if (lookahead == 's') ADVANCE(345);
      END_STATE();
    case 336:
      if (lookahead == 's') ADVANCE(104);
      END_STATE();
    case 337:
      if (lookahead == 's') ADVANCE(331);
      END_STATE();
    case 338:
      if (lookahead == 's') ADVANCE(148);
      END_STATE();
    case 339:
      if (lookahead == 's') ADVANCE(155);
      END_STATE();
    case 340:
      if (lookahead == 's') ADVANCE(113);
      END_STATE();
    case 341:
      if (lookahead == 's') ADVANCE(138);
      END_STATE();
    case 342:
      if (lookahead == 's') ADVANCE(368);
      END_STATE();
    case 343:
      if (lookahead == 's') ADVANCE(139);
      END_STATE();
    case 344:
      if (lookahead == 's') ADVANCE(371);
      END_STATE();
    case 345:
      if (lookahead == 's') ADVANCE(275);
      END_STATE();
    case 346:
      if (lookahead == 's') ADVANCE(277);
      END_STATE();
    case 347:
      if (lookahead == 's') ADVANCE(198);
      END_STATE();
    case 348:
      if (lookahead == 's') ADVANCE(346);
      END_STATE();
    case 349:
      if (lookahead == 's') ADVANCE(158);
      END_STATE();
    case 350:
      if (lookahead == 't') ADVANCE(449);
      END_STATE();
    case 351:
      if (lookahead == 't') ADVANCE(457);
      END_STATE();
    case 352:
      if (lookahead == 't') ADVANCE(568);
      END_STATE();
    case 353:
      if (lookahead == 't') ADVANCE(486);
      END_STATE();
    case 354:
      if (lookahead == 't') ADVANCE(1024);
      END_STATE();
    case 355:
      if (lookahead == 't') ADVANCE(1000);
      END_STATE();
    case 356:
      if (lookahead == 't') ADVANCE(1012);
      END_STATE();
    case 357:
      if (lookahead == 't') ADVANCE(432);
      END_STATE();
    case 358:
      if (lookahead == 't') ADVANCE(1014);
      END_STATE();
    case 359:
      if (lookahead == 't') ADVANCE(425);
      END_STATE();
    case 360:
      if (lookahead == 't') ADVANCE(484);
      END_STATE();
    case 361:
      if (lookahead == 't') ADVANCE(534);
      END_STATE();
    case 362:
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 363:
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 364:
      if (lookahead == 't') ADVANCE(182);
      END_STATE();
    case 365:
      if (lookahead == 't') ADVANCE(180);
      END_STATE();
    case 366:
      if (lookahead == 't') ADVANCE(325);
      END_STATE();
    case 367:
      if (lookahead == 't') ADVANCE(99);
      if (lookahead == 'y') ADVANCE(499);
      END_STATE();
    case 368:
      if (lookahead == 't') ADVANCE(326);
      END_STATE();
    case 369:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 370:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 371:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 372:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 373:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 374:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 375:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 376:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 377:
      if (lookahead == 't') ADVANCE(183);
      END_STATE();
    case 378:
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 379:
      if (lookahead == 't') ADVANCE(200);
      END_STATE();
    case 380:
      if (lookahead == 'u') ADVANCE(403);
      if (lookahead == 'x') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1054);
      if (lookahead != 0) ADVANCE(1052);
      END_STATE();
    case 381:
      if (lookahead == 'u') ADVANCE(218);
      END_STATE();
    case 382:
      if (lookahead == 'u') ADVANCE(294);
      END_STATE();
    case 383:
      if (lookahead == 'u') ADVANCE(129);
      END_STATE();
    case 384:
      if (lookahead == 'u') ADVANCE(220);
      END_STATE();
    case 385:
      if (lookahead == 'u') ADVANCE(102);
      END_STATE();
    case 386:
      if (lookahead == 'u') ADVANCE(132);
      END_STATE();
    case 387:
      if (lookahead == 'u') ADVANCE(302);
      END_STATE();
    case 388:
      if (lookahead == 'u') ADVANCE(113);
      END_STATE();
    case 389:
      if (lookahead == 'u') ADVANCE(369);
      END_STATE();
    case 390:
      if (lookahead == 'u') ADVANCE(91);
      END_STATE();
    case 391:
      if (lookahead == 'u') ADVANCE(92);
      END_STATE();
    case 392:
      if (lookahead == 'u') ADVANCE(310);
      END_STATE();
    case 393:
      if (lookahead == 'u') ADVANCE(373);
      END_STATE();
    case 394:
      if (lookahead == 'v') ADVANCE(56);
      END_STATE();
    case 395:
      if (lookahead == 'w') ADVANCE(141);
      END_STATE();
    case 396:
      if (lookahead == 'x') ADVANCE(357);
      END_STATE();
    case 397:
      if (lookahead == 'y') ADVANCE(499);
      END_STATE();
    case 398:
      if (lookahead == 'y') ADVANCE(1020);
      END_STATE();
    case 399:
      if (lookahead == 'y') ADVANCE(415);
      END_STATE();
    case 400:
      if (lookahead == 'y') ADVANCE(461);
      END_STATE();
    case 401:
      if (lookahead == 'y') ADVANCE(497);
      END_STATE();
    case 402:
      if (lookahead == 'y') ADVANCE(344);
      END_STATE();
    case 403:
      if (lookahead == '{') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(406);
      END_STATE();
    case 404:
      if (lookahead == '}') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(404);
      END_STATE();
    case 405:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1056);
      END_STATE();
    case 406:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(409);
      END_STATE();
    case 407:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1052);
      END_STATE();
    case 408:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(404);
      END_STATE();
    case 409:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(407);
      END_STATE();
    case 410:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 411:
      if (eof) ADVANCE(414);
      if (lookahead == '!') ADVANCE(29);
      if (lookahead == '"') ADVANCE(997);
      if (lookahead == '\'') ADVANCE(1038);
      if (lookahead == '(') ADVANCE(439);
      if (lookahead == ')') ADVANCE(440);
      if (lookahead == ',') ADVANCE(586);
      if (lookahead == '.') ADVANCE(434);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == ':') ADVANCE(427);
      if (lookahead == '<') ADVANCE(472);
      if (lookahead == '=') ADVANCE(467);
      if (lookahead == '>') ADVANCE(473);
      if (lookahead == 'C') ADVANCE(265);
      if (lookahead == '[') ADVANCE(587);
      if (lookahead == ']') ADVANCE(588);
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead == 'b') ADVANCE(94);
      if (lookahead == 'c') ADVANCE(31);
      if (lookahead == 'd') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(245);
      if (lookahead == 'f') ADVANCE(34);
      if (lookahead == 'h') ADVANCE(267);
      if (lookahead == 'i') ADVANCE(226);
      if (lookahead == 'l') ADVANCE(95);
      if (lookahead == 'm') ADVANCE(118);
      if (lookahead == 'n') ADVANCE(266);
      if (lookahead == 'o') ADVANCE(61);
      if (lookahead == 'p') ADVANCE(36);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == 't') ADVANCE(195);
      if (lookahead == 'u') ADVANCE(232);
      if (lookahead == 'v') ADVANCE(38);
      if (lookahead == 'w') ADVANCE(125);
      if (lookahead == 'x') ADVANCE(269);
      if (lookahead == 'y') ADVANCE(145);
      if (lookahead == '|') ADVANCE(481);
      if (lookahead == '~') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1055);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(411)
      END_STATE();
    case 412:
      if (eof) ADVANCE(414);
      if (lookahead == '!') ADVANCE(29);
      if (lookahead == '"') ADVANCE(997);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(472);
      if (lookahead == '=') ADVANCE(467);
      if (lookahead == '>') ADVANCE(473);
      if (lookahead == 'a') ADVANCE(750);
      if (lookahead == 'b') ADVANCE(690);
      if (lookahead == 'c') ADVANCE(864);
      if (lookahead == 'd') ADVANCE(710);
      if (lookahead == 'e') ADVANCE(846);
      if (lookahead == 'i') ADVANCE(811);
      if (lookahead == 'l') ADVANCE(732);
      if (lookahead == 'm') ADVANCE(696);
      if (lookahead == 'o') ADVANCE(635);
      if (lookahead == 'p') ADVANCE(890);
      if (lookahead == 's') ADVANCE(621);
      if (lookahead == 'u') ADVANCE(828);
      if (lookahead == 'w') ADVANCE(777);
      if (lookahead == 'x') ADVANCE(853);
      if (lookahead == '|') ADVANCE(481);
      if (lookahead == '~') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1055);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(412)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 413:
      if (eof) ADVANCE(414);
      if (lookahead == '\'') ADVANCE(1038);
      if (lookahead == '(') ADVANCE(439);
      if (lookahead == '.') ADVANCE(434);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == ':') ADVANCE(427);
      if (lookahead == ']') ADVANCE(588);
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead == 'b') ADVANCE(128);
      if (lookahead == 'c') ADVANCE(54);
      if (lookahead == 'd') ADVANCE(41);
      if (lookahead == 'f') ADVANCE(58);
      if (lookahead == 'h') ADVANCE(267);
      if (lookahead == 'i') ADVANCE(256);
      if (lookahead == 'l') ADVANCE(184);
      if (lookahead == 'm') ADVANCE(185);
      if (lookahead == 'n') ADVANCE(381);
      if (lookahead == 'o') ADVANCE(163);
      if (lookahead == 'p') ADVANCE(311);
      if (lookahead == 's') ADVANCE(119);
      if (lookahead == 't') ADVANCE(323);
      if (lookahead == 'u') ADVANCE(333);
      if (lookahead == 'v') ADVANCE(38);
      if (lookahead == 'w') ADVANCE(124);
      if (lookahead == 'y') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1055);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(413)
      END_STATE();
    case 414:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_library);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_library);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_using);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_called);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_called);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'd') ADVANCE(595);
      if (lookahead == 's') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 's') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == 'd') ADVANCE(6);
      if (lookahead == 's') ADVANCE(571);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_valueset);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_valueset);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_public);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_private);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_context);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_context);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_define);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_function);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_external);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_external);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_is);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_cast);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_cast);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_exists);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_exists);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_properly);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_properly);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_between);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_between);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_BANG_TILDE);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(471);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(474);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_xor);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_implies);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_implies);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_union);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_intersect);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_intersect);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_except);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_except);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_year);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_year);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 's') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_year);
      if (lookahead == 's') ADVANCE(512);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_month);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_month);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 's') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_month);
      if (lookahead == 's') ADVANCE(514);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_week);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_week);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 's') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_week);
      if (lookahead == 's') ADVANCE(516);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_day);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_day);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 's') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_day);
      if (lookahead == 's') ADVANCE(518);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_hour);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_hour);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 's') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_hour);
      if (lookahead == 's') ADVANCE(520);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_minute);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_minute);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 's') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_minute);
      if (lookahead == 's') ADVANCE(522);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_second);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_second);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 's') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_second);
      if (lookahead == 's') ADVANCE(524);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_millisecond);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_millisecond);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 's') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_millisecond);
      if (lookahead == 's') ADVANCE(526);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_years);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_years);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_months);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_months);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_weeks);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_weeks);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_days);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_days);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_hours);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_hours);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_minutes);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_minutes);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_seconds);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_seconds);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_milliseconds);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_milliseconds);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_date);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_date);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_time);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'z') ADVANCE(863);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(996);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_time);
      if (lookahead == 'z') ADVANCE(281);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_timezone);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(744);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_timezone);
      if (lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_timezoneoffset);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_timezoneoffset);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_duration);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_duration);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(795);
      if (lookahead == 't') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(804);
      if (lookahead == 't') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'c') ADVANCE(214);
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_difference);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_difference);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_contains);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_contains);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_orbefore);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_orafter);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_ormore);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_orless);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_lessthan);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_morethan);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_onor);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_before);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_before);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_after);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_after);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_oron);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_starts);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_starts);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_ends);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_ends);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_occurs);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_occurs);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_same);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_same);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_start);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(830);
      if (lookahead == 's') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_start);
      if (lookahead == 'i') ADVANCE(247);
      if (lookahead == 's') ADVANCE(559);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 's') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == 's') ADVANCE(561);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_includes);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_includes);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_during);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_during);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_includedin);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_meets);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_meets);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_overlaps);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_overlaps);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_within);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_within);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_from);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_version);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == ' ') ADVANCE(43);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == ' ') ADVANCE(44);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == ' ') ADVANCE(364);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == ' ') ADVANCE(272);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == ' ') ADVANCE(193);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == ' ') ADVANCE(377);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(790);
      if (lookahead == 'o') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(960);
      if (lookahead == 'e') ADVANCE(742);
      if (lookahead == 'i') ADVANCE(743);
      if (lookahead == 'u') ADVANCE(884);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(960);
      if (lookahead == 'e') ADVANCE(742);
      if (lookahead == 'i') ADVANCE(743);
      if (lookahead == 'u') ADVANCE(885);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(788);
      if (lookahead == 'l') ADVANCE(976);
      if (lookahead == 'r') ADVANCE(851);
      if (lookahead == 'u') ADVANCE(834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(961);
      if (lookahead == 'e') ADVANCE(742);
      if (lookahead == 'i') ADVANCE(743);
      if (lookahead == 'u') ADVANCE(884);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(992);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(802);
      if (lookahead == 'e') ADVANCE(887);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(873);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(978);
      if (lookahead == 'i') ADVANCE(842);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(891);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(971);
      if (lookahead == 'i') ADVANCE(835);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(971);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(771);
      if (lookahead == 'e') ADVANCE(990);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(879);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(888);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(905);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(962);
      if (lookahead == 'e') ADVANCE(742);
      if (lookahead == 'i') ADVANCE(931);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(886);
      if (lookahead == 'r') ADVANCE(701);
      if (lookahead == 'u') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(886);
      if (lookahead == 'r') ADVANCE(700);
      if (lookahead == 'u') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(791);
      if (lookahead == 'o') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(965);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(815);
      if (lookahead == 'e') ADVANCE(629);
      if (lookahead == 't') ADVANCE(606);
      if (lookahead == 'u') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(815);
      if (lookahead == 't') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(897);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(803);
      if (lookahead == 'l') ADVANCE(976);
      if (lookahead == 'u') ADVANCE(834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'b') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'b') ADVANCE(904);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(1002);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(1016);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(795);
      if (lookahead == 't') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(698);
      if (lookahead == 'i') ADVANCE(933);
      if (lookahead == 't') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(698);
      if (lookahead == 'i') ADVANCE(933);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(642);
      if (lookahead == 'n') ADVANCE(594);
      if (lookahead == 'r') ADVANCE(476);
      if (lookahead == 'v') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(952);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(728);
      if (lookahead == 't') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(734);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(987);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(867);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(805);
      if (lookahead == 't') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(868);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(972);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'd') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'd') ADVANCE(1027);
      if (lookahead == 'n') ADVANCE(944);
      if (lookahead == 'r') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'd') ADVANCE(1027);
      if (lookahead == 'n') ADVANCE(944);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'd') ADVANCE(1027);
      if (lookahead == 'n') ADVANCE(956);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'd') ADVANCE(1027);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'd') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'd') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'd') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'd') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'd') ADVANCE(595);
      if (lookahead == 's') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'd') ADVANCE(672);
      if (lookahead == 'n') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'd') ADVANCE(955);
      if (lookahead == 't') ADVANCE(761);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'd') ADVANCE(955);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'd') ADVANCE(741);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'd') ADVANCE(919);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'd') ADVANCE(922);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'd') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'd') ADVANCE(909);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'd') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'd') ADVANCE(687);
      if (lookahead == 'n') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'd') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'd') ADVANCE(772);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'd') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(1006);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(990);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(999);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(702);
      if (lookahead == 'i') ADVANCE(798);
      if (lookahead == 'o') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(702);
      if (lookahead == 'i') ADVANCE(798);
      if (lookahead == 'o') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(702);
      if (lookahead == 'i') ADVANCE(807);
      if (lookahead == 'o') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(702);
      if (lookahead == 'o') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(702);
      if (lookahead == 'o') ADVANCE(901);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(629);
      if (lookahead == 't') ADVANCE(606);
      if (lookahead == 'u') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(870);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(784);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(661);
      if (lookahead == 'i') ADVANCE(988);
      if (lookahead == 'o') ADVANCE(875);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(661);
      if (lookahead == 'i') ADVANCE(988);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(958);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(671);
      if (lookahead == 'h') ADVANCE(712);
      if (lookahead == 'i') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(671);
      if (lookahead == 'h') ADVANCE(712);
      if (lookahead == 'i') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(748);
      if (lookahead == 'y') ADVANCE(1005);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(893);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(840);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(745);
      if (lookahead == 'u') ADVANCE(906);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(925);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(898);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(935);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(917);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(880);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(896);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(969);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(883);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(951);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(953);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(918);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(826);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(699);
      if (lookahead == 'h') ADVANCE(712);
      if (lookahead == 'i') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(722);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(903);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(872);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(895);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(927);
      if (lookahead == 'i') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(927);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(899);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(874);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(939);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(643);
      if (lookahead == 't') ADVANCE(606);
      if (lookahead == 'u') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'f') ADVANCE(605);
      if (lookahead == 's') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'f') ADVANCE(746);
      if (lookahead == 's') ADVANCE(871);
      if (lookahead == 'v') ADVANCE(1023);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'f') ADVANCE(749);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'f') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'f') ADVANCE(733);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'f') ADVANCE(866);
      if (lookahead == 't') ADVANCE(989);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'f') ADVANCE(866);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'f') ADVANCE(937);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'f') ADVANCE(970);
      if (lookahead == 'n') ADVANCE(656);
      if (lookahead == 's') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'f') ADVANCE(970);
      if (lookahead == 's') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'g') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'g') ADVANCE(1033);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'g') ADVANCE(1003);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'g') ADVANCE(1019);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'g') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'h') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'h') ADVANCE(1037);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'h') ADVANCE(915);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'h') ADVANCE(712);
      if (lookahead == 'i') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'h') ADVANCE(775);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(814);
      if (lookahead == 'r') ADVANCE(977);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(814);
      if (lookahead == 'r') ADVANCE(981);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(814);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(988);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(842);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(856);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(841);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(833);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(835);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(825);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(957);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(857);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(929);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(859);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(861);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(940);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'k') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'k') ADVANCE(912);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'l') ADVANCE(976);
      if (lookahead == 'u') ADVANCE(834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'l') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'l') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'l') ADVANCE(926);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'l') ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'l') ADVANCE(800);
      if (lookahead == 's') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'l') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'l') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'l') ADVANCE(994);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'l') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'l') ADVANCE(982);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'l') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'l') ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'l') ADVANCE(794);
      if (lookahead == 'n') ADVANCE(975);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'l') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'l') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'l') ADVANCE(950);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'l') ADVANCE(979);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'l') ADVANCE(930);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'l') ADVANCE(984);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'l') ADVANCE(985);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'l') ADVANCE(782);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'l') ADVANCE(806);
      if (lookahead == 'n') ADVANCE(986);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'm') ADVANCE(869);
      if (lookahead == 'n') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'm') ADVANCE(869);
      if (lookahead == 'n') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'm') ADVANCE(869);
      if (lookahead == 'n') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'm') ADVANCE(869);
      if (lookahead == 'n') ADVANCE(644);
      if (lookahead == 's') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'm') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'm') ADVANCE(1008);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'm') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'm') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'm') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(648);
      if (lookahead == 'x') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(648);
      if (lookahead == 'x') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(648);
      if (lookahead == 'x') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(769);
      if (lookahead == 's') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(594);
      if (lookahead == 'r') ADVANCE(591);
      if (lookahead == 'v') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(754);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(755);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(756);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(947);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(920);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(665);
      if (lookahead == 'x') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(968);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(942);
      if (lookahead == 'u') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(974);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(877);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(875);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(983);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(822);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(881);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(882);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(836);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(843);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(847);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(838);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(902);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'p') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'p') ADVANCE(946);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'p') ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'p') ADVANCE(948);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'p') ADVANCE(921);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'p') ADVANCE(954);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'p') ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(591);
      if (lookahead == 'v') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(1029);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(1035);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(1031);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(938);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(993);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(592);
      if (lookahead == 'v') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(854);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(945);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(766);
      if (lookahead == 'u') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(910);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(793);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(913);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(725);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(923);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(928);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(964);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 's') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 's') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 's') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 's') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 's') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 's') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 's') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 's') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 's') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 's') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 's') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 's') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 's') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 's') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 's') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 's') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 's') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 's') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 's') ADVANCE(932);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 's') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 's') ADVANCE(924);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 's') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 's') ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 's') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 's') ADVANCE(871);
      if (lookahead == 'v') ADVANCE(1023);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 's') ADVANCE(858);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 's') ADVANCE(959);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 's') ADVANCE(860);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 's') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 's') ADVANCE(966);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 's') ADVANCE(720);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 's') ADVANCE(778);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 's') ADVANCE(934);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 's') ADVANCE(740);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 't') ADVANCE(606);
      if (lookahead == 'u') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 't') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 't') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 't') ADVANCE(757);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 't') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 't') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 't') ADVANCE(1025);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 't') ADVANCE(1013);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 't') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 't') ADVANCE(1015);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 't') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 't') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 't') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 't') ADVANCE(1001);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 't') ADVANCE(758);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 't') ADVANCE(759);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 't') ADVANCE(761);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 't') ADVANCE(911);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 't') ADVANCE(914);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 't') ADVANCE(673);
      if (lookahead == 'y') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 't') ADVANCE(673);
      if (lookahead == 'y') ADVANCE(908);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 't') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 't') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 't') ADVANCE(916);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 't') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 't') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 't') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 't') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 't') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 't') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 't') ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 't') ADVANCE(781);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'u') ADVANCE(834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'u') ADVANCE(878);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'u') ADVANCE(963);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'u') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'u') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'u') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'u') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'u') ADVANCE(906);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'u') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'u') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'u') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'u') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'u') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'u') ADVANCE(967);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'u') ADVANCE(900);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'v') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'w') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'x') ADVANCE(949);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'y') ADVANCE(1005);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'y') ADVANCE(1021);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'y') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'y') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'y') ADVANCE(936);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_default_identifier);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(anon_sym_Code);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(anon_sym_Code);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(anon_sym_Concept);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(anon_sym_Concept);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(anon_sym_asc);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(832);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(anon_sym_ascending);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(anon_sym_by);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(anon_sym_by);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(anon_sym_code);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 's') ADVANCE(995);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(anon_sym_code);
      if (lookahead == 's') ADVANCE(402);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(anon_sym_codesystem);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 's') ADVANCE(1011);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(anon_sym_codesystem);
      if (lookahead == 's') ADVANCE(1010);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(anon_sym_codesystems);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(anon_sym_codesystems);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(anon_sym_concept);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(anon_sym_concept);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(anon_sym_desc);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(848);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(anon_sym_desc);
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(anon_sym_descending);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(anon_sym_descending);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(anon_sym_display);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(anon_sym_display);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(anon_sym_div);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(anon_sym_div);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(anon_sym_fluent);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(anon_sym_fluent);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(anon_sym_mod);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(anon_sym_parameter);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(anon_sym_predecessor);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(anon_sym_predecessor);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(anon_sym_starting);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(anon_sym_starting);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(anon_sym_successor);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(anon_sym_successor);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(anon_sym_width);
      if (lookahead == '\'') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(996);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '_') ADVANCE(23);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym_single_quote_string_fragment);
      if (lookahead == '\n') ADVANCE(1045);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(1040);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym_single_quote_string_fragment);
      if (lookahead == '*') ADVANCE(1043);
      if (lookahead == '/') ADVANCE(1040);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(1045);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym_single_quote_string_fragment);
      if (lookahead == '*') ADVANCE(1042);
      if (lookahead == '/') ADVANCE(1045);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(1043);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym_single_quote_string_fragment);
      if (lookahead == '*') ADVANCE(1042);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(1043);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym_single_quote_string_fragment);
      if (lookahead == '/') ADVANCE(1041);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(1044);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(1045);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym_single_quote_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(1045);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '\n') ADVANCE(1051);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1046);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '*') ADVANCE(1049);
      if (lookahead == '/') ADVANCE(1046);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1051);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '*') ADVANCE(1048);
      if (lookahead == '/') ADVANCE(1051);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1049);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '*') ADVANCE(1048);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1049);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '/') ADVANCE(1047);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(1050);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1051);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1051);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1052);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1053);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '\'') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1055);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1056);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1058);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 413},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 9},
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 12},
  [7] = {.lex_state = 12},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 11},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 11},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 11},
  [18] = {.lex_state = 11},
  [19] = {.lex_state = 11},
  [20] = {.lex_state = 11},
  [21] = {.lex_state = 11},
  [22] = {.lex_state = 11},
  [23] = {.lex_state = 11},
  [24] = {.lex_state = 11},
  [25] = {.lex_state = 11},
  [26] = {.lex_state = 11},
  [27] = {.lex_state = 11},
  [28] = {.lex_state = 11},
  [29] = {.lex_state = 11},
  [30] = {.lex_state = 11},
  [31] = {.lex_state = 11},
  [32] = {.lex_state = 11},
  [33] = {.lex_state = 11},
  [34] = {.lex_state = 14},
  [35] = {.lex_state = 13},
  [36] = {.lex_state = 9},
  [37] = {.lex_state = 9},
  [38] = {.lex_state = 9},
  [39] = {.lex_state = 9},
  [40] = {.lex_state = 9},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 10},
  [43] = {.lex_state = 9},
  [44] = {.lex_state = 11},
  [45] = {.lex_state = 11},
  [46] = {.lex_state = 11},
  [47] = {.lex_state = 11},
  [48] = {.lex_state = 11},
  [49] = {.lex_state = 11},
  [50] = {.lex_state = 11},
  [51] = {.lex_state = 11},
  [52] = {.lex_state = 11},
  [53] = {.lex_state = 11},
  [54] = {.lex_state = 11},
  [55] = {.lex_state = 17},
  [56] = {.lex_state = 15},
  [57] = {.lex_state = 18},
  [58] = {.lex_state = 15},
  [59] = {.lex_state = 18},
  [60] = {.lex_state = 18},
  [61] = {.lex_state = 18},
  [62] = {.lex_state = 18},
  [63] = {.lex_state = 18},
  [64] = {.lex_state = 18},
  [65] = {.lex_state = 15},
  [66] = {.lex_state = 15},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 15},
  [69] = {.lex_state = 18},
  [70] = {.lex_state = 15},
  [71] = {.lex_state = 15},
  [72] = {.lex_state = 15},
  [73] = {.lex_state = 18},
  [74] = {.lex_state = 15},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
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
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 412},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 412},
  [128] = {.lex_state = 412},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 8},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 8},
  [154] = {.lex_state = 8},
  [155] = {.lex_state = 413},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 413},
  [159] = {.lex_state = 413},
  [160] = {.lex_state = 413},
  [161] = {.lex_state = 413},
  [162] = {.lex_state = 413},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 413},
  [165] = {.lex_state = 413},
  [166] = {.lex_state = 413},
  [167] = {.lex_state = 413},
  [168] = {.lex_state = 28},
  [169] = {.lex_state = 28},
  [170] = {.lex_state = 413},
  [171] = {.lex_state = 413},
  [172] = {.lex_state = 413},
  [173] = {.lex_state = 413},
  [174] = {.lex_state = 413},
  [175] = {.lex_state = 413},
  [176] = {.lex_state = 413},
  [177] = {.lex_state = 413},
  [178] = {.lex_state = 413},
  [179] = {.lex_state = 413},
  [180] = {.lex_state = 413},
  [181] = {.lex_state = 413},
  [182] = {.lex_state = 413},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 413},
  [185] = {.lex_state = 413},
  [186] = {.lex_state = 413},
  [187] = {.lex_state = 413},
  [188] = {.lex_state = 413},
  [189] = {.lex_state = 413},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 413},
  [192] = {.lex_state = 413},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 413},
  [195] = {.lex_state = 413},
  [196] = {.lex_state = 19},
  [197] = {.lex_state = 413},
  [198] = {.lex_state = 413},
  [199] = {.lex_state = 413},
  [200] = {.lex_state = 413},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 413},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 413},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 16},
  [207] = {.lex_state = 16},
  [208] = {.lex_state = 16},
  [209] = {.lex_state = 16},
  [210] = {.lex_state = 413},
  [211] = {.lex_state = 16},
  [212] = {.lex_state = 16},
  [213] = {.lex_state = 16},
  [214] = {.lex_state = 413},
  [215] = {.lex_state = 20},
  [216] = {.lex_state = 16},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 16},
  [219] = {.lex_state = 413},
  [220] = {.lex_state = 413},
  [221] = {.lex_state = 21},
  [222] = {.lex_state = 16},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 413},
  [225] = {.lex_state = 22},
  [226] = {.lex_state = 16},
  [227] = {.lex_state = 16},
  [228] = {.lex_state = 16},
  [229] = {.lex_state = 21},
  [230] = {.lex_state = 21},
  [231] = {.lex_state = 16},
  [232] = {.lex_state = 22},
  [233] = {.lex_state = 16},
  [234] = {.lex_state = 21},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 16},
  [237] = {.lex_state = 22},
  [238] = {.lex_state = 22},
  [239] = {.lex_state = 21},
  [240] = {.lex_state = 16},
  [241] = {.lex_state = 16},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 21},
  [244] = {.lex_state = 16},
  [245] = {.lex_state = 16},
  [246] = {.lex_state = 413},
  [247] = {.lex_state = 21},
  [248] = {.lex_state = 22},
  [249] = {.lex_state = 20},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 28},
  [252] = {.lex_state = 16},
  [253] = {.lex_state = 16},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 16},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 16},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 16},
  [270] = {.lex_state = 16},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 16},
  [274] = {.lex_state = 16},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 28},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 28},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
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
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_version] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_Code] = ACTIONS(1),
    [anon_sym_Concept] = ACTIONS(1),
    [anon_sym_by] = ACTIONS(1),
    [anon_sym_code] = ACTIONS(1),
    [anon_sym_codesystem] = ACTIONS(1),
    [anon_sym_codesystems] = ACTIONS(1),
    [anon_sym_concept] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_desc] = ACTIONS(1),
    [anon_sym_descending] = ACTIONS(1),
    [anon_sym_display] = ACTIONS(1),
    [anon_sym_div] = ACTIONS(1),
    [anon_sym_fluent] = ACTIONS(1),
    [anon_sym_mod] = ACTIONS(1),
    [anon_sym_parameter] = ACTIONS(1),
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
    [sym_cql_library] = STATE(304),
    [sym_definition] = STATE(159),
    [sym_library_definition] = STATE(158),
    [sym_using_definition] = STATE(197),
    [sym_include_definition] = STATE(197),
    [sym_valueset_definition] = STATE(197),
    [sym_access_modifier] = STATE(296),
    [sym_statement] = STATE(193),
    [sym_context_definition] = STATE(255),
    [sym_function_definition] = STATE(255),
    [sym_expression_definition] = STATE(255),
    [aux_sym_cql_library_repeat1] = STATE(159),
    [aux_sym_cql_library_repeat2] = STATE(193),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_library] = ACTIONS(7),
    [anon_sym_using] = ACTIONS(9),
    [anon_sym_include] = ACTIONS(11),
    [anon_sym_valueset] = ACTIONS(13),
    [anon_sym_public] = ACTIONS(15),
    [anon_sym_private] = ACTIONS(15),
    [anon_sym_context] = ACTIONS(17),
    [anon_sym_define] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_expression] = STATE(77),
    [sym_expression_term] = STATE(143),
    [sym_term] = STATE(142),
    [sym_quantity] = STATE(130),
    [sym_literal] = STATE(149),
    [sym_qualified_identifier_expression] = STATE(274),
    [sym_boolean_expression] = STATE(143),
    [sym_type_expression] = STATE(143),
    [sym_cast_expression] = STATE(143),
    [sym_not_expression] = STATE(143),
    [sym_existence_expression] = STATE(143),
    [sym_between_expression] = STATE(143),
    [sym_equality_expression] = STATE(143),
    [sym_inequality_expression] = STATE(143),
    [sym_and_expression] = STATE(143),
    [sym_or_expression] = STATE(143),
    [sym_implies_expression] = STATE(143),
    [sym_in_fix_set_expression] = STATE(143),
    [sym_date_time_precision] = STATE(281),
    [sym_plural_date_time_precision] = STATE(290),
    [sym_duration_between_expression] = STATE(143),
    [sym_difference_between_expression] = STATE(143),
    [sym_date_time_precision_specifier] = STATE(15),
    [sym_membership_expression] = STATE(143),
    [sym_timing_expression] = STATE(143),
    [sym_query] = STATE(143),
    [sym_query_source] = STATE(233),
    [sym_aliased_query_source] = STATE(97),
    [sym_query_source_clause] = STATE(120),
    [sym_retrieve] = STATE(127),
    [sym_identifier] = STATE(218),
    [sym_quoted_identifier] = STATE(252),
    [sym_referential_identifier] = STATE(228),
    [sym_keyword_identifier] = STATE(218),
    [sym_string] = STATE(145),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(72),
    [anon_sym_library] = ACTIONS(21),
    [anon_sym_using] = ACTIONS(21),
    [anon_sym_called] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(21),
    [anon_sym_valueset] = ACTIONS(21),
    [anon_sym_public] = ACTIONS(21),
    [anon_sym_private] = ACTIONS(21),
    [anon_sym_context] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_function] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(25),
    [aux_sym_literal_token1] = ACTIONS(27),
    [anon_sym_null] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(31),
    [anon_sym_cast] = ACTIONS(33),
    [anon_sym_exists] = ACTIONS(35),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_implies] = ACTIONS(21),
    [anon_sym_union] = ACTIONS(21),
    [anon_sym_intersect] = ACTIONS(21),
    [anon_sym_except] = ACTIONS(21),
    [anon_sym_year] = ACTIONS(37),
    [anon_sym_month] = ACTIONS(37),
    [anon_sym_week] = ACTIONS(37),
    [anon_sym_day] = ACTIONS(37),
    [anon_sym_hour] = ACTIONS(37),
    [anon_sym_minute] = ACTIONS(37),
    [anon_sym_second] = ACTIONS(37),
    [anon_sym_millisecond] = ACTIONS(37),
    [anon_sym_years] = ACTIONS(39),
    [anon_sym_months] = ACTIONS(39),
    [anon_sym_weeks] = ACTIONS(39),
    [anon_sym_days] = ACTIONS(39),
    [anon_sym_hours] = ACTIONS(39),
    [anon_sym_minutes] = ACTIONS(39),
    [anon_sym_seconds] = ACTIONS(39),
    [anon_sym_milliseconds] = ACTIONS(39),
    [anon_sym_date] = ACTIONS(21),
    [anon_sym_time] = ACTIONS(21),
    [anon_sym_timezone] = ACTIONS(21),
    [anon_sym_timezoneoffset] = ACTIONS(21),
    [anon_sym_duration] = ACTIONS(41),
    [anon_sym_in] = ACTIONS(43),
    [anon_sym_difference] = ACTIONS(45),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_orbefore] = ACTIONS(49),
    [anon_sym_orafter] = ACTIONS(49),
    [anon_sym_ormore] = ACTIONS(49),
    [anon_sym_orless] = ACTIONS(49),
    [anon_sym_starts] = ACTIONS(21),
    [anon_sym_ends] = ACTIONS(21),
    [anon_sym_start] = ACTIONS(21),
    [anon_sym_end] = ACTIONS(21),
    [anon_sym_includes] = ACTIONS(21),
    [anon_sym_meets] = ACTIONS(21),
    [anon_sym_overlaps] = ACTIONS(21),
    [anon_sym_where] = ACTIONS(21),
    [anon_sym_from] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_version] = ACTIONS(21),
    [sym_default_identifier] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(58),
    [anon_sym_asc] = ACTIONS(21),
    [anon_sym_ascending] = ACTIONS(21),
    [anon_sym_by] = ACTIONS(21),
    [anon_sym_code] = ACTIONS(21),
    [anon_sym_codesystem] = ACTIONS(21),
    [anon_sym_codesystems] = ACTIONS(21),
    [anon_sym_concept] = ACTIONS(21),
    [anon_sym_default] = ACTIONS(21),
    [anon_sym_desc] = ACTIONS(21),
    [anon_sym_descending] = ACTIONS(21),
    [anon_sym_display] = ACTIONS(21),
    [anon_sym_div] = ACTIONS(21),
    [anon_sym_fluent] = ACTIONS(21),
    [anon_sym_mod] = ACTIONS(21),
    [anon_sym_parameter] = ACTIONS(21),
    [anon_sym_predecessor] = ACTIONS(21),
    [anon_sym_starting] = ACTIONS(21),
    [anon_sym_successor] = ACTIONS(21),
    [anon_sym_width] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(61),
    [sym_number] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_expression] = STATE(108),
    [sym_expression_term] = STATE(143),
    [sym_term] = STATE(142),
    [sym_quantity] = STATE(130),
    [sym_literal] = STATE(149),
    [sym_qualified_identifier_expression] = STATE(274),
    [sym_boolean_expression] = STATE(143),
    [sym_type_expression] = STATE(143),
    [sym_cast_expression] = STATE(143),
    [sym_not_expression] = STATE(143),
    [sym_existence_expression] = STATE(143),
    [sym_between_expression] = STATE(143),
    [sym_equality_expression] = STATE(143),
    [sym_inequality_expression] = STATE(143),
    [sym_and_expression] = STATE(143),
    [sym_or_expression] = STATE(143),
    [sym_implies_expression] = STATE(143),
    [sym_in_fix_set_expression] = STATE(143),
    [sym_date_time_precision] = STATE(281),
    [sym_plural_date_time_precision] = STATE(290),
    [sym_duration_between_expression] = STATE(143),
    [sym_difference_between_expression] = STATE(143),
    [sym_date_time_precision_specifier] = STATE(26),
    [sym_membership_expression] = STATE(143),
    [sym_timing_expression] = STATE(143),
    [sym_query] = STATE(143),
    [sym_query_source] = STATE(233),
    [sym_aliased_query_source] = STATE(97),
    [sym_query_source_clause] = STATE(152),
    [sym_retrieve] = STATE(153),
    [sym_identifier] = STATE(218),
    [sym_quoted_identifier] = STATE(252),
    [sym_referential_identifier] = STATE(228),
    [sym_keyword_identifier] = STATE(218),
    [sym_string] = STATE(145),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(72),
    [anon_sym_library] = ACTIONS(21),
    [anon_sym_using] = ACTIONS(21),
    [anon_sym_called] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(21),
    [anon_sym_valueset] = ACTIONS(21),
    [anon_sym_public] = ACTIONS(21),
    [anon_sym_private] = ACTIONS(21),
    [anon_sym_context] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_function] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(25),
    [aux_sym_literal_token1] = ACTIONS(27),
    [anon_sym_null] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_cast] = ACTIONS(33),
    [anon_sym_exists] = ACTIONS(67),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_implies] = ACTIONS(21),
    [anon_sym_union] = ACTIONS(21),
    [anon_sym_intersect] = ACTIONS(21),
    [anon_sym_except] = ACTIONS(21),
    [anon_sym_year] = ACTIONS(37),
    [anon_sym_month] = ACTIONS(37),
    [anon_sym_week] = ACTIONS(37),
    [anon_sym_day] = ACTIONS(37),
    [anon_sym_hour] = ACTIONS(37),
    [anon_sym_minute] = ACTIONS(37),
    [anon_sym_second] = ACTIONS(37),
    [anon_sym_millisecond] = ACTIONS(37),
    [anon_sym_years] = ACTIONS(39),
    [anon_sym_months] = ACTIONS(39),
    [anon_sym_weeks] = ACTIONS(39),
    [anon_sym_days] = ACTIONS(39),
    [anon_sym_hours] = ACTIONS(39),
    [anon_sym_minutes] = ACTIONS(39),
    [anon_sym_seconds] = ACTIONS(39),
    [anon_sym_milliseconds] = ACTIONS(39),
    [anon_sym_date] = ACTIONS(21),
    [anon_sym_time] = ACTIONS(21),
    [anon_sym_timezone] = ACTIONS(21),
    [anon_sym_timezoneoffset] = ACTIONS(21),
    [anon_sym_duration] = ACTIONS(41),
    [anon_sym_in] = ACTIONS(69),
    [anon_sym_difference] = ACTIONS(45),
    [anon_sym_contains] = ACTIONS(71),
    [anon_sym_orbefore] = ACTIONS(49),
    [anon_sym_orafter] = ACTIONS(49),
    [anon_sym_ormore] = ACTIONS(49),
    [anon_sym_orless] = ACTIONS(49),
    [anon_sym_starts] = ACTIONS(21),
    [anon_sym_ends] = ACTIONS(21),
    [anon_sym_start] = ACTIONS(21),
    [anon_sym_end] = ACTIONS(21),
    [anon_sym_includes] = ACTIONS(21),
    [anon_sym_meets] = ACTIONS(21),
    [anon_sym_overlaps] = ACTIONS(21),
    [anon_sym_where] = ACTIONS(21),
    [anon_sym_from] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_version] = ACTIONS(21),
    [sym_default_identifier] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(58),
    [anon_sym_asc] = ACTIONS(21),
    [anon_sym_ascending] = ACTIONS(21),
    [anon_sym_by] = ACTIONS(21),
    [anon_sym_code] = ACTIONS(21),
    [anon_sym_codesystem] = ACTIONS(21),
    [anon_sym_codesystems] = ACTIONS(21),
    [anon_sym_concept] = ACTIONS(21),
    [anon_sym_default] = ACTIONS(21),
    [anon_sym_desc] = ACTIONS(21),
    [anon_sym_descending] = ACTIONS(21),
    [anon_sym_display] = ACTIONS(21),
    [anon_sym_div] = ACTIONS(21),
    [anon_sym_fluent] = ACTIONS(21),
    [anon_sym_mod] = ACTIONS(21),
    [anon_sym_parameter] = ACTIONS(21),
    [anon_sym_predecessor] = ACTIONS(21),
    [anon_sym_starting] = ACTIONS(21),
    [anon_sym_successor] = ACTIONS(21),
    [anon_sym_width] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(61),
    [sym_number] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_expression] = STATE(108),
    [sym_expression_term] = STATE(143),
    [sym_term] = STATE(142),
    [sym_quantity] = STATE(130),
    [sym_literal] = STATE(149),
    [sym_qualified_identifier_expression] = STATE(274),
    [sym_boolean_expression] = STATE(143),
    [sym_type_expression] = STATE(143),
    [sym_cast_expression] = STATE(143),
    [sym_not_expression] = STATE(143),
    [sym_existence_expression] = STATE(143),
    [sym_between_expression] = STATE(143),
    [sym_equality_expression] = STATE(143),
    [sym_inequality_expression] = STATE(143),
    [sym_and_expression] = STATE(143),
    [sym_or_expression] = STATE(143),
    [sym_implies_expression] = STATE(143),
    [sym_in_fix_set_expression] = STATE(143),
    [sym_date_time_precision] = STATE(281),
    [sym_plural_date_time_precision] = STATE(290),
    [sym_duration_between_expression] = STATE(143),
    [sym_difference_between_expression] = STATE(143),
    [sym_date_time_precision_specifier] = STATE(26),
    [sym_membership_expression] = STATE(143),
    [sym_timing_expression] = STATE(143),
    [sym_query] = STATE(143),
    [sym_query_source] = STATE(233),
    [sym_aliased_query_source] = STATE(97),
    [sym_query_source_clause] = STATE(152),
    [sym_retrieve] = STATE(153),
    [sym_identifier] = STATE(218),
    [sym_quoted_identifier] = STATE(252),
    [sym_referential_identifier] = STATE(228),
    [sym_keyword_identifier] = STATE(218),
    [sym_string] = STATE(145),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(72),
    [anon_sym_library] = ACTIONS(21),
    [anon_sym_using] = ACTIONS(21),
    [anon_sym_called] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(21),
    [anon_sym_valueset] = ACTIONS(21),
    [anon_sym_public] = ACTIONS(21),
    [anon_sym_private] = ACTIONS(21),
    [anon_sym_context] = ACTIONS(21),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_function] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(25),
    [aux_sym_literal_token1] = ACTIONS(27),
    [anon_sym_null] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_cast] = ACTIONS(33),
    [anon_sym_exists] = ACTIONS(67),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_implies] = ACTIONS(21),
    [anon_sym_union] = ACTIONS(21),
    [anon_sym_intersect] = ACTIONS(21),
    [anon_sym_except] = ACTIONS(21),
    [anon_sym_year] = ACTIONS(37),
    [anon_sym_month] = ACTIONS(37),
    [anon_sym_week] = ACTIONS(37),
    [anon_sym_day] = ACTIONS(37),
    [anon_sym_hour] = ACTIONS(37),
    [anon_sym_minute] = ACTIONS(37),
    [anon_sym_second] = ACTIONS(37),
    [anon_sym_millisecond] = ACTIONS(37),
    [anon_sym_years] = ACTIONS(39),
    [anon_sym_months] = ACTIONS(39),
    [anon_sym_weeks] = ACTIONS(39),
    [anon_sym_days] = ACTIONS(39),
    [anon_sym_hours] = ACTIONS(39),
    [anon_sym_minutes] = ACTIONS(39),
    [anon_sym_seconds] = ACTIONS(39),
    [anon_sym_milliseconds] = ACTIONS(39),
    [anon_sym_date] = ACTIONS(21),
    [anon_sym_time] = ACTIONS(21),
    [anon_sym_timezone] = ACTIONS(21),
    [anon_sym_timezoneoffset] = ACTIONS(21),
    [anon_sym_duration] = ACTIONS(41),
    [anon_sym_in] = ACTIONS(69),
    [anon_sym_difference] = ACTIONS(45),
    [anon_sym_contains] = ACTIONS(71),
    [anon_sym_orbefore] = ACTIONS(49),
    [anon_sym_orafter] = ACTIONS(49),
    [anon_sym_ormore] = ACTIONS(49),
    [anon_sym_orless] = ACTIONS(49),
    [anon_sym_starts] = ACTIONS(21),
    [anon_sym_ends] = ACTIONS(21),
    [anon_sym_start] = ACTIONS(21),
    [anon_sym_end] = ACTIONS(21),
    [anon_sym_includes] = ACTIONS(21),
    [anon_sym_meets] = ACTIONS(21),
    [anon_sym_overlaps] = ACTIONS(21),
    [anon_sym_where] = ACTIONS(21),
    [anon_sym_from] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_version] = ACTIONS(21),
    [sym_default_identifier] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [anon_sym_asc] = ACTIONS(21),
    [anon_sym_ascending] = ACTIONS(21),
    [anon_sym_by] = ACTIONS(21),
    [anon_sym_code] = ACTIONS(21),
    [anon_sym_codesystem] = ACTIONS(21),
    [anon_sym_codesystems] = ACTIONS(21),
    [anon_sym_concept] = ACTIONS(21),
    [anon_sym_default] = ACTIONS(21),
    [anon_sym_desc] = ACTIONS(21),
    [anon_sym_descending] = ACTIONS(21),
    [anon_sym_display] = ACTIONS(21),
    [anon_sym_div] = ACTIONS(21),
    [anon_sym_fluent] = ACTIONS(21),
    [anon_sym_mod] = ACTIONS(21),
    [anon_sym_parameter] = ACTIONS(21),
    [anon_sym_predecessor] = ACTIONS(21),
    [anon_sym_starting] = ACTIONS(21),
    [anon_sym_successor] = ACTIONS(21),
    [anon_sym_width] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(61),
    [sym_number] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_expression] = STATE(77),
    [sym_expression_term] = STATE(143),
    [sym_term] = STATE(142),
    [sym_quantity] = STATE(130),
    [sym_literal] = STATE(149),
    [sym_qualified_identifier_expression] = STATE(274),
    [sym_boolean_expression] = STATE(143),
    [sym_type_expression] = STATE(143),
    [sym_cast_expression] = STATE(143),
    [sym_not_expression] = STATE(143),
    [sym_existence_expression] = STATE(143),
    [sym_between_expression] = STATE(143),
    [sym_equality_expression] = STATE(143),
    [sym_inequality_expression] = STATE(143),
    [sym_and_expression] = STATE(143),
    [sym_or_expression] = STATE(143),
    [sym_implies_expression] = STATE(143),
    [sym_in_fix_set_expression] = STATE(143),
    [sym_date_time_precision] = STATE(281),
    [sym_plural_date_time_precision] = STATE(290),
    [sym_duration_between_expression] = STATE(143),
    [sym_difference_between_expression] = STATE(143),
    [sym_date_time_precision_specifier] = STATE(15),
    [sym_membership_expression] = STATE(143),
    [sym_timing_expression] = STATE(143),
    [sym_query] = STATE(143),
    [sym_query_source] = STATE(233),
    [sym_aliased_query_source] = STATE(97),
    [sym_query_source_clause] = STATE(120),
    [sym_retrieve] = STATE(127),
    [sym_identifier] = STATE(218),
    [sym_quoted_identifier] = STATE(252),
    [sym_referential_identifier] = STATE(228),
    [sym_keyword_identifier] = STATE(218),
    [sym_string] = STATE(145),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(72),
    [anon_sym_library] = ACTIONS(21),
    [anon_sym_using] = ACTIONS(21),
    [anon_sym_called] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(21),
    [anon_sym_valueset] = ACTIONS(21),
    [anon_sym_public] = ACTIONS(21),
    [anon_sym_private] = ACTIONS(21),
    [anon_sym_context] = ACTIONS(21),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_function] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(25),
    [aux_sym_literal_token1] = ACTIONS(27),
    [anon_sym_null] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(31),
    [anon_sym_cast] = ACTIONS(33),
    [anon_sym_exists] = ACTIONS(35),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_implies] = ACTIONS(21),
    [anon_sym_union] = ACTIONS(21),
    [anon_sym_intersect] = ACTIONS(21),
    [anon_sym_except] = ACTIONS(21),
    [anon_sym_year] = ACTIONS(37),
    [anon_sym_month] = ACTIONS(37),
    [anon_sym_week] = ACTIONS(37),
    [anon_sym_day] = ACTIONS(37),
    [anon_sym_hour] = ACTIONS(37),
    [anon_sym_minute] = ACTIONS(37),
    [anon_sym_second] = ACTIONS(37),
    [anon_sym_millisecond] = ACTIONS(37),
    [anon_sym_years] = ACTIONS(39),
    [anon_sym_months] = ACTIONS(39),
    [anon_sym_weeks] = ACTIONS(39),
    [anon_sym_days] = ACTIONS(39),
    [anon_sym_hours] = ACTIONS(39),
    [anon_sym_minutes] = ACTIONS(39),
    [anon_sym_seconds] = ACTIONS(39),
    [anon_sym_milliseconds] = ACTIONS(39),
    [anon_sym_date] = ACTIONS(21),
    [anon_sym_time] = ACTIONS(21),
    [anon_sym_timezone] = ACTIONS(21),
    [anon_sym_timezoneoffset] = ACTIONS(21),
    [anon_sym_duration] = ACTIONS(41),
    [anon_sym_in] = ACTIONS(43),
    [anon_sym_difference] = ACTIONS(45),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_orbefore] = ACTIONS(49),
    [anon_sym_orafter] = ACTIONS(49),
    [anon_sym_ormore] = ACTIONS(49),
    [anon_sym_orless] = ACTIONS(49),
    [anon_sym_starts] = ACTIONS(21),
    [anon_sym_ends] = ACTIONS(21),
    [anon_sym_start] = ACTIONS(21),
    [anon_sym_end] = ACTIONS(21),
    [anon_sym_includes] = ACTIONS(21),
    [anon_sym_meets] = ACTIONS(21),
    [anon_sym_overlaps] = ACTIONS(21),
    [anon_sym_where] = ACTIONS(21),
    [anon_sym_from] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_version] = ACTIONS(21),
    [sym_default_identifier] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [anon_sym_asc] = ACTIONS(21),
    [anon_sym_ascending] = ACTIONS(21),
    [anon_sym_by] = ACTIONS(21),
    [anon_sym_code] = ACTIONS(21),
    [anon_sym_codesystem] = ACTIONS(21),
    [anon_sym_codesystems] = ACTIONS(21),
    [anon_sym_concept] = ACTIONS(21),
    [anon_sym_default] = ACTIONS(21),
    [anon_sym_desc] = ACTIONS(21),
    [anon_sym_descending] = ACTIONS(21),
    [anon_sym_display] = ACTIONS(21),
    [anon_sym_div] = ACTIONS(21),
    [anon_sym_fluent] = ACTIONS(21),
    [anon_sym_mod] = ACTIONS(21),
    [anon_sym_parameter] = ACTIONS(21),
    [anon_sym_predecessor] = ACTIONS(21),
    [anon_sym_starting] = ACTIONS(21),
    [anon_sym_successor] = ACTIONS(21),
    [anon_sym_width] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(61),
    [sym_number] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_expression] = STATE(90),
    [sym_expression_term] = STATE(143),
    [sym_term] = STATE(142),
    [sym_quantity] = STATE(130),
    [sym_literal] = STATE(149),
    [sym_qualified_identifier_expression] = STATE(274),
    [sym_boolean_expression] = STATE(143),
    [sym_type_expression] = STATE(143),
    [sym_cast_expression] = STATE(143),
    [sym_not_expression] = STATE(143),
    [sym_existence_expression] = STATE(143),
    [sym_between_expression] = STATE(143),
    [sym_equality_expression] = STATE(143),
    [sym_inequality_expression] = STATE(143),
    [sym_and_expression] = STATE(143),
    [sym_or_expression] = STATE(143),
    [sym_implies_expression] = STATE(143),
    [sym_in_fix_set_expression] = STATE(143),
    [sym_plural_date_time_precision] = STATE(290),
    [sym_duration_between_expression] = STATE(143),
    [sym_difference_between_expression] = STATE(143),
    [sym_membership_expression] = STATE(143),
    [sym_timing_expression] = STATE(143),
    [sym_query] = STATE(143),
    [sym_query_source] = STATE(233),
    [sym_aliased_query_source] = STATE(97),
    [sym_query_source_clause] = STATE(120),
    [sym_retrieve] = STATE(127),
    [sym_identifier] = STATE(218),
    [sym_quoted_identifier] = STATE(252),
    [sym_referential_identifier] = STATE(228),
    [sym_keyword_identifier] = STATE(218),
    [sym_string] = STATE(145),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(72),
    [anon_sym_library] = ACTIONS(21),
    [anon_sym_using] = ACTIONS(21),
    [anon_sym_called] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(21),
    [anon_sym_valueset] = ACTIONS(21),
    [anon_sym_public] = ACTIONS(21),
    [anon_sym_private] = ACTIONS(21),
    [anon_sym_context] = ACTIONS(21),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_function] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_external] = ACTIONS(79),
    [aux_sym_literal_token1] = ACTIONS(27),
    [anon_sym_null] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(31),
    [anon_sym_cast] = ACTIONS(33),
    [anon_sym_exists] = ACTIONS(35),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_implies] = ACTIONS(21),
    [anon_sym_union] = ACTIONS(21),
    [anon_sym_intersect] = ACTIONS(21),
    [anon_sym_except] = ACTIONS(21),
    [anon_sym_years] = ACTIONS(39),
    [anon_sym_months] = ACTIONS(39),
    [anon_sym_weeks] = ACTIONS(39),
    [anon_sym_days] = ACTIONS(39),
    [anon_sym_hours] = ACTIONS(39),
    [anon_sym_minutes] = ACTIONS(39),
    [anon_sym_seconds] = ACTIONS(39),
    [anon_sym_milliseconds] = ACTIONS(39),
    [anon_sym_date] = ACTIONS(21),
    [anon_sym_time] = ACTIONS(21),
    [anon_sym_timezone] = ACTIONS(21),
    [anon_sym_timezoneoffset] = ACTIONS(21),
    [anon_sym_duration] = ACTIONS(41),
    [anon_sym_in] = ACTIONS(43),
    [anon_sym_difference] = ACTIONS(45),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_orbefore] = ACTIONS(49),
    [anon_sym_orafter] = ACTIONS(49),
    [anon_sym_ormore] = ACTIONS(49),
    [anon_sym_orless] = ACTIONS(49),
    [anon_sym_starts] = ACTIONS(21),
    [anon_sym_ends] = ACTIONS(21),
    [anon_sym_start] = ACTIONS(21),
    [anon_sym_end] = ACTIONS(21),
    [anon_sym_includes] = ACTIONS(21),
    [anon_sym_meets] = ACTIONS(21),
    [anon_sym_overlaps] = ACTIONS(21),
    [anon_sym_where] = ACTIONS(21),
    [anon_sym_from] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_version] = ACTIONS(21),
    [sym_default_identifier] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [anon_sym_asc] = ACTIONS(21),
    [anon_sym_ascending] = ACTIONS(21),
    [anon_sym_by] = ACTIONS(21),
    [anon_sym_code] = ACTIONS(21),
    [anon_sym_codesystem] = ACTIONS(21),
    [anon_sym_codesystems] = ACTIONS(21),
    [anon_sym_concept] = ACTIONS(21),
    [anon_sym_default] = ACTIONS(21),
    [anon_sym_desc] = ACTIONS(21),
    [anon_sym_descending] = ACTIONS(21),
    [anon_sym_display] = ACTIONS(21),
    [anon_sym_div] = ACTIONS(21),
    [anon_sym_fluent] = ACTIONS(21),
    [anon_sym_mod] = ACTIONS(21),
    [anon_sym_parameter] = ACTIONS(21),
    [anon_sym_predecessor] = ACTIONS(21),
    [anon_sym_starting] = ACTIONS(21),
    [anon_sym_successor] = ACTIONS(21),
    [anon_sym_width] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(61),
    [sym_number] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_expression] = STATE(89),
    [sym_expression_term] = STATE(143),
    [sym_term] = STATE(142),
    [sym_quantity] = STATE(130),
    [sym_literal] = STATE(149),
    [sym_qualified_identifier_expression] = STATE(274),
    [sym_boolean_expression] = STATE(143),
    [sym_type_expression] = STATE(143),
    [sym_cast_expression] = STATE(143),
    [sym_not_expression] = STATE(143),
    [sym_existence_expression] = STATE(143),
    [sym_between_expression] = STATE(143),
    [sym_equality_expression] = STATE(143),
    [sym_inequality_expression] = STATE(143),
    [sym_and_expression] = STATE(143),
    [sym_or_expression] = STATE(143),
    [sym_implies_expression] = STATE(143),
    [sym_in_fix_set_expression] = STATE(143),
    [sym_plural_date_time_precision] = STATE(290),
    [sym_duration_between_expression] = STATE(143),
    [sym_difference_between_expression] = STATE(143),
    [sym_membership_expression] = STATE(143),
    [sym_timing_expression] = STATE(143),
    [sym_query] = STATE(143),
    [sym_query_source] = STATE(233),
    [sym_aliased_query_source] = STATE(97),
    [sym_query_source_clause] = STATE(120),
    [sym_retrieve] = STATE(127),
    [sym_identifier] = STATE(218),
    [sym_quoted_identifier] = STATE(252),
    [sym_referential_identifier] = STATE(228),
    [sym_keyword_identifier] = STATE(218),
    [sym_string] = STATE(145),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(72),
    [anon_sym_library] = ACTIONS(21),
    [anon_sym_using] = ACTIONS(21),
    [anon_sym_called] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(21),
    [anon_sym_valueset] = ACTIONS(21),
    [anon_sym_public] = ACTIONS(21),
    [anon_sym_private] = ACTIONS(21),
    [anon_sym_context] = ACTIONS(21),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_function] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_external] = ACTIONS(81),
    [aux_sym_literal_token1] = ACTIONS(27),
    [anon_sym_null] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(31),
    [anon_sym_cast] = ACTIONS(33),
    [anon_sym_exists] = ACTIONS(35),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_implies] = ACTIONS(21),
    [anon_sym_union] = ACTIONS(21),
    [anon_sym_intersect] = ACTIONS(21),
    [anon_sym_except] = ACTIONS(21),
    [anon_sym_years] = ACTIONS(39),
    [anon_sym_months] = ACTIONS(39),
    [anon_sym_weeks] = ACTIONS(39),
    [anon_sym_days] = ACTIONS(39),
    [anon_sym_hours] = ACTIONS(39),
    [anon_sym_minutes] = ACTIONS(39),
    [anon_sym_seconds] = ACTIONS(39),
    [anon_sym_milliseconds] = ACTIONS(39),
    [anon_sym_date] = ACTIONS(21),
    [anon_sym_time] = ACTIONS(21),
    [anon_sym_timezone] = ACTIONS(21),
    [anon_sym_timezoneoffset] = ACTIONS(21),
    [anon_sym_duration] = ACTIONS(41),
    [anon_sym_in] = ACTIONS(43),
    [anon_sym_difference] = ACTIONS(45),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_orbefore] = ACTIONS(49),
    [anon_sym_orafter] = ACTIONS(49),
    [anon_sym_ormore] = ACTIONS(49),
    [anon_sym_orless] = ACTIONS(49),
    [anon_sym_starts] = ACTIONS(21),
    [anon_sym_ends] = ACTIONS(21),
    [anon_sym_start] = ACTIONS(21),
    [anon_sym_end] = ACTIONS(21),
    [anon_sym_includes] = ACTIONS(21),
    [anon_sym_meets] = ACTIONS(21),
    [anon_sym_overlaps] = ACTIONS(21),
    [anon_sym_where] = ACTIONS(21),
    [anon_sym_from] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_version] = ACTIONS(21),
    [sym_default_identifier] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [anon_sym_asc] = ACTIONS(21),
    [anon_sym_ascending] = ACTIONS(21),
    [anon_sym_by] = ACTIONS(21),
    [anon_sym_code] = ACTIONS(21),
    [anon_sym_codesystem] = ACTIONS(21),
    [anon_sym_codesystems] = ACTIONS(21),
    [anon_sym_concept] = ACTIONS(21),
    [anon_sym_default] = ACTIONS(21),
    [anon_sym_desc] = ACTIONS(21),
    [anon_sym_descending] = ACTIONS(21),
    [anon_sym_display] = ACTIONS(21),
    [anon_sym_div] = ACTIONS(21),
    [anon_sym_fluent] = ACTIONS(21),
    [anon_sym_mod] = ACTIONS(21),
    [anon_sym_parameter] = ACTIONS(21),
    [anon_sym_predecessor] = ACTIONS(21),
    [anon_sym_starting] = ACTIONS(21),
    [anon_sym_successor] = ACTIONS(21),
    [anon_sym_width] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(61),
    [sym_number] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_expression] = STATE(76),
    [sym_expression_term] = STATE(143),
    [sym_term] = STATE(142),
    [sym_quantity] = STATE(130),
    [sym_literal] = STATE(149),
    [sym_qualified_identifier_expression] = STATE(274),
    [sym_boolean_expression] = STATE(143),
    [sym_type_expression] = STATE(143),
    [sym_cast_expression] = STATE(143),
    [sym_not_expression] = STATE(143),
    [sym_existence_expression] = STATE(143),
    [sym_between_expression] = STATE(143),
    [sym_equality_expression] = STATE(143),
    [sym_inequality_expression] = STATE(143),
    [sym_and_expression] = STATE(143),
    [sym_or_expression] = STATE(143),
    [sym_implies_expression] = STATE(143),
    [sym_in_fix_set_expression] = STATE(143),
    [sym_plural_date_time_precision] = STATE(290),
    [sym_duration_between_expression] = STATE(143),
    [sym_difference_between_expression] = STATE(143),
    [sym_membership_expression] = STATE(143),
    [sym_timing_expression] = STATE(143),
    [sym_query] = STATE(143),
    [sym_query_source] = STATE(233),
    [sym_aliased_query_source] = STATE(97),
    [sym_query_source_clause] = STATE(120),
    [sym_retrieve] = STATE(127),
    [sym_identifier] = STATE(218),
    [sym_quoted_identifier] = STATE(252),
    [sym_referential_identifier] = STATE(228),
    [sym_keyword_identifier] = STATE(218),
    [sym_string] = STATE(145),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(72),
    [anon_sym_library] = ACTIONS(21),
    [anon_sym_using] = ACTIONS(21),
    [anon_sym_called] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(21),
    [anon_sym_valueset] = ACTIONS(21),
    [anon_sym_public] = ACTIONS(21),
    [anon_sym_private] = ACTIONS(21),
    [anon_sym_context] = ACTIONS(21),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_function] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(25),
    [aux_sym_literal_token1] = ACTIONS(27),
    [anon_sym_null] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(31),
    [anon_sym_cast] = ACTIONS(33),
    [anon_sym_exists] = ACTIONS(35),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_implies] = ACTIONS(21),
    [anon_sym_union] = ACTIONS(21),
    [anon_sym_intersect] = ACTIONS(21),
    [anon_sym_except] = ACTIONS(21),
    [anon_sym_years] = ACTIONS(39),
    [anon_sym_months] = ACTIONS(39),
    [anon_sym_weeks] = ACTIONS(39),
    [anon_sym_days] = ACTIONS(39),
    [anon_sym_hours] = ACTIONS(39),
    [anon_sym_minutes] = ACTIONS(39),
    [anon_sym_seconds] = ACTIONS(39),
    [anon_sym_milliseconds] = ACTIONS(39),
    [anon_sym_date] = ACTIONS(21),
    [anon_sym_time] = ACTIONS(21),
    [anon_sym_timezone] = ACTIONS(21),
    [anon_sym_timezoneoffset] = ACTIONS(21),
    [anon_sym_duration] = ACTIONS(41),
    [anon_sym_in] = ACTIONS(43),
    [anon_sym_difference] = ACTIONS(45),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_orbefore] = ACTIONS(49),
    [anon_sym_orafter] = ACTIONS(49),
    [anon_sym_ormore] = ACTIONS(49),
    [anon_sym_orless] = ACTIONS(49),
    [anon_sym_starts] = ACTIONS(21),
    [anon_sym_ends] = ACTIONS(21),
    [anon_sym_start] = ACTIONS(21),
    [anon_sym_end] = ACTIONS(21),
    [anon_sym_includes] = ACTIONS(21),
    [anon_sym_meets] = ACTIONS(21),
    [anon_sym_overlaps] = ACTIONS(21),
    [anon_sym_where] = ACTIONS(21),
    [anon_sym_from] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_version] = ACTIONS(21),
    [sym_default_identifier] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [anon_sym_asc] = ACTIONS(21),
    [anon_sym_ascending] = ACTIONS(21),
    [anon_sym_by] = ACTIONS(21),
    [anon_sym_code] = ACTIONS(21),
    [anon_sym_codesystem] = ACTIONS(21),
    [anon_sym_codesystems] = ACTIONS(21),
    [anon_sym_concept] = ACTIONS(21),
    [anon_sym_default] = ACTIONS(21),
    [anon_sym_desc] = ACTIONS(21),
    [anon_sym_descending] = ACTIONS(21),
    [anon_sym_display] = ACTIONS(21),
    [anon_sym_div] = ACTIONS(21),
    [anon_sym_fluent] = ACTIONS(21),
    [anon_sym_mod] = ACTIONS(21),
    [anon_sym_parameter] = ACTIONS(21),
    [anon_sym_predecessor] = ACTIONS(21),
    [anon_sym_starting] = ACTIONS(21),
    [anon_sym_successor] = ACTIONS(21),
    [anon_sym_width] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(61),
    [sym_number] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym_expression] = STATE(118),
    [sym_expression_term] = STATE(143),
    [sym_term] = STATE(142),
    [sym_quantity] = STATE(130),
    [sym_literal] = STATE(149),
    [sym_qualified_identifier_expression] = STATE(274),
    [sym_boolean_expression] = STATE(143),
    [sym_type_expression] = STATE(143),
    [sym_cast_expression] = STATE(143),
    [sym_not_expression] = STATE(143),
    [sym_existence_expression] = STATE(143),
    [sym_between_expression] = STATE(143),
    [sym_equality_expression] = STATE(143),
    [sym_inequality_expression] = STATE(143),
    [sym_and_expression] = STATE(143),
    [sym_or_expression] = STATE(143),
    [sym_implies_expression] = STATE(143),
    [sym_in_fix_set_expression] = STATE(143),
    [sym_plural_date_time_precision] = STATE(290),
    [sym_duration_between_expression] = STATE(143),
    [sym_difference_between_expression] = STATE(143),
    [sym_membership_expression] = STATE(143),
    [sym_timing_expression] = STATE(143),
    [sym_query] = STATE(143),
    [sym_query_source] = STATE(233),
    [sym_aliased_query_source] = STATE(97),
    [sym_query_source_clause] = STATE(152),
    [sym_retrieve] = STATE(153),
    [sym_identifier] = STATE(218),
    [sym_quoted_identifier] = STATE(252),
    [sym_referential_identifier] = STATE(228),
    [sym_keyword_identifier] = STATE(218),
    [sym_string] = STATE(145),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(72),
    [anon_sym_library] = ACTIONS(21),
    [anon_sym_using] = ACTIONS(21),
    [anon_sym_called] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(21),
    [anon_sym_valueset] = ACTIONS(21),
    [anon_sym_public] = ACTIONS(21),
    [anon_sym_private] = ACTIONS(21),
    [anon_sym_context] = ACTIONS(21),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_function] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(25),
    [aux_sym_literal_token1] = ACTIONS(27),
    [anon_sym_null] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_cast] = ACTIONS(33),
    [anon_sym_exists] = ACTIONS(67),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_implies] = ACTIONS(21),
    [anon_sym_union] = ACTIONS(21),
    [anon_sym_intersect] = ACTIONS(21),
    [anon_sym_except] = ACTIONS(21),
    [anon_sym_years] = ACTIONS(39),
    [anon_sym_months] = ACTIONS(39),
    [anon_sym_weeks] = ACTIONS(39),
    [anon_sym_days] = ACTIONS(39),
    [anon_sym_hours] = ACTIONS(39),
    [anon_sym_minutes] = ACTIONS(39),
    [anon_sym_seconds] = ACTIONS(39),
    [anon_sym_milliseconds] = ACTIONS(39),
    [anon_sym_date] = ACTIONS(21),
    [anon_sym_time] = ACTIONS(21),
    [anon_sym_timezone] = ACTIONS(21),
    [anon_sym_timezoneoffset] = ACTIONS(21),
    [anon_sym_duration] = ACTIONS(41),
    [anon_sym_in] = ACTIONS(69),
    [anon_sym_difference] = ACTIONS(45),
    [anon_sym_contains] = ACTIONS(71),
    [anon_sym_orbefore] = ACTIONS(49),
    [anon_sym_orafter] = ACTIONS(49),
    [anon_sym_ormore] = ACTIONS(49),
    [anon_sym_orless] = ACTIONS(49),
    [anon_sym_starts] = ACTIONS(21),
    [anon_sym_ends] = ACTIONS(21),
    [anon_sym_start] = ACTIONS(21),
    [anon_sym_end] = ACTIONS(21),
    [anon_sym_includes] = ACTIONS(21),
    [anon_sym_meets] = ACTIONS(21),
    [anon_sym_overlaps] = ACTIONS(21),
    [anon_sym_where] = ACTIONS(21),
    [anon_sym_from] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_version] = ACTIONS(21),
    [sym_default_identifier] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [anon_sym_asc] = ACTIONS(21),
    [anon_sym_ascending] = ACTIONS(21),
    [anon_sym_by] = ACTIONS(21),
    [anon_sym_code] = ACTIONS(21),
    [anon_sym_codesystem] = ACTIONS(21),
    [anon_sym_codesystems] = ACTIONS(21),
    [anon_sym_concept] = ACTIONS(21),
    [anon_sym_default] = ACTIONS(21),
    [anon_sym_desc] = ACTIONS(21),
    [anon_sym_descending] = ACTIONS(21),
    [anon_sym_display] = ACTIONS(21),
    [anon_sym_div] = ACTIONS(21),
    [anon_sym_fluent] = ACTIONS(21),
    [anon_sym_mod] = ACTIONS(21),
    [anon_sym_parameter] = ACTIONS(21),
    [anon_sym_predecessor] = ACTIONS(21),
    [anon_sym_starting] = ACTIONS(21),
    [anon_sym_successor] = ACTIONS(21),
    [anon_sym_width] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(61),
    [sym_number] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym_expression] = STATE(80),
    [sym_expression_term] = STATE(143),
    [sym_term] = STATE(142),
    [sym_quantity] = STATE(130),
    [sym_literal] = STATE(149),
    [sym_qualified_identifier_expression] = STATE(274),
    [sym_boolean_expression] = STATE(143),
    [sym_type_expression] = STATE(143),
    [sym_cast_expression] = STATE(143),
    [sym_not_expression] = STATE(143),
    [sym_existence_expression] = STATE(143),
    [sym_between_expression] = STATE(143),
    [sym_equality_expression] = STATE(143),
    [sym_inequality_expression] = STATE(143),
    [sym_and_expression] = STATE(143),
    [sym_or_expression] = STATE(143),
    [sym_implies_expression] = STATE(143),
    [sym_in_fix_set_expression] = STATE(143),
    [sym_plural_date_time_precision] = STATE(290),
    [sym_duration_between_expression] = STATE(143),
    [sym_difference_between_expression] = STATE(143),
    [sym_membership_expression] = STATE(143),
    [sym_timing_expression] = STATE(143),
    [sym_query] = STATE(143),
    [sym_query_source] = STATE(233),
    [sym_aliased_query_source] = STATE(97),
    [sym_query_source_clause] = STATE(120),
    [sym_retrieve] = STATE(127),
    [sym_identifier] = STATE(218),
    [sym_quoted_identifier] = STATE(252),
    [sym_referential_identifier] = STATE(228),
    [sym_keyword_identifier] = STATE(218),
    [sym_string] = STATE(145),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(72),
    [anon_sym_library] = ACTIONS(21),
    [anon_sym_using] = ACTIONS(21),
    [anon_sym_called] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(21),
    [anon_sym_valueset] = ACTIONS(21),
    [anon_sym_public] = ACTIONS(21),
    [anon_sym_private] = ACTIONS(21),
    [anon_sym_context] = ACTIONS(21),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_function] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(25),
    [aux_sym_literal_token1] = ACTIONS(27),
    [anon_sym_null] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(31),
    [anon_sym_cast] = ACTIONS(33),
    [anon_sym_exists] = ACTIONS(35),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_implies] = ACTIONS(21),
    [anon_sym_union] = ACTIONS(21),
    [anon_sym_intersect] = ACTIONS(21),
    [anon_sym_except] = ACTIONS(21),
    [anon_sym_years] = ACTIONS(39),
    [anon_sym_months] = ACTIONS(39),
    [anon_sym_weeks] = ACTIONS(39),
    [anon_sym_days] = ACTIONS(39),
    [anon_sym_hours] = ACTIONS(39),
    [anon_sym_minutes] = ACTIONS(39),
    [anon_sym_seconds] = ACTIONS(39),
    [anon_sym_milliseconds] = ACTIONS(39),
    [anon_sym_date] = ACTIONS(21),
    [anon_sym_time] = ACTIONS(21),
    [anon_sym_timezone] = ACTIONS(21),
    [anon_sym_timezoneoffset] = ACTIONS(21),
    [anon_sym_duration] = ACTIONS(41),
    [anon_sym_in] = ACTIONS(43),
    [anon_sym_difference] = ACTIONS(45),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_orbefore] = ACTIONS(49),
    [anon_sym_orafter] = ACTIONS(49),
    [anon_sym_ormore] = ACTIONS(49),
    [anon_sym_orless] = ACTIONS(49),
    [anon_sym_starts] = ACTIONS(21),
    [anon_sym_ends] = ACTIONS(21),
    [anon_sym_start] = ACTIONS(21),
    [anon_sym_end] = ACTIONS(21),
    [anon_sym_includes] = ACTIONS(21),
    [anon_sym_meets] = ACTIONS(21),
    [anon_sym_overlaps] = ACTIONS(21),
    [anon_sym_where] = ACTIONS(21),
    [anon_sym_from] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_version] = ACTIONS(21),
    [sym_default_identifier] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [anon_sym_asc] = ACTIONS(21),
    [anon_sym_ascending] = ACTIONS(21),
    [anon_sym_by] = ACTIONS(21),
    [anon_sym_code] = ACTIONS(21),
    [anon_sym_codesystem] = ACTIONS(21),
    [anon_sym_codesystems] = ACTIONS(21),
    [anon_sym_concept] = ACTIONS(21),
    [anon_sym_default] = ACTIONS(21),
    [anon_sym_desc] = ACTIONS(21),
    [anon_sym_descending] = ACTIONS(21),
    [anon_sym_display] = ACTIONS(21),
    [anon_sym_div] = ACTIONS(21),
    [anon_sym_fluent] = ACTIONS(21),
    [anon_sym_mod] = ACTIONS(21),
    [anon_sym_parameter] = ACTIONS(21),
    [anon_sym_predecessor] = ACTIONS(21),
    [anon_sym_starting] = ACTIONS(21),
    [anon_sym_successor] = ACTIONS(21),
    [anon_sym_width] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(61),
    [sym_number] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym_expression] = STATE(79),
    [sym_expression_term] = STATE(143),
    [sym_term] = STATE(142),
    [sym_quantity] = STATE(130),
    [sym_literal] = STATE(149),
    [sym_qualified_identifier_expression] = STATE(274),
    [sym_boolean_expression] = STATE(143),
    [sym_type_expression] = STATE(143),
    [sym_cast_expression] = STATE(143),
    [sym_not_expression] = STATE(143),
    [sym_existence_expression] = STATE(143),
    [sym_between_expression] = STATE(143),
    [sym_equality_expression] = STATE(143),
    [sym_inequality_expression] = STATE(143),
    [sym_and_expression] = STATE(143),
    [sym_or_expression] = STATE(143),
    [sym_implies_expression] = STATE(143),
    [sym_in_fix_set_expression] = STATE(143),
    [sym_plural_date_time_precision] = STATE(290),
    [sym_duration_between_expression] = STATE(143),
    [sym_difference_between_expression] = STATE(143),
    [sym_membership_expression] = STATE(143),
    [sym_timing_expression] = STATE(143),
    [sym_query] = STATE(143),
    [sym_query_source] = STATE(233),
    [sym_aliased_query_source] = STATE(97),
    [sym_query_source_clause] = STATE(120),
    [sym_retrieve] = STATE(127),
    [sym_identifier] = STATE(218),
    [sym_quoted_identifier] = STATE(252),
    [sym_referential_identifier] = STATE(228),
    [sym_keyword_identifier] = STATE(218),
    [sym_string] = STATE(145),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(72),
    [anon_sym_library] = ACTIONS(21),
    [anon_sym_using] = ACTIONS(21),
    [anon_sym_called] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(21),
    [anon_sym_valueset] = ACTIONS(21),
    [anon_sym_public] = ACTIONS(21),
    [anon_sym_private] = ACTIONS(21),
    [anon_sym_context] = ACTIONS(21),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_function] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(25),
    [aux_sym_literal_token1] = ACTIONS(27),
    [anon_sym_null] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(31),
    [anon_sym_cast] = ACTIONS(33),
    [anon_sym_exists] = ACTIONS(35),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_implies] = ACTIONS(21),
    [anon_sym_union] = ACTIONS(21),
    [anon_sym_intersect] = ACTIONS(21),
    [anon_sym_except] = ACTIONS(21),
    [anon_sym_years] = ACTIONS(39),
    [anon_sym_months] = ACTIONS(39),
    [anon_sym_weeks] = ACTIONS(39),
    [anon_sym_days] = ACTIONS(39),
    [anon_sym_hours] = ACTIONS(39),
    [anon_sym_minutes] = ACTIONS(39),
    [anon_sym_seconds] = ACTIONS(39),
    [anon_sym_milliseconds] = ACTIONS(39),
    [anon_sym_date] = ACTIONS(21),
    [anon_sym_time] = ACTIONS(21),
    [anon_sym_timezone] = ACTIONS(21),
    [anon_sym_timezoneoffset] = ACTIONS(21),
    [anon_sym_duration] = ACTIONS(41),
    [anon_sym_in] = ACTIONS(43),
    [anon_sym_difference] = ACTIONS(45),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_orbefore] = ACTIONS(49),
    [anon_sym_orafter] = ACTIONS(49),
    [anon_sym_ormore] = ACTIONS(49),
    [anon_sym_orless] = ACTIONS(49),
    [anon_sym_starts] = ACTIONS(21),
    [anon_sym_ends] = ACTIONS(21),
    [anon_sym_start] = ACTIONS(21),
    [anon_sym_end] = ACTIONS(21),
    [anon_sym_includes] = ACTIONS(21),
    [anon_sym_meets] = ACTIONS(21),
    [anon_sym_overlaps] = ACTIONS(21),
    [anon_sym_where] = ACTIONS(21),
    [anon_sym_from] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_version] = ACTIONS(21),
    [sym_default_identifier] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [anon_sym_asc] = ACTIONS(21),
    [anon_sym_ascending] = ACTIONS(21),
    [anon_sym_by] = ACTIONS(21),
    [anon_sym_code] = ACTIONS(21),
    [anon_sym_codesystem] = ACTIONS(21),
    [anon_sym_codesystems] = ACTIONS(21),
    [anon_sym_concept] = ACTIONS(21),
    [anon_sym_default] = ACTIONS(21),
    [anon_sym_desc] = ACTIONS(21),
    [anon_sym_descending] = ACTIONS(21),
    [anon_sym_display] = ACTIONS(21),
    [anon_sym_div] = ACTIONS(21),
    [anon_sym_fluent] = ACTIONS(21),
    [anon_sym_mod] = ACTIONS(21),
    [anon_sym_parameter] = ACTIONS(21),
    [anon_sym_predecessor] = ACTIONS(21),
    [anon_sym_starting] = ACTIONS(21),
    [anon_sym_successor] = ACTIONS(21),
    [anon_sym_width] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(61),
    [sym_number] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym_expression] = STATE(126),
    [sym_expression_term] = STATE(143),
    [sym_term] = STATE(142),
    [sym_quantity] = STATE(130),
    [sym_literal] = STATE(149),
    [sym_qualified_identifier_expression] = STATE(274),
    [sym_boolean_expression] = STATE(143),
    [sym_type_expression] = STATE(143),
    [sym_cast_expression] = STATE(143),
    [sym_not_expression] = STATE(143),
    [sym_existence_expression] = STATE(143),
    [sym_between_expression] = STATE(143),
    [sym_equality_expression] = STATE(143),
    [sym_inequality_expression] = STATE(143),
    [sym_and_expression] = STATE(143),
    [sym_or_expression] = STATE(143),
    [sym_implies_expression] = STATE(143),
    [sym_in_fix_set_expression] = STATE(143),
    [sym_plural_date_time_precision] = STATE(290),
    [sym_duration_between_expression] = STATE(143),
    [sym_difference_between_expression] = STATE(143),
    [sym_membership_expression] = STATE(143),
    [sym_timing_expression] = STATE(143),
    [sym_query] = STATE(143),
    [sym_query_source] = STATE(233),
    [sym_aliased_query_source] = STATE(97),
    [sym_query_source_clause] = STATE(152),
    [sym_retrieve] = STATE(153),
    [sym_identifier] = STATE(218),
    [sym_quoted_identifier] = STATE(252),
    [sym_referential_identifier] = STATE(228),
    [sym_keyword_identifier] = STATE(218),
    [sym_string] = STATE(145),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(72),
    [anon_sym_library] = ACTIONS(21),
    [anon_sym_using] = ACTIONS(21),
    [anon_sym_called] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(21),
    [anon_sym_valueset] = ACTIONS(21),
    [anon_sym_public] = ACTIONS(21),
    [anon_sym_private] = ACTIONS(21),
    [anon_sym_context] = ACTIONS(21),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_function] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(25),
    [aux_sym_literal_token1] = ACTIONS(27),
    [anon_sym_null] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_cast] = ACTIONS(33),
    [anon_sym_exists] = ACTIONS(67),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_implies] = ACTIONS(21),
    [anon_sym_union] = ACTIONS(21),
    [anon_sym_intersect] = ACTIONS(21),
    [anon_sym_except] = ACTIONS(21),
    [anon_sym_years] = ACTIONS(39),
    [anon_sym_months] = ACTIONS(39),
    [anon_sym_weeks] = ACTIONS(39),
    [anon_sym_days] = ACTIONS(39),
    [anon_sym_hours] = ACTIONS(39),
    [anon_sym_minutes] = ACTIONS(39),
    [anon_sym_seconds] = ACTIONS(39),
    [anon_sym_milliseconds] = ACTIONS(39),
    [anon_sym_date] = ACTIONS(21),
    [anon_sym_time] = ACTIONS(21),
    [anon_sym_timezone] = ACTIONS(21),
    [anon_sym_timezoneoffset] = ACTIONS(21),
    [anon_sym_duration] = ACTIONS(41),
    [anon_sym_in] = ACTIONS(69),
    [anon_sym_difference] = ACTIONS(45),
    [anon_sym_contains] = ACTIONS(71),
    [anon_sym_orbefore] = ACTIONS(49),
    [anon_sym_orafter] = ACTIONS(49),
    [anon_sym_ormore] = ACTIONS(49),
    [anon_sym_orless] = ACTIONS(49),
    [anon_sym_starts] = ACTIONS(21),
    [anon_sym_ends] = ACTIONS(21),
    [anon_sym_start] = ACTIONS(21),
    [anon_sym_end] = ACTIONS(21),
    [anon_sym_includes] = ACTIONS(21),
    [anon_sym_meets] = ACTIONS(21),
    [anon_sym_overlaps] = ACTIONS(21),
    [anon_sym_where] = ACTIONS(21),
    [anon_sym_from] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_version] = ACTIONS(21),
    [sym_default_identifier] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [anon_sym_asc] = ACTIONS(21),
    [anon_sym_ascending] = ACTIONS(21),
    [anon_sym_by] = ACTIONS(21),
    [anon_sym_code] = ACTIONS(21),
    [anon_sym_codesystem] = ACTIONS(21),
    [anon_sym_codesystems] = ACTIONS(21),
    [anon_sym_concept] = ACTIONS(21),
    [anon_sym_default] = ACTIONS(21),
    [anon_sym_desc] = ACTIONS(21),
    [anon_sym_descending] = ACTIONS(21),
    [anon_sym_display] = ACTIONS(21),
    [anon_sym_div] = ACTIONS(21),
    [anon_sym_fluent] = ACTIONS(21),
    [anon_sym_mod] = ACTIONS(21),
    [anon_sym_parameter] = ACTIONS(21),
    [anon_sym_predecessor] = ACTIONS(21),
    [anon_sym_starting] = ACTIONS(21),
    [anon_sym_successor] = ACTIONS(21),
    [anon_sym_width] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(61),
    [sym_number] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [sym_expression] = STATE(85),
    [sym_expression_term] = STATE(143),
    [sym_term] = STATE(142),
    [sym_quantity] = STATE(130),
    [sym_literal] = STATE(149),
    [sym_qualified_identifier_expression] = STATE(274),
    [sym_boolean_expression] = STATE(143),
    [sym_type_expression] = STATE(143),
    [sym_cast_expression] = STATE(143),
    [sym_not_expression] = STATE(143),
    [sym_existence_expression] = STATE(143),
    [sym_between_expression] = STATE(143),
    [sym_equality_expression] = STATE(143),
    [sym_inequality_expression] = STATE(143),
    [sym_and_expression] = STATE(143),
    [sym_or_expression] = STATE(143),
    [sym_implies_expression] = STATE(143),
    [sym_in_fix_set_expression] = STATE(143),
    [sym_plural_date_time_precision] = STATE(290),
    [sym_duration_between_expression] = STATE(143),
    [sym_difference_between_expression] = STATE(143),
    [sym_membership_expression] = STATE(143),
    [sym_timing_expression] = STATE(143),
    [sym_query] = STATE(143),
    [sym_query_source] = STATE(233),
    [sym_aliased_query_source] = STATE(97),
    [sym_query_source_clause] = STATE(120),
    [sym_retrieve] = STATE(127),
    [sym_identifier] = STATE(218),
    [sym_quoted_identifier] = STATE(252),
    [sym_referential_identifier] = STATE(228),
    [sym_keyword_identifier] = STATE(218),
    [sym_string] = STATE(145),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(72),
    [anon_sym_library] = ACTIONS(21),
    [anon_sym_using] = ACTIONS(21),
    [anon_sym_called] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(21),
    [anon_sym_valueset] = ACTIONS(21),
    [anon_sym_public] = ACTIONS(21),
    [anon_sym_private] = ACTIONS(21),
    [anon_sym_context] = ACTIONS(21),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_function] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(25),
    [aux_sym_literal_token1] = ACTIONS(27),
    [anon_sym_null] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(31),
    [anon_sym_cast] = ACTIONS(33),
    [anon_sym_exists] = ACTIONS(35),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_implies] = ACTIONS(21),
    [anon_sym_union] = ACTIONS(21),
    [anon_sym_intersect] = ACTIONS(21),
    [anon_sym_except] = ACTIONS(21),
    [anon_sym_years] = ACTIONS(39),
    [anon_sym_months] = ACTIONS(39),
    [anon_sym_weeks] = ACTIONS(39),
    [anon_sym_days] = ACTIONS(39),
    [anon_sym_hours] = ACTIONS(39),
    [anon_sym_minutes] = ACTIONS(39),
    [anon_sym_seconds] = ACTIONS(39),
    [anon_sym_milliseconds] = ACTIONS(39),
    [anon_sym_date] = ACTIONS(21),
    [anon_sym_time] = ACTIONS(21),
    [anon_sym_timezone] = ACTIONS(21),
    [anon_sym_timezoneoffset] = ACTIONS(21),
    [anon_sym_duration] = ACTIONS(41),
    [anon_sym_in] = ACTIONS(43),
    [anon_sym_difference] = ACTIONS(45),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_orbefore] = ACTIONS(49),
    [anon_sym_orafter] = ACTIONS(49),
    [anon_sym_ormore] = ACTIONS(49),
    [anon_sym_orless] = ACTIONS(49),
    [anon_sym_starts] = ACTIONS(21),
    [anon_sym_ends] = ACTIONS(21),
    [anon_sym_start] = ACTIONS(21),
    [anon_sym_end] = ACTIONS(21),
    [anon_sym_includes] = ACTIONS(21),
    [anon_sym_meets] = ACTIONS(21),
    [anon_sym_overlaps] = ACTIONS(21),
    [anon_sym_where] = ACTIONS(21),
    [anon_sym_from] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_version] = ACTIONS(21),
    [sym_default_identifier] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [anon_sym_asc] = ACTIONS(21),
    [anon_sym_ascending] = ACTIONS(21),
    [anon_sym_by] = ACTIONS(21),
    [anon_sym_code] = ACTIONS(21),
    [anon_sym_codesystem] = ACTIONS(21),
    [anon_sym_codesystems] = ACTIONS(21),
    [anon_sym_concept] = ACTIONS(21),
    [anon_sym_default] = ACTIONS(21),
    [anon_sym_desc] = ACTIONS(21),
    [anon_sym_descending] = ACTIONS(21),
    [anon_sym_display] = ACTIONS(21),
    [anon_sym_div] = ACTIONS(21),
    [anon_sym_fluent] = ACTIONS(21),
    [anon_sym_mod] = ACTIONS(21),
    [anon_sym_parameter] = ACTIONS(21),
    [anon_sym_predecessor] = ACTIONS(21),
    [anon_sym_starting] = ACTIONS(21),
    [anon_sym_successor] = ACTIONS(21),
    [anon_sym_width] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(61),
    [sym_number] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [sym_expression] = STATE(86),
    [sym_expression_term] = STATE(143),
    [sym_term] = STATE(142),
    [sym_quantity] = STATE(130),
    [sym_literal] = STATE(149),
    [sym_qualified_identifier_expression] = STATE(274),
    [sym_boolean_expression] = STATE(143),
    [sym_type_expression] = STATE(143),
    [sym_cast_expression] = STATE(143),
    [sym_not_expression] = STATE(143),
    [sym_existence_expression] = STATE(143),
    [sym_between_expression] = STATE(143),
    [sym_equality_expression] = STATE(143),
    [sym_inequality_expression] = STATE(143),
    [sym_and_expression] = STATE(143),
    [sym_or_expression] = STATE(143),
    [sym_implies_expression] = STATE(143),
    [sym_in_fix_set_expression] = STATE(143),
    [sym_plural_date_time_precision] = STATE(290),
    [sym_duration_between_expression] = STATE(143),
    [sym_difference_between_expression] = STATE(143),
    [sym_membership_expression] = STATE(143),
    [sym_timing_expression] = STATE(143),
    [sym_query] = STATE(143),
    [sym_query_source] = STATE(233),
    [sym_aliased_query_source] = STATE(97),
    [sym_query_source_clause] = STATE(120),
    [sym_retrieve] = STATE(127),
    [sym_identifier] = STATE(218),
    [sym_quoted_identifier] = STATE(252),
    [sym_referential_identifier] = STATE(228),
    [sym_keyword_identifier] = STATE(218),
    [sym_string] = STATE(145),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(72),
    [anon_sym_library] = ACTIONS(21),
    [anon_sym_using] = ACTIONS(21),
    [anon_sym_called] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(21),
    [anon_sym_valueset] = ACTIONS(21),
    [anon_sym_public] = ACTIONS(21),
    [anon_sym_private] = ACTIONS(21),
    [anon_sym_context] = ACTIONS(21),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_function] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(25),
    [aux_sym_literal_token1] = ACTIONS(27),
    [anon_sym_null] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(31),
    [anon_sym_cast] = ACTIONS(33),
    [anon_sym_exists] = ACTIONS(35),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_implies] = ACTIONS(21),
    [anon_sym_union] = ACTIONS(21),
    [anon_sym_intersect] = ACTIONS(21),
    [anon_sym_except] = ACTIONS(21),
    [anon_sym_years] = ACTIONS(39),
    [anon_sym_months] = ACTIONS(39),
    [anon_sym_weeks] = ACTIONS(39),
    [anon_sym_days] = ACTIONS(39),
    [anon_sym_hours] = ACTIONS(39),
    [anon_sym_minutes] = ACTIONS(39),
    [anon_sym_seconds] = ACTIONS(39),
    [anon_sym_milliseconds] = ACTIONS(39),
    [anon_sym_date] = ACTIONS(21),
    [anon_sym_time] = ACTIONS(21),
    [anon_sym_timezone] = ACTIONS(21),
    [anon_sym_timezoneoffset] = ACTIONS(21),
    [anon_sym_duration] = ACTIONS(41),
    [anon_sym_in] = ACTIONS(43),
    [anon_sym_difference] = ACTIONS(45),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_orbefore] = ACTIONS(49),
    [anon_sym_orafter] = ACTIONS(49),
    [anon_sym_ormore] = ACTIONS(49),
    [anon_sym_orless] = ACTIONS(49),
    [anon_sym_starts] = ACTIONS(21),
    [anon_sym_ends] = ACTIONS(21),
    [anon_sym_start] = ACTIONS(21),
    [anon_sym_end] = ACTIONS(21),
    [anon_sym_includes] = ACTIONS(21),
    [anon_sym_meets] = ACTIONS(21),
    [anon_sym_overlaps] = ACTIONS(21),
    [anon_sym_where] = ACTIONS(21),
    [anon_sym_from] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_version] = ACTIONS(21),
    [sym_default_identifier] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [anon_sym_asc] = ACTIONS(21),
    [anon_sym_ascending] = ACTIONS(21),
    [anon_sym_by] = ACTIONS(21),
    [anon_sym_code] = ACTIONS(21),
    [anon_sym_codesystem] = ACTIONS(21),
    [anon_sym_codesystems] = ACTIONS(21),
    [anon_sym_concept] = ACTIONS(21),
    [anon_sym_default] = ACTIONS(21),
    [anon_sym_desc] = ACTIONS(21),
    [anon_sym_descending] = ACTIONS(21),
    [anon_sym_display] = ACTIONS(21),
    [anon_sym_div] = ACTIONS(21),
    [anon_sym_fluent] = ACTIONS(21),
    [anon_sym_mod] = ACTIONS(21),
    [anon_sym_parameter] = ACTIONS(21),
    [anon_sym_predecessor] = ACTIONS(21),
    [anon_sym_starting] = ACTIONS(21),
    [anon_sym_successor] = ACTIONS(21),
    [anon_sym_width] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(61),
    [sym_number] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [sym_expression] = STATE(84),
    [sym_expression_term] = STATE(143),
    [sym_term] = STATE(142),
    [sym_quantity] = STATE(130),
    [sym_literal] = STATE(149),
    [sym_qualified_identifier_expression] = STATE(274),
    [sym_boolean_expression] = STATE(143),
    [sym_type_expression] = STATE(143),
    [sym_cast_expression] = STATE(143),
    [sym_not_expression] = STATE(143),
    [sym_existence_expression] = STATE(143),
    [sym_between_expression] = STATE(143),
    [sym_equality_expression] = STATE(143),
    [sym_inequality_expression] = STATE(143),
    [sym_and_expression] = STATE(143),
    [sym_or_expression] = STATE(143),
    [sym_implies_expression] = STATE(143),
    [sym_in_fix_set_expression] = STATE(143),
    [sym_plural_date_time_precision] = STATE(290),
    [sym_duration_between_expression] = STATE(143),
    [sym_difference_between_expression] = STATE(143),
    [sym_membership_expression] = STATE(143),
    [sym_timing_expression] = STATE(143),
    [sym_query] = STATE(143),
    [sym_query_source] = STATE(233),
    [sym_aliased_query_source] = STATE(97),
    [sym_query_source_clause] = STATE(120),
    [sym_retrieve] = STATE(127),
    [sym_identifier] = STATE(218),
    [sym_quoted_identifier] = STATE(252),
    [sym_referential_identifier] = STATE(228),
    [sym_keyword_identifier] = STATE(218),
    [sym_string] = STATE(145),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(72),
    [anon_sym_library] = ACTIONS(21),
    [anon_sym_using] = ACTIONS(21),
    [anon_sym_called] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(21),
    [anon_sym_valueset] = ACTIONS(21),
    [anon_sym_public] = ACTIONS(21),
    [anon_sym_private] = ACTIONS(21),
    [anon_sym_context] = ACTIONS(21),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_function] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(25),
    [aux_sym_literal_token1] = ACTIONS(27),
    [anon_sym_null] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(31),
    [anon_sym_cast] = ACTIONS(33),
    [anon_sym_exists] = ACTIONS(35),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_implies] = ACTIONS(21),
    [anon_sym_union] = ACTIONS(21),
    [anon_sym_intersect] = ACTIONS(21),
    [anon_sym_except] = ACTIONS(21),
    [anon_sym_years] = ACTIONS(39),
    [anon_sym_months] = ACTIONS(39),
    [anon_sym_weeks] = ACTIONS(39),
    [anon_sym_days] = ACTIONS(39),
    [anon_sym_hours] = ACTIONS(39),
    [anon_sym_minutes] = ACTIONS(39),
    [anon_sym_seconds] = ACTIONS(39),
    [anon_sym_milliseconds] = ACTIONS(39),
    [anon_sym_date] = ACTIONS(21),
    [anon_sym_time] = ACTIONS(21),
    [anon_sym_timezone] = ACTIONS(21),
    [anon_sym_timezoneoffset] = ACTIONS(21),
    [anon_sym_duration] = ACTIONS(41),
    [anon_sym_in] = ACTIONS(43),
    [anon_sym_difference] = ACTIONS(45),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_orbefore] = ACTIONS(49),
    [anon_sym_orafter] = ACTIONS(49),
    [anon_sym_ormore] = ACTIONS(49),
    [anon_sym_orless] = ACTIONS(49),
    [anon_sym_starts] = ACTIONS(21),
    [anon_sym_ends] = ACTIONS(21),
    [anon_sym_start] = ACTIONS(21),
    [anon_sym_end] = ACTIONS(21),
    [anon_sym_includes] = ACTIONS(21),
    [anon_sym_meets] = ACTIONS(21),
    [anon_sym_overlaps] = ACTIONS(21),
    [anon_sym_where] = ACTIONS(21),
    [anon_sym_from] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_version] = ACTIONS(21),
    [sym_default_identifier] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [anon_sym_asc] = ACTIONS(21),
    [anon_sym_ascending] = ACTIONS(21),
    [anon_sym_by] = ACTIONS(21),
    [anon_sym_code] = ACTIONS(21),
    [anon_sym_codesystem] = ACTIONS(21),
    [anon_sym_codesystems] = ACTIONS(21),
    [anon_sym_concept] = ACTIONS(21),
    [anon_sym_default] = ACTIONS(21),
    [anon_sym_desc] = ACTIONS(21),
    [anon_sym_descending] = ACTIONS(21),
    [anon_sym_display] = ACTIONS(21),
    [anon_sym_div] = ACTIONS(21),
    [anon_sym_fluent] = ACTIONS(21),
    [anon_sym_mod] = ACTIONS(21),
    [anon_sym_parameter] = ACTIONS(21),
    [anon_sym_predecessor] = ACTIONS(21),
    [anon_sym_starting] = ACTIONS(21),
    [anon_sym_successor] = ACTIONS(21),
    [anon_sym_width] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(61),
    [sym_number] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [sym_expression] = STATE(87),
    [sym_expression_term] = STATE(143),
    [sym_term] = STATE(142),
    [sym_quantity] = STATE(130),
    [sym_literal] = STATE(149),
    [sym_qualified_identifier_expression] = STATE(274),
    [sym_boolean_expression] = STATE(143),
    [sym_type_expression] = STATE(143),
    [sym_cast_expression] = STATE(143),
    [sym_not_expression] = STATE(143),
    [sym_existence_expression] = STATE(143),
    [sym_between_expression] = STATE(143),
    [sym_equality_expression] = STATE(143),
    [sym_inequality_expression] = STATE(143),
    [sym_and_expression] = STATE(143),
    [sym_or_expression] = STATE(143),
    [sym_implies_expression] = STATE(143),
    [sym_in_fix_set_expression] = STATE(143),
    [sym_plural_date_time_precision] = STATE(290),
    [sym_duration_between_expression] = STATE(143),
    [sym_difference_between_expression] = STATE(143),
    [sym_membership_expression] = STATE(143),
    [sym_timing_expression] = STATE(143),
    [sym_query] = STATE(143),
    [sym_query_source] = STATE(233),
    [sym_aliased_query_source] = STATE(97),
    [sym_query_source_clause] = STATE(120),
    [sym_retrieve] = STATE(127),
    [sym_identifier] = STATE(218),
    [sym_quoted_identifier] = STATE(252),
    [sym_referential_identifier] = STATE(228),
    [sym_keyword_identifier] = STATE(218),
    [sym_string] = STATE(145),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(72),
    [anon_sym_library] = ACTIONS(21),
    [anon_sym_using] = ACTIONS(21),
    [anon_sym_called] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(21),
    [anon_sym_valueset] = ACTIONS(21),
    [anon_sym_public] = ACTIONS(21),
    [anon_sym_private] = ACTIONS(21),
    [anon_sym_context] = ACTIONS(21),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_function] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(25),
    [aux_sym_literal_token1] = ACTIONS(27),
    [anon_sym_null] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(31),
    [anon_sym_cast] = ACTIONS(33),
    [anon_sym_exists] = ACTIONS(35),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_implies] = ACTIONS(21),
    [anon_sym_union] = ACTIONS(21),
    [anon_sym_intersect] = ACTIONS(21),
    [anon_sym_except] = ACTIONS(21),
    [anon_sym_years] = ACTIONS(39),
    [anon_sym_months] = ACTIONS(39),
    [anon_sym_weeks] = ACTIONS(39),
    [anon_sym_days] = ACTIONS(39),
    [anon_sym_hours] = ACTIONS(39),
    [anon_sym_minutes] = ACTIONS(39),
    [anon_sym_seconds] = ACTIONS(39),
    [anon_sym_milliseconds] = ACTIONS(39),
    [anon_sym_date] = ACTIONS(21),
    [anon_sym_time] = ACTIONS(21),
    [anon_sym_timezone] = ACTIONS(21),
    [anon_sym_timezoneoffset] = ACTIONS(21),
    [anon_sym_duration] = ACTIONS(41),
    [anon_sym_in] = ACTIONS(43),
    [anon_sym_difference] = ACTIONS(45),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_orbefore] = ACTIONS(49),
    [anon_sym_orafter] = ACTIONS(49),
    [anon_sym_ormore] = ACTIONS(49),
    [anon_sym_orless] = ACTIONS(49),
    [anon_sym_starts] = ACTIONS(21),
    [anon_sym_ends] = ACTIONS(21),
    [anon_sym_start] = ACTIONS(21),
    [anon_sym_end] = ACTIONS(21),
    [anon_sym_includes] = ACTIONS(21),
    [anon_sym_meets] = ACTIONS(21),
    [anon_sym_overlaps] = ACTIONS(21),
    [anon_sym_where] = ACTIONS(21),
    [anon_sym_from] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_version] = ACTIONS(21),
    [sym_default_identifier] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [anon_sym_asc] = ACTIONS(21),
    [anon_sym_ascending] = ACTIONS(21),
    [anon_sym_by] = ACTIONS(21),
    [anon_sym_code] = ACTIONS(21),
    [anon_sym_codesystem] = ACTIONS(21),
    [anon_sym_codesystems] = ACTIONS(21),
    [anon_sym_concept] = ACTIONS(21),
    [anon_sym_default] = ACTIONS(21),
    [anon_sym_desc] = ACTIONS(21),
    [anon_sym_descending] = ACTIONS(21),
    [anon_sym_display] = ACTIONS(21),
    [anon_sym_div] = ACTIONS(21),
    [anon_sym_fluent] = ACTIONS(21),
    [anon_sym_mod] = ACTIONS(21),
    [anon_sym_parameter] = ACTIONS(21),
    [anon_sym_predecessor] = ACTIONS(21),
    [anon_sym_starting] = ACTIONS(21),
    [anon_sym_successor] = ACTIONS(21),
    [anon_sym_width] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(61),
    [sym_number] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [sym_expression] = STATE(105),
    [sym_expression_term] = STATE(143),
    [sym_term] = STATE(142),
    [sym_quantity] = STATE(130),
    [sym_literal] = STATE(149),
    [sym_qualified_identifier_expression] = STATE(274),
    [sym_boolean_expression] = STATE(143),
    [sym_type_expression] = STATE(143),
    [sym_cast_expression] = STATE(143),
    [sym_not_expression] = STATE(143),
    [sym_existence_expression] = STATE(143),
    [sym_between_expression] = STATE(143),
    [sym_equality_expression] = STATE(143),
    [sym_inequality_expression] = STATE(143),
    [sym_and_expression] = STATE(143),
    [sym_or_expression] = STATE(143),
    [sym_implies_expression] = STATE(143),
    [sym_in_fix_set_expression] = STATE(143),
    [sym_plural_date_time_precision] = STATE(290),
    [sym_duration_between_expression] = STATE(143),
    [sym_difference_between_expression] = STATE(143),
    [sym_membership_expression] = STATE(143),
    [sym_timing_expression] = STATE(143),
    [sym_query] = STATE(143),
    [sym_query_source] = STATE(233),
    [sym_aliased_query_source] = STATE(97),
    [sym_query_source_clause] = STATE(152),
    [sym_retrieve] = STATE(153),
    [sym_identifier] = STATE(218),
    [sym_quoted_identifier] = STATE(252),
    [sym_referential_identifier] = STATE(228),
    [sym_keyword_identifier] = STATE(218),
    [sym_string] = STATE(145),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(72),
    [anon_sym_library] = ACTIONS(21),
    [anon_sym_using] = ACTIONS(21),
    [anon_sym_called] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(21),
    [anon_sym_valueset] = ACTIONS(21),
    [anon_sym_public] = ACTIONS(21),
    [anon_sym_private] = ACTIONS(21),
    [anon_sym_context] = ACTIONS(21),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_function] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(25),
    [aux_sym_literal_token1] = ACTIONS(27),
    [anon_sym_null] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_cast] = ACTIONS(33),
    [anon_sym_exists] = ACTIONS(67),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_implies] = ACTIONS(21),
    [anon_sym_union] = ACTIONS(21),
    [anon_sym_intersect] = ACTIONS(21),
    [anon_sym_except] = ACTIONS(21),
    [anon_sym_years] = ACTIONS(39),
    [anon_sym_months] = ACTIONS(39),
    [anon_sym_weeks] = ACTIONS(39),
    [anon_sym_days] = ACTIONS(39),
    [anon_sym_hours] = ACTIONS(39),
    [anon_sym_minutes] = ACTIONS(39),
    [anon_sym_seconds] = ACTIONS(39),
    [anon_sym_milliseconds] = ACTIONS(39),
    [anon_sym_date] = ACTIONS(21),
    [anon_sym_time] = ACTIONS(21),
    [anon_sym_timezone] = ACTIONS(21),
    [anon_sym_timezoneoffset] = ACTIONS(21),
    [anon_sym_duration] = ACTIONS(41),
    [anon_sym_in] = ACTIONS(69),
    [anon_sym_difference] = ACTIONS(45),
    [anon_sym_contains] = ACTIONS(71),
    [anon_sym_orbefore] = ACTIONS(49),
    [anon_sym_orafter] = ACTIONS(49),
    [anon_sym_ormore] = ACTIONS(49),
    [anon_sym_orless] = ACTIONS(49),
    [anon_sym_starts] = ACTIONS(21),
    [anon_sym_ends] = ACTIONS(21),
    [anon_sym_start] = ACTIONS(21),
    [anon_sym_end] = ACTIONS(21),
    [anon_sym_includes] = ACTIONS(21),
    [anon_sym_meets] = ACTIONS(21),
    [anon_sym_overlaps] = ACTIONS(21),
    [anon_sym_where] = ACTIONS(21),
    [anon_sym_from] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_version] = ACTIONS(21),
    [sym_default_identifier] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [anon_sym_asc] = ACTIONS(21),
    [anon_sym_ascending] = ACTIONS(21),
    [anon_sym_by] = ACTIONS(21),
    [anon_sym_code] = ACTIONS(21),
    [anon_sym_codesystem] = ACTIONS(21),
    [anon_sym_codesystems] = ACTIONS(21),
    [anon_sym_concept] = ACTIONS(21),
    [anon_sym_default] = ACTIONS(21),
    [anon_sym_desc] = ACTIONS(21),
    [anon_sym_descending] = ACTIONS(21),
    [anon_sym_display] = ACTIONS(21),
    [anon_sym_div] = ACTIONS(21),
    [anon_sym_fluent] = ACTIONS(21),
    [anon_sym_mod] = ACTIONS(21),
    [anon_sym_parameter] = ACTIONS(21),
    [anon_sym_predecessor] = ACTIONS(21),
    [anon_sym_starting] = ACTIONS(21),
    [anon_sym_successor] = ACTIONS(21),
    [anon_sym_width] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(61),
    [sym_number] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [sym_expression] = STATE(107),
    [sym_expression_term] = STATE(143),
    [sym_term] = STATE(142),
    [sym_quantity] = STATE(130),
    [sym_literal] = STATE(149),
    [sym_qualified_identifier_expression] = STATE(274),
    [sym_boolean_expression] = STATE(143),
    [sym_type_expression] = STATE(143),
    [sym_cast_expression] = STATE(143),
    [sym_not_expression] = STATE(143),
    [sym_existence_expression] = STATE(143),
    [sym_between_expression] = STATE(143),
    [sym_equality_expression] = STATE(143),
    [sym_inequality_expression] = STATE(143),
    [sym_and_expression] = STATE(143),
    [sym_or_expression] = STATE(143),
    [sym_implies_expression] = STATE(143),
    [sym_in_fix_set_expression] = STATE(143),
    [sym_plural_date_time_precision] = STATE(290),
    [sym_duration_between_expression] = STATE(143),
    [sym_difference_between_expression] = STATE(143),
    [sym_membership_expression] = STATE(143),
    [sym_timing_expression] = STATE(143),
    [sym_query] = STATE(143),
    [sym_query_source] = STATE(233),
    [sym_aliased_query_source] = STATE(97),
    [sym_query_source_clause] = STATE(152),
    [sym_retrieve] = STATE(153),
    [sym_identifier] = STATE(218),
    [sym_quoted_identifier] = STATE(252),
    [sym_referential_identifier] = STATE(228),
    [sym_keyword_identifier] = STATE(218),
    [sym_string] = STATE(145),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(72),
    [anon_sym_library] = ACTIONS(21),
    [anon_sym_using] = ACTIONS(21),
    [anon_sym_called] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(21),
    [anon_sym_valueset] = ACTIONS(21),
    [anon_sym_public] = ACTIONS(21),
    [anon_sym_private] = ACTIONS(21),
    [anon_sym_context] = ACTIONS(21),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_function] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(25),
    [aux_sym_literal_token1] = ACTIONS(27),
    [anon_sym_null] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_cast] = ACTIONS(33),
    [anon_sym_exists] = ACTIONS(67),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_implies] = ACTIONS(21),
    [anon_sym_union] = ACTIONS(21),
    [anon_sym_intersect] = ACTIONS(21),
    [anon_sym_except] = ACTIONS(21),
    [anon_sym_years] = ACTIONS(39),
    [anon_sym_months] = ACTIONS(39),
    [anon_sym_weeks] = ACTIONS(39),
    [anon_sym_days] = ACTIONS(39),
    [anon_sym_hours] = ACTIONS(39),
    [anon_sym_minutes] = ACTIONS(39),
    [anon_sym_seconds] = ACTIONS(39),
    [anon_sym_milliseconds] = ACTIONS(39),
    [anon_sym_date] = ACTIONS(21),
    [anon_sym_time] = ACTIONS(21),
    [anon_sym_timezone] = ACTIONS(21),
    [anon_sym_timezoneoffset] = ACTIONS(21),
    [anon_sym_duration] = ACTIONS(41),
    [anon_sym_in] = ACTIONS(69),
    [anon_sym_difference] = ACTIONS(45),
    [anon_sym_contains] = ACTIONS(71),
    [anon_sym_orbefore] = ACTIONS(49),
    [anon_sym_orafter] = ACTIONS(49),
    [anon_sym_ormore] = ACTIONS(49),
    [anon_sym_orless] = ACTIONS(49),
    [anon_sym_starts] = ACTIONS(21),
    [anon_sym_ends] = ACTIONS(21),
    [anon_sym_start] = ACTIONS(21),
    [anon_sym_end] = ACTIONS(21),
    [anon_sym_includes] = ACTIONS(21),
    [anon_sym_meets] = ACTIONS(21),
    [anon_sym_overlaps] = ACTIONS(21),
    [anon_sym_where] = ACTIONS(21),
    [anon_sym_from] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_version] = ACTIONS(21),
    [sym_default_identifier] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [anon_sym_asc] = ACTIONS(21),
    [anon_sym_ascending] = ACTIONS(21),
    [anon_sym_by] = ACTIONS(21),
    [anon_sym_code] = ACTIONS(21),
    [anon_sym_codesystem] = ACTIONS(21),
    [anon_sym_codesystems] = ACTIONS(21),
    [anon_sym_concept] = ACTIONS(21),
    [anon_sym_default] = ACTIONS(21),
    [anon_sym_desc] = ACTIONS(21),
    [anon_sym_descending] = ACTIONS(21),
    [anon_sym_display] = ACTIONS(21),
    [anon_sym_div] = ACTIONS(21),
    [anon_sym_fluent] = ACTIONS(21),
    [anon_sym_mod] = ACTIONS(21),
    [anon_sym_parameter] = ACTIONS(21),
    [anon_sym_predecessor] = ACTIONS(21),
    [anon_sym_starting] = ACTIONS(21),
    [anon_sym_successor] = ACTIONS(21),
    [anon_sym_width] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(61),
    [sym_number] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
  },
  [19] = {
    [sym_expression] = STATE(110),
    [sym_expression_term] = STATE(143),
    [sym_term] = STATE(142),
    [sym_quantity] = STATE(130),
    [sym_literal] = STATE(149),
    [sym_qualified_identifier_expression] = STATE(274),
    [sym_boolean_expression] = STATE(143),
    [sym_type_expression] = STATE(143),
    [sym_cast_expression] = STATE(143),
    [sym_not_expression] = STATE(143),
    [sym_existence_expression] = STATE(143),
    [sym_between_expression] = STATE(143),
    [sym_equality_expression] = STATE(143),
    [sym_inequality_expression] = STATE(143),
    [sym_and_expression] = STATE(143),
    [sym_or_expression] = STATE(143),
    [sym_implies_expression] = STATE(143),
    [sym_in_fix_set_expression] = STATE(143),
    [sym_plural_date_time_precision] = STATE(290),
    [sym_duration_between_expression] = STATE(143),
    [sym_difference_between_expression] = STATE(143),
    [sym_membership_expression] = STATE(143),
    [sym_timing_expression] = STATE(143),
    [sym_query] = STATE(143),
    [sym_query_source] = STATE(233),
    [sym_aliased_query_source] = STATE(97),
    [sym_query_source_clause] = STATE(152),
    [sym_retrieve] = STATE(153),
    [sym_identifier] = STATE(218),
    [sym_quoted_identifier] = STATE(252),
    [sym_referential_identifier] = STATE(228),
    [sym_keyword_identifier] = STATE(218),
    [sym_string] = STATE(145),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(72),
    [anon_sym_library] = ACTIONS(21),
    [anon_sym_using] = ACTIONS(21),
    [anon_sym_called] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(21),
    [anon_sym_valueset] = ACTIONS(21),
    [anon_sym_public] = ACTIONS(21),
    [anon_sym_private] = ACTIONS(21),
    [anon_sym_context] = ACTIONS(21),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_function] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(25),
    [aux_sym_literal_token1] = ACTIONS(27),
    [anon_sym_null] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_cast] = ACTIONS(33),
    [anon_sym_exists] = ACTIONS(67),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_implies] = ACTIONS(21),
    [anon_sym_union] = ACTIONS(21),
    [anon_sym_intersect] = ACTIONS(21),
    [anon_sym_except] = ACTIONS(21),
    [anon_sym_years] = ACTIONS(39),
    [anon_sym_months] = ACTIONS(39),
    [anon_sym_weeks] = ACTIONS(39),
    [anon_sym_days] = ACTIONS(39),
    [anon_sym_hours] = ACTIONS(39),
    [anon_sym_minutes] = ACTIONS(39),
    [anon_sym_seconds] = ACTIONS(39),
    [anon_sym_milliseconds] = ACTIONS(39),
    [anon_sym_date] = ACTIONS(21),
    [anon_sym_time] = ACTIONS(21),
    [anon_sym_timezone] = ACTIONS(21),
    [anon_sym_timezoneoffset] = ACTIONS(21),
    [anon_sym_duration] = ACTIONS(41),
    [anon_sym_in] = ACTIONS(69),
    [anon_sym_difference] = ACTIONS(45),
    [anon_sym_contains] = ACTIONS(71),
    [anon_sym_orbefore] = ACTIONS(49),
    [anon_sym_orafter] = ACTIONS(49),
    [anon_sym_ormore] = ACTIONS(49),
    [anon_sym_orless] = ACTIONS(49),
    [anon_sym_starts] = ACTIONS(21),
    [anon_sym_ends] = ACTIONS(21),
    [anon_sym_start] = ACTIONS(21),
    [anon_sym_end] = ACTIONS(21),
    [anon_sym_includes] = ACTIONS(21),
    [anon_sym_meets] = ACTIONS(21),
    [anon_sym_overlaps] = ACTIONS(21),
    [anon_sym_where] = ACTIONS(21),
    [anon_sym_from] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_version] = ACTIONS(21),
    [sym_default_identifier] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [anon_sym_asc] = ACTIONS(21),
    [anon_sym_ascending] = ACTIONS(21),
    [anon_sym_by] = ACTIONS(21),
    [anon_sym_code] = ACTIONS(21),
    [anon_sym_codesystem] = ACTIONS(21),
    [anon_sym_codesystems] = ACTIONS(21),
    [anon_sym_concept] = ACTIONS(21),
    [anon_sym_default] = ACTIONS(21),
    [anon_sym_desc] = ACTIONS(21),
    [anon_sym_descending] = ACTIONS(21),
    [anon_sym_display] = ACTIONS(21),
    [anon_sym_div] = ACTIONS(21),
    [anon_sym_fluent] = ACTIONS(21),
    [anon_sym_mod] = ACTIONS(21),
    [anon_sym_parameter] = ACTIONS(21),
    [anon_sym_predecessor] = ACTIONS(21),
    [anon_sym_starting] = ACTIONS(21),
    [anon_sym_successor] = ACTIONS(21),
    [anon_sym_width] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(61),
    [sym_number] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [sym_expression] = STATE(111),
    [sym_expression_term] = STATE(143),
    [sym_term] = STATE(142),
    [sym_quantity] = STATE(130),
    [sym_literal] = STATE(149),
    [sym_qualified_identifier_expression] = STATE(274),
    [sym_boolean_expression] = STATE(143),
    [sym_type_expression] = STATE(143),
    [sym_cast_expression] = STATE(143),
    [sym_not_expression] = STATE(143),
    [sym_existence_expression] = STATE(143),
    [sym_between_expression] = STATE(143),
    [sym_equality_expression] = STATE(143),
    [sym_inequality_expression] = STATE(143),
    [sym_and_expression] = STATE(143),
    [sym_or_expression] = STATE(143),
    [sym_implies_expression] = STATE(143),
    [sym_in_fix_set_expression] = STATE(143),
    [sym_plural_date_time_precision] = STATE(290),
    [sym_duration_between_expression] = STATE(143),
    [sym_difference_between_expression] = STATE(143),
    [sym_membership_expression] = STATE(143),
    [sym_timing_expression] = STATE(143),
    [sym_query] = STATE(143),
    [sym_query_source] = STATE(233),
    [sym_aliased_query_source] = STATE(97),
    [sym_query_source_clause] = STATE(152),
    [sym_retrieve] = STATE(153),
    [sym_identifier] = STATE(218),
    [sym_quoted_identifier] = STATE(252),
    [sym_referential_identifier] = STATE(228),
    [sym_keyword_identifier] = STATE(218),
    [sym_string] = STATE(145),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(72),
    [anon_sym_library] = ACTIONS(21),
    [anon_sym_using] = ACTIONS(21),
    [anon_sym_called] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(21),
    [anon_sym_valueset] = ACTIONS(21),
    [anon_sym_public] = ACTIONS(21),
    [anon_sym_private] = ACTIONS(21),
    [anon_sym_context] = ACTIONS(21),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_function] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(25),
    [aux_sym_literal_token1] = ACTIONS(27),
    [anon_sym_null] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_cast] = ACTIONS(33),
    [anon_sym_exists] = ACTIONS(67),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_implies] = ACTIONS(21),
    [anon_sym_union] = ACTIONS(21),
    [anon_sym_intersect] = ACTIONS(21),
    [anon_sym_except] = ACTIONS(21),
    [anon_sym_years] = ACTIONS(39),
    [anon_sym_months] = ACTIONS(39),
    [anon_sym_weeks] = ACTIONS(39),
    [anon_sym_days] = ACTIONS(39),
    [anon_sym_hours] = ACTIONS(39),
    [anon_sym_minutes] = ACTIONS(39),
    [anon_sym_seconds] = ACTIONS(39),
    [anon_sym_milliseconds] = ACTIONS(39),
    [anon_sym_date] = ACTIONS(21),
    [anon_sym_time] = ACTIONS(21),
    [anon_sym_timezone] = ACTIONS(21),
    [anon_sym_timezoneoffset] = ACTIONS(21),
    [anon_sym_duration] = ACTIONS(41),
    [anon_sym_in] = ACTIONS(69),
    [anon_sym_difference] = ACTIONS(45),
    [anon_sym_contains] = ACTIONS(71),
    [anon_sym_orbefore] = ACTIONS(49),
    [anon_sym_orafter] = ACTIONS(49),
    [anon_sym_ormore] = ACTIONS(49),
    [anon_sym_orless] = ACTIONS(49),
    [anon_sym_starts] = ACTIONS(21),
    [anon_sym_ends] = ACTIONS(21),
    [anon_sym_start] = ACTIONS(21),
    [anon_sym_end] = ACTIONS(21),
    [anon_sym_includes] = ACTIONS(21),
    [anon_sym_meets] = ACTIONS(21),
    [anon_sym_overlaps] = ACTIONS(21),
    [anon_sym_where] = ACTIONS(21),
    [anon_sym_from] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_version] = ACTIONS(21),
    [sym_default_identifier] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [anon_sym_asc] = ACTIONS(21),
    [anon_sym_ascending] = ACTIONS(21),
    [anon_sym_by] = ACTIONS(21),
    [anon_sym_code] = ACTIONS(21),
    [anon_sym_codesystem] = ACTIONS(21),
    [anon_sym_codesystems] = ACTIONS(21),
    [anon_sym_concept] = ACTIONS(21),
    [anon_sym_default] = ACTIONS(21),
    [anon_sym_desc] = ACTIONS(21),
    [anon_sym_descending] = ACTIONS(21),
    [anon_sym_display] = ACTIONS(21),
    [anon_sym_div] = ACTIONS(21),
    [anon_sym_fluent] = ACTIONS(21),
    [anon_sym_mod] = ACTIONS(21),
    [anon_sym_parameter] = ACTIONS(21),
    [anon_sym_predecessor] = ACTIONS(21),
    [anon_sym_starting] = ACTIONS(21),
    [anon_sym_successor] = ACTIONS(21),
    [anon_sym_width] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(61),
    [sym_number] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
  },
  [21] = {
    [sym_expression] = STATE(75),
    [sym_expression_term] = STATE(143),
    [sym_term] = STATE(142),
    [sym_quantity] = STATE(130),
    [sym_literal] = STATE(149),
    [sym_qualified_identifier_expression] = STATE(274),
    [sym_boolean_expression] = STATE(143),
    [sym_type_expression] = STATE(143),
    [sym_cast_expression] = STATE(143),
    [sym_not_expression] = STATE(143),
    [sym_existence_expression] = STATE(143),
    [sym_between_expression] = STATE(143),
    [sym_equality_expression] = STATE(143),
    [sym_inequality_expression] = STATE(143),
    [sym_and_expression] = STATE(143),
    [sym_or_expression] = STATE(143),
    [sym_implies_expression] = STATE(143),
    [sym_in_fix_set_expression] = STATE(143),
    [sym_plural_date_time_precision] = STATE(290),
    [sym_duration_between_expression] = STATE(143),
    [sym_difference_between_expression] = STATE(143),
    [sym_membership_expression] = STATE(143),
    [sym_timing_expression] = STATE(143),
    [sym_query] = STATE(143),
    [sym_query_source] = STATE(233),
    [sym_aliased_query_source] = STATE(97),
    [sym_query_source_clause] = STATE(120),
    [sym_retrieve] = STATE(127),
    [sym_identifier] = STATE(218),
    [sym_quoted_identifier] = STATE(252),
    [sym_referential_identifier] = STATE(228),
    [sym_keyword_identifier] = STATE(218),
    [sym_string] = STATE(145),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(72),
    [anon_sym_library] = ACTIONS(21),
    [anon_sym_using] = ACTIONS(21),
    [anon_sym_called] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(21),
    [anon_sym_valueset] = ACTIONS(21),
    [anon_sym_public] = ACTIONS(21),
    [anon_sym_private] = ACTIONS(21),
    [anon_sym_context] = ACTIONS(21),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_function] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(25),
    [aux_sym_literal_token1] = ACTIONS(27),
    [anon_sym_null] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(31),
    [anon_sym_cast] = ACTIONS(33),
    [anon_sym_exists] = ACTIONS(35),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_implies] = ACTIONS(21),
    [anon_sym_union] = ACTIONS(21),
    [anon_sym_intersect] = ACTIONS(21),
    [anon_sym_except] = ACTIONS(21),
    [anon_sym_years] = ACTIONS(39),
    [anon_sym_months] = ACTIONS(39),
    [anon_sym_weeks] = ACTIONS(39),
    [anon_sym_days] = ACTIONS(39),
    [anon_sym_hours] = ACTIONS(39),
    [anon_sym_minutes] = ACTIONS(39),
    [anon_sym_seconds] = ACTIONS(39),
    [anon_sym_milliseconds] = ACTIONS(39),
    [anon_sym_date] = ACTIONS(21),
    [anon_sym_time] = ACTIONS(21),
    [anon_sym_timezone] = ACTIONS(21),
    [anon_sym_timezoneoffset] = ACTIONS(21),
    [anon_sym_duration] = ACTIONS(41),
    [anon_sym_in] = ACTIONS(43),
    [anon_sym_difference] = ACTIONS(45),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_orbefore] = ACTIONS(49),
    [anon_sym_orafter] = ACTIONS(49),
    [anon_sym_ormore] = ACTIONS(49),
    [anon_sym_orless] = ACTIONS(49),
    [anon_sym_starts] = ACTIONS(21),
    [anon_sym_ends] = ACTIONS(21),
    [anon_sym_start] = ACTIONS(21),
    [anon_sym_end] = ACTIONS(21),
    [anon_sym_includes] = ACTIONS(21),
    [anon_sym_meets] = ACTIONS(21),
    [anon_sym_overlaps] = ACTIONS(21),
    [anon_sym_where] = ACTIONS(21),
    [anon_sym_from] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_version] = ACTIONS(21),
    [sym_default_identifier] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [anon_sym_asc] = ACTIONS(21),
    [anon_sym_ascending] = ACTIONS(21),
    [anon_sym_by] = ACTIONS(21),
    [anon_sym_code] = ACTIONS(21),
    [anon_sym_codesystem] = ACTIONS(21),
    [anon_sym_codesystems] = ACTIONS(21),
    [anon_sym_concept] = ACTIONS(21),
    [anon_sym_default] = ACTIONS(21),
    [anon_sym_desc] = ACTIONS(21),
    [anon_sym_descending] = ACTIONS(21),
    [anon_sym_display] = ACTIONS(21),
    [anon_sym_div] = ACTIONS(21),
    [anon_sym_fluent] = ACTIONS(21),
    [anon_sym_mod] = ACTIONS(21),
    [anon_sym_parameter] = ACTIONS(21),
    [anon_sym_predecessor] = ACTIONS(21),
    [anon_sym_starting] = ACTIONS(21),
    [anon_sym_successor] = ACTIONS(21),
    [anon_sym_width] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(61),
    [sym_number] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
    [sym_expression] = STATE(104),
    [sym_expression_term] = STATE(143),
    [sym_term] = STATE(142),
    [sym_quantity] = STATE(130),
    [sym_literal] = STATE(149),
    [sym_qualified_identifier_expression] = STATE(274),
    [sym_boolean_expression] = STATE(143),
    [sym_type_expression] = STATE(143),
    [sym_cast_expression] = STATE(143),
    [sym_not_expression] = STATE(143),
    [sym_existence_expression] = STATE(143),
    [sym_between_expression] = STATE(143),
    [sym_equality_expression] = STATE(143),
    [sym_inequality_expression] = STATE(143),
    [sym_and_expression] = STATE(143),
    [sym_or_expression] = STATE(143),
    [sym_implies_expression] = STATE(143),
    [sym_in_fix_set_expression] = STATE(143),
    [sym_plural_date_time_precision] = STATE(290),
    [sym_duration_between_expression] = STATE(143),
    [sym_difference_between_expression] = STATE(143),
    [sym_membership_expression] = STATE(143),
    [sym_timing_expression] = STATE(143),
    [sym_query] = STATE(143),
    [sym_query_source] = STATE(233),
    [sym_aliased_query_source] = STATE(97),
    [sym_query_source_clause] = STATE(152),
    [sym_retrieve] = STATE(153),
    [sym_identifier] = STATE(218),
    [sym_quoted_identifier] = STATE(252),
    [sym_referential_identifier] = STATE(228),
    [sym_keyword_identifier] = STATE(218),
    [sym_string] = STATE(145),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(72),
    [anon_sym_library] = ACTIONS(21),
    [anon_sym_using] = ACTIONS(21),
    [anon_sym_called] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(21),
    [anon_sym_valueset] = ACTIONS(21),
    [anon_sym_public] = ACTIONS(21),
    [anon_sym_private] = ACTIONS(21),
    [anon_sym_context] = ACTIONS(21),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_function] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(25),
    [aux_sym_literal_token1] = ACTIONS(27),
    [anon_sym_null] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_cast] = ACTIONS(33),
    [anon_sym_exists] = ACTIONS(67),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_implies] = ACTIONS(21),
    [anon_sym_union] = ACTIONS(21),
    [anon_sym_intersect] = ACTIONS(21),
    [anon_sym_except] = ACTIONS(21),
    [anon_sym_years] = ACTIONS(39),
    [anon_sym_months] = ACTIONS(39),
    [anon_sym_weeks] = ACTIONS(39),
    [anon_sym_days] = ACTIONS(39),
    [anon_sym_hours] = ACTIONS(39),
    [anon_sym_minutes] = ACTIONS(39),
    [anon_sym_seconds] = ACTIONS(39),
    [anon_sym_milliseconds] = ACTIONS(39),
    [anon_sym_date] = ACTIONS(21),
    [anon_sym_time] = ACTIONS(21),
    [anon_sym_timezone] = ACTIONS(21),
    [anon_sym_timezoneoffset] = ACTIONS(21),
    [anon_sym_duration] = ACTIONS(41),
    [anon_sym_in] = ACTIONS(69),
    [anon_sym_difference] = ACTIONS(45),
    [anon_sym_contains] = ACTIONS(71),
    [anon_sym_orbefore] = ACTIONS(49),
    [anon_sym_orafter] = ACTIONS(49),
    [anon_sym_ormore] = ACTIONS(49),
    [anon_sym_orless] = ACTIONS(49),
    [anon_sym_starts] = ACTIONS(21),
    [anon_sym_ends] = ACTIONS(21),
    [anon_sym_start] = ACTIONS(21),
    [anon_sym_end] = ACTIONS(21),
    [anon_sym_includes] = ACTIONS(21),
    [anon_sym_meets] = ACTIONS(21),
    [anon_sym_overlaps] = ACTIONS(21),
    [anon_sym_where] = ACTIONS(21),
    [anon_sym_from] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_version] = ACTIONS(21),
    [sym_default_identifier] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [anon_sym_asc] = ACTIONS(21),
    [anon_sym_ascending] = ACTIONS(21),
    [anon_sym_by] = ACTIONS(21),
    [anon_sym_code] = ACTIONS(21),
    [anon_sym_codesystem] = ACTIONS(21),
    [anon_sym_codesystems] = ACTIONS(21),
    [anon_sym_concept] = ACTIONS(21),
    [anon_sym_default] = ACTIONS(21),
    [anon_sym_desc] = ACTIONS(21),
    [anon_sym_descending] = ACTIONS(21),
    [anon_sym_display] = ACTIONS(21),
    [anon_sym_div] = ACTIONS(21),
    [anon_sym_fluent] = ACTIONS(21),
    [anon_sym_mod] = ACTIONS(21),
    [anon_sym_parameter] = ACTIONS(21),
    [anon_sym_predecessor] = ACTIONS(21),
    [anon_sym_starting] = ACTIONS(21),
    [anon_sym_successor] = ACTIONS(21),
    [anon_sym_width] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(61),
    [sym_number] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
  },
  [23] = {
    [sym_expression] = STATE(101),
    [sym_expression_term] = STATE(143),
    [sym_term] = STATE(142),
    [sym_quantity] = STATE(130),
    [sym_literal] = STATE(149),
    [sym_qualified_identifier_expression] = STATE(274),
    [sym_boolean_expression] = STATE(143),
    [sym_type_expression] = STATE(143),
    [sym_cast_expression] = STATE(143),
    [sym_not_expression] = STATE(143),
    [sym_existence_expression] = STATE(143),
    [sym_between_expression] = STATE(143),
    [sym_equality_expression] = STATE(143),
    [sym_inequality_expression] = STATE(143),
    [sym_and_expression] = STATE(143),
    [sym_or_expression] = STATE(143),
    [sym_implies_expression] = STATE(143),
    [sym_in_fix_set_expression] = STATE(143),
    [sym_plural_date_time_precision] = STATE(290),
    [sym_duration_between_expression] = STATE(143),
    [sym_difference_between_expression] = STATE(143),
    [sym_membership_expression] = STATE(143),
    [sym_timing_expression] = STATE(143),
    [sym_query] = STATE(143),
    [sym_query_source] = STATE(233),
    [sym_aliased_query_source] = STATE(97),
    [sym_query_source_clause] = STATE(152),
    [sym_retrieve] = STATE(153),
    [sym_identifier] = STATE(218),
    [sym_quoted_identifier] = STATE(252),
    [sym_referential_identifier] = STATE(228),
    [sym_keyword_identifier] = STATE(218),
    [sym_string] = STATE(145),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(72),
    [anon_sym_library] = ACTIONS(21),
    [anon_sym_using] = ACTIONS(21),
    [anon_sym_called] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(21),
    [anon_sym_valueset] = ACTIONS(21),
    [anon_sym_public] = ACTIONS(21),
    [anon_sym_private] = ACTIONS(21),
    [anon_sym_context] = ACTIONS(21),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_function] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(25),
    [aux_sym_literal_token1] = ACTIONS(27),
    [anon_sym_null] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_cast] = ACTIONS(33),
    [anon_sym_exists] = ACTIONS(67),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_implies] = ACTIONS(21),
    [anon_sym_union] = ACTIONS(21),
    [anon_sym_intersect] = ACTIONS(21),
    [anon_sym_except] = ACTIONS(21),
    [anon_sym_years] = ACTIONS(39),
    [anon_sym_months] = ACTIONS(39),
    [anon_sym_weeks] = ACTIONS(39),
    [anon_sym_days] = ACTIONS(39),
    [anon_sym_hours] = ACTIONS(39),
    [anon_sym_minutes] = ACTIONS(39),
    [anon_sym_seconds] = ACTIONS(39),
    [anon_sym_milliseconds] = ACTIONS(39),
    [anon_sym_date] = ACTIONS(21),
    [anon_sym_time] = ACTIONS(21),
    [anon_sym_timezone] = ACTIONS(21),
    [anon_sym_timezoneoffset] = ACTIONS(21),
    [anon_sym_duration] = ACTIONS(41),
    [anon_sym_in] = ACTIONS(69),
    [anon_sym_difference] = ACTIONS(45),
    [anon_sym_contains] = ACTIONS(71),
    [anon_sym_orbefore] = ACTIONS(49),
    [anon_sym_orafter] = ACTIONS(49),
    [anon_sym_ormore] = ACTIONS(49),
    [anon_sym_orless] = ACTIONS(49),
    [anon_sym_starts] = ACTIONS(21),
    [anon_sym_ends] = ACTIONS(21),
    [anon_sym_start] = ACTIONS(21),
    [anon_sym_end] = ACTIONS(21),
    [anon_sym_includes] = ACTIONS(21),
    [anon_sym_meets] = ACTIONS(21),
    [anon_sym_overlaps] = ACTIONS(21),
    [anon_sym_where] = ACTIONS(21),
    [anon_sym_from] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_version] = ACTIONS(21),
    [sym_default_identifier] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [anon_sym_asc] = ACTIONS(21),
    [anon_sym_ascending] = ACTIONS(21),
    [anon_sym_by] = ACTIONS(21),
    [anon_sym_code] = ACTIONS(21),
    [anon_sym_codesystem] = ACTIONS(21),
    [anon_sym_codesystems] = ACTIONS(21),
    [anon_sym_concept] = ACTIONS(21),
    [anon_sym_default] = ACTIONS(21),
    [anon_sym_desc] = ACTIONS(21),
    [anon_sym_descending] = ACTIONS(21),
    [anon_sym_display] = ACTIONS(21),
    [anon_sym_div] = ACTIONS(21),
    [anon_sym_fluent] = ACTIONS(21),
    [anon_sym_mod] = ACTIONS(21),
    [anon_sym_parameter] = ACTIONS(21),
    [anon_sym_predecessor] = ACTIONS(21),
    [anon_sym_starting] = ACTIONS(21),
    [anon_sym_successor] = ACTIONS(21),
    [anon_sym_width] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(61),
    [sym_number] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
  },
  [24] = {
    [sym_expression] = STATE(112),
    [sym_expression_term] = STATE(143),
    [sym_term] = STATE(142),
    [sym_quantity] = STATE(130),
    [sym_literal] = STATE(149),
    [sym_qualified_identifier_expression] = STATE(274),
    [sym_boolean_expression] = STATE(143),
    [sym_type_expression] = STATE(143),
    [sym_cast_expression] = STATE(143),
    [sym_not_expression] = STATE(143),
    [sym_existence_expression] = STATE(143),
    [sym_between_expression] = STATE(143),
    [sym_equality_expression] = STATE(143),
    [sym_inequality_expression] = STATE(143),
    [sym_and_expression] = STATE(143),
    [sym_or_expression] = STATE(143),
    [sym_implies_expression] = STATE(143),
    [sym_in_fix_set_expression] = STATE(143),
    [sym_plural_date_time_precision] = STATE(290),
    [sym_duration_between_expression] = STATE(143),
    [sym_difference_between_expression] = STATE(143),
    [sym_membership_expression] = STATE(143),
    [sym_timing_expression] = STATE(143),
    [sym_query] = STATE(143),
    [sym_query_source] = STATE(233),
    [sym_aliased_query_source] = STATE(97),
    [sym_query_source_clause] = STATE(152),
    [sym_retrieve] = STATE(153),
    [sym_identifier] = STATE(218),
    [sym_quoted_identifier] = STATE(252),
    [sym_referential_identifier] = STATE(228),
    [sym_keyword_identifier] = STATE(218),
    [sym_string] = STATE(145),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(72),
    [anon_sym_library] = ACTIONS(21),
    [anon_sym_using] = ACTIONS(21),
    [anon_sym_called] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(21),
    [anon_sym_valueset] = ACTIONS(21),
    [anon_sym_public] = ACTIONS(21),
    [anon_sym_private] = ACTIONS(21),
    [anon_sym_context] = ACTIONS(21),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_function] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(25),
    [aux_sym_literal_token1] = ACTIONS(27),
    [anon_sym_null] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_cast] = ACTIONS(33),
    [anon_sym_exists] = ACTIONS(67),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_implies] = ACTIONS(21),
    [anon_sym_union] = ACTIONS(21),
    [anon_sym_intersect] = ACTIONS(21),
    [anon_sym_except] = ACTIONS(21),
    [anon_sym_years] = ACTIONS(39),
    [anon_sym_months] = ACTIONS(39),
    [anon_sym_weeks] = ACTIONS(39),
    [anon_sym_days] = ACTIONS(39),
    [anon_sym_hours] = ACTIONS(39),
    [anon_sym_minutes] = ACTIONS(39),
    [anon_sym_seconds] = ACTIONS(39),
    [anon_sym_milliseconds] = ACTIONS(39),
    [anon_sym_date] = ACTIONS(21),
    [anon_sym_time] = ACTIONS(21),
    [anon_sym_timezone] = ACTIONS(21),
    [anon_sym_timezoneoffset] = ACTIONS(21),
    [anon_sym_duration] = ACTIONS(41),
    [anon_sym_in] = ACTIONS(69),
    [anon_sym_difference] = ACTIONS(45),
    [anon_sym_contains] = ACTIONS(71),
    [anon_sym_orbefore] = ACTIONS(49),
    [anon_sym_orafter] = ACTIONS(49),
    [anon_sym_ormore] = ACTIONS(49),
    [anon_sym_orless] = ACTIONS(49),
    [anon_sym_starts] = ACTIONS(21),
    [anon_sym_ends] = ACTIONS(21),
    [anon_sym_start] = ACTIONS(21),
    [anon_sym_end] = ACTIONS(21),
    [anon_sym_includes] = ACTIONS(21),
    [anon_sym_meets] = ACTIONS(21),
    [anon_sym_overlaps] = ACTIONS(21),
    [anon_sym_where] = ACTIONS(21),
    [anon_sym_from] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_version] = ACTIONS(21),
    [sym_default_identifier] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [anon_sym_asc] = ACTIONS(21),
    [anon_sym_ascending] = ACTIONS(21),
    [anon_sym_by] = ACTIONS(21),
    [anon_sym_code] = ACTIONS(21),
    [anon_sym_codesystem] = ACTIONS(21),
    [anon_sym_codesystems] = ACTIONS(21),
    [anon_sym_concept] = ACTIONS(21),
    [anon_sym_default] = ACTIONS(21),
    [anon_sym_desc] = ACTIONS(21),
    [anon_sym_descending] = ACTIONS(21),
    [anon_sym_display] = ACTIONS(21),
    [anon_sym_div] = ACTIONS(21),
    [anon_sym_fluent] = ACTIONS(21),
    [anon_sym_mod] = ACTIONS(21),
    [anon_sym_parameter] = ACTIONS(21),
    [anon_sym_predecessor] = ACTIONS(21),
    [anon_sym_starting] = ACTIONS(21),
    [anon_sym_successor] = ACTIONS(21),
    [anon_sym_width] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(61),
    [sym_number] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
  },
  [25] = {
    [sym_expression] = STATE(109),
    [sym_expression_term] = STATE(143),
    [sym_term] = STATE(142),
    [sym_quantity] = STATE(130),
    [sym_literal] = STATE(149),
    [sym_qualified_identifier_expression] = STATE(274),
    [sym_boolean_expression] = STATE(143),
    [sym_type_expression] = STATE(143),
    [sym_cast_expression] = STATE(143),
    [sym_not_expression] = STATE(143),
    [sym_existence_expression] = STATE(143),
    [sym_between_expression] = STATE(143),
    [sym_equality_expression] = STATE(143),
    [sym_inequality_expression] = STATE(143),
    [sym_and_expression] = STATE(143),
    [sym_or_expression] = STATE(143),
    [sym_implies_expression] = STATE(143),
    [sym_in_fix_set_expression] = STATE(143),
    [sym_plural_date_time_precision] = STATE(290),
    [sym_duration_between_expression] = STATE(143),
    [sym_difference_between_expression] = STATE(143),
    [sym_membership_expression] = STATE(143),
    [sym_timing_expression] = STATE(143),
    [sym_query] = STATE(143),
    [sym_query_source] = STATE(233),
    [sym_aliased_query_source] = STATE(97),
    [sym_query_source_clause] = STATE(152),
    [sym_retrieve] = STATE(153),
    [sym_identifier] = STATE(218),
    [sym_quoted_identifier] = STATE(252),
    [sym_referential_identifier] = STATE(228),
    [sym_keyword_identifier] = STATE(218),
    [sym_string] = STATE(145),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(72),
    [anon_sym_library] = ACTIONS(21),
    [anon_sym_using] = ACTIONS(21),
    [anon_sym_called] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(21),
    [anon_sym_valueset] = ACTIONS(21),
    [anon_sym_public] = ACTIONS(21),
    [anon_sym_private] = ACTIONS(21),
    [anon_sym_context] = ACTIONS(21),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_function] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(25),
    [aux_sym_literal_token1] = ACTIONS(27),
    [anon_sym_null] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_cast] = ACTIONS(33),
    [anon_sym_exists] = ACTIONS(67),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_implies] = ACTIONS(21),
    [anon_sym_union] = ACTIONS(21),
    [anon_sym_intersect] = ACTIONS(21),
    [anon_sym_except] = ACTIONS(21),
    [anon_sym_years] = ACTIONS(39),
    [anon_sym_months] = ACTIONS(39),
    [anon_sym_weeks] = ACTIONS(39),
    [anon_sym_days] = ACTIONS(39),
    [anon_sym_hours] = ACTIONS(39),
    [anon_sym_minutes] = ACTIONS(39),
    [anon_sym_seconds] = ACTIONS(39),
    [anon_sym_milliseconds] = ACTIONS(39),
    [anon_sym_date] = ACTIONS(21),
    [anon_sym_time] = ACTIONS(21),
    [anon_sym_timezone] = ACTIONS(21),
    [anon_sym_timezoneoffset] = ACTIONS(21),
    [anon_sym_duration] = ACTIONS(41),
    [anon_sym_in] = ACTIONS(69),
    [anon_sym_difference] = ACTIONS(45),
    [anon_sym_contains] = ACTIONS(71),
    [anon_sym_orbefore] = ACTIONS(49),
    [anon_sym_orafter] = ACTIONS(49),
    [anon_sym_ormore] = ACTIONS(49),
    [anon_sym_orless] = ACTIONS(49),
    [anon_sym_starts] = ACTIONS(21),
    [anon_sym_ends] = ACTIONS(21),
    [anon_sym_start] = ACTIONS(21),
    [anon_sym_end] = ACTIONS(21),
    [anon_sym_includes] = ACTIONS(21),
    [anon_sym_meets] = ACTIONS(21),
    [anon_sym_overlaps] = ACTIONS(21),
    [anon_sym_where] = ACTIONS(21),
    [anon_sym_from] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_version] = ACTIONS(21),
    [sym_default_identifier] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [anon_sym_asc] = ACTIONS(21),
    [anon_sym_ascending] = ACTIONS(21),
    [anon_sym_by] = ACTIONS(21),
    [anon_sym_code] = ACTIONS(21),
    [anon_sym_codesystem] = ACTIONS(21),
    [anon_sym_codesystems] = ACTIONS(21),
    [anon_sym_concept] = ACTIONS(21),
    [anon_sym_default] = ACTIONS(21),
    [anon_sym_desc] = ACTIONS(21),
    [anon_sym_descending] = ACTIONS(21),
    [anon_sym_display] = ACTIONS(21),
    [anon_sym_div] = ACTIONS(21),
    [anon_sym_fluent] = ACTIONS(21),
    [anon_sym_mod] = ACTIONS(21),
    [anon_sym_parameter] = ACTIONS(21),
    [anon_sym_predecessor] = ACTIONS(21),
    [anon_sym_starting] = ACTIONS(21),
    [anon_sym_successor] = ACTIONS(21),
    [anon_sym_width] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(61),
    [sym_number] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
  },
  [26] = {
    [sym_expression] = STATE(103),
    [sym_expression_term] = STATE(143),
    [sym_term] = STATE(142),
    [sym_quantity] = STATE(130),
    [sym_literal] = STATE(149),
    [sym_qualified_identifier_expression] = STATE(274),
    [sym_boolean_expression] = STATE(143),
    [sym_type_expression] = STATE(143),
    [sym_cast_expression] = STATE(143),
    [sym_not_expression] = STATE(143),
    [sym_existence_expression] = STATE(143),
    [sym_between_expression] = STATE(143),
    [sym_equality_expression] = STATE(143),
    [sym_inequality_expression] = STATE(143),
    [sym_and_expression] = STATE(143),
    [sym_or_expression] = STATE(143),
    [sym_implies_expression] = STATE(143),
    [sym_in_fix_set_expression] = STATE(143),
    [sym_plural_date_time_precision] = STATE(290),
    [sym_duration_between_expression] = STATE(143),
    [sym_difference_between_expression] = STATE(143),
    [sym_membership_expression] = STATE(143),
    [sym_timing_expression] = STATE(143),
    [sym_query] = STATE(143),
    [sym_query_source] = STATE(233),
    [sym_aliased_query_source] = STATE(97),
    [sym_query_source_clause] = STATE(152),
    [sym_retrieve] = STATE(153),
    [sym_identifier] = STATE(218),
    [sym_quoted_identifier] = STATE(252),
    [sym_referential_identifier] = STATE(228),
    [sym_keyword_identifier] = STATE(218),
    [sym_string] = STATE(145),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(72),
    [anon_sym_library] = ACTIONS(21),
    [anon_sym_using] = ACTIONS(21),
    [anon_sym_called] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(21),
    [anon_sym_valueset] = ACTIONS(21),
    [anon_sym_public] = ACTIONS(21),
    [anon_sym_private] = ACTIONS(21),
    [anon_sym_context] = ACTIONS(21),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_function] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(25),
    [aux_sym_literal_token1] = ACTIONS(27),
    [anon_sym_null] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_cast] = ACTIONS(33),
    [anon_sym_exists] = ACTIONS(67),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_implies] = ACTIONS(21),
    [anon_sym_union] = ACTIONS(21),
    [anon_sym_intersect] = ACTIONS(21),
    [anon_sym_except] = ACTIONS(21),
    [anon_sym_years] = ACTIONS(39),
    [anon_sym_months] = ACTIONS(39),
    [anon_sym_weeks] = ACTIONS(39),
    [anon_sym_days] = ACTIONS(39),
    [anon_sym_hours] = ACTIONS(39),
    [anon_sym_minutes] = ACTIONS(39),
    [anon_sym_seconds] = ACTIONS(39),
    [anon_sym_milliseconds] = ACTIONS(39),
    [anon_sym_date] = ACTIONS(21),
    [anon_sym_time] = ACTIONS(21),
    [anon_sym_timezone] = ACTIONS(21),
    [anon_sym_timezoneoffset] = ACTIONS(21),
    [anon_sym_duration] = ACTIONS(41),
    [anon_sym_in] = ACTIONS(69),
    [anon_sym_difference] = ACTIONS(45),
    [anon_sym_contains] = ACTIONS(71),
    [anon_sym_orbefore] = ACTIONS(49),
    [anon_sym_orafter] = ACTIONS(49),
    [anon_sym_ormore] = ACTIONS(49),
    [anon_sym_orless] = ACTIONS(49),
    [anon_sym_starts] = ACTIONS(21),
    [anon_sym_ends] = ACTIONS(21),
    [anon_sym_start] = ACTIONS(21),
    [anon_sym_end] = ACTIONS(21),
    [anon_sym_includes] = ACTIONS(21),
    [anon_sym_meets] = ACTIONS(21),
    [anon_sym_overlaps] = ACTIONS(21),
    [anon_sym_where] = ACTIONS(21),
    [anon_sym_from] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_version] = ACTIONS(21),
    [sym_default_identifier] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [anon_sym_asc] = ACTIONS(21),
    [anon_sym_ascending] = ACTIONS(21),
    [anon_sym_by] = ACTIONS(21),
    [anon_sym_code] = ACTIONS(21),
    [anon_sym_codesystem] = ACTIONS(21),
    [anon_sym_codesystems] = ACTIONS(21),
    [anon_sym_concept] = ACTIONS(21),
    [anon_sym_default] = ACTIONS(21),
    [anon_sym_desc] = ACTIONS(21),
    [anon_sym_descending] = ACTIONS(21),
    [anon_sym_display] = ACTIONS(21),
    [anon_sym_div] = ACTIONS(21),
    [anon_sym_fluent] = ACTIONS(21),
    [anon_sym_mod] = ACTIONS(21),
    [anon_sym_parameter] = ACTIONS(21),
    [anon_sym_predecessor] = ACTIONS(21),
    [anon_sym_starting] = ACTIONS(21),
    [anon_sym_successor] = ACTIONS(21),
    [anon_sym_width] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(61),
    [sym_number] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
  },
  [27] = {
    [sym_expression] = STATE(82),
    [sym_expression_term] = STATE(143),
    [sym_term] = STATE(142),
    [sym_quantity] = STATE(130),
    [sym_literal] = STATE(149),
    [sym_qualified_identifier_expression] = STATE(274),
    [sym_boolean_expression] = STATE(143),
    [sym_type_expression] = STATE(143),
    [sym_cast_expression] = STATE(143),
    [sym_not_expression] = STATE(143),
    [sym_existence_expression] = STATE(143),
    [sym_between_expression] = STATE(143),
    [sym_equality_expression] = STATE(143),
    [sym_inequality_expression] = STATE(143),
    [sym_and_expression] = STATE(143),
    [sym_or_expression] = STATE(143),
    [sym_implies_expression] = STATE(143),
    [sym_in_fix_set_expression] = STATE(143),
    [sym_plural_date_time_precision] = STATE(290),
    [sym_duration_between_expression] = STATE(143),
    [sym_difference_between_expression] = STATE(143),
    [sym_membership_expression] = STATE(143),
    [sym_timing_expression] = STATE(143),
    [sym_query] = STATE(143),
    [sym_query_source] = STATE(233),
    [sym_aliased_query_source] = STATE(97),
    [sym_query_source_clause] = STATE(120),
    [sym_retrieve] = STATE(127),
    [sym_identifier] = STATE(218),
    [sym_quoted_identifier] = STATE(252),
    [sym_referential_identifier] = STATE(228),
    [sym_keyword_identifier] = STATE(218),
    [sym_string] = STATE(145),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(72),
    [anon_sym_library] = ACTIONS(21),
    [anon_sym_using] = ACTIONS(21),
    [anon_sym_called] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(21),
    [anon_sym_valueset] = ACTIONS(21),
    [anon_sym_public] = ACTIONS(21),
    [anon_sym_private] = ACTIONS(21),
    [anon_sym_context] = ACTIONS(21),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_function] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(25),
    [aux_sym_literal_token1] = ACTIONS(27),
    [anon_sym_null] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(31),
    [anon_sym_cast] = ACTIONS(33),
    [anon_sym_exists] = ACTIONS(35),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_implies] = ACTIONS(21),
    [anon_sym_union] = ACTIONS(21),
    [anon_sym_intersect] = ACTIONS(21),
    [anon_sym_except] = ACTIONS(21),
    [anon_sym_years] = ACTIONS(39),
    [anon_sym_months] = ACTIONS(39),
    [anon_sym_weeks] = ACTIONS(39),
    [anon_sym_days] = ACTIONS(39),
    [anon_sym_hours] = ACTIONS(39),
    [anon_sym_minutes] = ACTIONS(39),
    [anon_sym_seconds] = ACTIONS(39),
    [anon_sym_milliseconds] = ACTIONS(39),
    [anon_sym_date] = ACTIONS(21),
    [anon_sym_time] = ACTIONS(21),
    [anon_sym_timezone] = ACTIONS(21),
    [anon_sym_timezoneoffset] = ACTIONS(21),
    [anon_sym_duration] = ACTIONS(41),
    [anon_sym_in] = ACTIONS(43),
    [anon_sym_difference] = ACTIONS(45),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_orbefore] = ACTIONS(49),
    [anon_sym_orafter] = ACTIONS(49),
    [anon_sym_ormore] = ACTIONS(49),
    [anon_sym_orless] = ACTIONS(49),
    [anon_sym_starts] = ACTIONS(21),
    [anon_sym_ends] = ACTIONS(21),
    [anon_sym_start] = ACTIONS(21),
    [anon_sym_end] = ACTIONS(21),
    [anon_sym_includes] = ACTIONS(21),
    [anon_sym_meets] = ACTIONS(21),
    [anon_sym_overlaps] = ACTIONS(21),
    [anon_sym_where] = ACTIONS(21),
    [anon_sym_from] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_version] = ACTIONS(21),
    [sym_default_identifier] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [anon_sym_asc] = ACTIONS(21),
    [anon_sym_ascending] = ACTIONS(21),
    [anon_sym_by] = ACTIONS(21),
    [anon_sym_code] = ACTIONS(21),
    [anon_sym_codesystem] = ACTIONS(21),
    [anon_sym_codesystems] = ACTIONS(21),
    [anon_sym_concept] = ACTIONS(21),
    [anon_sym_default] = ACTIONS(21),
    [anon_sym_desc] = ACTIONS(21),
    [anon_sym_descending] = ACTIONS(21),
    [anon_sym_display] = ACTIONS(21),
    [anon_sym_div] = ACTIONS(21),
    [anon_sym_fluent] = ACTIONS(21),
    [anon_sym_mod] = ACTIONS(21),
    [anon_sym_parameter] = ACTIONS(21),
    [anon_sym_predecessor] = ACTIONS(21),
    [anon_sym_starting] = ACTIONS(21),
    [anon_sym_successor] = ACTIONS(21),
    [anon_sym_width] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(61),
    [sym_number] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
  },
  [28] = {
    [sym_expression] = STATE(88),
    [sym_expression_term] = STATE(143),
    [sym_term] = STATE(142),
    [sym_quantity] = STATE(130),
    [sym_literal] = STATE(149),
    [sym_qualified_identifier_expression] = STATE(274),
    [sym_boolean_expression] = STATE(143),
    [sym_type_expression] = STATE(143),
    [sym_cast_expression] = STATE(143),
    [sym_not_expression] = STATE(143),
    [sym_existence_expression] = STATE(143),
    [sym_between_expression] = STATE(143),
    [sym_equality_expression] = STATE(143),
    [sym_inequality_expression] = STATE(143),
    [sym_and_expression] = STATE(143),
    [sym_or_expression] = STATE(143),
    [sym_implies_expression] = STATE(143),
    [sym_in_fix_set_expression] = STATE(143),
    [sym_plural_date_time_precision] = STATE(290),
    [sym_duration_between_expression] = STATE(143),
    [sym_difference_between_expression] = STATE(143),
    [sym_membership_expression] = STATE(143),
    [sym_timing_expression] = STATE(143),
    [sym_query] = STATE(143),
    [sym_query_source] = STATE(233),
    [sym_aliased_query_source] = STATE(97),
    [sym_query_source_clause] = STATE(120),
    [sym_retrieve] = STATE(127),
    [sym_identifier] = STATE(218),
    [sym_quoted_identifier] = STATE(252),
    [sym_referential_identifier] = STATE(228),
    [sym_keyword_identifier] = STATE(218),
    [sym_string] = STATE(145),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(72),
    [anon_sym_library] = ACTIONS(21),
    [anon_sym_using] = ACTIONS(21),
    [anon_sym_called] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(21),
    [anon_sym_valueset] = ACTIONS(21),
    [anon_sym_public] = ACTIONS(21),
    [anon_sym_private] = ACTIONS(21),
    [anon_sym_context] = ACTIONS(21),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_function] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(25),
    [aux_sym_literal_token1] = ACTIONS(27),
    [anon_sym_null] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(31),
    [anon_sym_cast] = ACTIONS(33),
    [anon_sym_exists] = ACTIONS(35),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_implies] = ACTIONS(21),
    [anon_sym_union] = ACTIONS(21),
    [anon_sym_intersect] = ACTIONS(21),
    [anon_sym_except] = ACTIONS(21),
    [anon_sym_years] = ACTIONS(39),
    [anon_sym_months] = ACTIONS(39),
    [anon_sym_weeks] = ACTIONS(39),
    [anon_sym_days] = ACTIONS(39),
    [anon_sym_hours] = ACTIONS(39),
    [anon_sym_minutes] = ACTIONS(39),
    [anon_sym_seconds] = ACTIONS(39),
    [anon_sym_milliseconds] = ACTIONS(39),
    [anon_sym_date] = ACTIONS(21),
    [anon_sym_time] = ACTIONS(21),
    [anon_sym_timezone] = ACTIONS(21),
    [anon_sym_timezoneoffset] = ACTIONS(21),
    [anon_sym_duration] = ACTIONS(41),
    [anon_sym_in] = ACTIONS(43),
    [anon_sym_difference] = ACTIONS(45),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_orbefore] = ACTIONS(49),
    [anon_sym_orafter] = ACTIONS(49),
    [anon_sym_ormore] = ACTIONS(49),
    [anon_sym_orless] = ACTIONS(49),
    [anon_sym_starts] = ACTIONS(21),
    [anon_sym_ends] = ACTIONS(21),
    [anon_sym_start] = ACTIONS(21),
    [anon_sym_end] = ACTIONS(21),
    [anon_sym_includes] = ACTIONS(21),
    [anon_sym_meets] = ACTIONS(21),
    [anon_sym_overlaps] = ACTIONS(21),
    [anon_sym_where] = ACTIONS(21),
    [anon_sym_from] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_version] = ACTIONS(21),
    [sym_default_identifier] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [anon_sym_asc] = ACTIONS(21),
    [anon_sym_ascending] = ACTIONS(21),
    [anon_sym_by] = ACTIONS(21),
    [anon_sym_code] = ACTIONS(21),
    [anon_sym_codesystem] = ACTIONS(21),
    [anon_sym_codesystems] = ACTIONS(21),
    [anon_sym_concept] = ACTIONS(21),
    [anon_sym_default] = ACTIONS(21),
    [anon_sym_desc] = ACTIONS(21),
    [anon_sym_descending] = ACTIONS(21),
    [anon_sym_display] = ACTIONS(21),
    [anon_sym_div] = ACTIONS(21),
    [anon_sym_fluent] = ACTIONS(21),
    [anon_sym_mod] = ACTIONS(21),
    [anon_sym_parameter] = ACTIONS(21),
    [anon_sym_predecessor] = ACTIONS(21),
    [anon_sym_starting] = ACTIONS(21),
    [anon_sym_successor] = ACTIONS(21),
    [anon_sym_width] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(61),
    [sym_number] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
  },
  [29] = {
    [sym_expression] = STATE(102),
    [sym_expression_term] = STATE(143),
    [sym_term] = STATE(142),
    [sym_quantity] = STATE(130),
    [sym_literal] = STATE(149),
    [sym_qualified_identifier_expression] = STATE(274),
    [sym_boolean_expression] = STATE(143),
    [sym_type_expression] = STATE(143),
    [sym_cast_expression] = STATE(143),
    [sym_not_expression] = STATE(143),
    [sym_existence_expression] = STATE(143),
    [sym_between_expression] = STATE(143),
    [sym_equality_expression] = STATE(143),
    [sym_inequality_expression] = STATE(143),
    [sym_and_expression] = STATE(143),
    [sym_or_expression] = STATE(143),
    [sym_implies_expression] = STATE(143),
    [sym_in_fix_set_expression] = STATE(143),
    [sym_plural_date_time_precision] = STATE(290),
    [sym_duration_between_expression] = STATE(143),
    [sym_difference_between_expression] = STATE(143),
    [sym_membership_expression] = STATE(143),
    [sym_timing_expression] = STATE(143),
    [sym_query] = STATE(143),
    [sym_query_source] = STATE(233),
    [sym_aliased_query_source] = STATE(97),
    [sym_query_source_clause] = STATE(152),
    [sym_retrieve] = STATE(153),
    [sym_identifier] = STATE(218),
    [sym_quoted_identifier] = STATE(252),
    [sym_referential_identifier] = STATE(228),
    [sym_keyword_identifier] = STATE(218),
    [sym_string] = STATE(145),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(72),
    [anon_sym_library] = ACTIONS(21),
    [anon_sym_using] = ACTIONS(21),
    [anon_sym_called] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(21),
    [anon_sym_valueset] = ACTIONS(21),
    [anon_sym_public] = ACTIONS(21),
    [anon_sym_private] = ACTIONS(21),
    [anon_sym_context] = ACTIONS(21),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_function] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(25),
    [aux_sym_literal_token1] = ACTIONS(27),
    [anon_sym_null] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_cast] = ACTIONS(33),
    [anon_sym_exists] = ACTIONS(67),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_implies] = ACTIONS(21),
    [anon_sym_union] = ACTIONS(21),
    [anon_sym_intersect] = ACTIONS(21),
    [anon_sym_except] = ACTIONS(21),
    [anon_sym_years] = ACTIONS(39),
    [anon_sym_months] = ACTIONS(39),
    [anon_sym_weeks] = ACTIONS(39),
    [anon_sym_days] = ACTIONS(39),
    [anon_sym_hours] = ACTIONS(39),
    [anon_sym_minutes] = ACTIONS(39),
    [anon_sym_seconds] = ACTIONS(39),
    [anon_sym_milliseconds] = ACTIONS(39),
    [anon_sym_date] = ACTIONS(21),
    [anon_sym_time] = ACTIONS(21),
    [anon_sym_timezone] = ACTIONS(21),
    [anon_sym_timezoneoffset] = ACTIONS(21),
    [anon_sym_duration] = ACTIONS(41),
    [anon_sym_in] = ACTIONS(69),
    [anon_sym_difference] = ACTIONS(45),
    [anon_sym_contains] = ACTIONS(71),
    [anon_sym_orbefore] = ACTIONS(49),
    [anon_sym_orafter] = ACTIONS(49),
    [anon_sym_ormore] = ACTIONS(49),
    [anon_sym_orless] = ACTIONS(49),
    [anon_sym_starts] = ACTIONS(21),
    [anon_sym_ends] = ACTIONS(21),
    [anon_sym_start] = ACTIONS(21),
    [anon_sym_end] = ACTIONS(21),
    [anon_sym_includes] = ACTIONS(21),
    [anon_sym_meets] = ACTIONS(21),
    [anon_sym_overlaps] = ACTIONS(21),
    [anon_sym_where] = ACTIONS(21),
    [anon_sym_from] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_version] = ACTIONS(21),
    [sym_default_identifier] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [anon_sym_asc] = ACTIONS(21),
    [anon_sym_ascending] = ACTIONS(21),
    [anon_sym_by] = ACTIONS(21),
    [anon_sym_code] = ACTIONS(21),
    [anon_sym_codesystem] = ACTIONS(21),
    [anon_sym_codesystems] = ACTIONS(21),
    [anon_sym_concept] = ACTIONS(21),
    [anon_sym_default] = ACTIONS(21),
    [anon_sym_desc] = ACTIONS(21),
    [anon_sym_descending] = ACTIONS(21),
    [anon_sym_display] = ACTIONS(21),
    [anon_sym_div] = ACTIONS(21),
    [anon_sym_fluent] = ACTIONS(21),
    [anon_sym_mod] = ACTIONS(21),
    [anon_sym_parameter] = ACTIONS(21),
    [anon_sym_predecessor] = ACTIONS(21),
    [anon_sym_starting] = ACTIONS(21),
    [anon_sym_successor] = ACTIONS(21),
    [anon_sym_width] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(61),
    [sym_number] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
  },
  [30] = {
    [sym_expression] = STATE(106),
    [sym_expression_term] = STATE(143),
    [sym_term] = STATE(142),
    [sym_quantity] = STATE(130),
    [sym_literal] = STATE(149),
    [sym_qualified_identifier_expression] = STATE(274),
    [sym_boolean_expression] = STATE(143),
    [sym_type_expression] = STATE(143),
    [sym_cast_expression] = STATE(143),
    [sym_not_expression] = STATE(143),
    [sym_existence_expression] = STATE(143),
    [sym_between_expression] = STATE(143),
    [sym_equality_expression] = STATE(143),
    [sym_inequality_expression] = STATE(143),
    [sym_and_expression] = STATE(143),
    [sym_or_expression] = STATE(143),
    [sym_implies_expression] = STATE(143),
    [sym_in_fix_set_expression] = STATE(143),
    [sym_plural_date_time_precision] = STATE(290),
    [sym_duration_between_expression] = STATE(143),
    [sym_difference_between_expression] = STATE(143),
    [sym_membership_expression] = STATE(143),
    [sym_timing_expression] = STATE(143),
    [sym_query] = STATE(143),
    [sym_query_source] = STATE(233),
    [sym_aliased_query_source] = STATE(97),
    [sym_query_source_clause] = STATE(152),
    [sym_retrieve] = STATE(153),
    [sym_identifier] = STATE(218),
    [sym_quoted_identifier] = STATE(252),
    [sym_referential_identifier] = STATE(228),
    [sym_keyword_identifier] = STATE(218),
    [sym_string] = STATE(145),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(72),
    [anon_sym_library] = ACTIONS(21),
    [anon_sym_using] = ACTIONS(21),
    [anon_sym_called] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(21),
    [anon_sym_valueset] = ACTIONS(21),
    [anon_sym_public] = ACTIONS(21),
    [anon_sym_private] = ACTIONS(21),
    [anon_sym_context] = ACTIONS(21),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_function] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(25),
    [aux_sym_literal_token1] = ACTIONS(27),
    [anon_sym_null] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_cast] = ACTIONS(33),
    [anon_sym_exists] = ACTIONS(67),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_implies] = ACTIONS(21),
    [anon_sym_union] = ACTIONS(21),
    [anon_sym_intersect] = ACTIONS(21),
    [anon_sym_except] = ACTIONS(21),
    [anon_sym_years] = ACTIONS(39),
    [anon_sym_months] = ACTIONS(39),
    [anon_sym_weeks] = ACTIONS(39),
    [anon_sym_days] = ACTIONS(39),
    [anon_sym_hours] = ACTIONS(39),
    [anon_sym_minutes] = ACTIONS(39),
    [anon_sym_seconds] = ACTIONS(39),
    [anon_sym_milliseconds] = ACTIONS(39),
    [anon_sym_date] = ACTIONS(21),
    [anon_sym_time] = ACTIONS(21),
    [anon_sym_timezone] = ACTIONS(21),
    [anon_sym_timezoneoffset] = ACTIONS(21),
    [anon_sym_duration] = ACTIONS(41),
    [anon_sym_in] = ACTIONS(69),
    [anon_sym_difference] = ACTIONS(45),
    [anon_sym_contains] = ACTIONS(71),
    [anon_sym_orbefore] = ACTIONS(49),
    [anon_sym_orafter] = ACTIONS(49),
    [anon_sym_ormore] = ACTIONS(49),
    [anon_sym_orless] = ACTIONS(49),
    [anon_sym_starts] = ACTIONS(21),
    [anon_sym_ends] = ACTIONS(21),
    [anon_sym_start] = ACTIONS(21),
    [anon_sym_end] = ACTIONS(21),
    [anon_sym_includes] = ACTIONS(21),
    [anon_sym_meets] = ACTIONS(21),
    [anon_sym_overlaps] = ACTIONS(21),
    [anon_sym_where] = ACTIONS(21),
    [anon_sym_from] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_version] = ACTIONS(21),
    [sym_default_identifier] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [anon_sym_asc] = ACTIONS(21),
    [anon_sym_ascending] = ACTIONS(21),
    [anon_sym_by] = ACTIONS(21),
    [anon_sym_code] = ACTIONS(21),
    [anon_sym_codesystem] = ACTIONS(21),
    [anon_sym_codesystems] = ACTIONS(21),
    [anon_sym_concept] = ACTIONS(21),
    [anon_sym_default] = ACTIONS(21),
    [anon_sym_desc] = ACTIONS(21),
    [anon_sym_descending] = ACTIONS(21),
    [anon_sym_display] = ACTIONS(21),
    [anon_sym_div] = ACTIONS(21),
    [anon_sym_fluent] = ACTIONS(21),
    [anon_sym_mod] = ACTIONS(21),
    [anon_sym_parameter] = ACTIONS(21),
    [anon_sym_predecessor] = ACTIONS(21),
    [anon_sym_starting] = ACTIONS(21),
    [anon_sym_successor] = ACTIONS(21),
    [anon_sym_width] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(61),
    [sym_number] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
  },
  [31] = {
    [sym_expression] = STATE(81),
    [sym_expression_term] = STATE(143),
    [sym_term] = STATE(142),
    [sym_quantity] = STATE(130),
    [sym_literal] = STATE(149),
    [sym_qualified_identifier_expression] = STATE(274),
    [sym_boolean_expression] = STATE(143),
    [sym_type_expression] = STATE(143),
    [sym_cast_expression] = STATE(143),
    [sym_not_expression] = STATE(143),
    [sym_existence_expression] = STATE(143),
    [sym_between_expression] = STATE(143),
    [sym_equality_expression] = STATE(143),
    [sym_inequality_expression] = STATE(143),
    [sym_and_expression] = STATE(143),
    [sym_or_expression] = STATE(143),
    [sym_implies_expression] = STATE(143),
    [sym_in_fix_set_expression] = STATE(143),
    [sym_plural_date_time_precision] = STATE(290),
    [sym_duration_between_expression] = STATE(143),
    [sym_difference_between_expression] = STATE(143),
    [sym_membership_expression] = STATE(143),
    [sym_timing_expression] = STATE(143),
    [sym_query] = STATE(143),
    [sym_query_source] = STATE(233),
    [sym_aliased_query_source] = STATE(97),
    [sym_query_source_clause] = STATE(120),
    [sym_retrieve] = STATE(127),
    [sym_identifier] = STATE(218),
    [sym_quoted_identifier] = STATE(252),
    [sym_referential_identifier] = STATE(228),
    [sym_keyword_identifier] = STATE(218),
    [sym_string] = STATE(145),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(72),
    [anon_sym_library] = ACTIONS(21),
    [anon_sym_using] = ACTIONS(21),
    [anon_sym_called] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(21),
    [anon_sym_valueset] = ACTIONS(21),
    [anon_sym_public] = ACTIONS(21),
    [anon_sym_private] = ACTIONS(21),
    [anon_sym_context] = ACTIONS(21),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_function] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(25),
    [aux_sym_literal_token1] = ACTIONS(27),
    [anon_sym_null] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(31),
    [anon_sym_cast] = ACTIONS(33),
    [anon_sym_exists] = ACTIONS(35),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_implies] = ACTIONS(21),
    [anon_sym_union] = ACTIONS(21),
    [anon_sym_intersect] = ACTIONS(21),
    [anon_sym_except] = ACTIONS(21),
    [anon_sym_years] = ACTIONS(39),
    [anon_sym_months] = ACTIONS(39),
    [anon_sym_weeks] = ACTIONS(39),
    [anon_sym_days] = ACTIONS(39),
    [anon_sym_hours] = ACTIONS(39),
    [anon_sym_minutes] = ACTIONS(39),
    [anon_sym_seconds] = ACTIONS(39),
    [anon_sym_milliseconds] = ACTIONS(39),
    [anon_sym_date] = ACTIONS(21),
    [anon_sym_time] = ACTIONS(21),
    [anon_sym_timezone] = ACTIONS(21),
    [anon_sym_timezoneoffset] = ACTIONS(21),
    [anon_sym_duration] = ACTIONS(41),
    [anon_sym_in] = ACTIONS(43),
    [anon_sym_difference] = ACTIONS(45),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_orbefore] = ACTIONS(49),
    [anon_sym_orafter] = ACTIONS(49),
    [anon_sym_ormore] = ACTIONS(49),
    [anon_sym_orless] = ACTIONS(49),
    [anon_sym_starts] = ACTIONS(21),
    [anon_sym_ends] = ACTIONS(21),
    [anon_sym_start] = ACTIONS(21),
    [anon_sym_end] = ACTIONS(21),
    [anon_sym_includes] = ACTIONS(21),
    [anon_sym_meets] = ACTIONS(21),
    [anon_sym_overlaps] = ACTIONS(21),
    [anon_sym_where] = ACTIONS(21),
    [anon_sym_from] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_version] = ACTIONS(21),
    [sym_default_identifier] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [anon_sym_asc] = ACTIONS(21),
    [anon_sym_ascending] = ACTIONS(21),
    [anon_sym_by] = ACTIONS(21),
    [anon_sym_code] = ACTIONS(21),
    [anon_sym_codesystem] = ACTIONS(21),
    [anon_sym_codesystems] = ACTIONS(21),
    [anon_sym_concept] = ACTIONS(21),
    [anon_sym_default] = ACTIONS(21),
    [anon_sym_desc] = ACTIONS(21),
    [anon_sym_descending] = ACTIONS(21),
    [anon_sym_display] = ACTIONS(21),
    [anon_sym_div] = ACTIONS(21),
    [anon_sym_fluent] = ACTIONS(21),
    [anon_sym_mod] = ACTIONS(21),
    [anon_sym_parameter] = ACTIONS(21),
    [anon_sym_predecessor] = ACTIONS(21),
    [anon_sym_starting] = ACTIONS(21),
    [anon_sym_successor] = ACTIONS(21),
    [anon_sym_width] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(61),
    [sym_number] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
  },
  [32] = {
    [sym_expression] = STATE(83),
    [sym_expression_term] = STATE(143),
    [sym_term] = STATE(142),
    [sym_quantity] = STATE(130),
    [sym_literal] = STATE(149),
    [sym_qualified_identifier_expression] = STATE(274),
    [sym_boolean_expression] = STATE(143),
    [sym_type_expression] = STATE(143),
    [sym_cast_expression] = STATE(143),
    [sym_not_expression] = STATE(143),
    [sym_existence_expression] = STATE(143),
    [sym_between_expression] = STATE(143),
    [sym_equality_expression] = STATE(143),
    [sym_inequality_expression] = STATE(143),
    [sym_and_expression] = STATE(143),
    [sym_or_expression] = STATE(143),
    [sym_implies_expression] = STATE(143),
    [sym_in_fix_set_expression] = STATE(143),
    [sym_plural_date_time_precision] = STATE(290),
    [sym_duration_between_expression] = STATE(143),
    [sym_difference_between_expression] = STATE(143),
    [sym_membership_expression] = STATE(143),
    [sym_timing_expression] = STATE(143),
    [sym_query] = STATE(143),
    [sym_query_source] = STATE(233),
    [sym_aliased_query_source] = STATE(97),
    [sym_query_source_clause] = STATE(120),
    [sym_retrieve] = STATE(127),
    [sym_identifier] = STATE(218),
    [sym_quoted_identifier] = STATE(252),
    [sym_referential_identifier] = STATE(228),
    [sym_keyword_identifier] = STATE(218),
    [sym_string] = STATE(145),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(72),
    [anon_sym_library] = ACTIONS(21),
    [anon_sym_using] = ACTIONS(21),
    [anon_sym_called] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(21),
    [anon_sym_valueset] = ACTIONS(21),
    [anon_sym_public] = ACTIONS(21),
    [anon_sym_private] = ACTIONS(21),
    [anon_sym_context] = ACTIONS(21),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_function] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(25),
    [aux_sym_literal_token1] = ACTIONS(27),
    [anon_sym_null] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(31),
    [anon_sym_cast] = ACTIONS(33),
    [anon_sym_exists] = ACTIONS(35),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_implies] = ACTIONS(21),
    [anon_sym_union] = ACTIONS(21),
    [anon_sym_intersect] = ACTIONS(21),
    [anon_sym_except] = ACTIONS(21),
    [anon_sym_years] = ACTIONS(39),
    [anon_sym_months] = ACTIONS(39),
    [anon_sym_weeks] = ACTIONS(39),
    [anon_sym_days] = ACTIONS(39),
    [anon_sym_hours] = ACTIONS(39),
    [anon_sym_minutes] = ACTIONS(39),
    [anon_sym_seconds] = ACTIONS(39),
    [anon_sym_milliseconds] = ACTIONS(39),
    [anon_sym_date] = ACTIONS(21),
    [anon_sym_time] = ACTIONS(21),
    [anon_sym_timezone] = ACTIONS(21),
    [anon_sym_timezoneoffset] = ACTIONS(21),
    [anon_sym_duration] = ACTIONS(41),
    [anon_sym_in] = ACTIONS(43),
    [anon_sym_difference] = ACTIONS(45),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_orbefore] = ACTIONS(49),
    [anon_sym_orafter] = ACTIONS(49),
    [anon_sym_ormore] = ACTIONS(49),
    [anon_sym_orless] = ACTIONS(49),
    [anon_sym_starts] = ACTIONS(21),
    [anon_sym_ends] = ACTIONS(21),
    [anon_sym_start] = ACTIONS(21),
    [anon_sym_end] = ACTIONS(21),
    [anon_sym_includes] = ACTIONS(21),
    [anon_sym_meets] = ACTIONS(21),
    [anon_sym_overlaps] = ACTIONS(21),
    [anon_sym_where] = ACTIONS(21),
    [anon_sym_from] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_version] = ACTIONS(21),
    [sym_default_identifier] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [anon_sym_asc] = ACTIONS(21),
    [anon_sym_ascending] = ACTIONS(21),
    [anon_sym_by] = ACTIONS(21),
    [anon_sym_code] = ACTIONS(21),
    [anon_sym_codesystem] = ACTIONS(21),
    [anon_sym_codesystems] = ACTIONS(21),
    [anon_sym_concept] = ACTIONS(21),
    [anon_sym_default] = ACTIONS(21),
    [anon_sym_desc] = ACTIONS(21),
    [anon_sym_descending] = ACTIONS(21),
    [anon_sym_display] = ACTIONS(21),
    [anon_sym_div] = ACTIONS(21),
    [anon_sym_fluent] = ACTIONS(21),
    [anon_sym_mod] = ACTIONS(21),
    [anon_sym_parameter] = ACTIONS(21),
    [anon_sym_predecessor] = ACTIONS(21),
    [anon_sym_starting] = ACTIONS(21),
    [anon_sym_successor] = ACTIONS(21),
    [anon_sym_width] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(61),
    [sym_number] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
  },
  [33] = {
    [sym_expression] = STATE(78),
    [sym_expression_term] = STATE(143),
    [sym_term] = STATE(142),
    [sym_quantity] = STATE(130),
    [sym_literal] = STATE(149),
    [sym_qualified_identifier_expression] = STATE(274),
    [sym_boolean_expression] = STATE(143),
    [sym_type_expression] = STATE(143),
    [sym_cast_expression] = STATE(143),
    [sym_not_expression] = STATE(143),
    [sym_existence_expression] = STATE(143),
    [sym_between_expression] = STATE(143),
    [sym_equality_expression] = STATE(143),
    [sym_inequality_expression] = STATE(143),
    [sym_and_expression] = STATE(143),
    [sym_or_expression] = STATE(143),
    [sym_implies_expression] = STATE(143),
    [sym_in_fix_set_expression] = STATE(143),
    [sym_plural_date_time_precision] = STATE(290),
    [sym_duration_between_expression] = STATE(143),
    [sym_difference_between_expression] = STATE(143),
    [sym_membership_expression] = STATE(143),
    [sym_timing_expression] = STATE(143),
    [sym_query] = STATE(143),
    [sym_query_source] = STATE(233),
    [sym_aliased_query_source] = STATE(97),
    [sym_query_source_clause] = STATE(120),
    [sym_retrieve] = STATE(127),
    [sym_identifier] = STATE(218),
    [sym_quoted_identifier] = STATE(252),
    [sym_referential_identifier] = STATE(228),
    [sym_keyword_identifier] = STATE(218),
    [sym_string] = STATE(145),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(72),
    [anon_sym_library] = ACTIONS(21),
    [anon_sym_using] = ACTIONS(21),
    [anon_sym_called] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(21),
    [anon_sym_valueset] = ACTIONS(21),
    [anon_sym_public] = ACTIONS(21),
    [anon_sym_private] = ACTIONS(21),
    [anon_sym_context] = ACTIONS(21),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_function] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(25),
    [aux_sym_literal_token1] = ACTIONS(27),
    [anon_sym_null] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(31),
    [anon_sym_cast] = ACTIONS(33),
    [anon_sym_exists] = ACTIONS(35),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_implies] = ACTIONS(21),
    [anon_sym_union] = ACTIONS(21),
    [anon_sym_intersect] = ACTIONS(21),
    [anon_sym_except] = ACTIONS(21),
    [anon_sym_years] = ACTIONS(39),
    [anon_sym_months] = ACTIONS(39),
    [anon_sym_weeks] = ACTIONS(39),
    [anon_sym_days] = ACTIONS(39),
    [anon_sym_hours] = ACTIONS(39),
    [anon_sym_minutes] = ACTIONS(39),
    [anon_sym_seconds] = ACTIONS(39),
    [anon_sym_milliseconds] = ACTIONS(39),
    [anon_sym_date] = ACTIONS(21),
    [anon_sym_time] = ACTIONS(21),
    [anon_sym_timezone] = ACTIONS(21),
    [anon_sym_timezoneoffset] = ACTIONS(21),
    [anon_sym_duration] = ACTIONS(41),
    [anon_sym_in] = ACTIONS(43),
    [anon_sym_difference] = ACTIONS(45),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_orbefore] = ACTIONS(49),
    [anon_sym_orafter] = ACTIONS(49),
    [anon_sym_ormore] = ACTIONS(49),
    [anon_sym_orless] = ACTIONS(49),
    [anon_sym_starts] = ACTIONS(21),
    [anon_sym_ends] = ACTIONS(21),
    [anon_sym_start] = ACTIONS(21),
    [anon_sym_end] = ACTIONS(21),
    [anon_sym_includes] = ACTIONS(21),
    [anon_sym_meets] = ACTIONS(21),
    [anon_sym_overlaps] = ACTIONS(21),
    [anon_sym_where] = ACTIONS(21),
    [anon_sym_from] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_version] = ACTIONS(21),
    [sym_default_identifier] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [anon_sym_asc] = ACTIONS(21),
    [anon_sym_ascending] = ACTIONS(21),
    [anon_sym_by] = ACTIONS(21),
    [anon_sym_code] = ACTIONS(21),
    [anon_sym_codesystem] = ACTIONS(21),
    [anon_sym_codesystems] = ACTIONS(21),
    [anon_sym_concept] = ACTIONS(21),
    [anon_sym_default] = ACTIONS(21),
    [anon_sym_desc] = ACTIONS(21),
    [anon_sym_descending] = ACTIONS(21),
    [anon_sym_display] = ACTIONS(21),
    [anon_sym_div] = ACTIONS(21),
    [anon_sym_fluent] = ACTIONS(21),
    [anon_sym_mod] = ACTIONS(21),
    [anon_sym_parameter] = ACTIONS(21),
    [anon_sym_predecessor] = ACTIONS(21),
    [anon_sym_starting] = ACTIONS(21),
    [anon_sym_successor] = ACTIONS(21),
    [anon_sym_width] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(61),
    [sym_number] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
  },
  [34] = {
    [sym_quantity] = STATE(210),
    [sym_date_time_precision] = STATE(281),
    [sym_date_time_precision_specifier] = STATE(53),
    [sym_exclusive_relative_qualifier] = STATE(272),
    [sym_quantity_offset] = STATE(242),
    [sym_temporal_relationship] = STATE(39),
    [anon_sym_library] = ACTIONS(83),
    [anon_sym_using] = ACTIONS(83),
    [anon_sym_called] = ACTIONS(83),
    [anon_sym_include] = ACTIONS(83),
    [anon_sym_valueset] = ACTIONS(83),
    [anon_sym_public] = ACTIONS(83),
    [anon_sym_private] = ACTIONS(83),
    [anon_sym_context] = ACTIONS(83),
    [anon_sym_define] = ACTIONS(83),
    [anon_sym_function] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(85),
    [aux_sym_literal_token1] = ACTIONS(83),
    [anon_sym_null] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(83),
    [anon_sym_cast] = ACTIONS(83),
    [anon_sym_exists] = ACTIONS(83),
    [anon_sym_properly] = ACTIONS(87),
    [anon_sym_xor] = ACTIONS(83),
    [anon_sym_implies] = ACTIONS(83),
    [anon_sym_union] = ACTIONS(83),
    [anon_sym_intersect] = ACTIONS(83),
    [anon_sym_except] = ACTIONS(83),
    [anon_sym_year] = ACTIONS(37),
    [anon_sym_month] = ACTIONS(37),
    [anon_sym_week] = ACTIONS(37),
    [anon_sym_day] = ACTIONS(37),
    [anon_sym_hour] = ACTIONS(37),
    [anon_sym_minute] = ACTIONS(37),
    [anon_sym_second] = ACTIONS(37),
    [anon_sym_millisecond] = ACTIONS(37),
    [anon_sym_years] = ACTIONS(83),
    [anon_sym_months] = ACTIONS(83),
    [anon_sym_weeks] = ACTIONS(83),
    [anon_sym_days] = ACTIONS(83),
    [anon_sym_hours] = ACTIONS(83),
    [anon_sym_minutes] = ACTIONS(83),
    [anon_sym_seconds] = ACTIONS(83),
    [anon_sym_milliseconds] = ACTIONS(83),
    [anon_sym_date] = ACTIONS(83),
    [anon_sym_time] = ACTIONS(83),
    [anon_sym_timezone] = ACTIONS(83),
    [anon_sym_timezoneoffset] = ACTIONS(83),
    [anon_sym_duration] = ACTIONS(83),
    [anon_sym_in] = ACTIONS(83),
    [anon_sym_difference] = ACTIONS(83),
    [anon_sym_contains] = ACTIONS(83),
    [anon_sym_orbefore] = ACTIONS(85),
    [anon_sym_orafter] = ACTIONS(85),
    [anon_sym_ormore] = ACTIONS(85),
    [anon_sym_orless] = ACTIONS(85),
    [anon_sym_lessthan] = ACTIONS(89),
    [anon_sym_morethan] = ACTIONS(89),
    [anon_sym_onor] = ACTIONS(91),
    [anon_sym_before] = ACTIONS(93),
    [anon_sym_after] = ACTIONS(93),
    [anon_sym_starts] = ACTIONS(83),
    [anon_sym_ends] = ACTIONS(83),
    [anon_sym_same] = ACTIONS(95),
    [anon_sym_start] = ACTIONS(83),
    [anon_sym_end] = ACTIONS(83),
    [anon_sym_includes] = ACTIONS(83),
    [anon_sym_during] = ACTIONS(97),
    [anon_sym_includedin] = ACTIONS(99),
    [anon_sym_meets] = ACTIONS(83),
    [anon_sym_overlaps] = ACTIONS(83),
    [anon_sym_within] = ACTIONS(101),
    [anon_sym_where] = ACTIONS(83),
    [anon_sym_from] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_version] = ACTIONS(83),
    [sym_default_identifier] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_asc] = ACTIONS(83),
    [anon_sym_ascending] = ACTIONS(83),
    [anon_sym_by] = ACTIONS(83),
    [anon_sym_code] = ACTIONS(83),
    [anon_sym_codesystem] = ACTIONS(83),
    [anon_sym_codesystems] = ACTIONS(83),
    [anon_sym_concept] = ACTIONS(83),
    [anon_sym_default] = ACTIONS(83),
    [anon_sym_desc] = ACTIONS(83),
    [anon_sym_descending] = ACTIONS(83),
    [anon_sym_display] = ACTIONS(83),
    [anon_sym_div] = ACTIONS(83),
    [anon_sym_fluent] = ACTIONS(83),
    [anon_sym_mod] = ACTIONS(83),
    [anon_sym_parameter] = ACTIONS(83),
    [anon_sym_predecessor] = ACTIONS(83),
    [anon_sym_starting] = ACTIONS(83),
    [anon_sym_successor] = ACTIONS(83),
    [anon_sym_width] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(83),
    [sym_number] = ACTIONS(103),
    [sym_comment] = ACTIONS(3),
  },
  [35] = {
    [sym_date_time_precision] = STATE(281),
    [sym_date_time_precision_specifier] = STATE(53),
    [anon_sym_library] = ACTIONS(83),
    [anon_sym_using] = ACTIONS(83),
    [anon_sym_called] = ACTIONS(83),
    [anon_sym_include] = ACTIONS(83),
    [anon_sym_valueset] = ACTIONS(83),
    [anon_sym_public] = ACTIONS(83),
    [anon_sym_private] = ACTIONS(83),
    [anon_sym_context] = ACTIONS(83),
    [anon_sym_define] = ACTIONS(83),
    [anon_sym_function] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(85),
    [aux_sym_literal_token1] = ACTIONS(83),
    [anon_sym_null] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(83),
    [anon_sym_cast] = ACTIONS(83),
    [anon_sym_exists] = ACTIONS(83),
    [anon_sym_xor] = ACTIONS(83),
    [anon_sym_implies] = ACTIONS(83),
    [anon_sym_union] = ACTIONS(83),
    [anon_sym_intersect] = ACTIONS(83),
    [anon_sym_except] = ACTIONS(83),
    [anon_sym_year] = ACTIONS(37),
    [anon_sym_month] = ACTIONS(37),
    [anon_sym_week] = ACTIONS(37),
    [anon_sym_day] = ACTIONS(37),
    [anon_sym_hour] = ACTIONS(37),
    [anon_sym_minute] = ACTIONS(37),
    [anon_sym_second] = ACTIONS(37),
    [anon_sym_millisecond] = ACTIONS(37),
    [anon_sym_years] = ACTIONS(83),
    [anon_sym_months] = ACTIONS(83),
    [anon_sym_weeks] = ACTIONS(83),
    [anon_sym_days] = ACTIONS(83),
    [anon_sym_hours] = ACTIONS(83),
    [anon_sym_minutes] = ACTIONS(83),
    [anon_sym_seconds] = ACTIONS(83),
    [anon_sym_milliseconds] = ACTIONS(83),
    [anon_sym_date] = ACTIONS(83),
    [anon_sym_time] = ACTIONS(83),
    [anon_sym_timezone] = ACTIONS(83),
    [anon_sym_timezoneoffset] = ACTIONS(83),
    [anon_sym_duration] = ACTIONS(83),
    [anon_sym_in] = ACTIONS(83),
    [anon_sym_difference] = ACTIONS(83),
    [anon_sym_contains] = ACTIONS(83),
    [anon_sym_orbefore] = ACTIONS(85),
    [anon_sym_orafter] = ACTIONS(85),
    [anon_sym_ormore] = ACTIONS(85),
    [anon_sym_orless] = ACTIONS(85),
    [anon_sym_before] = ACTIONS(97),
    [anon_sym_after] = ACTIONS(97),
    [anon_sym_starts] = ACTIONS(83),
    [anon_sym_ends] = ACTIONS(83),
    [anon_sym_start] = ACTIONS(83),
    [anon_sym_end] = ACTIONS(83),
    [anon_sym_includes] = ACTIONS(83),
    [anon_sym_meets] = ACTIONS(83),
    [anon_sym_overlaps] = ACTIONS(83),
    [anon_sym_where] = ACTIONS(83),
    [anon_sym_from] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_version] = ACTIONS(83),
    [sym_default_identifier] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_asc] = ACTIONS(83),
    [anon_sym_ascending] = ACTIONS(83),
    [anon_sym_by] = ACTIONS(83),
    [anon_sym_code] = ACTIONS(83),
    [anon_sym_codesystem] = ACTIONS(83),
    [anon_sym_codesystems] = ACTIONS(83),
    [anon_sym_concept] = ACTIONS(83),
    [anon_sym_default] = ACTIONS(83),
    [anon_sym_desc] = ACTIONS(83),
    [anon_sym_descending] = ACTIONS(83),
    [anon_sym_display] = ACTIONS(83),
    [anon_sym_div] = ACTIONS(83),
    [anon_sym_fluent] = ACTIONS(83),
    [anon_sym_mod] = ACTIONS(83),
    [anon_sym_parameter] = ACTIONS(83),
    [anon_sym_predecessor] = ACTIONS(83),
    [anon_sym_starting] = ACTIONS(83),
    [anon_sym_successor] = ACTIONS(83),
    [anon_sym_width] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(83),
    [sym_number] = ACTIONS(85),
    [sym_comment] = ACTIONS(3),
  },
  [36] = {
    [sym_date_time_precision] = STATE(281),
    [sym_date_time_precision_specifier] = STATE(53),
    [anon_sym_library] = ACTIONS(83),
    [anon_sym_using] = ACTIONS(83),
    [anon_sym_called] = ACTIONS(83),
    [anon_sym_include] = ACTIONS(83),
    [anon_sym_valueset] = ACTIONS(83),
    [anon_sym_public] = ACTIONS(83),
    [anon_sym_private] = ACTIONS(83),
    [anon_sym_context] = ACTIONS(83),
    [anon_sym_define] = ACTIONS(83),
    [anon_sym_function] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(85),
    [aux_sym_literal_token1] = ACTIONS(83),
    [anon_sym_null] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(83),
    [anon_sym_cast] = ACTIONS(83),
    [anon_sym_exists] = ACTIONS(83),
    [anon_sym_xor] = ACTIONS(83),
    [anon_sym_implies] = ACTIONS(83),
    [anon_sym_union] = ACTIONS(83),
    [anon_sym_intersect] = ACTIONS(83),
    [anon_sym_except] = ACTIONS(83),
    [anon_sym_year] = ACTIONS(37),
    [anon_sym_month] = ACTIONS(37),
    [anon_sym_week] = ACTIONS(37),
    [anon_sym_day] = ACTIONS(37),
    [anon_sym_hour] = ACTIONS(37),
    [anon_sym_minute] = ACTIONS(37),
    [anon_sym_second] = ACTIONS(37),
    [anon_sym_millisecond] = ACTIONS(37),
    [anon_sym_years] = ACTIONS(83),
    [anon_sym_months] = ACTIONS(83),
    [anon_sym_weeks] = ACTIONS(83),
    [anon_sym_days] = ACTIONS(83),
    [anon_sym_hours] = ACTIONS(83),
    [anon_sym_minutes] = ACTIONS(83),
    [anon_sym_seconds] = ACTIONS(83),
    [anon_sym_milliseconds] = ACTIONS(83),
    [anon_sym_date] = ACTIONS(83),
    [anon_sym_time] = ACTIONS(83),
    [anon_sym_timezone] = ACTIONS(83),
    [anon_sym_timezoneoffset] = ACTIONS(83),
    [anon_sym_duration] = ACTIONS(83),
    [anon_sym_in] = ACTIONS(83),
    [anon_sym_difference] = ACTIONS(83),
    [anon_sym_contains] = ACTIONS(83),
    [anon_sym_orbefore] = ACTIONS(85),
    [anon_sym_orafter] = ACTIONS(85),
    [anon_sym_ormore] = ACTIONS(85),
    [anon_sym_orless] = ACTIONS(85),
    [anon_sym_starts] = ACTIONS(83),
    [anon_sym_ends] = ACTIONS(83),
    [anon_sym_start] = ACTIONS(83),
    [anon_sym_end] = ACTIONS(83),
    [anon_sym_includes] = ACTIONS(83),
    [anon_sym_meets] = ACTIONS(83),
    [anon_sym_overlaps] = ACTIONS(83),
    [anon_sym_where] = ACTIONS(83),
    [anon_sym_from] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_version] = ACTIONS(83),
    [sym_default_identifier] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_asc] = ACTIONS(83),
    [anon_sym_ascending] = ACTIONS(83),
    [anon_sym_by] = ACTIONS(83),
    [anon_sym_code] = ACTIONS(83),
    [anon_sym_codesystem] = ACTIONS(83),
    [anon_sym_codesystems] = ACTIONS(83),
    [anon_sym_concept] = ACTIONS(83),
    [anon_sym_default] = ACTIONS(83),
    [anon_sym_desc] = ACTIONS(83),
    [anon_sym_descending] = ACTIONS(83),
    [anon_sym_display] = ACTIONS(83),
    [anon_sym_div] = ACTIONS(83),
    [anon_sym_fluent] = ACTIONS(83),
    [anon_sym_mod] = ACTIONS(83),
    [anon_sym_parameter] = ACTIONS(83),
    [anon_sym_predecessor] = ACTIONS(83),
    [anon_sym_starting] = ACTIONS(83),
    [anon_sym_successor] = ACTIONS(83),
    [anon_sym_width] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(83),
    [sym_number] = ACTIONS(85),
    [sym_comment] = ACTIONS(3),
  },
  [37] = {
    [sym_date_time_precision] = STATE(281),
    [sym_date_time_precision_specifier] = STATE(51),
    [anon_sym_library] = ACTIONS(106),
    [anon_sym_using] = ACTIONS(106),
    [anon_sym_called] = ACTIONS(106),
    [anon_sym_include] = ACTIONS(106),
    [anon_sym_valueset] = ACTIONS(106),
    [anon_sym_public] = ACTIONS(106),
    [anon_sym_private] = ACTIONS(106),
    [anon_sym_context] = ACTIONS(106),
    [anon_sym_define] = ACTIONS(106),
    [anon_sym_function] = ACTIONS(106),
    [anon_sym_LPAREN] = ACTIONS(108),
    [aux_sym_literal_token1] = ACTIONS(106),
    [anon_sym_null] = ACTIONS(106),
    [anon_sym_not] = ACTIONS(106),
    [anon_sym_cast] = ACTIONS(106),
    [anon_sym_exists] = ACTIONS(106),
    [anon_sym_xor] = ACTIONS(106),
    [anon_sym_implies] = ACTIONS(106),
    [anon_sym_union] = ACTIONS(106),
    [anon_sym_intersect] = ACTIONS(106),
    [anon_sym_except] = ACTIONS(106),
    [anon_sym_year] = ACTIONS(37),
    [anon_sym_month] = ACTIONS(37),
    [anon_sym_week] = ACTIONS(37),
    [anon_sym_day] = ACTIONS(37),
    [anon_sym_hour] = ACTIONS(37),
    [anon_sym_minute] = ACTIONS(37),
    [anon_sym_second] = ACTIONS(37),
    [anon_sym_millisecond] = ACTIONS(37),
    [anon_sym_years] = ACTIONS(106),
    [anon_sym_months] = ACTIONS(106),
    [anon_sym_weeks] = ACTIONS(106),
    [anon_sym_days] = ACTIONS(106),
    [anon_sym_hours] = ACTIONS(106),
    [anon_sym_minutes] = ACTIONS(106),
    [anon_sym_seconds] = ACTIONS(106),
    [anon_sym_milliseconds] = ACTIONS(106),
    [anon_sym_date] = ACTIONS(106),
    [anon_sym_time] = ACTIONS(106),
    [anon_sym_timezone] = ACTIONS(106),
    [anon_sym_timezoneoffset] = ACTIONS(106),
    [anon_sym_duration] = ACTIONS(106),
    [anon_sym_in] = ACTIONS(106),
    [anon_sym_difference] = ACTIONS(106),
    [anon_sym_contains] = ACTIONS(106),
    [anon_sym_orbefore] = ACTIONS(108),
    [anon_sym_orafter] = ACTIONS(108),
    [anon_sym_ormore] = ACTIONS(108),
    [anon_sym_orless] = ACTIONS(108),
    [anon_sym_starts] = ACTIONS(106),
    [anon_sym_ends] = ACTIONS(106),
    [anon_sym_start] = ACTIONS(106),
    [anon_sym_end] = ACTIONS(106),
    [anon_sym_includes] = ACTIONS(106),
    [anon_sym_meets] = ACTIONS(106),
    [anon_sym_overlaps] = ACTIONS(106),
    [anon_sym_where] = ACTIONS(106),
    [anon_sym_from] = ACTIONS(106),
    [anon_sym_LBRACK] = ACTIONS(108),
    [anon_sym_version] = ACTIONS(106),
    [sym_default_identifier] = ACTIONS(106),
    [anon_sym_DQUOTE] = ACTIONS(108),
    [anon_sym_asc] = ACTIONS(106),
    [anon_sym_ascending] = ACTIONS(106),
    [anon_sym_by] = ACTIONS(106),
    [anon_sym_code] = ACTIONS(106),
    [anon_sym_codesystem] = ACTIONS(106),
    [anon_sym_codesystems] = ACTIONS(106),
    [anon_sym_concept] = ACTIONS(106),
    [anon_sym_default] = ACTIONS(106),
    [anon_sym_desc] = ACTIONS(106),
    [anon_sym_descending] = ACTIONS(106),
    [anon_sym_display] = ACTIONS(106),
    [anon_sym_div] = ACTIONS(106),
    [anon_sym_fluent] = ACTIONS(106),
    [anon_sym_mod] = ACTIONS(106),
    [anon_sym_parameter] = ACTIONS(106),
    [anon_sym_predecessor] = ACTIONS(106),
    [anon_sym_starting] = ACTIONS(106),
    [anon_sym_successor] = ACTIONS(106),
    [anon_sym_width] = ACTIONS(106),
    [anon_sym_SQUOTE] = ACTIONS(106),
    [sym_number] = ACTIONS(108),
    [sym_comment] = ACTIONS(3),
  },
  [38] = {
    [sym_date_time_precision] = STATE(281),
    [sym_date_time_precision_specifier] = STATE(46),
    [anon_sym_library] = ACTIONS(110),
    [anon_sym_using] = ACTIONS(110),
    [anon_sym_called] = ACTIONS(110),
    [anon_sym_include] = ACTIONS(110),
    [anon_sym_valueset] = ACTIONS(110),
    [anon_sym_public] = ACTIONS(110),
    [anon_sym_private] = ACTIONS(110),
    [anon_sym_context] = ACTIONS(110),
    [anon_sym_define] = ACTIONS(110),
    [anon_sym_function] = ACTIONS(110),
    [anon_sym_LPAREN] = ACTIONS(112),
    [aux_sym_literal_token1] = ACTIONS(110),
    [anon_sym_null] = ACTIONS(110),
    [anon_sym_not] = ACTIONS(110),
    [anon_sym_cast] = ACTIONS(110),
    [anon_sym_exists] = ACTIONS(110),
    [anon_sym_xor] = ACTIONS(110),
    [anon_sym_implies] = ACTIONS(110),
    [anon_sym_union] = ACTIONS(110),
    [anon_sym_intersect] = ACTIONS(110),
    [anon_sym_except] = ACTIONS(110),
    [anon_sym_year] = ACTIONS(37),
    [anon_sym_month] = ACTIONS(37),
    [anon_sym_week] = ACTIONS(37),
    [anon_sym_day] = ACTIONS(37),
    [anon_sym_hour] = ACTIONS(37),
    [anon_sym_minute] = ACTIONS(37),
    [anon_sym_second] = ACTIONS(37),
    [anon_sym_millisecond] = ACTIONS(37),
    [anon_sym_years] = ACTIONS(110),
    [anon_sym_months] = ACTIONS(110),
    [anon_sym_weeks] = ACTIONS(110),
    [anon_sym_days] = ACTIONS(110),
    [anon_sym_hours] = ACTIONS(110),
    [anon_sym_minutes] = ACTIONS(110),
    [anon_sym_seconds] = ACTIONS(110),
    [anon_sym_milliseconds] = ACTIONS(110),
    [anon_sym_date] = ACTIONS(110),
    [anon_sym_time] = ACTIONS(110),
    [anon_sym_timezone] = ACTIONS(110),
    [anon_sym_timezoneoffset] = ACTIONS(110),
    [anon_sym_duration] = ACTIONS(110),
    [anon_sym_in] = ACTIONS(110),
    [anon_sym_difference] = ACTIONS(110),
    [anon_sym_contains] = ACTIONS(110),
    [anon_sym_orbefore] = ACTIONS(112),
    [anon_sym_orafter] = ACTIONS(112),
    [anon_sym_ormore] = ACTIONS(112),
    [anon_sym_orless] = ACTIONS(112),
    [anon_sym_starts] = ACTIONS(110),
    [anon_sym_ends] = ACTIONS(110),
    [anon_sym_start] = ACTIONS(110),
    [anon_sym_end] = ACTIONS(110),
    [anon_sym_includes] = ACTIONS(110),
    [anon_sym_meets] = ACTIONS(110),
    [anon_sym_overlaps] = ACTIONS(110),
    [anon_sym_where] = ACTIONS(110),
    [anon_sym_from] = ACTIONS(110),
    [anon_sym_LBRACK] = ACTIONS(112),
    [anon_sym_version] = ACTIONS(110),
    [sym_default_identifier] = ACTIONS(110),
    [anon_sym_DQUOTE] = ACTIONS(112),
    [anon_sym_asc] = ACTIONS(110),
    [anon_sym_ascending] = ACTIONS(110),
    [anon_sym_by] = ACTIONS(110),
    [anon_sym_code] = ACTIONS(110),
    [anon_sym_codesystem] = ACTIONS(110),
    [anon_sym_codesystems] = ACTIONS(110),
    [anon_sym_concept] = ACTIONS(110),
    [anon_sym_default] = ACTIONS(110),
    [anon_sym_desc] = ACTIONS(110),
    [anon_sym_descending] = ACTIONS(110),
    [anon_sym_display] = ACTIONS(110),
    [anon_sym_div] = ACTIONS(110),
    [anon_sym_fluent] = ACTIONS(110),
    [anon_sym_mod] = ACTIONS(110),
    [anon_sym_parameter] = ACTIONS(110),
    [anon_sym_predecessor] = ACTIONS(110),
    [anon_sym_starting] = ACTIONS(110),
    [anon_sym_successor] = ACTIONS(110),
    [anon_sym_width] = ACTIONS(110),
    [anon_sym_SQUOTE] = ACTIONS(110),
    [sym_number] = ACTIONS(112),
    [sym_comment] = ACTIONS(3),
  },
  [39] = {
    [sym_date_time_precision] = STATE(281),
    [sym_date_time_precision_specifier] = STATE(50),
    [anon_sym_library] = ACTIONS(106),
    [anon_sym_using] = ACTIONS(106),
    [anon_sym_called] = ACTIONS(106),
    [anon_sym_include] = ACTIONS(106),
    [anon_sym_valueset] = ACTIONS(106),
    [anon_sym_public] = ACTIONS(106),
    [anon_sym_private] = ACTIONS(106),
    [anon_sym_context] = ACTIONS(106),
    [anon_sym_define] = ACTIONS(106),
    [anon_sym_function] = ACTIONS(106),
    [anon_sym_LPAREN] = ACTIONS(108),
    [aux_sym_literal_token1] = ACTIONS(106),
    [anon_sym_null] = ACTIONS(106),
    [anon_sym_not] = ACTIONS(106),
    [anon_sym_cast] = ACTIONS(106),
    [anon_sym_exists] = ACTIONS(106),
    [anon_sym_xor] = ACTIONS(106),
    [anon_sym_implies] = ACTIONS(106),
    [anon_sym_union] = ACTIONS(106),
    [anon_sym_intersect] = ACTIONS(106),
    [anon_sym_except] = ACTIONS(106),
    [anon_sym_year] = ACTIONS(37),
    [anon_sym_month] = ACTIONS(37),
    [anon_sym_week] = ACTIONS(37),
    [anon_sym_day] = ACTIONS(37),
    [anon_sym_hour] = ACTIONS(37),
    [anon_sym_minute] = ACTIONS(37),
    [anon_sym_second] = ACTIONS(37),
    [anon_sym_millisecond] = ACTIONS(37),
    [anon_sym_years] = ACTIONS(106),
    [anon_sym_months] = ACTIONS(106),
    [anon_sym_weeks] = ACTIONS(106),
    [anon_sym_days] = ACTIONS(106),
    [anon_sym_hours] = ACTIONS(106),
    [anon_sym_minutes] = ACTIONS(106),
    [anon_sym_seconds] = ACTIONS(106),
    [anon_sym_milliseconds] = ACTIONS(106),
    [anon_sym_date] = ACTIONS(106),
    [anon_sym_time] = ACTIONS(106),
    [anon_sym_timezone] = ACTIONS(106),
    [anon_sym_timezoneoffset] = ACTIONS(106),
    [anon_sym_duration] = ACTIONS(106),
    [anon_sym_in] = ACTIONS(106),
    [anon_sym_difference] = ACTIONS(106),
    [anon_sym_contains] = ACTIONS(106),
    [anon_sym_orbefore] = ACTIONS(108),
    [anon_sym_orafter] = ACTIONS(108),
    [anon_sym_ormore] = ACTIONS(108),
    [anon_sym_orless] = ACTIONS(108),
    [anon_sym_starts] = ACTIONS(106),
    [anon_sym_ends] = ACTIONS(106),
    [anon_sym_start] = ACTIONS(114),
    [anon_sym_end] = ACTIONS(114),
    [anon_sym_includes] = ACTIONS(106),
    [anon_sym_meets] = ACTIONS(106),
    [anon_sym_overlaps] = ACTIONS(106),
    [anon_sym_where] = ACTIONS(106),
    [anon_sym_from] = ACTIONS(106),
    [anon_sym_LBRACK] = ACTIONS(108),
    [anon_sym_version] = ACTIONS(106),
    [sym_default_identifier] = ACTIONS(106),
    [anon_sym_DQUOTE] = ACTIONS(108),
    [anon_sym_asc] = ACTIONS(106),
    [anon_sym_ascending] = ACTIONS(106),
    [anon_sym_by] = ACTIONS(106),
    [anon_sym_code] = ACTIONS(106),
    [anon_sym_codesystem] = ACTIONS(106),
    [anon_sym_codesystems] = ACTIONS(106),
    [anon_sym_concept] = ACTIONS(106),
    [anon_sym_default] = ACTIONS(106),
    [anon_sym_desc] = ACTIONS(106),
    [anon_sym_descending] = ACTIONS(106),
    [anon_sym_display] = ACTIONS(106),
    [anon_sym_div] = ACTIONS(106),
    [anon_sym_fluent] = ACTIONS(106),
    [anon_sym_mod] = ACTIONS(106),
    [anon_sym_parameter] = ACTIONS(106),
    [anon_sym_predecessor] = ACTIONS(106),
    [anon_sym_starting] = ACTIONS(106),
    [anon_sym_successor] = ACTIONS(106),
    [anon_sym_width] = ACTIONS(106),
    [anon_sym_SQUOTE] = ACTIONS(106),
    [sym_number] = ACTIONS(108),
    [sym_comment] = ACTIONS(3),
  },
  [40] = {
    [sym_date_time_precision] = STATE(281),
    [sym_date_time_precision_specifier] = STATE(54),
    [anon_sym_library] = ACTIONS(83),
    [anon_sym_using] = ACTIONS(83),
    [anon_sym_called] = ACTIONS(83),
    [anon_sym_include] = ACTIONS(83),
    [anon_sym_valueset] = ACTIONS(83),
    [anon_sym_public] = ACTIONS(83),
    [anon_sym_private] = ACTIONS(83),
    [anon_sym_context] = ACTIONS(83),
    [anon_sym_define] = ACTIONS(83),
    [anon_sym_function] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(85),
    [aux_sym_literal_token1] = ACTIONS(83),
    [anon_sym_null] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(83),
    [anon_sym_cast] = ACTIONS(83),
    [anon_sym_exists] = ACTIONS(83),
    [anon_sym_xor] = ACTIONS(83),
    [anon_sym_implies] = ACTIONS(83),
    [anon_sym_union] = ACTIONS(83),
    [anon_sym_intersect] = ACTIONS(83),
    [anon_sym_except] = ACTIONS(83),
    [anon_sym_year] = ACTIONS(37),
    [anon_sym_month] = ACTIONS(37),
    [anon_sym_week] = ACTIONS(37),
    [anon_sym_day] = ACTIONS(37),
    [anon_sym_hour] = ACTIONS(37),
    [anon_sym_minute] = ACTIONS(37),
    [anon_sym_second] = ACTIONS(37),
    [anon_sym_millisecond] = ACTIONS(37),
    [anon_sym_years] = ACTIONS(83),
    [anon_sym_months] = ACTIONS(83),
    [anon_sym_weeks] = ACTIONS(83),
    [anon_sym_days] = ACTIONS(83),
    [anon_sym_hours] = ACTIONS(83),
    [anon_sym_minutes] = ACTIONS(83),
    [anon_sym_seconds] = ACTIONS(83),
    [anon_sym_milliseconds] = ACTIONS(83),
    [anon_sym_date] = ACTIONS(83),
    [anon_sym_time] = ACTIONS(83),
    [anon_sym_timezone] = ACTIONS(83),
    [anon_sym_timezoneoffset] = ACTIONS(83),
    [anon_sym_duration] = ACTIONS(83),
    [anon_sym_in] = ACTIONS(83),
    [anon_sym_difference] = ACTIONS(83),
    [anon_sym_contains] = ACTIONS(83),
    [anon_sym_orbefore] = ACTIONS(85),
    [anon_sym_orafter] = ACTIONS(85),
    [anon_sym_ormore] = ACTIONS(85),
    [anon_sym_orless] = ACTIONS(85),
    [anon_sym_starts] = ACTIONS(83),
    [anon_sym_ends] = ACTIONS(83),
    [anon_sym_start] = ACTIONS(117),
    [anon_sym_end] = ACTIONS(117),
    [anon_sym_includes] = ACTIONS(83),
    [anon_sym_meets] = ACTIONS(83),
    [anon_sym_overlaps] = ACTIONS(83),
    [anon_sym_where] = ACTIONS(83),
    [anon_sym_from] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_version] = ACTIONS(83),
    [sym_default_identifier] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_asc] = ACTIONS(83),
    [anon_sym_ascending] = ACTIONS(83),
    [anon_sym_by] = ACTIONS(83),
    [anon_sym_code] = ACTIONS(83),
    [anon_sym_codesystem] = ACTIONS(83),
    [anon_sym_codesystems] = ACTIONS(83),
    [anon_sym_concept] = ACTIONS(83),
    [anon_sym_default] = ACTIONS(83),
    [anon_sym_desc] = ACTIONS(83),
    [anon_sym_descending] = ACTIONS(83),
    [anon_sym_display] = ACTIONS(83),
    [anon_sym_div] = ACTIONS(83),
    [anon_sym_fluent] = ACTIONS(83),
    [anon_sym_mod] = ACTIONS(83),
    [anon_sym_parameter] = ACTIONS(83),
    [anon_sym_predecessor] = ACTIONS(83),
    [anon_sym_starting] = ACTIONS(83),
    [anon_sym_successor] = ACTIONS(83),
    [anon_sym_width] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(83),
    [sym_number] = ACTIONS(85),
    [sym_comment] = ACTIONS(3),
  },
  [41] = {
    [sym_date_time_precision] = STATE(281),
    [sym_date_time_precision_specifier] = STATE(45),
    [anon_sym_library] = ACTIONS(110),
    [anon_sym_using] = ACTIONS(110),
    [anon_sym_called] = ACTIONS(110),
    [anon_sym_include] = ACTIONS(110),
    [anon_sym_valueset] = ACTIONS(110),
    [anon_sym_public] = ACTIONS(110),
    [anon_sym_private] = ACTIONS(110),
    [anon_sym_context] = ACTIONS(110),
    [anon_sym_define] = ACTIONS(110),
    [anon_sym_function] = ACTIONS(110),
    [anon_sym_LPAREN] = ACTIONS(112),
    [aux_sym_literal_token1] = ACTIONS(110),
    [anon_sym_null] = ACTIONS(110),
    [anon_sym_not] = ACTIONS(110),
    [anon_sym_cast] = ACTIONS(110),
    [anon_sym_exists] = ACTIONS(110),
    [anon_sym_xor] = ACTIONS(110),
    [anon_sym_implies] = ACTIONS(110),
    [anon_sym_union] = ACTIONS(110),
    [anon_sym_intersect] = ACTIONS(110),
    [anon_sym_except] = ACTIONS(110),
    [anon_sym_year] = ACTIONS(37),
    [anon_sym_month] = ACTIONS(37),
    [anon_sym_week] = ACTIONS(37),
    [anon_sym_day] = ACTIONS(37),
    [anon_sym_hour] = ACTIONS(37),
    [anon_sym_minute] = ACTIONS(37),
    [anon_sym_second] = ACTIONS(37),
    [anon_sym_millisecond] = ACTIONS(37),
    [anon_sym_years] = ACTIONS(110),
    [anon_sym_months] = ACTIONS(110),
    [anon_sym_weeks] = ACTIONS(110),
    [anon_sym_days] = ACTIONS(110),
    [anon_sym_hours] = ACTIONS(110),
    [anon_sym_minutes] = ACTIONS(110),
    [anon_sym_seconds] = ACTIONS(110),
    [anon_sym_milliseconds] = ACTIONS(110),
    [anon_sym_date] = ACTIONS(110),
    [anon_sym_time] = ACTIONS(110),
    [anon_sym_timezone] = ACTIONS(110),
    [anon_sym_timezoneoffset] = ACTIONS(110),
    [anon_sym_duration] = ACTIONS(110),
    [anon_sym_in] = ACTIONS(110),
    [anon_sym_difference] = ACTIONS(110),
    [anon_sym_contains] = ACTIONS(110),
    [anon_sym_orbefore] = ACTIONS(112),
    [anon_sym_orafter] = ACTIONS(112),
    [anon_sym_ormore] = ACTIONS(112),
    [anon_sym_orless] = ACTIONS(112),
    [anon_sym_starts] = ACTIONS(110),
    [anon_sym_ends] = ACTIONS(110),
    [anon_sym_start] = ACTIONS(120),
    [anon_sym_end] = ACTIONS(120),
    [anon_sym_includes] = ACTIONS(110),
    [anon_sym_meets] = ACTIONS(110),
    [anon_sym_overlaps] = ACTIONS(110),
    [anon_sym_where] = ACTIONS(110),
    [anon_sym_from] = ACTIONS(110),
    [anon_sym_LBRACK] = ACTIONS(112),
    [anon_sym_version] = ACTIONS(110),
    [sym_default_identifier] = ACTIONS(110),
    [anon_sym_DQUOTE] = ACTIONS(112),
    [anon_sym_asc] = ACTIONS(110),
    [anon_sym_ascending] = ACTIONS(110),
    [anon_sym_by] = ACTIONS(110),
    [anon_sym_code] = ACTIONS(110),
    [anon_sym_codesystem] = ACTIONS(110),
    [anon_sym_codesystems] = ACTIONS(110),
    [anon_sym_concept] = ACTIONS(110),
    [anon_sym_default] = ACTIONS(110),
    [anon_sym_desc] = ACTIONS(110),
    [anon_sym_descending] = ACTIONS(110),
    [anon_sym_display] = ACTIONS(110),
    [anon_sym_div] = ACTIONS(110),
    [anon_sym_fluent] = ACTIONS(110),
    [anon_sym_mod] = ACTIONS(110),
    [anon_sym_parameter] = ACTIONS(110),
    [anon_sym_predecessor] = ACTIONS(110),
    [anon_sym_starting] = ACTIONS(110),
    [anon_sym_successor] = ACTIONS(110),
    [anon_sym_width] = ACTIONS(110),
    [anon_sym_SQUOTE] = ACTIONS(110),
    [sym_number] = ACTIONS(112),
    [sym_comment] = ACTIONS(3),
  },
  [42] = {
    [anon_sym_library] = ACTIONS(123),
    [anon_sym_using] = ACTIONS(123),
    [anon_sym_called] = ACTIONS(123),
    [anon_sym_include] = ACTIONS(123),
    [anon_sym_valueset] = ACTIONS(123),
    [anon_sym_public] = ACTIONS(123),
    [anon_sym_private] = ACTIONS(123),
    [anon_sym_context] = ACTIONS(123),
    [anon_sym_define] = ACTIONS(123),
    [anon_sym_function] = ACTIONS(123),
    [anon_sym_LPAREN] = ACTIONS(125),
    [aux_sym_literal_token1] = ACTIONS(123),
    [anon_sym_null] = ACTIONS(123),
    [anon_sym_not] = ACTIONS(123),
    [anon_sym_cast] = ACTIONS(123),
    [anon_sym_exists] = ACTIONS(123),
    [anon_sym_xor] = ACTIONS(123),
    [anon_sym_implies] = ACTIONS(123),
    [anon_sym_union] = ACTIONS(123),
    [anon_sym_intersect] = ACTIONS(123),
    [anon_sym_except] = ACTIONS(123),
    [anon_sym_year] = ACTIONS(123),
    [anon_sym_month] = ACTIONS(123),
    [anon_sym_week] = ACTIONS(123),
    [anon_sym_day] = ACTIONS(123),
    [anon_sym_hour] = ACTIONS(123),
    [anon_sym_minute] = ACTIONS(123),
    [anon_sym_second] = ACTIONS(123),
    [anon_sym_millisecond] = ACTIONS(123),
    [anon_sym_years] = ACTIONS(123),
    [anon_sym_months] = ACTIONS(123),
    [anon_sym_weeks] = ACTIONS(123),
    [anon_sym_days] = ACTIONS(123),
    [anon_sym_hours] = ACTIONS(123),
    [anon_sym_minutes] = ACTIONS(123),
    [anon_sym_seconds] = ACTIONS(123),
    [anon_sym_milliseconds] = ACTIONS(123),
    [anon_sym_date] = ACTIONS(123),
    [anon_sym_time] = ACTIONS(123),
    [anon_sym_timezone] = ACTIONS(123),
    [anon_sym_timezoneoffset] = ACTIONS(123),
    [anon_sym_duration] = ACTIONS(123),
    [anon_sym_in] = ACTIONS(123),
    [anon_sym_difference] = ACTIONS(123),
    [anon_sym_contains] = ACTIONS(123),
    [anon_sym_orbefore] = ACTIONS(125),
    [anon_sym_orafter] = ACTIONS(125),
    [anon_sym_ormore] = ACTIONS(125),
    [anon_sym_orless] = ACTIONS(125),
    [anon_sym_oron] = ACTIONS(127),
    [anon_sym_starts] = ACTIONS(123),
    [anon_sym_ends] = ACTIONS(123),
    [anon_sym_start] = ACTIONS(123),
    [anon_sym_end] = ACTIONS(123),
    [anon_sym_includes] = ACTIONS(123),
    [anon_sym_meets] = ACTIONS(123),
    [anon_sym_overlaps] = ACTIONS(123),
    [anon_sym_where] = ACTIONS(123),
    [anon_sym_from] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(125),
    [anon_sym_version] = ACTIONS(123),
    [sym_default_identifier] = ACTIONS(123),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [anon_sym_asc] = ACTIONS(123),
    [anon_sym_ascending] = ACTIONS(123),
    [anon_sym_by] = ACTIONS(123),
    [anon_sym_code] = ACTIONS(123),
    [anon_sym_codesystem] = ACTIONS(123),
    [anon_sym_codesystems] = ACTIONS(123),
    [anon_sym_concept] = ACTIONS(123),
    [anon_sym_default] = ACTIONS(123),
    [anon_sym_desc] = ACTIONS(123),
    [anon_sym_descending] = ACTIONS(123),
    [anon_sym_display] = ACTIONS(123),
    [anon_sym_div] = ACTIONS(123),
    [anon_sym_fluent] = ACTIONS(123),
    [anon_sym_mod] = ACTIONS(123),
    [anon_sym_parameter] = ACTIONS(123),
    [anon_sym_predecessor] = ACTIONS(123),
    [anon_sym_starting] = ACTIONS(123),
    [anon_sym_successor] = ACTIONS(123),
    [anon_sym_width] = ACTIONS(123),
    [anon_sym_SQUOTE] = ACTIONS(123),
    [sym_number] = ACTIONS(125),
    [sym_comment] = ACTIONS(3),
  },
  [43] = {
    [anon_sym_library] = ACTIONS(129),
    [anon_sym_using] = ACTIONS(129),
    [anon_sym_called] = ACTIONS(129),
    [anon_sym_include] = ACTIONS(129),
    [anon_sym_valueset] = ACTIONS(129),
    [anon_sym_public] = ACTIONS(129),
    [anon_sym_private] = ACTIONS(129),
    [anon_sym_context] = ACTIONS(129),
    [anon_sym_define] = ACTIONS(129),
    [anon_sym_function] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(131),
    [aux_sym_literal_token1] = ACTIONS(129),
    [anon_sym_null] = ACTIONS(129),
    [anon_sym_not] = ACTIONS(129),
    [anon_sym_cast] = ACTIONS(129),
    [anon_sym_exists] = ACTIONS(129),
    [anon_sym_xor] = ACTIONS(129),
    [anon_sym_implies] = ACTIONS(129),
    [anon_sym_union] = ACTIONS(129),
    [anon_sym_intersect] = ACTIONS(129),
    [anon_sym_except] = ACTIONS(129),
    [anon_sym_year] = ACTIONS(129),
    [anon_sym_month] = ACTIONS(129),
    [anon_sym_week] = ACTIONS(129),
    [anon_sym_day] = ACTIONS(129),
    [anon_sym_hour] = ACTIONS(129),
    [anon_sym_minute] = ACTIONS(129),
    [anon_sym_second] = ACTIONS(129),
    [anon_sym_millisecond] = ACTIONS(129),
    [anon_sym_years] = ACTIONS(129),
    [anon_sym_months] = ACTIONS(129),
    [anon_sym_weeks] = ACTIONS(129),
    [anon_sym_days] = ACTIONS(129),
    [anon_sym_hours] = ACTIONS(129),
    [anon_sym_minutes] = ACTIONS(129),
    [anon_sym_seconds] = ACTIONS(129),
    [anon_sym_milliseconds] = ACTIONS(129),
    [anon_sym_date] = ACTIONS(129),
    [anon_sym_time] = ACTIONS(129),
    [anon_sym_timezone] = ACTIONS(129),
    [anon_sym_timezoneoffset] = ACTIONS(129),
    [anon_sym_duration] = ACTIONS(129),
    [anon_sym_in] = ACTIONS(129),
    [anon_sym_difference] = ACTIONS(129),
    [anon_sym_contains] = ACTIONS(129),
    [anon_sym_orbefore] = ACTIONS(131),
    [anon_sym_orafter] = ACTIONS(131),
    [anon_sym_ormore] = ACTIONS(131),
    [anon_sym_orless] = ACTIONS(131),
    [anon_sym_starts] = ACTIONS(129),
    [anon_sym_ends] = ACTIONS(129),
    [anon_sym_start] = ACTIONS(129),
    [anon_sym_end] = ACTIONS(129),
    [anon_sym_includes] = ACTIONS(129),
    [anon_sym_meets] = ACTIONS(129),
    [anon_sym_overlaps] = ACTIONS(129),
    [anon_sym_where] = ACTIONS(129),
    [anon_sym_from] = ACTIONS(129),
    [anon_sym_LBRACK] = ACTIONS(131),
    [anon_sym_version] = ACTIONS(129),
    [sym_default_identifier] = ACTIONS(129),
    [anon_sym_DQUOTE] = ACTIONS(131),
    [anon_sym_asc] = ACTIONS(129),
    [anon_sym_ascending] = ACTIONS(129),
    [anon_sym_by] = ACTIONS(129),
    [anon_sym_code] = ACTIONS(129),
    [anon_sym_codesystem] = ACTIONS(129),
    [anon_sym_codesystems] = ACTIONS(129),
    [anon_sym_concept] = ACTIONS(129),
    [anon_sym_default] = ACTIONS(129),
    [anon_sym_desc] = ACTIONS(129),
    [anon_sym_descending] = ACTIONS(129),
    [anon_sym_display] = ACTIONS(129),
    [anon_sym_div] = ACTIONS(129),
    [anon_sym_fluent] = ACTIONS(129),
    [anon_sym_mod] = ACTIONS(129),
    [anon_sym_parameter] = ACTIONS(129),
    [anon_sym_predecessor] = ACTIONS(129),
    [anon_sym_starting] = ACTIONS(129),
    [anon_sym_successor] = ACTIONS(129),
    [anon_sym_width] = ACTIONS(129),
    [anon_sym_SQUOTE] = ACTIONS(129),
    [sym_number] = ACTIONS(131),
    [sym_comment] = ACTIONS(3),
  },
  [44] = {
    [anon_sym_library] = ACTIONS(133),
    [anon_sym_using] = ACTIONS(133),
    [anon_sym_called] = ACTIONS(133),
    [anon_sym_include] = ACTIONS(133),
    [anon_sym_valueset] = ACTIONS(133),
    [anon_sym_public] = ACTIONS(133),
    [anon_sym_private] = ACTIONS(133),
    [anon_sym_context] = ACTIONS(133),
    [anon_sym_define] = ACTIONS(133),
    [anon_sym_function] = ACTIONS(133),
    [anon_sym_LPAREN] = ACTIONS(135),
    [aux_sym_literal_token1] = ACTIONS(133),
    [anon_sym_null] = ACTIONS(133),
    [anon_sym_not] = ACTIONS(133),
    [anon_sym_cast] = ACTIONS(133),
    [anon_sym_exists] = ACTIONS(133),
    [anon_sym_xor] = ACTIONS(133),
    [anon_sym_implies] = ACTIONS(133),
    [anon_sym_union] = ACTIONS(133),
    [anon_sym_intersect] = ACTIONS(133),
    [anon_sym_except] = ACTIONS(133),
    [anon_sym_years] = ACTIONS(133),
    [anon_sym_months] = ACTIONS(133),
    [anon_sym_weeks] = ACTIONS(133),
    [anon_sym_days] = ACTIONS(133),
    [anon_sym_hours] = ACTIONS(133),
    [anon_sym_minutes] = ACTIONS(133),
    [anon_sym_seconds] = ACTIONS(133),
    [anon_sym_milliseconds] = ACTIONS(133),
    [anon_sym_date] = ACTIONS(133),
    [anon_sym_time] = ACTIONS(133),
    [anon_sym_timezone] = ACTIONS(133),
    [anon_sym_timezoneoffset] = ACTIONS(133),
    [anon_sym_duration] = ACTIONS(133),
    [anon_sym_in] = ACTIONS(133),
    [anon_sym_difference] = ACTIONS(133),
    [anon_sym_contains] = ACTIONS(133),
    [anon_sym_orbefore] = ACTIONS(135),
    [anon_sym_orafter] = ACTIONS(135),
    [anon_sym_ormore] = ACTIONS(135),
    [anon_sym_orless] = ACTIONS(135),
    [anon_sym_starts] = ACTIONS(133),
    [anon_sym_ends] = ACTIONS(133),
    [anon_sym_start] = ACTIONS(133),
    [anon_sym_end] = ACTIONS(133),
    [anon_sym_includes] = ACTIONS(133),
    [anon_sym_meets] = ACTIONS(133),
    [anon_sym_overlaps] = ACTIONS(133),
    [anon_sym_where] = ACTIONS(133),
    [anon_sym_from] = ACTIONS(133),
    [anon_sym_LBRACK] = ACTIONS(135),
    [anon_sym_version] = ACTIONS(133),
    [sym_default_identifier] = ACTIONS(133),
    [anon_sym_DQUOTE] = ACTIONS(135),
    [anon_sym_asc] = ACTIONS(133),
    [anon_sym_ascending] = ACTIONS(133),
    [anon_sym_by] = ACTIONS(133),
    [anon_sym_code] = ACTIONS(133),
    [anon_sym_codesystem] = ACTIONS(133),
    [anon_sym_codesystems] = ACTIONS(133),
    [anon_sym_concept] = ACTIONS(133),
    [anon_sym_default] = ACTIONS(133),
    [anon_sym_desc] = ACTIONS(133),
    [anon_sym_descending] = ACTIONS(133),
    [anon_sym_display] = ACTIONS(133),
    [anon_sym_div] = ACTIONS(133),
    [anon_sym_fluent] = ACTIONS(133),
    [anon_sym_mod] = ACTIONS(133),
    [anon_sym_parameter] = ACTIONS(133),
    [anon_sym_predecessor] = ACTIONS(133),
    [anon_sym_starting] = ACTIONS(133),
    [anon_sym_successor] = ACTIONS(133),
    [anon_sym_width] = ACTIONS(133),
    [anon_sym_SQUOTE] = ACTIONS(133),
    [sym_number] = ACTIONS(135),
    [sym_comment] = ACTIONS(3),
  },
  [45] = {
    [anon_sym_library] = ACTIONS(137),
    [anon_sym_using] = ACTIONS(137),
    [anon_sym_called] = ACTIONS(137),
    [anon_sym_include] = ACTIONS(137),
    [anon_sym_valueset] = ACTIONS(137),
    [anon_sym_public] = ACTIONS(137),
    [anon_sym_private] = ACTIONS(137),
    [anon_sym_context] = ACTIONS(137),
    [anon_sym_define] = ACTIONS(137),
    [anon_sym_function] = ACTIONS(137),
    [anon_sym_LPAREN] = ACTIONS(139),
    [aux_sym_literal_token1] = ACTIONS(137),
    [anon_sym_null] = ACTIONS(137),
    [anon_sym_not] = ACTIONS(137),
    [anon_sym_cast] = ACTIONS(137),
    [anon_sym_exists] = ACTIONS(137),
    [anon_sym_xor] = ACTIONS(137),
    [anon_sym_implies] = ACTIONS(137),
    [anon_sym_union] = ACTIONS(137),
    [anon_sym_intersect] = ACTIONS(137),
    [anon_sym_except] = ACTIONS(137),
    [anon_sym_years] = ACTIONS(137),
    [anon_sym_months] = ACTIONS(137),
    [anon_sym_weeks] = ACTIONS(137),
    [anon_sym_days] = ACTIONS(137),
    [anon_sym_hours] = ACTIONS(137),
    [anon_sym_minutes] = ACTIONS(137),
    [anon_sym_seconds] = ACTIONS(137),
    [anon_sym_milliseconds] = ACTIONS(137),
    [anon_sym_date] = ACTIONS(137),
    [anon_sym_time] = ACTIONS(137),
    [anon_sym_timezone] = ACTIONS(137),
    [anon_sym_timezoneoffset] = ACTIONS(137),
    [anon_sym_duration] = ACTIONS(137),
    [anon_sym_in] = ACTIONS(137),
    [anon_sym_difference] = ACTIONS(137),
    [anon_sym_contains] = ACTIONS(137),
    [anon_sym_orbefore] = ACTIONS(139),
    [anon_sym_orafter] = ACTIONS(139),
    [anon_sym_ormore] = ACTIONS(139),
    [anon_sym_orless] = ACTIONS(139),
    [anon_sym_starts] = ACTIONS(137),
    [anon_sym_ends] = ACTIONS(137),
    [anon_sym_start] = ACTIONS(141),
    [anon_sym_end] = ACTIONS(141),
    [anon_sym_includes] = ACTIONS(137),
    [anon_sym_meets] = ACTIONS(137),
    [anon_sym_overlaps] = ACTIONS(137),
    [anon_sym_where] = ACTIONS(137),
    [anon_sym_from] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(139),
    [anon_sym_version] = ACTIONS(137),
    [sym_default_identifier] = ACTIONS(137),
    [anon_sym_DQUOTE] = ACTIONS(139),
    [anon_sym_asc] = ACTIONS(137),
    [anon_sym_ascending] = ACTIONS(137),
    [anon_sym_by] = ACTIONS(137),
    [anon_sym_code] = ACTIONS(137),
    [anon_sym_codesystem] = ACTIONS(137),
    [anon_sym_codesystems] = ACTIONS(137),
    [anon_sym_concept] = ACTIONS(137),
    [anon_sym_default] = ACTIONS(137),
    [anon_sym_desc] = ACTIONS(137),
    [anon_sym_descending] = ACTIONS(137),
    [anon_sym_display] = ACTIONS(137),
    [anon_sym_div] = ACTIONS(137),
    [anon_sym_fluent] = ACTIONS(137),
    [anon_sym_mod] = ACTIONS(137),
    [anon_sym_parameter] = ACTIONS(137),
    [anon_sym_predecessor] = ACTIONS(137),
    [anon_sym_starting] = ACTIONS(137),
    [anon_sym_successor] = ACTIONS(137),
    [anon_sym_width] = ACTIONS(137),
    [anon_sym_SQUOTE] = ACTIONS(137),
    [sym_number] = ACTIONS(139),
    [sym_comment] = ACTIONS(3),
  },
  [46] = {
    [anon_sym_library] = ACTIONS(137),
    [anon_sym_using] = ACTIONS(137),
    [anon_sym_called] = ACTIONS(137),
    [anon_sym_include] = ACTIONS(137),
    [anon_sym_valueset] = ACTIONS(137),
    [anon_sym_public] = ACTIONS(137),
    [anon_sym_private] = ACTIONS(137),
    [anon_sym_context] = ACTIONS(137),
    [anon_sym_define] = ACTIONS(137),
    [anon_sym_function] = ACTIONS(137),
    [anon_sym_LPAREN] = ACTIONS(139),
    [aux_sym_literal_token1] = ACTIONS(137),
    [anon_sym_null] = ACTIONS(137),
    [anon_sym_not] = ACTIONS(137),
    [anon_sym_cast] = ACTIONS(137),
    [anon_sym_exists] = ACTIONS(137),
    [anon_sym_xor] = ACTIONS(137),
    [anon_sym_implies] = ACTIONS(137),
    [anon_sym_union] = ACTIONS(137),
    [anon_sym_intersect] = ACTIONS(137),
    [anon_sym_except] = ACTIONS(137),
    [anon_sym_years] = ACTIONS(137),
    [anon_sym_months] = ACTIONS(137),
    [anon_sym_weeks] = ACTIONS(137),
    [anon_sym_days] = ACTIONS(137),
    [anon_sym_hours] = ACTIONS(137),
    [anon_sym_minutes] = ACTIONS(137),
    [anon_sym_seconds] = ACTIONS(137),
    [anon_sym_milliseconds] = ACTIONS(137),
    [anon_sym_date] = ACTIONS(137),
    [anon_sym_time] = ACTIONS(137),
    [anon_sym_timezone] = ACTIONS(137),
    [anon_sym_timezoneoffset] = ACTIONS(137),
    [anon_sym_duration] = ACTIONS(137),
    [anon_sym_in] = ACTIONS(137),
    [anon_sym_difference] = ACTIONS(137),
    [anon_sym_contains] = ACTIONS(137),
    [anon_sym_orbefore] = ACTIONS(139),
    [anon_sym_orafter] = ACTIONS(139),
    [anon_sym_ormore] = ACTIONS(139),
    [anon_sym_orless] = ACTIONS(139),
    [anon_sym_starts] = ACTIONS(137),
    [anon_sym_ends] = ACTIONS(137),
    [anon_sym_start] = ACTIONS(137),
    [anon_sym_end] = ACTIONS(137),
    [anon_sym_includes] = ACTIONS(137),
    [anon_sym_meets] = ACTIONS(137),
    [anon_sym_overlaps] = ACTIONS(137),
    [anon_sym_where] = ACTIONS(137),
    [anon_sym_from] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(139),
    [anon_sym_version] = ACTIONS(137),
    [sym_default_identifier] = ACTIONS(137),
    [anon_sym_DQUOTE] = ACTIONS(139),
    [anon_sym_asc] = ACTIONS(137),
    [anon_sym_ascending] = ACTIONS(137),
    [anon_sym_by] = ACTIONS(137),
    [anon_sym_code] = ACTIONS(137),
    [anon_sym_codesystem] = ACTIONS(137),
    [anon_sym_codesystems] = ACTIONS(137),
    [anon_sym_concept] = ACTIONS(137),
    [anon_sym_default] = ACTIONS(137),
    [anon_sym_desc] = ACTIONS(137),
    [anon_sym_descending] = ACTIONS(137),
    [anon_sym_display] = ACTIONS(137),
    [anon_sym_div] = ACTIONS(137),
    [anon_sym_fluent] = ACTIONS(137),
    [anon_sym_mod] = ACTIONS(137),
    [anon_sym_parameter] = ACTIONS(137),
    [anon_sym_predecessor] = ACTIONS(137),
    [anon_sym_starting] = ACTIONS(137),
    [anon_sym_successor] = ACTIONS(137),
    [anon_sym_width] = ACTIONS(137),
    [anon_sym_SQUOTE] = ACTIONS(137),
    [sym_number] = ACTIONS(139),
    [sym_comment] = ACTIONS(3),
  },
  [47] = {
    [anon_sym_library] = ACTIONS(144),
    [anon_sym_using] = ACTIONS(144),
    [anon_sym_called] = ACTIONS(144),
    [anon_sym_include] = ACTIONS(144),
    [anon_sym_valueset] = ACTIONS(144),
    [anon_sym_public] = ACTIONS(144),
    [anon_sym_private] = ACTIONS(144),
    [anon_sym_context] = ACTIONS(144),
    [anon_sym_define] = ACTIONS(144),
    [anon_sym_function] = ACTIONS(144),
    [anon_sym_LPAREN] = ACTIONS(146),
    [aux_sym_literal_token1] = ACTIONS(144),
    [anon_sym_null] = ACTIONS(144),
    [anon_sym_not] = ACTIONS(144),
    [anon_sym_cast] = ACTIONS(144),
    [anon_sym_exists] = ACTIONS(144),
    [anon_sym_xor] = ACTIONS(144),
    [anon_sym_implies] = ACTIONS(144),
    [anon_sym_union] = ACTIONS(144),
    [anon_sym_intersect] = ACTIONS(144),
    [anon_sym_except] = ACTIONS(144),
    [anon_sym_years] = ACTIONS(144),
    [anon_sym_months] = ACTIONS(144),
    [anon_sym_weeks] = ACTIONS(144),
    [anon_sym_days] = ACTIONS(144),
    [anon_sym_hours] = ACTIONS(144),
    [anon_sym_minutes] = ACTIONS(144),
    [anon_sym_seconds] = ACTIONS(144),
    [anon_sym_milliseconds] = ACTIONS(144),
    [anon_sym_date] = ACTIONS(144),
    [anon_sym_time] = ACTIONS(144),
    [anon_sym_timezone] = ACTIONS(144),
    [anon_sym_timezoneoffset] = ACTIONS(144),
    [anon_sym_duration] = ACTIONS(144),
    [anon_sym_in] = ACTIONS(144),
    [anon_sym_difference] = ACTIONS(144),
    [anon_sym_contains] = ACTIONS(144),
    [anon_sym_orbefore] = ACTIONS(146),
    [anon_sym_orafter] = ACTIONS(146),
    [anon_sym_ormore] = ACTIONS(146),
    [anon_sym_orless] = ACTIONS(146),
    [anon_sym_starts] = ACTIONS(144),
    [anon_sym_ends] = ACTIONS(144),
    [anon_sym_start] = ACTIONS(144),
    [anon_sym_end] = ACTIONS(144),
    [anon_sym_includes] = ACTIONS(144),
    [anon_sym_meets] = ACTIONS(144),
    [anon_sym_overlaps] = ACTIONS(144),
    [anon_sym_where] = ACTIONS(144),
    [anon_sym_from] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_version] = ACTIONS(144),
    [sym_default_identifier] = ACTIONS(144),
    [anon_sym_DQUOTE] = ACTIONS(146),
    [anon_sym_asc] = ACTIONS(144),
    [anon_sym_ascending] = ACTIONS(144),
    [anon_sym_by] = ACTIONS(144),
    [anon_sym_code] = ACTIONS(144),
    [anon_sym_codesystem] = ACTIONS(144),
    [anon_sym_codesystems] = ACTIONS(144),
    [anon_sym_concept] = ACTIONS(144),
    [anon_sym_default] = ACTIONS(144),
    [anon_sym_desc] = ACTIONS(144),
    [anon_sym_descending] = ACTIONS(144),
    [anon_sym_display] = ACTIONS(144),
    [anon_sym_div] = ACTIONS(144),
    [anon_sym_fluent] = ACTIONS(144),
    [anon_sym_mod] = ACTIONS(144),
    [anon_sym_parameter] = ACTIONS(144),
    [anon_sym_predecessor] = ACTIONS(144),
    [anon_sym_starting] = ACTIONS(144),
    [anon_sym_successor] = ACTIONS(144),
    [anon_sym_width] = ACTIONS(144),
    [anon_sym_SQUOTE] = ACTIONS(144),
    [sym_number] = ACTIONS(146),
    [sym_comment] = ACTIONS(3),
  },
  [48] = {
    [anon_sym_library] = ACTIONS(148),
    [anon_sym_using] = ACTIONS(148),
    [anon_sym_called] = ACTIONS(148),
    [anon_sym_include] = ACTIONS(148),
    [anon_sym_valueset] = ACTIONS(148),
    [anon_sym_public] = ACTIONS(148),
    [anon_sym_private] = ACTIONS(148),
    [anon_sym_context] = ACTIONS(148),
    [anon_sym_define] = ACTIONS(148),
    [anon_sym_function] = ACTIONS(148),
    [anon_sym_LPAREN] = ACTIONS(150),
    [aux_sym_literal_token1] = ACTIONS(148),
    [anon_sym_null] = ACTIONS(148),
    [anon_sym_not] = ACTIONS(148),
    [anon_sym_cast] = ACTIONS(148),
    [anon_sym_exists] = ACTIONS(148),
    [anon_sym_xor] = ACTIONS(148),
    [anon_sym_implies] = ACTIONS(148),
    [anon_sym_union] = ACTIONS(148),
    [anon_sym_intersect] = ACTIONS(148),
    [anon_sym_except] = ACTIONS(148),
    [anon_sym_years] = ACTIONS(148),
    [anon_sym_months] = ACTIONS(148),
    [anon_sym_weeks] = ACTIONS(148),
    [anon_sym_days] = ACTIONS(148),
    [anon_sym_hours] = ACTIONS(148),
    [anon_sym_minutes] = ACTIONS(148),
    [anon_sym_seconds] = ACTIONS(148),
    [anon_sym_milliseconds] = ACTIONS(148),
    [anon_sym_date] = ACTIONS(148),
    [anon_sym_time] = ACTIONS(148),
    [anon_sym_timezone] = ACTIONS(148),
    [anon_sym_timezoneoffset] = ACTIONS(148),
    [anon_sym_duration] = ACTIONS(148),
    [anon_sym_in] = ACTIONS(148),
    [anon_sym_difference] = ACTIONS(148),
    [anon_sym_contains] = ACTIONS(148),
    [anon_sym_orbefore] = ACTIONS(150),
    [anon_sym_orafter] = ACTIONS(150),
    [anon_sym_ormore] = ACTIONS(150),
    [anon_sym_orless] = ACTIONS(150),
    [anon_sym_starts] = ACTIONS(148),
    [anon_sym_ends] = ACTIONS(148),
    [anon_sym_start] = ACTIONS(148),
    [anon_sym_end] = ACTIONS(148),
    [anon_sym_includes] = ACTIONS(148),
    [anon_sym_meets] = ACTIONS(148),
    [anon_sym_overlaps] = ACTIONS(148),
    [anon_sym_where] = ACTIONS(148),
    [anon_sym_from] = ACTIONS(148),
    [anon_sym_LBRACK] = ACTIONS(150),
    [anon_sym_version] = ACTIONS(148),
    [sym_default_identifier] = ACTIONS(148),
    [anon_sym_DQUOTE] = ACTIONS(150),
    [anon_sym_asc] = ACTIONS(148),
    [anon_sym_ascending] = ACTIONS(148),
    [anon_sym_by] = ACTIONS(148),
    [anon_sym_code] = ACTIONS(148),
    [anon_sym_codesystem] = ACTIONS(148),
    [anon_sym_codesystems] = ACTIONS(148),
    [anon_sym_concept] = ACTIONS(148),
    [anon_sym_default] = ACTIONS(148),
    [anon_sym_desc] = ACTIONS(148),
    [anon_sym_descending] = ACTIONS(148),
    [anon_sym_display] = ACTIONS(148),
    [anon_sym_div] = ACTIONS(148),
    [anon_sym_fluent] = ACTIONS(148),
    [anon_sym_mod] = ACTIONS(148),
    [anon_sym_parameter] = ACTIONS(148),
    [anon_sym_predecessor] = ACTIONS(148),
    [anon_sym_starting] = ACTIONS(148),
    [anon_sym_successor] = ACTIONS(148),
    [anon_sym_width] = ACTIONS(148),
    [anon_sym_SQUOTE] = ACTIONS(148),
    [sym_number] = ACTIONS(150),
    [sym_comment] = ACTIONS(3),
  },
  [49] = {
    [anon_sym_library] = ACTIONS(152),
    [anon_sym_using] = ACTIONS(152),
    [anon_sym_called] = ACTIONS(152),
    [anon_sym_include] = ACTIONS(152),
    [anon_sym_valueset] = ACTIONS(152),
    [anon_sym_public] = ACTIONS(152),
    [anon_sym_private] = ACTIONS(152),
    [anon_sym_context] = ACTIONS(152),
    [anon_sym_define] = ACTIONS(152),
    [anon_sym_function] = ACTIONS(152),
    [anon_sym_LPAREN] = ACTIONS(154),
    [aux_sym_literal_token1] = ACTIONS(152),
    [anon_sym_null] = ACTIONS(152),
    [anon_sym_not] = ACTIONS(152),
    [anon_sym_cast] = ACTIONS(152),
    [anon_sym_exists] = ACTIONS(152),
    [anon_sym_xor] = ACTIONS(152),
    [anon_sym_implies] = ACTIONS(152),
    [anon_sym_union] = ACTIONS(152),
    [anon_sym_intersect] = ACTIONS(152),
    [anon_sym_except] = ACTIONS(152),
    [anon_sym_years] = ACTIONS(152),
    [anon_sym_months] = ACTIONS(152),
    [anon_sym_weeks] = ACTIONS(152),
    [anon_sym_days] = ACTIONS(152),
    [anon_sym_hours] = ACTIONS(152),
    [anon_sym_minutes] = ACTIONS(152),
    [anon_sym_seconds] = ACTIONS(152),
    [anon_sym_milliseconds] = ACTIONS(152),
    [anon_sym_date] = ACTIONS(152),
    [anon_sym_time] = ACTIONS(152),
    [anon_sym_timezone] = ACTIONS(152),
    [anon_sym_timezoneoffset] = ACTIONS(152),
    [anon_sym_duration] = ACTIONS(152),
    [anon_sym_in] = ACTIONS(152),
    [anon_sym_difference] = ACTIONS(152),
    [anon_sym_contains] = ACTIONS(152),
    [anon_sym_orbefore] = ACTIONS(154),
    [anon_sym_orafter] = ACTIONS(154),
    [anon_sym_ormore] = ACTIONS(154),
    [anon_sym_orless] = ACTIONS(154),
    [anon_sym_starts] = ACTIONS(152),
    [anon_sym_ends] = ACTIONS(152),
    [anon_sym_start] = ACTIONS(152),
    [anon_sym_end] = ACTIONS(152),
    [anon_sym_includes] = ACTIONS(152),
    [anon_sym_meets] = ACTIONS(152),
    [anon_sym_overlaps] = ACTIONS(152),
    [anon_sym_where] = ACTIONS(152),
    [anon_sym_from] = ACTIONS(152),
    [anon_sym_LBRACK] = ACTIONS(154),
    [anon_sym_version] = ACTIONS(152),
    [sym_default_identifier] = ACTIONS(152),
    [anon_sym_DQUOTE] = ACTIONS(154),
    [anon_sym_asc] = ACTIONS(152),
    [anon_sym_ascending] = ACTIONS(152),
    [anon_sym_by] = ACTIONS(152),
    [anon_sym_code] = ACTIONS(152),
    [anon_sym_codesystem] = ACTIONS(152),
    [anon_sym_codesystems] = ACTIONS(152),
    [anon_sym_concept] = ACTIONS(152),
    [anon_sym_default] = ACTIONS(152),
    [anon_sym_desc] = ACTIONS(152),
    [anon_sym_descending] = ACTIONS(152),
    [anon_sym_display] = ACTIONS(152),
    [anon_sym_div] = ACTIONS(152),
    [anon_sym_fluent] = ACTIONS(152),
    [anon_sym_mod] = ACTIONS(152),
    [anon_sym_parameter] = ACTIONS(152),
    [anon_sym_predecessor] = ACTIONS(152),
    [anon_sym_starting] = ACTIONS(152),
    [anon_sym_successor] = ACTIONS(152),
    [anon_sym_width] = ACTIONS(152),
    [anon_sym_SQUOTE] = ACTIONS(152),
    [sym_number] = ACTIONS(154),
    [sym_comment] = ACTIONS(3),
  },
  [50] = {
    [anon_sym_library] = ACTIONS(110),
    [anon_sym_using] = ACTIONS(110),
    [anon_sym_called] = ACTIONS(110),
    [anon_sym_include] = ACTIONS(110),
    [anon_sym_valueset] = ACTIONS(110),
    [anon_sym_public] = ACTIONS(110),
    [anon_sym_private] = ACTIONS(110),
    [anon_sym_context] = ACTIONS(110),
    [anon_sym_define] = ACTIONS(110),
    [anon_sym_function] = ACTIONS(110),
    [anon_sym_LPAREN] = ACTIONS(112),
    [aux_sym_literal_token1] = ACTIONS(110),
    [anon_sym_null] = ACTIONS(110),
    [anon_sym_not] = ACTIONS(110),
    [anon_sym_cast] = ACTIONS(110),
    [anon_sym_exists] = ACTIONS(110),
    [anon_sym_xor] = ACTIONS(110),
    [anon_sym_implies] = ACTIONS(110),
    [anon_sym_union] = ACTIONS(110),
    [anon_sym_intersect] = ACTIONS(110),
    [anon_sym_except] = ACTIONS(110),
    [anon_sym_years] = ACTIONS(110),
    [anon_sym_months] = ACTIONS(110),
    [anon_sym_weeks] = ACTIONS(110),
    [anon_sym_days] = ACTIONS(110),
    [anon_sym_hours] = ACTIONS(110),
    [anon_sym_minutes] = ACTIONS(110),
    [anon_sym_seconds] = ACTIONS(110),
    [anon_sym_milliseconds] = ACTIONS(110),
    [anon_sym_date] = ACTIONS(110),
    [anon_sym_time] = ACTIONS(110),
    [anon_sym_timezone] = ACTIONS(110),
    [anon_sym_timezoneoffset] = ACTIONS(110),
    [anon_sym_duration] = ACTIONS(110),
    [anon_sym_in] = ACTIONS(110),
    [anon_sym_difference] = ACTIONS(110),
    [anon_sym_contains] = ACTIONS(110),
    [anon_sym_orbefore] = ACTIONS(112),
    [anon_sym_orafter] = ACTIONS(112),
    [anon_sym_ormore] = ACTIONS(112),
    [anon_sym_orless] = ACTIONS(112),
    [anon_sym_starts] = ACTIONS(110),
    [anon_sym_ends] = ACTIONS(110),
    [anon_sym_start] = ACTIONS(120),
    [anon_sym_end] = ACTIONS(120),
    [anon_sym_includes] = ACTIONS(110),
    [anon_sym_meets] = ACTIONS(110),
    [anon_sym_overlaps] = ACTIONS(110),
    [anon_sym_where] = ACTIONS(110),
    [anon_sym_from] = ACTIONS(110),
    [anon_sym_LBRACK] = ACTIONS(112),
    [anon_sym_version] = ACTIONS(110),
    [sym_default_identifier] = ACTIONS(110),
    [anon_sym_DQUOTE] = ACTIONS(112),
    [anon_sym_asc] = ACTIONS(110),
    [anon_sym_ascending] = ACTIONS(110),
    [anon_sym_by] = ACTIONS(110),
    [anon_sym_code] = ACTIONS(110),
    [anon_sym_codesystem] = ACTIONS(110),
    [anon_sym_codesystems] = ACTIONS(110),
    [anon_sym_concept] = ACTIONS(110),
    [anon_sym_default] = ACTIONS(110),
    [anon_sym_desc] = ACTIONS(110),
    [anon_sym_descending] = ACTIONS(110),
    [anon_sym_display] = ACTIONS(110),
    [anon_sym_div] = ACTIONS(110),
    [anon_sym_fluent] = ACTIONS(110),
    [anon_sym_mod] = ACTIONS(110),
    [anon_sym_parameter] = ACTIONS(110),
    [anon_sym_predecessor] = ACTIONS(110),
    [anon_sym_starting] = ACTIONS(110),
    [anon_sym_successor] = ACTIONS(110),
    [anon_sym_width] = ACTIONS(110),
    [anon_sym_SQUOTE] = ACTIONS(110),
    [sym_number] = ACTIONS(112),
    [sym_comment] = ACTIONS(3),
  },
  [51] = {
    [anon_sym_library] = ACTIONS(110),
    [anon_sym_using] = ACTIONS(110),
    [anon_sym_called] = ACTIONS(110),
    [anon_sym_include] = ACTIONS(110),
    [anon_sym_valueset] = ACTIONS(110),
    [anon_sym_public] = ACTIONS(110),
    [anon_sym_private] = ACTIONS(110),
    [anon_sym_context] = ACTIONS(110),
    [anon_sym_define] = ACTIONS(110),
    [anon_sym_function] = ACTIONS(110),
    [anon_sym_LPAREN] = ACTIONS(112),
    [aux_sym_literal_token1] = ACTIONS(110),
    [anon_sym_null] = ACTIONS(110),
    [anon_sym_not] = ACTIONS(110),
    [anon_sym_cast] = ACTIONS(110),
    [anon_sym_exists] = ACTIONS(110),
    [anon_sym_xor] = ACTIONS(110),
    [anon_sym_implies] = ACTIONS(110),
    [anon_sym_union] = ACTIONS(110),
    [anon_sym_intersect] = ACTIONS(110),
    [anon_sym_except] = ACTIONS(110),
    [anon_sym_years] = ACTIONS(110),
    [anon_sym_months] = ACTIONS(110),
    [anon_sym_weeks] = ACTIONS(110),
    [anon_sym_days] = ACTIONS(110),
    [anon_sym_hours] = ACTIONS(110),
    [anon_sym_minutes] = ACTIONS(110),
    [anon_sym_seconds] = ACTIONS(110),
    [anon_sym_milliseconds] = ACTIONS(110),
    [anon_sym_date] = ACTIONS(110),
    [anon_sym_time] = ACTIONS(110),
    [anon_sym_timezone] = ACTIONS(110),
    [anon_sym_timezoneoffset] = ACTIONS(110),
    [anon_sym_duration] = ACTIONS(110),
    [anon_sym_in] = ACTIONS(110),
    [anon_sym_difference] = ACTIONS(110),
    [anon_sym_contains] = ACTIONS(110),
    [anon_sym_orbefore] = ACTIONS(112),
    [anon_sym_orafter] = ACTIONS(112),
    [anon_sym_ormore] = ACTIONS(112),
    [anon_sym_orless] = ACTIONS(112),
    [anon_sym_starts] = ACTIONS(110),
    [anon_sym_ends] = ACTIONS(110),
    [anon_sym_start] = ACTIONS(110),
    [anon_sym_end] = ACTIONS(110),
    [anon_sym_includes] = ACTIONS(110),
    [anon_sym_meets] = ACTIONS(110),
    [anon_sym_overlaps] = ACTIONS(110),
    [anon_sym_where] = ACTIONS(110),
    [anon_sym_from] = ACTIONS(110),
    [anon_sym_LBRACK] = ACTIONS(112),
    [anon_sym_version] = ACTIONS(110),
    [sym_default_identifier] = ACTIONS(110),
    [anon_sym_DQUOTE] = ACTIONS(112),
    [anon_sym_asc] = ACTIONS(110),
    [anon_sym_ascending] = ACTIONS(110),
    [anon_sym_by] = ACTIONS(110),
    [anon_sym_code] = ACTIONS(110),
    [anon_sym_codesystem] = ACTIONS(110),
    [anon_sym_codesystems] = ACTIONS(110),
    [anon_sym_concept] = ACTIONS(110),
    [anon_sym_default] = ACTIONS(110),
    [anon_sym_desc] = ACTIONS(110),
    [anon_sym_descending] = ACTIONS(110),
    [anon_sym_display] = ACTIONS(110),
    [anon_sym_div] = ACTIONS(110),
    [anon_sym_fluent] = ACTIONS(110),
    [anon_sym_mod] = ACTIONS(110),
    [anon_sym_parameter] = ACTIONS(110),
    [anon_sym_predecessor] = ACTIONS(110),
    [anon_sym_starting] = ACTIONS(110),
    [anon_sym_successor] = ACTIONS(110),
    [anon_sym_width] = ACTIONS(110),
    [anon_sym_SQUOTE] = ACTIONS(110),
    [sym_number] = ACTIONS(112),
    [sym_comment] = ACTIONS(3),
  },
  [52] = {
    [anon_sym_library] = ACTIONS(148),
    [anon_sym_using] = ACTIONS(148),
    [anon_sym_called] = ACTIONS(148),
    [anon_sym_include] = ACTIONS(148),
    [anon_sym_valueset] = ACTIONS(148),
    [anon_sym_public] = ACTIONS(148),
    [anon_sym_private] = ACTIONS(148),
    [anon_sym_context] = ACTIONS(148),
    [anon_sym_define] = ACTIONS(148),
    [anon_sym_function] = ACTIONS(148),
    [anon_sym_LPAREN] = ACTIONS(150),
    [aux_sym_literal_token1] = ACTIONS(148),
    [anon_sym_null] = ACTIONS(148),
    [anon_sym_not] = ACTIONS(148),
    [anon_sym_cast] = ACTIONS(148),
    [anon_sym_exists] = ACTIONS(148),
    [anon_sym_xor] = ACTIONS(148),
    [anon_sym_implies] = ACTIONS(148),
    [anon_sym_union] = ACTIONS(148),
    [anon_sym_intersect] = ACTIONS(148),
    [anon_sym_except] = ACTIONS(148),
    [anon_sym_years] = ACTIONS(148),
    [anon_sym_months] = ACTIONS(148),
    [anon_sym_weeks] = ACTIONS(148),
    [anon_sym_days] = ACTIONS(148),
    [anon_sym_hours] = ACTIONS(148),
    [anon_sym_minutes] = ACTIONS(148),
    [anon_sym_seconds] = ACTIONS(148),
    [anon_sym_milliseconds] = ACTIONS(148),
    [anon_sym_date] = ACTIONS(148),
    [anon_sym_time] = ACTIONS(148),
    [anon_sym_timezone] = ACTIONS(148),
    [anon_sym_timezoneoffset] = ACTIONS(148),
    [anon_sym_duration] = ACTIONS(148),
    [anon_sym_in] = ACTIONS(148),
    [anon_sym_difference] = ACTIONS(148),
    [anon_sym_contains] = ACTIONS(148),
    [anon_sym_orbefore] = ACTIONS(150),
    [anon_sym_orafter] = ACTIONS(150),
    [anon_sym_ormore] = ACTIONS(150),
    [anon_sym_orless] = ACTIONS(150),
    [anon_sym_starts] = ACTIONS(148),
    [anon_sym_ends] = ACTIONS(148),
    [anon_sym_start] = ACTIONS(156),
    [anon_sym_end] = ACTIONS(156),
    [anon_sym_includes] = ACTIONS(148),
    [anon_sym_meets] = ACTIONS(148),
    [anon_sym_overlaps] = ACTIONS(148),
    [anon_sym_where] = ACTIONS(148),
    [anon_sym_from] = ACTIONS(148),
    [anon_sym_LBRACK] = ACTIONS(150),
    [anon_sym_version] = ACTIONS(148),
    [sym_default_identifier] = ACTIONS(148),
    [anon_sym_DQUOTE] = ACTIONS(150),
    [anon_sym_asc] = ACTIONS(148),
    [anon_sym_ascending] = ACTIONS(148),
    [anon_sym_by] = ACTIONS(148),
    [anon_sym_code] = ACTIONS(148),
    [anon_sym_codesystem] = ACTIONS(148),
    [anon_sym_codesystems] = ACTIONS(148),
    [anon_sym_concept] = ACTIONS(148),
    [anon_sym_default] = ACTIONS(148),
    [anon_sym_desc] = ACTIONS(148),
    [anon_sym_descending] = ACTIONS(148),
    [anon_sym_display] = ACTIONS(148),
    [anon_sym_div] = ACTIONS(148),
    [anon_sym_fluent] = ACTIONS(148),
    [anon_sym_mod] = ACTIONS(148),
    [anon_sym_parameter] = ACTIONS(148),
    [anon_sym_predecessor] = ACTIONS(148),
    [anon_sym_starting] = ACTIONS(148),
    [anon_sym_successor] = ACTIONS(148),
    [anon_sym_width] = ACTIONS(148),
    [anon_sym_SQUOTE] = ACTIONS(148),
    [sym_number] = ACTIONS(150),
    [sym_comment] = ACTIONS(3),
  },
  [53] = {
    [anon_sym_library] = ACTIONS(106),
    [anon_sym_using] = ACTIONS(106),
    [anon_sym_called] = ACTIONS(106),
    [anon_sym_include] = ACTIONS(106),
    [anon_sym_valueset] = ACTIONS(106),
    [anon_sym_public] = ACTIONS(106),
    [anon_sym_private] = ACTIONS(106),
    [anon_sym_context] = ACTIONS(106),
    [anon_sym_define] = ACTIONS(106),
    [anon_sym_function] = ACTIONS(106),
    [anon_sym_LPAREN] = ACTIONS(108),
    [aux_sym_literal_token1] = ACTIONS(106),
    [anon_sym_null] = ACTIONS(106),
    [anon_sym_not] = ACTIONS(106),
    [anon_sym_cast] = ACTIONS(106),
    [anon_sym_exists] = ACTIONS(106),
    [anon_sym_xor] = ACTIONS(106),
    [anon_sym_implies] = ACTIONS(106),
    [anon_sym_union] = ACTIONS(106),
    [anon_sym_intersect] = ACTIONS(106),
    [anon_sym_except] = ACTIONS(106),
    [anon_sym_years] = ACTIONS(106),
    [anon_sym_months] = ACTIONS(106),
    [anon_sym_weeks] = ACTIONS(106),
    [anon_sym_days] = ACTIONS(106),
    [anon_sym_hours] = ACTIONS(106),
    [anon_sym_minutes] = ACTIONS(106),
    [anon_sym_seconds] = ACTIONS(106),
    [anon_sym_milliseconds] = ACTIONS(106),
    [anon_sym_date] = ACTIONS(106),
    [anon_sym_time] = ACTIONS(106),
    [anon_sym_timezone] = ACTIONS(106),
    [anon_sym_timezoneoffset] = ACTIONS(106),
    [anon_sym_duration] = ACTIONS(106),
    [anon_sym_in] = ACTIONS(106),
    [anon_sym_difference] = ACTIONS(106),
    [anon_sym_contains] = ACTIONS(106),
    [anon_sym_orbefore] = ACTIONS(108),
    [anon_sym_orafter] = ACTIONS(108),
    [anon_sym_ormore] = ACTIONS(108),
    [anon_sym_orless] = ACTIONS(108),
    [anon_sym_starts] = ACTIONS(106),
    [anon_sym_ends] = ACTIONS(106),
    [anon_sym_start] = ACTIONS(106),
    [anon_sym_end] = ACTIONS(106),
    [anon_sym_includes] = ACTIONS(106),
    [anon_sym_meets] = ACTIONS(106),
    [anon_sym_overlaps] = ACTIONS(106),
    [anon_sym_where] = ACTIONS(106),
    [anon_sym_from] = ACTIONS(106),
    [anon_sym_LBRACK] = ACTIONS(108),
    [anon_sym_version] = ACTIONS(106),
    [sym_default_identifier] = ACTIONS(106),
    [anon_sym_DQUOTE] = ACTIONS(108),
    [anon_sym_asc] = ACTIONS(106),
    [anon_sym_ascending] = ACTIONS(106),
    [anon_sym_by] = ACTIONS(106),
    [anon_sym_code] = ACTIONS(106),
    [anon_sym_codesystem] = ACTIONS(106),
    [anon_sym_codesystems] = ACTIONS(106),
    [anon_sym_concept] = ACTIONS(106),
    [anon_sym_default] = ACTIONS(106),
    [anon_sym_desc] = ACTIONS(106),
    [anon_sym_descending] = ACTIONS(106),
    [anon_sym_display] = ACTIONS(106),
    [anon_sym_div] = ACTIONS(106),
    [anon_sym_fluent] = ACTIONS(106),
    [anon_sym_mod] = ACTIONS(106),
    [anon_sym_parameter] = ACTIONS(106),
    [anon_sym_predecessor] = ACTIONS(106),
    [anon_sym_starting] = ACTIONS(106),
    [anon_sym_successor] = ACTIONS(106),
    [anon_sym_width] = ACTIONS(106),
    [anon_sym_SQUOTE] = ACTIONS(106),
    [sym_number] = ACTIONS(108),
    [sym_comment] = ACTIONS(3),
  },
  [54] = {
    [anon_sym_library] = ACTIONS(106),
    [anon_sym_using] = ACTIONS(106),
    [anon_sym_called] = ACTIONS(106),
    [anon_sym_include] = ACTIONS(106),
    [anon_sym_valueset] = ACTIONS(106),
    [anon_sym_public] = ACTIONS(106),
    [anon_sym_private] = ACTIONS(106),
    [anon_sym_context] = ACTIONS(106),
    [anon_sym_define] = ACTIONS(106),
    [anon_sym_function] = ACTIONS(106),
    [anon_sym_LPAREN] = ACTIONS(108),
    [aux_sym_literal_token1] = ACTIONS(106),
    [anon_sym_null] = ACTIONS(106),
    [anon_sym_not] = ACTIONS(106),
    [anon_sym_cast] = ACTIONS(106),
    [anon_sym_exists] = ACTIONS(106),
    [anon_sym_xor] = ACTIONS(106),
    [anon_sym_implies] = ACTIONS(106),
    [anon_sym_union] = ACTIONS(106),
    [anon_sym_intersect] = ACTIONS(106),
    [anon_sym_except] = ACTIONS(106),
    [anon_sym_years] = ACTIONS(106),
    [anon_sym_months] = ACTIONS(106),
    [anon_sym_weeks] = ACTIONS(106),
    [anon_sym_days] = ACTIONS(106),
    [anon_sym_hours] = ACTIONS(106),
    [anon_sym_minutes] = ACTIONS(106),
    [anon_sym_seconds] = ACTIONS(106),
    [anon_sym_milliseconds] = ACTIONS(106),
    [anon_sym_date] = ACTIONS(106),
    [anon_sym_time] = ACTIONS(106),
    [anon_sym_timezone] = ACTIONS(106),
    [anon_sym_timezoneoffset] = ACTIONS(106),
    [anon_sym_duration] = ACTIONS(106),
    [anon_sym_in] = ACTIONS(106),
    [anon_sym_difference] = ACTIONS(106),
    [anon_sym_contains] = ACTIONS(106),
    [anon_sym_orbefore] = ACTIONS(108),
    [anon_sym_orafter] = ACTIONS(108),
    [anon_sym_ormore] = ACTIONS(108),
    [anon_sym_orless] = ACTIONS(108),
    [anon_sym_starts] = ACTIONS(106),
    [anon_sym_ends] = ACTIONS(106),
    [anon_sym_start] = ACTIONS(114),
    [anon_sym_end] = ACTIONS(114),
    [anon_sym_includes] = ACTIONS(106),
    [anon_sym_meets] = ACTIONS(106),
    [anon_sym_overlaps] = ACTIONS(106),
    [anon_sym_where] = ACTIONS(106),
    [anon_sym_from] = ACTIONS(106),
    [anon_sym_LBRACK] = ACTIONS(108),
    [anon_sym_version] = ACTIONS(106),
    [sym_default_identifier] = ACTIONS(106),
    [anon_sym_DQUOTE] = ACTIONS(108),
    [anon_sym_asc] = ACTIONS(106),
    [anon_sym_ascending] = ACTIONS(106),
    [anon_sym_by] = ACTIONS(106),
    [anon_sym_code] = ACTIONS(106),
    [anon_sym_codesystem] = ACTIONS(106),
    [anon_sym_codesystems] = ACTIONS(106),
    [anon_sym_concept] = ACTIONS(106),
    [anon_sym_default] = ACTIONS(106),
    [anon_sym_desc] = ACTIONS(106),
    [anon_sym_descending] = ACTIONS(106),
    [anon_sym_display] = ACTIONS(106),
    [anon_sym_div] = ACTIONS(106),
    [anon_sym_fluent] = ACTIONS(106),
    [anon_sym_mod] = ACTIONS(106),
    [anon_sym_parameter] = ACTIONS(106),
    [anon_sym_predecessor] = ACTIONS(106),
    [anon_sym_starting] = ACTIONS(106),
    [anon_sym_successor] = ACTIONS(106),
    [anon_sym_width] = ACTIONS(106),
    [anon_sym_SQUOTE] = ACTIONS(106),
    [sym_number] = ACTIONS(108),
    [sym_comment] = ACTIONS(3),
  },
  [55] = {
    [sym_type_specifier] = STATE(148),
    [sym_named_type_specifier] = STATE(150),
    [sym_identifier] = STATE(92),
    [sym_quoted_identifier] = STATE(99),
    [sym_referential_identifier] = STATE(114),
    [sym_type_name_identifier] = STATE(114),
    [sym_referential_or_type_name_identifier] = STATE(100),
    [sym_keyword_identifier] = STATE(133),
    [aux_sym_named_type_specifier_repeat1] = STATE(64),
    [anon_sym_library] = ACTIONS(159),
    [anon_sym_using] = ACTIONS(159),
    [anon_sym_called] = ACTIONS(159),
    [anon_sym_include] = ACTIONS(159),
    [anon_sym_valueset] = ACTIONS(159),
    [anon_sym_public] = ACTIONS(159),
    [anon_sym_private] = ACTIONS(159),
    [anon_sym_context] = ACTIONS(159),
    [anon_sym_define] = ACTIONS(159),
    [anon_sym_function] = ACTIONS(159),
    [anon_sym_null] = ACTIONS(161),
    [anon_sym_not] = ACTIONS(163),
    [anon_sym_true] = ACTIONS(161),
    [anon_sym_false] = ACTIONS(161),
    [anon_sym_xor] = ACTIONS(159),
    [anon_sym_implies] = ACTIONS(159),
    [anon_sym_union] = ACTIONS(159),
    [anon_sym_intersect] = ACTIONS(159),
    [anon_sym_except] = ACTIONS(159),
    [anon_sym_date] = ACTIONS(165),
    [anon_sym_time] = ACTIONS(165),
    [anon_sym_timezone] = ACTIONS(159),
    [anon_sym_timezoneoffset] = ACTIONS(159),
    [anon_sym_contains] = ACTIONS(159),
    [anon_sym_orbefore] = ACTIONS(167),
    [anon_sym_orafter] = ACTIONS(167),
    [anon_sym_ormore] = ACTIONS(167),
    [anon_sym_orless] = ACTIONS(167),
    [anon_sym_starts] = ACTIONS(159),
    [anon_sym_ends] = ACTIONS(159),
    [anon_sym_start] = ACTIONS(159),
    [anon_sym_end] = ACTIONS(159),
    [anon_sym_includes] = ACTIONS(159),
    [anon_sym_meets] = ACTIONS(159),
    [anon_sym_overlaps] = ACTIONS(159),
    [anon_sym_where] = ACTIONS(159),
    [anon_sym_version] = ACTIONS(159),
    [sym_default_identifier] = ACTIONS(169),
    [anon_sym_DQUOTE] = ACTIONS(171),
    [anon_sym_Code] = ACTIONS(173),
    [anon_sym_Concept] = ACTIONS(173),
    [anon_sym_asc] = ACTIONS(159),
    [anon_sym_ascending] = ACTIONS(159),
    [anon_sym_by] = ACTIONS(159),
    [anon_sym_code] = ACTIONS(159),
    [anon_sym_codesystem] = ACTIONS(159),
    [anon_sym_codesystems] = ACTIONS(159),
    [anon_sym_concept] = ACTIONS(159),
    [anon_sym_default] = ACTIONS(159),
    [anon_sym_desc] = ACTIONS(159),
    [anon_sym_descending] = ACTIONS(159),
    [anon_sym_display] = ACTIONS(159),
    [anon_sym_div] = ACTIONS(159),
    [anon_sym_fluent] = ACTIONS(159),
    [anon_sym_mod] = ACTIONS(159),
    [anon_sym_parameter] = ACTIONS(159),
    [anon_sym_predecessor] = ACTIONS(159),
    [anon_sym_starting] = ACTIONS(159),
    [anon_sym_successor] = ACTIONS(159),
    [anon_sym_width] = ACTIONS(159),
    [sym_comment] = ACTIONS(3),
  },
  [56] = {
    [sym_qualified_identifier_expression] = STATE(274),
    [sym_query_source] = STATE(233),
    [sym_aliased_query_source] = STATE(94),
    [sym_retrieve] = STATE(274),
    [sym_identifier] = STATE(218),
    [sym_quoted_identifier] = STATE(252),
    [sym_referential_identifier] = STATE(228),
    [sym_keyword_identifier] = STATE(218),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(72),
    [anon_sym_library] = ACTIONS(21),
    [anon_sym_using] = ACTIONS(21),
    [anon_sym_called] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(21),
    [anon_sym_valueset] = ACTIONS(21),
    [anon_sym_public] = ACTIONS(21),
    [anon_sym_private] = ACTIONS(21),
    [anon_sym_context] = ACTIONS(21),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_function] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_implies] = ACTIONS(21),
    [anon_sym_union] = ACTIONS(21),
    [anon_sym_intersect] = ACTIONS(21),
    [anon_sym_except] = ACTIONS(21),
    [anon_sym_date] = ACTIONS(21),
    [anon_sym_time] = ACTIONS(21),
    [anon_sym_timezone] = ACTIONS(21),
    [anon_sym_timezoneoffset] = ACTIONS(21),
    [anon_sym_contains] = ACTIONS(21),
    [anon_sym_orbefore] = ACTIONS(49),
    [anon_sym_orafter] = ACTIONS(49),
    [anon_sym_ormore] = ACTIONS(49),
    [anon_sym_orless] = ACTIONS(49),
    [anon_sym_starts] = ACTIONS(21),
    [anon_sym_ends] = ACTIONS(21),
    [anon_sym_start] = ACTIONS(21),
    [anon_sym_end] = ACTIONS(21),
    [anon_sym_includes] = ACTIONS(21),
    [anon_sym_meets] = ACTIONS(21),
    [anon_sym_overlaps] = ACTIONS(21),
    [anon_sym_where] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(175),
    [anon_sym_version] = ACTIONS(21),
    [sym_default_identifier] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [anon_sym_asc] = ACTIONS(21),
    [anon_sym_ascending] = ACTIONS(21),
    [anon_sym_by] = ACTIONS(21),
    [anon_sym_code] = ACTIONS(21),
    [anon_sym_codesystem] = ACTIONS(21),
    [anon_sym_codesystems] = ACTIONS(21),
    [anon_sym_concept] = ACTIONS(21),
    [anon_sym_default] = ACTIONS(21),
    [anon_sym_desc] = ACTIONS(21),
    [anon_sym_descending] = ACTIONS(21),
    [anon_sym_display] = ACTIONS(21),
    [anon_sym_div] = ACTIONS(21),
    [anon_sym_fluent] = ACTIONS(21),
    [anon_sym_mod] = ACTIONS(21),
    [anon_sym_parameter] = ACTIONS(21),
    [anon_sym_predecessor] = ACTIONS(21),
    [anon_sym_starting] = ACTIONS(21),
    [anon_sym_successor] = ACTIONS(21),
    [anon_sym_width] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
  [57] = {
    [sym_type_specifier] = STATE(141),
    [sym_named_type_specifier] = STATE(150),
    [sym_identifier] = STATE(92),
    [sym_quoted_identifier] = STATE(99),
    [sym_referential_identifier] = STATE(114),
    [sym_type_name_identifier] = STATE(114),
    [sym_referential_or_type_name_identifier] = STATE(100),
    [sym_keyword_identifier] = STATE(133),
    [aux_sym_named_type_specifier_repeat1] = STATE(64),
    [anon_sym_library] = ACTIONS(159),
    [anon_sym_using] = ACTIONS(159),
    [anon_sym_called] = ACTIONS(159),
    [anon_sym_include] = ACTIONS(159),
    [anon_sym_valueset] = ACTIONS(159),
    [anon_sym_public] = ACTIONS(159),
    [anon_sym_private] = ACTIONS(159),
    [anon_sym_context] = ACTIONS(159),
    [anon_sym_define] = ACTIONS(159),
    [anon_sym_function] = ACTIONS(159),
    [anon_sym_xor] = ACTIONS(159),
    [anon_sym_implies] = ACTIONS(159),
    [anon_sym_union] = ACTIONS(159),
    [anon_sym_intersect] = ACTIONS(159),
    [anon_sym_except] = ACTIONS(159),
    [anon_sym_date] = ACTIONS(165),
    [anon_sym_time] = ACTIONS(165),
    [anon_sym_timezone] = ACTIONS(159),
    [anon_sym_timezoneoffset] = ACTIONS(159),
    [anon_sym_contains] = ACTIONS(159),
    [anon_sym_orbefore] = ACTIONS(167),
    [anon_sym_orafter] = ACTIONS(167),
    [anon_sym_ormore] = ACTIONS(167),
    [anon_sym_orless] = ACTIONS(167),
    [anon_sym_starts] = ACTIONS(159),
    [anon_sym_ends] = ACTIONS(159),
    [anon_sym_start] = ACTIONS(159),
    [anon_sym_end] = ACTIONS(159),
    [anon_sym_includes] = ACTIONS(159),
    [anon_sym_meets] = ACTIONS(159),
    [anon_sym_overlaps] = ACTIONS(159),
    [anon_sym_where] = ACTIONS(159),
    [anon_sym_version] = ACTIONS(159),
    [sym_default_identifier] = ACTIONS(169),
    [anon_sym_DQUOTE] = ACTIONS(171),
    [anon_sym_Code] = ACTIONS(173),
    [anon_sym_Concept] = ACTIONS(173),
    [anon_sym_asc] = ACTIONS(159),
    [anon_sym_ascending] = ACTIONS(159),
    [anon_sym_by] = ACTIONS(159),
    [anon_sym_code] = ACTIONS(159),
    [anon_sym_codesystem] = ACTIONS(159),
    [anon_sym_codesystems] = ACTIONS(159),
    [anon_sym_concept] = ACTIONS(159),
    [anon_sym_default] = ACTIONS(159),
    [anon_sym_desc] = ACTIONS(159),
    [anon_sym_descending] = ACTIONS(159),
    [anon_sym_display] = ACTIONS(159),
    [anon_sym_div] = ACTIONS(159),
    [anon_sym_fluent] = ACTIONS(159),
    [anon_sym_mod] = ACTIONS(159),
    [anon_sym_parameter] = ACTIONS(159),
    [anon_sym_predecessor] = ACTIONS(159),
    [anon_sym_starting] = ACTIONS(159),
    [anon_sym_successor] = ACTIONS(159),
    [anon_sym_width] = ACTIONS(159),
    [sym_comment] = ACTIONS(3),
  },
  [58] = {
    [sym_qualified_identifier_expression] = STATE(274),
    [sym_query_source] = STATE(233),
    [sym_aliased_query_source] = STATE(119),
    [sym_retrieve] = STATE(274),
    [sym_identifier] = STATE(218),
    [sym_quoted_identifier] = STATE(252),
    [sym_referential_identifier] = STATE(228),
    [sym_keyword_identifier] = STATE(218),
    [aux_sym_qualified_identifier_expression_repeat1] = STATE(72),
    [anon_sym_library] = ACTIONS(21),
    [anon_sym_using] = ACTIONS(21),
    [anon_sym_called] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(21),
    [anon_sym_valueset] = ACTIONS(21),
    [anon_sym_public] = ACTIONS(21),
    [anon_sym_private] = ACTIONS(21),
    [anon_sym_context] = ACTIONS(21),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_function] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_implies] = ACTIONS(21),
    [anon_sym_union] = ACTIONS(21),
    [anon_sym_intersect] = ACTIONS(21),
    [anon_sym_except] = ACTIONS(21),
    [anon_sym_date] = ACTIONS(21),
    [anon_sym_time] = ACTIONS(21),
    [anon_sym_timezone] = ACTIONS(21),
    [anon_sym_timezoneoffset] = ACTIONS(21),
    [anon_sym_contains] = ACTIONS(21),
    [anon_sym_orbefore] = ACTIONS(49),
    [anon_sym_orafter] = ACTIONS(49),
    [anon_sym_ormore] = ACTIONS(49),
    [anon_sym_orless] = ACTIONS(49),
    [anon_sym_starts] = ACTIONS(21),
    [anon_sym_ends] = ACTIONS(21),
    [anon_sym_start] = ACTIONS(21),
    [anon_sym_end] = ACTIONS(21),
    [anon_sym_includes] = ACTIONS(21),
    [anon_sym_meets] = ACTIONS(21),
    [anon_sym_overlaps] = ACTIONS(21),
    [anon_sym_where] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(175),
    [anon_sym_version] = ACTIONS(21),
    [sym_default_identifier] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [anon_sym_asc] = ACTIONS(21),
    [anon_sym_ascending] = ACTIONS(21),
    [anon_sym_by] = ACTIONS(21),
    [anon_sym_code] = ACTIONS(21),
    [anon_sym_codesystem] = ACTIONS(21),
    [anon_sym_codesystems] = ACTIONS(21),
    [anon_sym_concept] = ACTIONS(21),
    [anon_sym_default] = ACTIONS(21),
    [anon_sym_desc] = ACTIONS(21),
    [anon_sym_descending] = ACTIONS(21),
    [anon_sym_display] = ACTIONS(21),
    [anon_sym_div] = ACTIONS(21),
    [anon_sym_fluent] = ACTIONS(21),
    [anon_sym_mod] = ACTIONS(21),
    [anon_sym_parameter] = ACTIONS(21),
    [anon_sym_predecessor] = ACTIONS(21),
    [anon_sym_starting] = ACTIONS(21),
    [anon_sym_successor] = ACTIONS(21),
    [anon_sym_width] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
  [59] = {
    [sym_type_specifier] = STATE(148),
    [sym_named_type_specifier] = STATE(150),
    [sym_identifier] = STATE(92),
    [sym_quoted_identifier] = STATE(99),
    [sym_referential_identifier] = STATE(114),
    [sym_type_name_identifier] = STATE(114),
    [sym_referential_or_type_name_identifier] = STATE(100),
    [sym_keyword_identifier] = STATE(133),
    [aux_sym_named_type_specifier_repeat1] = STATE(64),
    [anon_sym_library] = ACTIONS(159),
    [anon_sym_using] = ACTIONS(159),
    [anon_sym_called] = ACTIONS(159),
    [anon_sym_include] = ACTIONS(159),
    [anon_sym_valueset] = ACTIONS(159),
    [anon_sym_public] = ACTIONS(159),
    [anon_sym_private] = ACTIONS(159),
    [anon_sym_context] = ACTIONS(159),
    [anon_sym_define] = ACTIONS(159),
    [anon_sym_function] = ACTIONS(159),
    [anon_sym_xor] = ACTIONS(159),
    [anon_sym_implies] = ACTIONS(159),
    [anon_sym_union] = ACTIONS(159),
    [anon_sym_intersect] = ACTIONS(159),
    [anon_sym_except] = ACTIONS(159),
    [anon_sym_date] = ACTIONS(165),
    [anon_sym_time] = ACTIONS(165),
    [anon_sym_timezone] = ACTIONS(159),
    [anon_sym_timezoneoffset] = ACTIONS(159),
    [anon_sym_contains] = ACTIONS(159),
    [anon_sym_orbefore] = ACTIONS(167),
    [anon_sym_orafter] = ACTIONS(167),
    [anon_sym_ormore] = ACTIONS(167),
    [anon_sym_orless] = ACTIONS(167),
    [anon_sym_starts] = ACTIONS(159),
    [anon_sym_ends] = ACTIONS(159),
    [anon_sym_start] = ACTIONS(159),
    [anon_sym_end] = ACTIONS(159),
    [anon_sym_includes] = ACTIONS(159),
    [anon_sym_meets] = ACTIONS(159),
    [anon_sym_overlaps] = ACTIONS(159),
    [anon_sym_where] = ACTIONS(159),
    [anon_sym_version] = ACTIONS(159),
    [sym_default_identifier] = ACTIONS(169),
    [anon_sym_DQUOTE] = ACTIONS(171),
    [anon_sym_Code] = ACTIONS(173),
    [anon_sym_Concept] = ACTIONS(173),
    [anon_sym_asc] = ACTIONS(159),
    [anon_sym_ascending] = ACTIONS(159),
    [anon_sym_by] = ACTIONS(159),
    [anon_sym_code] = ACTIONS(159),
    [anon_sym_codesystem] = ACTIONS(159),
    [anon_sym_codesystems] = ACTIONS(159),
    [anon_sym_concept] = ACTIONS(159),
    [anon_sym_default] = ACTIONS(159),
    [anon_sym_desc] = ACTIONS(159),
    [anon_sym_descending] = ACTIONS(159),
    [anon_sym_display] = ACTIONS(159),
    [anon_sym_div] = ACTIONS(159),
    [anon_sym_fluent] = ACTIONS(159),
    [anon_sym_mod] = ACTIONS(159),
    [anon_sym_parameter] = ACTIONS(159),
    [anon_sym_predecessor] = ACTIONS(159),
    [anon_sym_starting] = ACTIONS(159),
    [anon_sym_successor] = ACTIONS(159),
    [anon_sym_width] = ACTIONS(159),
    [sym_comment] = ACTIONS(3),
  },
  [60] = {
    [sym_named_type_specifier] = STATE(276),
    [sym_identifier] = STATE(92),
    [sym_quoted_identifier] = STATE(167),
    [sym_referential_identifier] = STATE(114),
    [sym_type_name_identifier] = STATE(114),
    [sym_referential_or_type_name_identifier] = STATE(100),
    [sym_keyword_identifier] = STATE(218),
    [aux_sym_named_type_specifier_repeat1] = STATE(63),
    [anon_sym_library] = ACTIONS(21),
    [anon_sym_using] = ACTIONS(21),
    [anon_sym_called] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(21),
    [anon_sym_valueset] = ACTIONS(21),
    [anon_sym_public] = ACTIONS(21),
    [anon_sym_private] = ACTIONS(21),
    [anon_sym_context] = ACTIONS(21),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_function] = ACTIONS(21),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_implies] = ACTIONS(21),
    [anon_sym_union] = ACTIONS(21),
    [anon_sym_intersect] = ACTIONS(21),
    [anon_sym_except] = ACTIONS(21),
    [anon_sym_date] = ACTIONS(165),
    [anon_sym_time] = ACTIONS(165),
    [anon_sym_timezone] = ACTIONS(21),
    [anon_sym_timezoneoffset] = ACTIONS(21),
    [anon_sym_contains] = ACTIONS(21),
    [anon_sym_orbefore] = ACTIONS(49),
    [anon_sym_orafter] = ACTIONS(49),
    [anon_sym_ormore] = ACTIONS(49),
    [anon_sym_orless] = ACTIONS(49),
    [anon_sym_starts] = ACTIONS(21),
    [anon_sym_ends] = ACTIONS(21),
    [anon_sym_start] = ACTIONS(21),
    [anon_sym_end] = ACTIONS(21),
    [anon_sym_includes] = ACTIONS(21),
    [anon_sym_meets] = ACTIONS(21),
    [anon_sym_overlaps] = ACTIONS(21),
    [anon_sym_where] = ACTIONS(21),
    [anon_sym_version] = ACTIONS(21),
    [sym_default_identifier] = ACTIONS(177),
    [anon_sym_DQUOTE] = ACTIONS(179),
    [anon_sym_Code] = ACTIONS(173),
    [anon_sym_Concept] = ACTIONS(173),
    [anon_sym_asc] = ACTIONS(21),
    [anon_sym_ascending] = ACTIONS(21),
    [anon_sym_by] = ACTIONS(21),
    [anon_sym_code] = ACTIONS(21),
    [anon_sym_codesystem] = ACTIONS(21),
    [anon_sym_codesystems] = ACTIONS(21),
    [anon_sym_concept] = ACTIONS(21),
    [anon_sym_default] = ACTIONS(21),
    [anon_sym_desc] = ACTIONS(21),
    [anon_sym_descending] = ACTIONS(21),
    [anon_sym_display] = ACTIONS(21),
    [anon_sym_div] = ACTIONS(21),
    [anon_sym_fluent] = ACTIONS(21),
    [anon_sym_mod] = ACTIONS(21),
    [anon_sym_parameter] = ACTIONS(21),
    [anon_sym_predecessor] = ACTIONS(21),
    [anon_sym_starting] = ACTIONS(21),
    [anon_sym_successor] = ACTIONS(21),
    [anon_sym_width] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
  [61] = {
    [sym_named_type_specifier] = STATE(261),
    [sym_identifier] = STATE(92),
    [sym_quoted_identifier] = STATE(167),
    [sym_referential_identifier] = STATE(114),
    [sym_type_name_identifier] = STATE(114),
    [sym_referential_or_type_name_identifier] = STATE(100),
    [sym_keyword_identifier] = STATE(218),
    [aux_sym_named_type_specifier_repeat1] = STATE(63),
    [anon_sym_library] = ACTIONS(21),
    [anon_sym_using] = ACTIONS(21),
    [anon_sym_called] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(21),
    [anon_sym_valueset] = ACTIONS(21),
    [anon_sym_public] = ACTIONS(21),
    [anon_sym_private] = ACTIONS(21),
    [anon_sym_context] = ACTIONS(21),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_function] = ACTIONS(21),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_implies] = ACTIONS(21),
    [anon_sym_union] = ACTIONS(21),
    [anon_sym_intersect] = ACTIONS(21),
    [anon_sym_except] = ACTIONS(21),
    [anon_sym_date] = ACTIONS(165),
    [anon_sym_time] = ACTIONS(165),
    [anon_sym_timezone] = ACTIONS(21),
    [anon_sym_timezoneoffset] = ACTIONS(21),
    [anon_sym_contains] = ACTIONS(21),
    [anon_sym_orbefore] = ACTIONS(49),
    [anon_sym_orafter] = ACTIONS(49),
    [anon_sym_ormore] = ACTIONS(49),
    [anon_sym_orless] = ACTIONS(49),
    [anon_sym_starts] = ACTIONS(21),
    [anon_sym_ends] = ACTIONS(21),
    [anon_sym_start] = ACTIONS(21),
    [anon_sym_end] = ACTIONS(21),
    [anon_sym_includes] = ACTIONS(21),
    [anon_sym_meets] = ACTIONS(21),
    [anon_sym_overlaps] = ACTIONS(21),
    [anon_sym_where] = ACTIONS(21),
    [anon_sym_version] = ACTIONS(21),
    [sym_default_identifier] = ACTIONS(177),
    [anon_sym_DQUOTE] = ACTIONS(179),
    [anon_sym_Code] = ACTIONS(173),
    [anon_sym_Concept] = ACTIONS(173),
    [anon_sym_asc] = ACTIONS(21),
    [anon_sym_ascending] = ACTIONS(21),
    [anon_sym_by] = ACTIONS(21),
    [anon_sym_code] = ACTIONS(21),
    [anon_sym_codesystem] = ACTIONS(21),
    [anon_sym_codesystems] = ACTIONS(21),
    [anon_sym_concept] = ACTIONS(21),
    [anon_sym_default] = ACTIONS(21),
    [anon_sym_desc] = ACTIONS(21),
    [anon_sym_descending] = ACTIONS(21),
    [anon_sym_display] = ACTIONS(21),
    [anon_sym_div] = ACTIONS(21),
    [anon_sym_fluent] = ACTIONS(21),
    [anon_sym_mod] = ACTIONS(21),
    [anon_sym_parameter] = ACTIONS(21),
    [anon_sym_predecessor] = ACTIONS(21),
    [anon_sym_starting] = ACTIONS(21),
    [anon_sym_successor] = ACTIONS(21),
    [anon_sym_width] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
  [62] = {
    [sym_named_type_specifier] = STATE(265),
    [sym_identifier] = STATE(92),
    [sym_quoted_identifier] = STATE(167),
    [sym_referential_identifier] = STATE(114),
    [sym_type_name_identifier] = STATE(114),
    [sym_referential_or_type_name_identifier] = STATE(100),
    [sym_keyword_identifier] = STATE(218),
    [aux_sym_named_type_specifier_repeat1] = STATE(63),
    [anon_sym_library] = ACTIONS(21),
    [anon_sym_using] = ACTIONS(21),
    [anon_sym_called] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(21),
    [anon_sym_valueset] = ACTIONS(21),
    [anon_sym_public] = ACTIONS(21),
    [anon_sym_private] = ACTIONS(21),
    [anon_sym_context] = ACTIONS(21),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_function] = ACTIONS(21),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_implies] = ACTIONS(21),
    [anon_sym_union] = ACTIONS(21),
    [anon_sym_intersect] = ACTIONS(21),
    [anon_sym_except] = ACTIONS(21),
    [anon_sym_date] = ACTIONS(165),
    [anon_sym_time] = ACTIONS(165),
    [anon_sym_timezone] = ACTIONS(21),
    [anon_sym_timezoneoffset] = ACTIONS(21),
    [anon_sym_contains] = ACTIONS(21),
    [anon_sym_orbefore] = ACTIONS(49),
    [anon_sym_orafter] = ACTIONS(49),
    [anon_sym_ormore] = ACTIONS(49),
    [anon_sym_orless] = ACTIONS(49),
    [anon_sym_starts] = ACTIONS(21),
    [anon_sym_ends] = ACTIONS(21),
    [anon_sym_start] = ACTIONS(21),
    [anon_sym_end] = ACTIONS(21),
    [anon_sym_includes] = ACTIONS(21),
    [anon_sym_meets] = ACTIONS(21),
    [anon_sym_overlaps] = ACTIONS(21),
    [anon_sym_where] = ACTIONS(21),
    [anon_sym_version] = ACTIONS(21),
    [sym_default_identifier] = ACTIONS(177),
    [anon_sym_DQUOTE] = ACTIONS(179),
    [anon_sym_Code] = ACTIONS(173),
    [anon_sym_Concept] = ACTIONS(173),
    [anon_sym_asc] = ACTIONS(21),
    [anon_sym_ascending] = ACTIONS(21),
    [anon_sym_by] = ACTIONS(21),
    [anon_sym_code] = ACTIONS(21),
    [anon_sym_codesystem] = ACTIONS(21),
    [anon_sym_codesystems] = ACTIONS(21),
    [anon_sym_concept] = ACTIONS(21),
    [anon_sym_default] = ACTIONS(21),
    [anon_sym_desc] = ACTIONS(21),
    [anon_sym_descending] = ACTIONS(21),
    [anon_sym_display] = ACTIONS(21),
    [anon_sym_div] = ACTIONS(21),
    [anon_sym_fluent] = ACTIONS(21),
    [anon_sym_mod] = ACTIONS(21),
    [anon_sym_parameter] = ACTIONS(21),
    [anon_sym_predecessor] = ACTIONS(21),
    [anon_sym_starting] = ACTIONS(21),
    [anon_sym_successor] = ACTIONS(21),
    [anon_sym_width] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      sym_default_identifier,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    STATE(69), 1,
      aux_sym_named_type_specifier_repeat1,
    STATE(92), 1,
      sym_identifier,
    STATE(113), 1,
      sym_referential_or_type_name_identifier,
    STATE(167), 1,
      sym_quoted_identifier,
    STATE(218), 1,
      sym_keyword_identifier,
    ACTIONS(165), 2,
      anon_sym_date,
      anon_sym_time,
    ACTIONS(173), 2,
      anon_sym_Code,
      anon_sym_Concept,
    STATE(114), 2,
      sym_referential_identifier,
      sym_type_name_identifier,
    ACTIONS(49), 4,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_ormore,
      anon_sym_orless,
    ACTIONS(21), 46,
      anon_sym_library,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
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
      anon_sym_code,
      anon_sym_codesystem,
      anon_sym_codesystems,
      anon_sym_concept,
      anon_sym_default,
      anon_sym_desc,
      anon_sym_descending,
      anon_sym_display,
      anon_sym_div,
      anon_sym_fluent,
      anon_sym_mod,
      anon_sym_parameter,
      anon_sym_predecessor,
      anon_sym_starting,
      anon_sym_successor,
      anon_sym_width,
  [91] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      sym_default_identifier,
    ACTIONS(171), 1,
      anon_sym_DQUOTE,
    STATE(69), 1,
      aux_sym_named_type_specifier_repeat1,
    STATE(92), 1,
      sym_identifier,
    STATE(99), 1,
      sym_quoted_identifier,
    STATE(113), 1,
      sym_referential_or_type_name_identifier,
    STATE(133), 1,
      sym_keyword_identifier,
    ACTIONS(165), 2,
      anon_sym_date,
      anon_sym_time,
    ACTIONS(173), 2,
      anon_sym_Code,
      anon_sym_Concept,
    STATE(114), 2,
      sym_referential_identifier,
      sym_type_name_identifier,
    ACTIONS(167), 4,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_ormore,
      anon_sym_orless,
    ACTIONS(159), 46,
      anon_sym_library,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
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
      anon_sym_code,
      anon_sym_codesystem,
      anon_sym_codesystems,
      anon_sym_concept,
      anon_sym_default,
      anon_sym_desc,
      anon_sym_descending,
      anon_sym_display,
      anon_sym_div,
      anon_sym_fluent,
      anon_sym_mod,
      anon_sym_parameter,
      anon_sym_predecessor,
      anon_sym_starting,
      anon_sym_successor,
      anon_sym_width,
  [182] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      sym_default_identifier,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    STATE(70), 1,
      aux_sym_qualified_identifier_expression_repeat1,
    STATE(167), 1,
      sym_quoted_identifier,
    STATE(228), 1,
      sym_referential_identifier,
    STATE(295), 1,
      sym_qualified_identifier_expression,
    STATE(299), 1,
      sym_terminology,
    STATE(218), 2,
      sym_identifier,
      sym_keyword_identifier,
    ACTIONS(49), 4,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_ormore,
      anon_sym_orless,
    ACTIONS(21), 48,
      anon_sym_library,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
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
      anon_sym_code,
      anon_sym_codesystem,
      anon_sym_codesystems,
      anon_sym_concept,
      anon_sym_default,
      anon_sym_desc,
      anon_sym_descending,
      anon_sym_display,
      anon_sym_div,
      anon_sym_fluent,
      anon_sym_mod,
      anon_sym_parameter,
      anon_sym_predecessor,
      anon_sym_starting,
      anon_sym_successor,
      anon_sym_width,
  [267] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      sym_default_identifier,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    STATE(70), 1,
      aux_sym_qualified_identifier_expression_repeat1,
    STATE(167), 1,
      sym_quoted_identifier,
    STATE(228), 1,
      sym_referential_identifier,
    STATE(295), 1,
      sym_qualified_identifier_expression,
    STATE(300), 1,
      sym_terminology,
    STATE(218), 2,
      sym_identifier,
      sym_keyword_identifier,
    ACTIONS(49), 4,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_ormore,
      anon_sym_orless,
    ACTIONS(21), 48,
      anon_sym_library,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
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
      anon_sym_code,
      anon_sym_codesystem,
      anon_sym_codesystems,
      anon_sym_concept,
      anon_sym_default,
      anon_sym_desc,
      anon_sym_descending,
      anon_sym_display,
      anon_sym_div,
      anon_sym_fluent,
      anon_sym_mod,
      anon_sym_parameter,
      anon_sym_predecessor,
      anon_sym_starting,
      anon_sym_successor,
      anon_sym_width,
  [352] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_SQUOTE,
    STATE(124), 1,
      sym_unit,
    ACTIONS(184), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(123), 3,
      sym_date_time_precision,
      sym_plural_date_time_precision,
      sym_string,
    ACTIONS(37), 8,
      anon_sym_year,
      anon_sym_month,
      anon_sym_week,
      anon_sym_day,
      anon_sym_hour,
      anon_sym_minute,
      anon_sym_second,
      anon_sym_millisecond,
    ACTIONS(187), 8,
      anon_sym_years,
      anon_sym_months,
      anon_sym_weeks,
      anon_sym_days,
      anon_sym_hours,
      anon_sym_minutes,
      anon_sym_seconds,
      anon_sym_milliseconds,
    ACTIONS(181), 38,
      ts_builtin_sym_end,
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
  [431] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      sym_default_identifier,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    STATE(70), 1,
      aux_sym_qualified_identifier_expression_repeat1,
    STATE(167), 1,
      sym_quoted_identifier,
    STATE(228), 1,
      sym_referential_identifier,
    STATE(295), 1,
      sym_qualified_identifier_expression,
    STATE(303), 1,
      sym_terminology,
    STATE(218), 2,
      sym_identifier,
      sym_keyword_identifier,
    ACTIONS(49), 4,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_ormore,
      anon_sym_orless,
    ACTIONS(21), 48,
      anon_sym_library,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
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
      anon_sym_code,
      anon_sym_codesystem,
      anon_sym_codesystems,
      anon_sym_concept,
      anon_sym_default,
      anon_sym_desc,
      anon_sym_descending,
      anon_sym_display,
      anon_sym_div,
      anon_sym_fluent,
      anon_sym_mod,
      anon_sym_parameter,
      anon_sym_predecessor,
      anon_sym_starting,
      anon_sym_successor,
      anon_sym_width,
  [516] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym_default_identifier,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    STATE(69), 1,
      aux_sym_named_type_specifier_repeat1,
    STATE(167), 1,
      sym_quoted_identifier,
    STATE(311), 1,
      sym_identifier,
    ACTIONS(193), 4,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_ormore,
      anon_sym_orless,
    ACTIONS(191), 50,
      anon_sym_library,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
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
      anon_sym_code,
      anon_sym_codesystem,
      anon_sym_codesystems,
      anon_sym_concept,
      anon_sym_default,
      anon_sym_desc,
      anon_sym_descending,
      anon_sym_display,
      anon_sym_div,
      anon_sym_fluent,
      anon_sym_mod,
      anon_sym_parameter,
      anon_sym_predecessor,
      anon_sym_starting,
      anon_sym_successor,
      anon_sym_width,
  [593] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      sym_default_identifier,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    STATE(71), 1,
      aux_sym_qualified_identifier_expression_repeat1,
    STATE(167), 1,
      sym_quoted_identifier,
    STATE(231), 1,
      sym_referential_identifier,
    STATE(218), 2,
      sym_identifier,
      sym_keyword_identifier,
    ACTIONS(49), 4,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_ormore,
      anon_sym_orless,
    ACTIONS(21), 48,
      anon_sym_library,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
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
      anon_sym_code,
      anon_sym_codesystem,
      anon_sym_codesystems,
      anon_sym_concept,
      anon_sym_default,
      anon_sym_desc,
      anon_sym_descending,
      anon_sym_display,
      anon_sym_div,
      anon_sym_fluent,
      anon_sym_mod,
      anon_sym_parameter,
      anon_sym_predecessor,
      anon_sym_starting,
      anon_sym_successor,
      anon_sym_width,
  [672] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym_default_identifier,
    ACTIONS(210), 1,
      anon_sym_DQUOTE,
    STATE(71), 1,
      aux_sym_qualified_identifier_expression_repeat1,
    STATE(167), 1,
      sym_quoted_identifier,
    STATE(288), 1,
      sym_referential_identifier,
    STATE(218), 2,
      sym_identifier,
      sym_keyword_identifier,
    ACTIONS(204), 4,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_ormore,
      anon_sym_orless,
    ACTIONS(201), 48,
      anon_sym_library,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
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
      anon_sym_code,
      anon_sym_codesystem,
      anon_sym_codesystems,
      anon_sym_concept,
      anon_sym_default,
      anon_sym_desc,
      anon_sym_descending,
      anon_sym_display,
      anon_sym_div,
      anon_sym_fluent,
      anon_sym_mod,
      anon_sym_parameter,
      anon_sym_predecessor,
      anon_sym_starting,
      anon_sym_successor,
      anon_sym_width,
  [751] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym_default_identifier,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(71), 1,
      aux_sym_qualified_identifier_expression_repeat1,
    STATE(231), 1,
      sym_referential_identifier,
    STATE(252), 1,
      sym_quoted_identifier,
    STATE(218), 2,
      sym_identifier,
      sym_keyword_identifier,
    ACTIONS(49), 4,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_ormore,
      anon_sym_orless,
    ACTIONS(21), 48,
      anon_sym_library,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
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
      anon_sym_code,
      anon_sym_codesystem,
      anon_sym_codesystems,
      anon_sym_concept,
      anon_sym_default,
      anon_sym_desc,
      anon_sym_descending,
      anon_sym_display,
      anon_sym_div,
      anon_sym_fluent,
      anon_sym_mod,
      anon_sym_parameter,
      anon_sym_predecessor,
      anon_sym_starting,
      anon_sym_successor,
      anon_sym_width,
  [830] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 5,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_ormore,
      anon_sym_orless,
      anon_sym_DQUOTE,
    ACTIONS(213), 51,
      anon_sym_library,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
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
      anon_sym_code,
      anon_sym_codesystem,
      anon_sym_codesystems,
      anon_sym_concept,
      anon_sym_default,
      anon_sym_desc,
      anon_sym_descending,
      anon_sym_display,
      anon_sym_div,
      anon_sym_fluent,
      anon_sym_mod,
      anon_sym_parameter,
      anon_sym_predecessor,
      anon_sym_starting,
      anon_sym_successor,
      anon_sym_width,
  [894] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 5,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_ormore,
      anon_sym_orless,
      anon_sym_DQUOTE,
    ACTIONS(217), 49,
      anon_sym_library,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
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
      anon_sym_code,
      anon_sym_codesystem,
      anon_sym_codesystems,
      anon_sym_concept,
      anon_sym_default,
      anon_sym_desc,
      anon_sym_descending,
      anon_sym_display,
      anon_sym_div,
      anon_sym_fluent,
      anon_sym_mod,
      anon_sym_parameter,
      anon_sym_predecessor,
      anon_sym_starting,
      anon_sym_successor,
      anon_sym_width,
  [956] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(28), 1,
      sym_interval_operator_phrase,
    STATE(40), 1,
      sym_temporal_relationship,
    STATE(210), 1,
      sym_quantity,
    STATE(223), 1,
      sym_quantity_offset,
    STATE(272), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(223), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(221), 37,
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
  [1018] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_and,
    ACTIONS(237), 1,
      anon_sym_implies,
    STATE(28), 1,
      sym_interval_operator_phrase,
    STATE(40), 1,
      sym_temporal_relationship,
    STATE(210), 1,
      sym_quantity,
    STATE(223), 1,
      sym_quantity_offset,
    STATE(272), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(231), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(233), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(235), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(229), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(239), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
    ACTIONS(225), 23,
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
  [1092] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_and,
    ACTIONS(237), 1,
      anon_sym_implies,
    ACTIONS(243), 1,
      anon_sym_is,
    ACTIONS(246), 1,
      anon_sym_as,
    ACTIONS(249), 1,
      anon_sym_properly,
    ACTIONS(252), 1,
      anon_sym_between,
    ACTIONS(258), 1,
      anon_sym_onor,
    ACTIONS(267), 1,
      anon_sym_occurs,
    ACTIONS(270), 1,
      anon_sym_same,
    ACTIONS(273), 1,
      anon_sym_includes,
    ACTIONS(282), 1,
      anon_sym_within,
    ACTIONS(285), 1,
      sym_number,
    STATE(28), 1,
      sym_interval_operator_phrase,
    STATE(40), 1,
      sym_temporal_relationship,
    STATE(210), 1,
      sym_quantity,
    STATE(223), 1,
      sym_quantity_offset,
    STATE(272), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(231), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(233), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(235), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(255), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(261), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(264), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(276), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(279), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(241), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
    ACTIONS(229), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(239), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [1196] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(28), 1,
      sym_interval_operator_phrase,
    STATE(40), 1,
      sym_temporal_relationship,
    STATE(210), 1,
      sym_quantity,
    STATE(223), 1,
      sym_quantity_offset,
    STATE(272), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(290), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(288), 37,
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
  [1258] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(28), 1,
      sym_interval_operator_phrase,
    STATE(40), 1,
      sym_temporal_relationship,
    STATE(210), 1,
      sym_quantity,
    STATE(223), 1,
      sym_quantity_offset,
    STATE(272), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(294), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(292), 37,
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
  [1320] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(28), 1,
      sym_interval_operator_phrase,
    STATE(40), 1,
      sym_temporal_relationship,
    STATE(210), 1,
      sym_quantity,
    STATE(223), 1,
      sym_quantity_offset,
    STATE(272), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(298), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(296), 37,
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
  [1382] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_onor,
    ACTIONS(227), 1,
      anon_sym_and,
    ACTIONS(237), 1,
      anon_sym_implies,
    ACTIONS(302), 1,
      anon_sym_is,
    ACTIONS(304), 1,
      anon_sym_as,
    ACTIONS(306), 1,
      anon_sym_properly,
    ACTIONS(308), 1,
      anon_sym_between,
    ACTIONS(314), 1,
      anon_sym_occurs,
    ACTIONS(316), 1,
      anon_sym_same,
    ACTIONS(318), 1,
      anon_sym_includes,
    ACTIONS(324), 1,
      anon_sym_within,
    ACTIONS(326), 1,
      sym_number,
    STATE(28), 1,
      sym_interval_operator_phrase,
    STATE(40), 1,
      sym_temporal_relationship,
    STATE(210), 1,
      sym_quantity,
    STATE(223), 1,
      sym_quantity_offset,
    STATE(272), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(89), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(231), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(233), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(235), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(310), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(312), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(320), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(322), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(300), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
    ACTIONS(229), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(239), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [1486] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(28), 1,
      sym_interval_operator_phrase,
    STATE(40), 1,
      sym_temporal_relationship,
    STATE(210), 1,
      sym_quantity,
    STATE(223), 1,
      sym_quantity_offset,
    STATE(272), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(330), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(328), 37,
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
  [1548] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_onor,
    ACTIONS(227), 1,
      anon_sym_and,
    ACTIONS(237), 1,
      anon_sym_implies,
    ACTIONS(302), 1,
      anon_sym_is,
    ACTIONS(304), 1,
      anon_sym_as,
    ACTIONS(306), 1,
      anon_sym_properly,
    ACTIONS(308), 1,
      anon_sym_between,
    ACTIONS(314), 1,
      anon_sym_occurs,
    ACTIONS(316), 1,
      anon_sym_same,
    ACTIONS(318), 1,
      anon_sym_includes,
    ACTIONS(324), 1,
      anon_sym_within,
    ACTIONS(326), 1,
      sym_number,
    STATE(28), 1,
      sym_interval_operator_phrase,
    STATE(40), 1,
      sym_temporal_relationship,
    STATE(210), 1,
      sym_quantity,
    STATE(223), 1,
      sym_quantity_offset,
    STATE(272), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(89), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(231), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(233), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(235), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(310), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(312), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(320), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(322), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(332), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
    ACTIONS(229), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(239), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [1652] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_and,
    ACTIONS(237), 1,
      anon_sym_implies,
    ACTIONS(336), 1,
      anon_sym_is,
    ACTIONS(339), 1,
      anon_sym_as,
    ACTIONS(342), 1,
      anon_sym_properly,
    ACTIONS(345), 1,
      anon_sym_between,
    ACTIONS(351), 1,
      anon_sym_onor,
    ACTIONS(360), 1,
      anon_sym_occurs,
    ACTIONS(363), 1,
      anon_sym_same,
    ACTIONS(366), 1,
      anon_sym_includes,
    ACTIONS(375), 1,
      anon_sym_within,
    ACTIONS(378), 1,
      sym_number,
    STATE(28), 1,
      sym_interval_operator_phrase,
    STATE(40), 1,
      sym_temporal_relationship,
    STATE(210), 1,
      sym_quantity,
    STATE(223), 1,
      sym_quantity_offset,
    STATE(272), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(231), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(233), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(235), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(348), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(354), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(357), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(369), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(372), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(334), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
    ACTIONS(229), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(239), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [1756] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(28), 1,
      sym_interval_operator_phrase,
    STATE(40), 1,
      sym_temporal_relationship,
    STATE(210), 1,
      sym_quantity,
    STATE(223), 1,
      sym_quantity_offset,
    STATE(272), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(383), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(381), 37,
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
  [1818] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(28), 1,
      sym_interval_operator_phrase,
    STATE(40), 1,
      sym_temporal_relationship,
    STATE(210), 1,
      sym_quantity,
    STATE(223), 1,
      sym_quantity_offset,
    STATE(272), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(387), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(385), 37,
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
  [1880] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(28), 1,
      sym_interval_operator_phrase,
    STATE(40), 1,
      sym_temporal_relationship,
    STATE(210), 1,
      sym_quantity,
    STATE(223), 1,
      sym_quantity_offset,
    STATE(272), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(391), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(389), 37,
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
  [1942] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_and,
    ACTIONS(237), 1,
      anon_sym_implies,
    ACTIONS(395), 1,
      anon_sym_is,
    ACTIONS(398), 1,
      anon_sym_as,
    ACTIONS(401), 1,
      anon_sym_properly,
    ACTIONS(404), 1,
      anon_sym_between,
    ACTIONS(410), 1,
      anon_sym_onor,
    ACTIONS(419), 1,
      anon_sym_occurs,
    ACTIONS(422), 1,
      anon_sym_same,
    ACTIONS(425), 1,
      anon_sym_includes,
    ACTIONS(434), 1,
      anon_sym_within,
    ACTIONS(437), 1,
      sym_number,
    STATE(28), 1,
      sym_interval_operator_phrase,
    STATE(40), 1,
      sym_temporal_relationship,
    STATE(210), 1,
      sym_quantity,
    STATE(223), 1,
      sym_quantity_offset,
    STATE(272), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(231), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(233), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(235), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(407), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(413), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(416), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(428), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(431), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(393), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
    ACTIONS(229), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(239), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [2046] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_onor,
    ACTIONS(227), 1,
      anon_sym_and,
    ACTIONS(237), 1,
      anon_sym_implies,
    ACTIONS(302), 1,
      anon_sym_is,
    ACTIONS(304), 1,
      anon_sym_as,
    ACTIONS(306), 1,
      anon_sym_properly,
    ACTIONS(308), 1,
      anon_sym_between,
    ACTIONS(314), 1,
      anon_sym_occurs,
    ACTIONS(316), 1,
      anon_sym_same,
    ACTIONS(318), 1,
      anon_sym_includes,
    ACTIONS(324), 1,
      anon_sym_within,
    ACTIONS(326), 1,
      sym_number,
    STATE(28), 1,
      sym_interval_operator_phrase,
    STATE(40), 1,
      sym_temporal_relationship,
    STATE(210), 1,
      sym_quantity,
    STATE(223), 1,
      sym_quantity_offset,
    STATE(272), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(89), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(231), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(233), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(235), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(310), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(312), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(320), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(322), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(440), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
    ACTIONS(229), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(239), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [2150] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_onor,
    ACTIONS(227), 1,
      anon_sym_and,
    ACTIONS(237), 1,
      anon_sym_implies,
    ACTIONS(302), 1,
      anon_sym_is,
    ACTIONS(304), 1,
      anon_sym_as,
    ACTIONS(306), 1,
      anon_sym_properly,
    ACTIONS(308), 1,
      anon_sym_between,
    ACTIONS(314), 1,
      anon_sym_occurs,
    ACTIONS(316), 1,
      anon_sym_same,
    ACTIONS(318), 1,
      anon_sym_includes,
    ACTIONS(324), 1,
      anon_sym_within,
    ACTIONS(326), 1,
      sym_number,
    STATE(28), 1,
      sym_interval_operator_phrase,
    STATE(40), 1,
      sym_temporal_relationship,
    STATE(210), 1,
      sym_quantity,
    STATE(223), 1,
      sym_quantity_offset,
    STATE(272), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(89), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(231), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(233), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(235), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(310), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(312), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(320), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(322), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(442), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
    ACTIONS(229), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(239), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [2254] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(444), 41,
      ts_builtin_sym_end,
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
      anon_sym_COMMA,
      sym_number,
  [2305] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_DOT,
    ACTIONS(452), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(448), 40,
      ts_builtin_sym_end,
      anon_sym_COLON,
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
      anon_sym_RBRACK,
      sym_number,
  [2358] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_COMMA,
    STATE(93), 1,
      aux_sym_query_source_clause_repeat1,
    ACTIONS(456), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(454), 39,
      ts_builtin_sym_end,
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
  [2413] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_COMMA,
    STATE(95), 1,
      aux_sym_query_source_clause_repeat1,
    ACTIONS(463), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(461), 39,
      ts_builtin_sym_end,
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
  [2468] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_COMMA,
    STATE(93), 1,
      aux_sym_query_source_clause_repeat1,
    ACTIONS(469), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(467), 39,
      ts_builtin_sym_end,
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
  [2523] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_COMMA,
    STATE(93), 1,
      aux_sym_query_source_clause_repeat1,
    ACTIONS(463), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(461), 39,
      ts_builtin_sym_end,
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
  [2578] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      aux_sym_query_source_clause_repeat1,
    ACTIONS(473), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(471), 39,
      ts_builtin_sym_end,
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
  [2633] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(475), 41,
      ts_builtin_sym_end,
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
      anon_sym_COMMA,
      sym_number,
  [2684] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(479), 41,
      ts_builtin_sym_end,
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
      anon_sym_COMMA,
      sym_number,
  [2735] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(483), 40,
      ts_builtin_sym_end,
      anon_sym_COLON,
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
      anon_sym_RBRACK,
      sym_number,
  [2785] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(19), 1,
      sym_interval_operator_phrase,
    STATE(40), 1,
      sym_temporal_relationship,
    STATE(210), 1,
      sym_quantity,
    STATE(223), 1,
      sym_quantity_offset,
    STATE(272), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(223), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(221), 35,
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
  [2845] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(19), 1,
      sym_interval_operator_phrase,
    STATE(40), 1,
      sym_temporal_relationship,
    STATE(210), 1,
      sym_quantity,
    STATE(223), 1,
      sym_quantity_offset,
    STATE(272), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(290), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(288), 35,
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
  [2905] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_RPAREN,
    ACTIONS(336), 1,
      anon_sym_is,
    ACTIONS(339), 1,
      anon_sym_as,
    ACTIONS(342), 1,
      anon_sym_properly,
    ACTIONS(345), 1,
      anon_sym_between,
    ACTIONS(351), 1,
      anon_sym_onor,
    ACTIONS(360), 1,
      anon_sym_occurs,
    ACTIONS(363), 1,
      anon_sym_same,
    ACTIONS(366), 1,
      anon_sym_includes,
    ACTIONS(375), 1,
      anon_sym_within,
    ACTIONS(378), 1,
      sym_number,
    ACTIONS(487), 1,
      anon_sym_and,
    ACTIONS(497), 1,
      anon_sym_implies,
    STATE(19), 1,
      sym_interval_operator_phrase,
    STATE(40), 1,
      sym_temporal_relationship,
    STATE(210), 1,
      sym_quantity,
    STATE(223), 1,
      sym_quantity_offset,
    STATE(272), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(348), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(354), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(357), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(369), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(372), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(491), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(493), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(495), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(489), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(499), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [3007] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(19), 1,
      sym_interval_operator_phrase,
    STATE(40), 1,
      sym_temporal_relationship,
    STATE(210), 1,
      sym_quantity,
    STATE(223), 1,
      sym_quantity_offset,
    STATE(272), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(383), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(381), 35,
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
  [3067] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_onor,
    ACTIONS(302), 1,
      anon_sym_is,
    ACTIONS(304), 1,
      anon_sym_as,
    ACTIONS(306), 1,
      anon_sym_properly,
    ACTIONS(308), 1,
      anon_sym_between,
    ACTIONS(314), 1,
      anon_sym_occurs,
    ACTIONS(316), 1,
      anon_sym_same,
    ACTIONS(318), 1,
      anon_sym_includes,
    ACTIONS(324), 1,
      anon_sym_within,
    ACTIONS(326), 1,
      sym_number,
    ACTIONS(487), 1,
      anon_sym_and,
    ACTIONS(497), 1,
      anon_sym_implies,
    ACTIONS(501), 1,
      anon_sym_RPAREN,
    STATE(19), 1,
      sym_interval_operator_phrase,
    STATE(40), 1,
      sym_temporal_relationship,
    STATE(210), 1,
      sym_quantity,
    STATE(223), 1,
      sym_quantity_offset,
    STATE(272), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(89), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(310), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(312), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(320), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(322), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(491), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(493), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(495), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(489), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(499), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [3169] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(19), 1,
      sym_interval_operator_phrase,
    STATE(40), 1,
      sym_temporal_relationship,
    STATE(210), 1,
      sym_quantity,
    STATE(223), 1,
      sym_quantity_offset,
    STATE(272), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(294), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(292), 35,
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
  [3229] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_and,
    ACTIONS(497), 1,
      anon_sym_implies,
    STATE(19), 1,
      sym_interval_operator_phrase,
    STATE(40), 1,
      sym_temporal_relationship,
    STATE(210), 1,
      sym_quantity,
    STATE(223), 1,
      sym_quantity_offset,
    STATE(272), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(491), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(493), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(495), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(489), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(499), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
    ACTIONS(225), 21,
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
  [3301] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_RPAREN,
    ACTIONS(243), 1,
      anon_sym_is,
    ACTIONS(246), 1,
      anon_sym_as,
    ACTIONS(249), 1,
      anon_sym_properly,
    ACTIONS(252), 1,
      anon_sym_between,
    ACTIONS(258), 1,
      anon_sym_onor,
    ACTIONS(267), 1,
      anon_sym_occurs,
    ACTIONS(270), 1,
      anon_sym_same,
    ACTIONS(273), 1,
      anon_sym_includes,
    ACTIONS(282), 1,
      anon_sym_within,
    ACTIONS(285), 1,
      sym_number,
    ACTIONS(487), 1,
      anon_sym_and,
    ACTIONS(497), 1,
      anon_sym_implies,
    STATE(19), 1,
      sym_interval_operator_phrase,
    STATE(40), 1,
      sym_temporal_relationship,
    STATE(210), 1,
      sym_quantity,
    STATE(223), 1,
      sym_quantity_offset,
    STATE(272), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(255), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(261), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(264), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(276), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(279), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(491), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(493), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(495), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(489), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(499), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [3403] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(19), 1,
      sym_interval_operator_phrase,
    STATE(40), 1,
      sym_temporal_relationship,
    STATE(210), 1,
      sym_quantity,
    STATE(223), 1,
      sym_quantity_offset,
    STATE(272), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(298), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(296), 35,
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
  [3463] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_RPAREN,
    ACTIONS(395), 1,
      anon_sym_is,
    ACTIONS(398), 1,
      anon_sym_as,
    ACTIONS(401), 1,
      anon_sym_properly,
    ACTIONS(404), 1,
      anon_sym_between,
    ACTIONS(410), 1,
      anon_sym_onor,
    ACTIONS(419), 1,
      anon_sym_occurs,
    ACTIONS(422), 1,
      anon_sym_same,
    ACTIONS(425), 1,
      anon_sym_includes,
    ACTIONS(434), 1,
      anon_sym_within,
    ACTIONS(437), 1,
      sym_number,
    ACTIONS(487), 1,
      anon_sym_and,
    ACTIONS(497), 1,
      anon_sym_implies,
    STATE(19), 1,
      sym_interval_operator_phrase,
    STATE(40), 1,
      sym_temporal_relationship,
    STATE(210), 1,
      sym_quantity,
    STATE(223), 1,
      sym_quantity_offset,
    STATE(272), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(407), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(413), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(416), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(428), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(431), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(491), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(493), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(495), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(489), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(499), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [3565] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(19), 1,
      sym_interval_operator_phrase,
    STATE(40), 1,
      sym_temporal_relationship,
    STATE(210), 1,
      sym_quantity,
    STATE(223), 1,
      sym_quantity_offset,
    STATE(272), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(391), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(389), 35,
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
  [3625] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(19), 1,
      sym_interval_operator_phrase,
    STATE(40), 1,
      sym_temporal_relationship,
    STATE(210), 1,
      sym_quantity,
    STATE(223), 1,
      sym_quantity_offset,
    STATE(272), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(330), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(328), 35,
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
  [3685] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(503), 40,
      ts_builtin_sym_end,
      anon_sym_COLON,
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
      anon_sym_RBRACK,
      sym_number,
  [3735] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(507), 40,
      ts_builtin_sym_end,
      anon_sym_COLON,
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
      anon_sym_RBRACK,
      sym_number,
  [3785] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(511), 40,
      ts_builtin_sym_end,
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
      anon_sym_COMMA,
      sym_number,
  [3835] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(515), 40,
      ts_builtin_sym_end,
      anon_sym_COLON,
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
      anon_sym_RBRACK,
      sym_number,
  [3885] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(515), 40,
      ts_builtin_sym_end,
      anon_sym_COLON,
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
      anon_sym_RBRACK,
      sym_number,
  [3935] = 8,
    ACTIONS(3), 1,
      sym_comment,
    STATE(19), 1,
      sym_interval_operator_phrase,
    STATE(40), 1,
      sym_temporal_relationship,
    STATE(210), 1,
      sym_quantity,
    STATE(223), 1,
      sym_quantity_offset,
    STATE(272), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(387), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(385), 35,
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
  [3995] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(454), 40,
      ts_builtin_sym_end,
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
      anon_sym_COMMA,
      sym_number,
  [4045] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_where,
    STATE(129), 1,
      sym_where_clause,
    ACTIONS(521), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(519), 37,
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
  [4098] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 14,
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
    ACTIONS(527), 27,
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
  [4147] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(529), 39,
      ts_builtin_sym_end,
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
  [4196] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(533), 39,
      ts_builtin_sym_end,
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
  [4245] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(537), 39,
      ts_builtin_sym_end,
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
  [4294] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(541), 39,
      ts_builtin_sym_end,
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
  [4343] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_onor,
    ACTIONS(302), 1,
      anon_sym_is,
    ACTIONS(306), 1,
      anon_sym_properly,
    ACTIONS(308), 1,
      anon_sym_between,
    ACTIONS(314), 1,
      anon_sym_occurs,
    ACTIONS(316), 1,
      anon_sym_same,
    ACTIONS(318), 1,
      anon_sym_includes,
    ACTIONS(324), 1,
      anon_sym_within,
    ACTIONS(326), 1,
      sym_number,
    ACTIONS(487), 1,
      anon_sym_and,
    ACTIONS(497), 1,
      anon_sym_implies,
    ACTIONS(545), 1,
      anon_sym_as,
    STATE(19), 1,
      sym_interval_operator_phrase,
    STATE(40), 1,
      sym_temporal_relationship,
    STATE(210), 1,
      sym_quantity,
    STATE(223), 1,
      sym_quantity_offset,
    STATE(272), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(89), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(310), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(312), 2,
      anon_sym_starts,
      anon_sym_ends,
    ACTIONS(320), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(322), 2,
      anon_sym_meets,
      anon_sym_overlaps,
    ACTIONS(491), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(493), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(495), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(489), 4,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(499), 4,
      anon_sym_PIPE,
      anon_sym_union,
      anon_sym_intersect,
      anon_sym_except,
  [4442] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      sym_default_identifier,
    ACTIONS(553), 1,
      anon_sym_DQUOTE,
    ACTIONS(547), 13,
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
    ACTIONS(549), 26,
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
  [4495] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 14,
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
    ACTIONS(557), 27,
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
  [4544] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(559), 38,
      ts_builtin_sym_end,
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
  [4592] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(563), 38,
      ts_builtin_sym_end,
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
  [4640] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(567), 38,
      ts_builtin_sym_end,
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
  [4688] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(571), 38,
      ts_builtin_sym_end,
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
  [4736] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(448), 38,
      ts_builtin_sym_end,
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
  [4784] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 38,
      ts_builtin_sym_end,
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
  [4832] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(577), 38,
      ts_builtin_sym_end,
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
  [4880] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(581), 38,
      ts_builtin_sym_end,
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
  [4928] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(585), 38,
      ts_builtin_sym_end,
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
  [4976] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(589), 38,
      ts_builtin_sym_end,
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
  [5024] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(593), 38,
      ts_builtin_sym_end,
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
  [5072] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(597), 38,
      ts_builtin_sym_end,
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
  [5120] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(601), 38,
      ts_builtin_sym_end,
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
  [5168] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(605), 38,
      ts_builtin_sym_end,
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
  [5216] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(547), 38,
      ts_builtin_sym_end,
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
  [5264] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(609), 38,
      ts_builtin_sym_end,
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
  [5312] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(613), 38,
      ts_builtin_sym_end,
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
  [5360] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(617), 38,
      ts_builtin_sym_end,
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
  [5408] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(621), 38,
      ts_builtin_sym_end,
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
  [5456] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(625), 38,
      ts_builtin_sym_end,
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
  [5504] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(629), 38,
      ts_builtin_sym_end,
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
  [5552] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(633), 38,
      ts_builtin_sym_end,
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
  [5600] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 14,
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
    ACTIONS(527), 25,
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
  [5647] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_where,
    STATE(129), 1,
      sym_where_clause,
    ACTIONS(521), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(519), 35,
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
  [5698] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      sym_default_identifier,
    ACTIONS(553), 1,
      anon_sym_DQUOTE,
    ACTIONS(547), 13,
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
    ACTIONS(549), 24,
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
  [5749] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 14,
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
    ACTIONS(557), 25,
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
  [5796] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_SQUOTE,
    STATE(220), 1,
      sym_unit,
    STATE(219), 3,
      sym_date_time_precision,
      sym_plural_date_time_precision,
      sym_string,
    ACTIONS(643), 5,
      anon_sym_ormore,
      anon_sym_orless,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(639), 8,
      anon_sym_year,
      anon_sym_month,
      anon_sym_week,
      anon_sym_day,
      anon_sym_hour,
      anon_sym_minute,
      anon_sym_second,
      anon_sym_millisecond,
    ACTIONS(641), 8,
      anon_sym_years,
      anon_sym_months,
      anon_sym_weeks,
      anon_sym_days,
      anon_sym_hours,
      anon_sym_minutes,
      anon_sym_seconds,
      anon_sym_milliseconds,
  [5838] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_SQUOTE,
    STATE(124), 1,
      sym_unit,
    STATE(123), 3,
      sym_date_time_precision,
      sym_plural_date_time_precision,
      sym_string,
    ACTIONS(643), 4,
      anon_sym_of,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(37), 8,
      anon_sym_year,
      anon_sym_month,
      anon_sym_week,
      anon_sym_day,
      anon_sym_hour,
      anon_sym_minute,
      anon_sym_second,
      anon_sym_millisecond,
    ACTIONS(187), 8,
      anon_sym_years,
      anon_sym_months,
      anon_sym_weeks,
      anon_sym_days,
      anon_sym_hours,
      anon_sym_minutes,
      anon_sym_seconds,
      anon_sym_milliseconds,
  [5879] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_and,
    ACTIONS(645), 1,
      anon_sym_SQUOTE,
    STATE(124), 1,
      sym_unit,
    STATE(123), 3,
      sym_date_time_precision,
      sym_plural_date_time_precision,
      sym_string,
    ACTIONS(37), 8,
      anon_sym_year,
      anon_sym_month,
      anon_sym_week,
      anon_sym_day,
      anon_sym_hour,
      anon_sym_minute,
      anon_sym_second,
      anon_sym_millisecond,
    ACTIONS(187), 8,
      anon_sym_years,
      anon_sym_months,
      anon_sym_weeks,
      anon_sym_days,
      anon_sym_hours,
      anon_sym_minutes,
      anon_sym_seconds,
      anon_sym_milliseconds,
  [5917] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_using,
    ACTIONS(11), 1,
      anon_sym_include,
    ACTIONS(13), 1,
      anon_sym_valueset,
    ACTIONS(17), 1,
      anon_sym_context,
    ACTIONS(19), 1,
      anon_sym_define,
    ACTIONS(647), 1,
      ts_builtin_sym_end,
    STATE(296), 1,
      sym_access_modifier,
    ACTIONS(15), 2,
      anon_sym_public,
      anon_sym_private,
    STATE(160), 2,
      sym_definition,
      aux_sym_cql_library_repeat1,
    STATE(203), 2,
      sym_statement,
      aux_sym_cql_library_repeat2,
    STATE(197), 3,
      sym_using_definition,
      sym_include_definition,
      sym_valueset_definition,
    STATE(255), 3,
      sym_context_definition,
      sym_function_definition,
      sym_expression_definition,
  [5964] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_using,
    ACTIONS(11), 1,
      anon_sym_include,
    ACTIONS(13), 1,
      anon_sym_valueset,
    ACTIONS(17), 1,
      anon_sym_context,
    ACTIONS(19), 1,
      anon_sym_define,
    ACTIONS(647), 1,
      ts_builtin_sym_end,
    STATE(296), 1,
      sym_access_modifier,
    ACTIONS(15), 2,
      anon_sym_public,
      anon_sym_private,
    STATE(166), 2,
      sym_definition,
      aux_sym_cql_library_repeat1,
    STATE(203), 2,
      sym_statement,
      aux_sym_cql_library_repeat2,
    STATE(197), 3,
      sym_using_definition,
      sym_include_definition,
      sym_valueset_definition,
    STATE(255), 3,
      sym_context_definition,
      sym_function_definition,
      sym_expression_definition,
  [6011] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_using,
    ACTIONS(11), 1,
      anon_sym_include,
    ACTIONS(13), 1,
      anon_sym_valueset,
    ACTIONS(17), 1,
      anon_sym_context,
    ACTIONS(19), 1,
      anon_sym_define,
    ACTIONS(649), 1,
      ts_builtin_sym_end,
    STATE(296), 1,
      sym_access_modifier,
    ACTIONS(15), 2,
      anon_sym_public,
      anon_sym_private,
    STATE(166), 2,
      sym_definition,
      aux_sym_cql_library_repeat1,
    STATE(201), 2,
      sym_statement,
      aux_sym_cql_library_repeat2,
    STATE(197), 3,
      sym_using_definition,
      sym_include_definition,
      sym_valueset_definition,
    STATE(255), 3,
      sym_context_definition,
      sym_function_definition,
      sym_expression_definition,
  [6058] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 17,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
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
  [6081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 17,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
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
  [6104] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_onor,
    ACTIONS(326), 1,
      sym_number,
    ACTIONS(651), 1,
      anon_sym_properly,
    ACTIONS(653), 1,
      anon_sym_same,
    ACTIONS(655), 1,
      anon_sym_within,
    STATE(39), 1,
      sym_temporal_relationship,
    STATE(210), 1,
      sym_quantity,
    STATE(242), 1,
      sym_quantity_offset,
    STATE(272), 1,
      sym_exclusive_relative_qualifier,
    ACTIONS(89), 2,
      anon_sym_lessthan,
      anon_sym_morethan,
    ACTIONS(99), 2,
      anon_sym_during,
      anon_sym_includedin,
    ACTIONS(310), 2,
      anon_sym_before,
      anon_sym_after,
  [6147] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 14,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_COLON,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_DOT,
      anon_sym_define,
      anon_sym_LPAREN,
      anon_sym_RBRACK,
      anon_sym_version,
  [6167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 14,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_COLON,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_DOT,
      anon_sym_define,
      anon_sym_LPAREN,
      anon_sym_RBRACK,
      anon_sym_version,
  [6187] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_using,
    ACTIONS(662), 1,
      anon_sym_include,
    ACTIONS(665), 1,
      anon_sym_valueset,
    STATE(296), 1,
      sym_access_modifier,
    ACTIONS(668), 2,
      anon_sym_public,
      anon_sym_private,
    STATE(166), 2,
      sym_definition,
      aux_sym_cql_library_repeat1,
    ACTIONS(657), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
    STATE(197), 3,
      sym_using_definition,
      sym_include_definition,
      sym_valueset_definition,
  [6221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 14,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_COLON,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_DOT,
      anon_sym_define,
      anon_sym_LPAREN,
      anon_sym_RBRACK,
      anon_sym_version,
  [6241] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      anon_sym_as,
    STATE(50), 1,
      sym_relative_qualifier,
    STATE(224), 1,
      sym_date_time_precision,
    ACTIONS(675), 2,
      anon_sym_orbefore,
      anon_sym_orafter,
    ACTIONS(673), 8,
      anon_sym_year,
      anon_sym_month,
      anon_sym_week,
      anon_sym_day,
      anon_sym_hour,
      anon_sym_minute,
      anon_sym_second,
      anon_sym_millisecond,
  [6268] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      anon_sym_as,
    STATE(54), 1,
      sym_relative_qualifier,
    STATE(246), 1,
      sym_date_time_precision,
    ACTIONS(675), 2,
      anon_sym_orbefore,
      anon_sym_orafter,
    ACTIONS(673), 8,
      anon_sym_year,
      anon_sym_month,
      anon_sym_week,
      anon_sym_day,
      anon_sym_hour,
      anon_sym_minute,
      anon_sym_second,
      anon_sym_millisecond,
  [6295] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      anon_sym_DOT,
    ACTIONS(679), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_COLON,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_version,
  [6315] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      anon_sym_DOT,
    ACTIONS(683), 11,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_COLON,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
      anon_sym_version,
  [6335] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      anon_sym_called,
    ACTIONS(689), 1,
      anon_sym_version,
    STATE(184), 1,
      sym_version_specifier,
    ACTIONS(685), 8,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [6358] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 1,
      anon_sym_version,
    ACTIONS(693), 1,
      anon_sym_called,
    STATE(178), 1,
      sym_version_specifier,
    ACTIONS(691), 8,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [6381] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 1,
      anon_sym_version,
    STATE(202), 1,
      sym_version_specifier,
    ACTIONS(695), 8,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [6401] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 1,
      anon_sym_version,
    STATE(192), 1,
      sym_version_specifier,
    ACTIONS(697), 8,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [6421] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 1,
      anon_sym_version,
    STATE(204), 1,
      sym_version_specifier,
    ACTIONS(699), 8,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [6441] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_SQUOTE,
    ACTIONS(701), 1,
      aux_sym_literal_token1,
    ACTIONS(703), 1,
      anon_sym_null,
    ACTIONS(705), 1,
      sym_number,
    STATE(130), 1,
      sym_quantity,
    STATE(142), 1,
      sym_term,
    STATE(145), 1,
      sym_string,
    STATE(149), 1,
      sym_literal,
    STATE(305), 1,
      sym_expression_term,
  [6472] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      anon_sym_called,
    ACTIONS(707), 8,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [6489] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym_number,
    ACTIONS(189), 1,
      anon_sym_SQUOTE,
    ACTIONS(701), 1,
      aux_sym_literal_token1,
    ACTIONS(703), 1,
      anon_sym_null,
    STATE(130), 1,
      sym_quantity,
    STATE(139), 1,
      sym_expression_term,
    STATE(142), 1,
      sym_term,
    STATE(145), 1,
      sym_string,
    STATE(149), 1,
      sym_literal,
  [6520] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_SQUOTE,
    ACTIONS(701), 1,
      aux_sym_literal_token1,
    ACTIONS(703), 1,
      anon_sym_null,
    ACTIONS(705), 1,
      sym_number,
    STATE(130), 1,
      sym_quantity,
    STATE(142), 1,
      sym_term,
    STATE(145), 1,
      sym_string,
    STATE(149), 1,
      sym_literal,
    STATE(307), 1,
      sym_expression_term,
  [6551] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_SQUOTE,
    ACTIONS(701), 1,
      aux_sym_literal_token1,
    ACTIONS(703), 1,
      anon_sym_null,
    ACTIONS(705), 1,
      sym_number,
    STATE(130), 1,
      sym_quantity,
    STATE(142), 1,
      sym_term,
    STATE(145), 1,
      sym_string,
    STATE(149), 1,
      sym_literal,
    STATE(283), 1,
      sym_expression_term,
  [6582] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_SQUOTE,
    ACTIONS(701), 1,
      aux_sym_literal_token1,
    ACTIONS(703), 1,
      anon_sym_null,
    ACTIONS(705), 1,
      sym_number,
    STATE(130), 1,
      sym_quantity,
    STATE(142), 1,
      sym_term,
    STATE(145), 1,
      sym_string,
    STATE(149), 1,
      sym_literal,
    STATE(279), 1,
      sym_expression_term,
  [6613] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(289), 1,
      sym_plural_date_time_precision,
    ACTIONS(187), 8,
      anon_sym_years,
      anon_sym_months,
      anon_sym_weeks,
      anon_sym_days,
      anon_sym_hours,
      anon_sym_minutes,
      anon_sym_seconds,
      anon_sym_milliseconds,
  [6630] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      anon_sym_called,
    ACTIONS(711), 8,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [6647] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym_number,
    ACTIONS(189), 1,
      anon_sym_SQUOTE,
    ACTIONS(701), 1,
      aux_sym_literal_token1,
    ACTIONS(703), 1,
      anon_sym_null,
    STATE(130), 1,
      sym_quantity,
    STATE(135), 1,
      sym_expression_term,
    STATE(142), 1,
      sym_term,
    STATE(145), 1,
      sym_string,
    STATE(149), 1,
      sym_literal,
  [6678] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym_number,
    ACTIONS(189), 1,
      anon_sym_SQUOTE,
    ACTIONS(701), 1,
      aux_sym_literal_token1,
    ACTIONS(703), 1,
      anon_sym_null,
    STATE(130), 1,
      sym_quantity,
    STATE(137), 1,
      sym_expression_term,
    STATE(142), 1,
      sym_term,
    STATE(145), 1,
      sym_string,
    STATE(149), 1,
      sym_literal,
  [6709] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym_number,
    ACTIONS(189), 1,
      anon_sym_SQUOTE,
    ACTIONS(701), 1,
      aux_sym_literal_token1,
    ACTIONS(703), 1,
      anon_sym_null,
    STATE(130), 1,
      sym_quantity,
    STATE(138), 1,
      sym_expression_term,
    STATE(142), 1,
      sym_term,
    STATE(145), 1,
      sym_string,
    STATE(149), 1,
      sym_literal,
  [6740] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym_number,
    ACTIONS(189), 1,
      anon_sym_SQUOTE,
    ACTIONS(701), 1,
      aux_sym_literal_token1,
    ACTIONS(703), 1,
      anon_sym_null,
    STATE(130), 1,
      sym_quantity,
    STATE(136), 1,
      sym_expression_term,
    STATE(142), 1,
      sym_term,
    STATE(145), 1,
      sym_string,
    STATE(149), 1,
      sym_literal,
  [6771] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 9,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_called,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [6786] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(287), 1,
      sym_plural_date_time_precision,
    ACTIONS(187), 8,
      anon_sym_years,
      anon_sym_months,
      anon_sym_weeks,
      anon_sym_days,
      anon_sym_hours,
      anon_sym_minutes,
      anon_sym_seconds,
      anon_sym_milliseconds,
  [6803] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_SQUOTE,
    ACTIONS(701), 1,
      aux_sym_literal_token1,
    ACTIONS(703), 1,
      anon_sym_null,
    ACTIONS(705), 1,
      sym_number,
    STATE(130), 1,
      sym_quantity,
    STATE(142), 1,
      sym_term,
    STATE(145), 1,
      sym_string,
    STATE(149), 1,
      sym_literal,
    STATE(306), 1,
      sym_expression_term,
  [6834] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 8,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [6848] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_context,
    ACTIONS(19), 1,
      anon_sym_define,
    ACTIONS(647), 1,
      ts_builtin_sym_end,
    STATE(205), 2,
      sym_statement,
      aux_sym_cql_library_repeat2,
    STATE(255), 3,
      sym_context_definition,
      sym_function_definition,
      sym_expression_definition,
  [6870] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 8,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [6884] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 8,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [6898] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      sym_default_identifier,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(725), 1,
      anon_sym_function,
    STATE(167), 1,
      sym_quoted_identifier,
    STATE(215), 1,
      sym_access_modifier,
    STATE(282), 1,
      sym_identifier,
    ACTIONS(723), 2,
      anon_sym_public,
      anon_sym_private,
  [6924] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 8,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [6938] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 8,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [6952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 8,
      anon_sym_as,
      anon_sym_orbefore,
      anon_sym_orafter,
      anon_sym_ormore,
      anon_sym_orless,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
  [6966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 8,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [6980] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_context,
    ACTIONS(19), 1,
      anon_sym_define,
    ACTIONS(733), 1,
      ts_builtin_sym_end,
    STATE(205), 2,
      sym_statement,
      aux_sym_cql_library_repeat2,
    STATE(255), 3,
      sym_context_definition,
      sym_function_definition,
      sym_expression_definition,
  [7002] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 8,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [7016] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_context,
    ACTIONS(19), 1,
      anon_sym_define,
    ACTIONS(649), 1,
      ts_builtin_sym_end,
    STATE(205), 2,
      sym_statement,
      aux_sym_cql_library_repeat2,
    STATE(255), 3,
      sym_context_definition,
      sym_function_definition,
      sym_expression_definition,
  [7038] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 8,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_include,
      anon_sym_valueset,
      anon_sym_public,
      anon_sym_private,
      anon_sym_context,
      anon_sym_define,
  [7052] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      ts_builtin_sym_end,
    ACTIONS(741), 1,
      anon_sym_context,
    ACTIONS(744), 1,
      anon_sym_define,
    STATE(205), 2,
      sym_statement,
      aux_sym_cql_library_repeat2,
    STATE(255), 3,
      sym_context_definition,
      sym_function_definition,
      sym_expression_definition,
  [7074] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(747), 1,
      sym_default_identifier,
    STATE(167), 1,
      sym_quoted_identifier,
    STATE(171), 1,
      sym_identifier,
    STATE(216), 1,
      aux_sym_named_type_specifier_repeat1,
    STATE(285), 1,
      sym_qualified_identifier,
  [7096] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(747), 1,
      sym_default_identifier,
    STATE(167), 1,
      sym_quoted_identifier,
    STATE(171), 1,
      sym_identifier,
    STATE(176), 1,
      sym_qualified_identifier,
    STATE(216), 1,
      aux_sym_named_type_specifier_repeat1,
  [7118] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(747), 1,
      sym_default_identifier,
    STATE(167), 1,
      sym_quoted_identifier,
    STATE(171), 1,
      sym_identifier,
    STATE(216), 1,
      aux_sym_named_type_specifier_repeat1,
    STATE(298), 1,
      sym_qualified_identifier,
  [7140] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(747), 1,
      sym_default_identifier,
    STATE(167), 1,
      sym_quoted_identifier,
    STATE(171), 1,
      sym_identifier,
    STATE(172), 1,
      sym_qualified_identifier,
    STATE(216), 1,
      aux_sym_named_type_specifier_repeat1,
  [7162] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(260), 1,
      sym_offset_relative_qualifier,
    ACTIONS(749), 2,
      anon_sym_ormore,
      anon_sym_orless,
    ACTIONS(751), 3,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
  [7178] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(747), 1,
      sym_default_identifier,
    STATE(167), 1,
      sym_quoted_identifier,
    STATE(171), 1,
      sym_identifier,
    STATE(173), 1,
      sym_qualified_identifier,
    STATE(216), 1,
      aux_sym_named_type_specifier_repeat1,
  [7200] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    ACTIONS(753), 1,
      sym_default_identifier,
    STATE(167), 1,
      sym_quoted_identifier,
    STATE(212), 1,
      aux_sym_named_type_specifier_repeat1,
    STATE(302), 1,
      sym_identifier,
  [7219] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 5,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_RBRACK,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [7230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 5,
      anon_sym_ormore,
      anon_sym_orless,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
  [7241] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      sym_default_identifier,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(756), 1,
      anon_sym_function,
    STATE(167), 1,
      sym_quoted_identifier,
    STATE(284), 1,
      sym_identifier,
  [7260] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(747), 1,
      sym_default_identifier,
    STATE(167), 1,
      sym_quoted_identifier,
    STATE(170), 1,
      sym_identifier,
    STATE(212), 1,
      aux_sym_named_type_specifier_repeat1,
  [7279] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      anon_sym_within,
    ACTIONS(758), 1,
      anon_sym_between,
    ACTIONS(760), 1,
      anon_sym_includes,
    ACTIONS(99), 2,
      anon_sym_during,
      anon_sym_includedin,
  [7296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 5,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_RBRACK,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [7307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 5,
      anon_sym_ormore,
      anon_sym_orless,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
  [7318] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 5,
      anon_sym_ormore,
      anon_sym_orless,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
  [7329] = 4,
    ACTIONS(762), 1,
      anon_sym_DQUOTE,
    ACTIONS(766), 1,
      sym_comment,
    STATE(247), 1,
      aux_sym_quoted_identifier_repeat1,
    ACTIONS(764), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [7343] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(747), 1,
      sym_default_identifier,
    STATE(167), 1,
      sym_quoted_identifier,
    STATE(194), 1,
      sym_identifier,
  [7359] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_onor,
    STATE(39), 1,
      sym_temporal_relationship,
    ACTIONS(310), 2,
      anon_sym_before,
      anon_sym_after,
  [7373] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_as,
    STATE(45), 1,
      sym_relative_qualifier,
    ACTIONS(675), 2,
      anon_sym_orbefore,
      anon_sym_orafter,
  [7387] = 4,
    ACTIONS(766), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_SQUOTE,
    STATE(232), 1,
      aux_sym_string_repeat1,
    ACTIONS(772), 2,
      sym_single_quote_string_fragment,
      sym_escape_sequence,
  [7401] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(747), 1,
      sym_default_identifier,
    STATE(167), 1,
      sym_quoted_identifier,
    STATE(235), 1,
      sym_identifier,
  [7417] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(747), 1,
      sym_default_identifier,
    STATE(167), 1,
      sym_quoted_identifier,
    STATE(250), 1,
      sym_identifier,
  [7433] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_DOT,
    ACTIONS(776), 3,
      anon_sym_RBRACK,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [7445] = 4,
    ACTIONS(766), 1,
      sym_comment,
    ACTIONS(778), 1,
      anon_sym_DQUOTE,
    STATE(247), 1,
      aux_sym_quoted_identifier_repeat1,
    ACTIONS(764), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [7459] = 4,
    ACTIONS(766), 1,
      sym_comment,
    ACTIONS(780), 1,
      anon_sym_DQUOTE,
    STATE(229), 1,
      aux_sym_quoted_identifier_repeat1,
    ACTIONS(782), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [7473] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_DOT,
    ACTIONS(784), 3,
      anon_sym_RBRACK,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [7485] = 4,
    ACTIONS(766), 1,
      sym_comment,
    ACTIONS(786), 1,
      anon_sym_SQUOTE,
    STATE(232), 1,
      aux_sym_string_repeat1,
    ACTIONS(788), 2,
      sym_single_quote_string_fragment,
      sym_escape_sequence,
  [7499] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_DQUOTE,
    ACTIONS(791), 1,
      sym_default_identifier,
    STATE(99), 1,
      sym_quoted_identifier,
    STATE(115), 1,
      sym_identifier,
  [7515] = 4,
    ACTIONS(766), 1,
      sym_comment,
    ACTIONS(793), 1,
      anon_sym_DQUOTE,
    STATE(243), 1,
      aux_sym_quoted_identifier_repeat1,
    ACTIONS(795), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [7529] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      anon_sym_DOT,
    ACTIONS(797), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
  [7541] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(747), 1,
      sym_default_identifier,
    STATE(167), 1,
      sym_quoted_identifier,
    STATE(310), 1,
      sym_identifier,
  [7557] = 4,
    ACTIONS(766), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_SQUOTE,
    STATE(232), 1,
      aux_sym_string_repeat1,
    ACTIONS(772), 2,
      sym_single_quote_string_fragment,
      sym_escape_sequence,
  [7571] = 4,
    ACTIONS(766), 1,
      sym_comment,
    ACTIONS(803), 1,
      anon_sym_SQUOTE,
    STATE(237), 1,
      aux_sym_string_repeat1,
    ACTIONS(805), 2,
      sym_single_quote_string_fragment,
      sym_escape_sequence,
  [7585] = 4,
    ACTIONS(766), 1,
      sym_comment,
    ACTIONS(807), 1,
      anon_sym_DQUOTE,
    STATE(221), 1,
      aux_sym_quoted_identifier_repeat1,
    ACTIONS(809), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [7599] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(747), 1,
      sym_default_identifier,
    STATE(167), 1,
      sym_quoted_identifier,
    STATE(198), 1,
      sym_identifier,
  [7615] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(747), 1,
      sym_default_identifier,
    STATE(167), 1,
      sym_quoted_identifier,
    STATE(195), 1,
      sym_identifier,
  [7631] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_onor,
    STATE(41), 1,
      sym_temporal_relationship,
    ACTIONS(310), 2,
      anon_sym_before,
      anon_sym_after,
  [7645] = 4,
    ACTIONS(766), 1,
      sym_comment,
    ACTIONS(811), 1,
      anon_sym_DQUOTE,
    STATE(247), 1,
      aux_sym_quoted_identifier_repeat1,
    ACTIONS(764), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [7659] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(747), 1,
      sym_default_identifier,
    STATE(167), 1,
      sym_quoted_identifier,
    STATE(200), 1,
      sym_identifier,
  [7675] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(747), 1,
      sym_default_identifier,
    STATE(167), 1,
      sym_quoted_identifier,
    STATE(294), 1,
      sym_identifier,
  [7691] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      anon_sym_as,
    STATE(50), 1,
      sym_relative_qualifier,
    ACTIONS(675), 2,
      anon_sym_orbefore,
      anon_sym_orafter,
  [7705] = 4,
    ACTIONS(766), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_DQUOTE,
    STATE(247), 1,
      aux_sym_quoted_identifier_repeat1,
    ACTIONS(815), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [7719] = 4,
    ACTIONS(766), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym_SQUOTE,
    STATE(225), 1,
      aux_sym_string_repeat1,
    ACTIONS(820), 2,
      sym_single_quote_string_fragment,
      sym_escape_sequence,
  [7733] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      anon_sym_DQUOTE,
    ACTIONS(822), 2,
      anon_sym_function,
      sym_default_identifier,
  [7744] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
  [7753] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
  [7762] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 3,
      anon_sym_DOT,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [7771] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 3,
      anon_sym_DOT,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [7780] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
  [7789] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
  [7798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 3,
      anon_sym_DOT,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [7807] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 3,
      ts_builtin_sym_end,
      anon_sym_context,
      anon_sym_define,
  [7816] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 1,
      anon_sym_within,
    ACTIONS(836), 2,
      anon_sym_during,
      anon_sym_includedin,
  [7827] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 3,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
  [7836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 3,
      anon_sym_onor,
      anon_sym_before,
      anon_sym_after,
  [7845] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_COLON,
    ACTIONS(846), 1,
      anon_sym_RBRACK,
  [7855] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_SQUOTE,
    STATE(174), 1,
      sym_string,
  [7865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 2,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [7873] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_SQUOTE,
    STATE(189), 1,
      sym_string,
  [7883] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(848), 1,
      anon_sym_COLON,
    ACTIONS(850), 1,
      anon_sym_RBRACK,
  [7893] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_SQUOTE,
    STATE(175), 1,
      sym_string,
  [7903] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      sym_number,
    STATE(291), 1,
      sym_quantity,
  [7913] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      sym_number,
    STATE(278), 1,
      sym_quantity,
  [7923] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 2,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [7931] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 2,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [7939] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      sym_number,
    STATE(301), 1,
      sym_quantity,
  [7949] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      sym_number,
    STATE(260), 1,
      sym_quantity,
  [7959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 2,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [7967] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 2,
      sym_default_identifier,
      anon_sym_DQUOTE,
  [7975] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 2,
      anon_sym_before,
      anon_sym_after,
  [7983] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 1,
      anon_sym_COLON,
    ACTIONS(858), 1,
      anon_sym_RBRACK,
  [7993] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_RPAREN,
  [8000] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_of,
  [8007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_and,
  [8014] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      anon_sym_in,
  [8021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      anon_sym_of,
  [8028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      anon_sym_COLON,
  [8035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 1,
      anon_sym_and,
  [8042] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 1,
      anon_sym_COLON,
  [8049] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      anon_sym_COLON,
  [8056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      anon_sym_in,
  [8063] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(878), 1,
      anon_sym_between,
  [8070] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_DOT,
  [8077] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(880), 1,
      anon_sym_between,
  [8084] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      anon_sym_between,
  [8091] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      anon_sym_of,
  [8098] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      anon_sym_RPAREN,
  [8105] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(888), 1,
      anon_sym_COLON,
  [8112] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      anon_sym_LPAREN,
  [8119] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(892), 1,
      anon_sym_RBRACK,
  [8126] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_valueset,
  [8133] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      anon_sym_COLON,
  [8140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      anon_sym_COLON,
  [8147] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      anon_sym_RBRACK,
  [8154] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      anon_sym_RBRACK,
  [8161] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      anon_sym_of,
  [8168] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      anon_sym_DOT,
  [8175] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      anon_sym_RBRACK,
  [8182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      ts_builtin_sym_end,
  [8189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 1,
      anon_sym_and,
  [8196] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(910), 1,
      anon_sym_and,
  [8203] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(912), 1,
      anon_sym_and,
  [8210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      anon_sym_valueset,
  [8217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 1,
      sym_number,
  [8224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 1,
      anon_sym_LPAREN,
  [8231] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_DOT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(63)] = 0,
  [SMALL_STATE(64)] = 91,
  [SMALL_STATE(65)] = 182,
  [SMALL_STATE(66)] = 267,
  [SMALL_STATE(67)] = 352,
  [SMALL_STATE(68)] = 431,
  [SMALL_STATE(69)] = 516,
  [SMALL_STATE(70)] = 593,
  [SMALL_STATE(71)] = 672,
  [SMALL_STATE(72)] = 751,
  [SMALL_STATE(73)] = 830,
  [SMALL_STATE(74)] = 894,
  [SMALL_STATE(75)] = 956,
  [SMALL_STATE(76)] = 1018,
  [SMALL_STATE(77)] = 1092,
  [SMALL_STATE(78)] = 1196,
  [SMALL_STATE(79)] = 1258,
  [SMALL_STATE(80)] = 1320,
  [SMALL_STATE(81)] = 1382,
  [SMALL_STATE(82)] = 1486,
  [SMALL_STATE(83)] = 1548,
  [SMALL_STATE(84)] = 1652,
  [SMALL_STATE(85)] = 1756,
  [SMALL_STATE(86)] = 1818,
  [SMALL_STATE(87)] = 1880,
  [SMALL_STATE(88)] = 1942,
  [SMALL_STATE(89)] = 2046,
  [SMALL_STATE(90)] = 2150,
  [SMALL_STATE(91)] = 2254,
  [SMALL_STATE(92)] = 2305,
  [SMALL_STATE(93)] = 2358,
  [SMALL_STATE(94)] = 2413,
  [SMALL_STATE(95)] = 2468,
  [SMALL_STATE(96)] = 2523,
  [SMALL_STATE(97)] = 2578,
  [SMALL_STATE(98)] = 2633,
  [SMALL_STATE(99)] = 2684,
  [SMALL_STATE(100)] = 2735,
  [SMALL_STATE(101)] = 2785,
  [SMALL_STATE(102)] = 2845,
  [SMALL_STATE(103)] = 2905,
  [SMALL_STATE(104)] = 3007,
  [SMALL_STATE(105)] = 3067,
  [SMALL_STATE(106)] = 3169,
  [SMALL_STATE(107)] = 3229,
  [SMALL_STATE(108)] = 3301,
  [SMALL_STATE(109)] = 3403,
  [SMALL_STATE(110)] = 3463,
  [SMALL_STATE(111)] = 3565,
  [SMALL_STATE(112)] = 3625,
  [SMALL_STATE(113)] = 3685,
  [SMALL_STATE(114)] = 3735,
  [SMALL_STATE(115)] = 3785,
  [SMALL_STATE(116)] = 3835,
  [SMALL_STATE(117)] = 3885,
  [SMALL_STATE(118)] = 3935,
  [SMALL_STATE(119)] = 3995,
  [SMALL_STATE(120)] = 4045,
  [SMALL_STATE(121)] = 4098,
  [SMALL_STATE(122)] = 4147,
  [SMALL_STATE(123)] = 4196,
  [SMALL_STATE(124)] = 4245,
  [SMALL_STATE(125)] = 4294,
  [SMALL_STATE(126)] = 4343,
  [SMALL_STATE(127)] = 4442,
  [SMALL_STATE(128)] = 4495,
  [SMALL_STATE(129)] = 4544,
  [SMALL_STATE(130)] = 4592,
  [SMALL_STATE(131)] = 4640,
  [SMALL_STATE(132)] = 4688,
  [SMALL_STATE(133)] = 4736,
  [SMALL_STATE(134)] = 4784,
  [SMALL_STATE(135)] = 4832,
  [SMALL_STATE(136)] = 4880,
  [SMALL_STATE(137)] = 4928,
  [SMALL_STATE(138)] = 4976,
  [SMALL_STATE(139)] = 5024,
  [SMALL_STATE(140)] = 5072,
  [SMALL_STATE(141)] = 5120,
  [SMALL_STATE(142)] = 5168,
  [SMALL_STATE(143)] = 5216,
  [SMALL_STATE(144)] = 5264,
  [SMALL_STATE(145)] = 5312,
  [SMALL_STATE(146)] = 5360,
  [SMALL_STATE(147)] = 5408,
  [SMALL_STATE(148)] = 5456,
  [SMALL_STATE(149)] = 5504,
  [SMALL_STATE(150)] = 5552,
  [SMALL_STATE(151)] = 5600,
  [SMALL_STATE(152)] = 5647,
  [SMALL_STATE(153)] = 5698,
  [SMALL_STATE(154)] = 5749,
  [SMALL_STATE(155)] = 5796,
  [SMALL_STATE(156)] = 5838,
  [SMALL_STATE(157)] = 5879,
  [SMALL_STATE(158)] = 5917,
  [SMALL_STATE(159)] = 5964,
  [SMALL_STATE(160)] = 6011,
  [SMALL_STATE(161)] = 6058,
  [SMALL_STATE(162)] = 6081,
  [SMALL_STATE(163)] = 6104,
  [SMALL_STATE(164)] = 6147,
  [SMALL_STATE(165)] = 6167,
  [SMALL_STATE(166)] = 6187,
  [SMALL_STATE(167)] = 6221,
  [SMALL_STATE(168)] = 6241,
  [SMALL_STATE(169)] = 6268,
  [SMALL_STATE(170)] = 6295,
  [SMALL_STATE(171)] = 6315,
  [SMALL_STATE(172)] = 6335,
  [SMALL_STATE(173)] = 6358,
  [SMALL_STATE(174)] = 6381,
  [SMALL_STATE(175)] = 6401,
  [SMALL_STATE(176)] = 6421,
  [SMALL_STATE(177)] = 6441,
  [SMALL_STATE(178)] = 6472,
  [SMALL_STATE(179)] = 6489,
  [SMALL_STATE(180)] = 6520,
  [SMALL_STATE(181)] = 6551,
  [SMALL_STATE(182)] = 6582,
  [SMALL_STATE(183)] = 6613,
  [SMALL_STATE(184)] = 6630,
  [SMALL_STATE(185)] = 6647,
  [SMALL_STATE(186)] = 6678,
  [SMALL_STATE(187)] = 6709,
  [SMALL_STATE(188)] = 6740,
  [SMALL_STATE(189)] = 6771,
  [SMALL_STATE(190)] = 6786,
  [SMALL_STATE(191)] = 6803,
  [SMALL_STATE(192)] = 6834,
  [SMALL_STATE(193)] = 6848,
  [SMALL_STATE(194)] = 6870,
  [SMALL_STATE(195)] = 6884,
  [SMALL_STATE(196)] = 6898,
  [SMALL_STATE(197)] = 6924,
  [SMALL_STATE(198)] = 6938,
  [SMALL_STATE(199)] = 6952,
  [SMALL_STATE(200)] = 6966,
  [SMALL_STATE(201)] = 6980,
  [SMALL_STATE(202)] = 7002,
  [SMALL_STATE(203)] = 7016,
  [SMALL_STATE(204)] = 7038,
  [SMALL_STATE(205)] = 7052,
  [SMALL_STATE(206)] = 7074,
  [SMALL_STATE(207)] = 7096,
  [SMALL_STATE(208)] = 7118,
  [SMALL_STATE(209)] = 7140,
  [SMALL_STATE(210)] = 7162,
  [SMALL_STATE(211)] = 7178,
  [SMALL_STATE(212)] = 7200,
  [SMALL_STATE(213)] = 7219,
  [SMALL_STATE(214)] = 7230,
  [SMALL_STATE(215)] = 7241,
  [SMALL_STATE(216)] = 7260,
  [SMALL_STATE(217)] = 7279,
  [SMALL_STATE(218)] = 7296,
  [SMALL_STATE(219)] = 7307,
  [SMALL_STATE(220)] = 7318,
  [SMALL_STATE(221)] = 7329,
  [SMALL_STATE(222)] = 7343,
  [SMALL_STATE(223)] = 7359,
  [SMALL_STATE(224)] = 7373,
  [SMALL_STATE(225)] = 7387,
  [SMALL_STATE(226)] = 7401,
  [SMALL_STATE(227)] = 7417,
  [SMALL_STATE(228)] = 7433,
  [SMALL_STATE(229)] = 7445,
  [SMALL_STATE(230)] = 7459,
  [SMALL_STATE(231)] = 7473,
  [SMALL_STATE(232)] = 7485,
  [SMALL_STATE(233)] = 7499,
  [SMALL_STATE(234)] = 7515,
  [SMALL_STATE(235)] = 7529,
  [SMALL_STATE(236)] = 7541,
  [SMALL_STATE(237)] = 7557,
  [SMALL_STATE(238)] = 7571,
  [SMALL_STATE(239)] = 7585,
  [SMALL_STATE(240)] = 7599,
  [SMALL_STATE(241)] = 7615,
  [SMALL_STATE(242)] = 7631,
  [SMALL_STATE(243)] = 7645,
  [SMALL_STATE(244)] = 7659,
  [SMALL_STATE(245)] = 7675,
  [SMALL_STATE(246)] = 7691,
  [SMALL_STATE(247)] = 7705,
  [SMALL_STATE(248)] = 7719,
  [SMALL_STATE(249)] = 7733,
  [SMALL_STATE(250)] = 7744,
  [SMALL_STATE(251)] = 7753,
  [SMALL_STATE(252)] = 7762,
  [SMALL_STATE(253)] = 7771,
  [SMALL_STATE(254)] = 7780,
  [SMALL_STATE(255)] = 7789,
  [SMALL_STATE(256)] = 7798,
  [SMALL_STATE(257)] = 7807,
  [SMALL_STATE(258)] = 7816,
  [SMALL_STATE(259)] = 7827,
  [SMALL_STATE(260)] = 7836,
  [SMALL_STATE(261)] = 7845,
  [SMALL_STATE(262)] = 7855,
  [SMALL_STATE(263)] = 7865,
  [SMALL_STATE(264)] = 7873,
  [SMALL_STATE(265)] = 7883,
  [SMALL_STATE(266)] = 7893,
  [SMALL_STATE(267)] = 7903,
  [SMALL_STATE(268)] = 7913,
  [SMALL_STATE(269)] = 7923,
  [SMALL_STATE(270)] = 7931,
  [SMALL_STATE(271)] = 7939,
  [SMALL_STATE(272)] = 7949,
  [SMALL_STATE(273)] = 7959,
  [SMALL_STATE(274)] = 7967,
  [SMALL_STATE(275)] = 7975,
  [SMALL_STATE(276)] = 7983,
  [SMALL_STATE(277)] = 7993,
  [SMALL_STATE(278)] = 8000,
  [SMALL_STATE(279)] = 8007,
  [SMALL_STATE(280)] = 8014,
  [SMALL_STATE(281)] = 8021,
  [SMALL_STATE(282)] = 8028,
  [SMALL_STATE(283)] = 8035,
  [SMALL_STATE(284)] = 8042,
  [SMALL_STATE(285)] = 8049,
  [SMALL_STATE(286)] = 8056,
  [SMALL_STATE(287)] = 8063,
  [SMALL_STATE(288)] = 8070,
  [SMALL_STATE(289)] = 8077,
  [SMALL_STATE(290)] = 8084,
  [SMALL_STATE(291)] = 8091,
  [SMALL_STATE(292)] = 8098,
  [SMALL_STATE(293)] = 8105,
  [SMALL_STATE(294)] = 8112,
  [SMALL_STATE(295)] = 8119,
  [SMALL_STATE(296)] = 8126,
  [SMALL_STATE(297)] = 8133,
  [SMALL_STATE(298)] = 8140,
  [SMALL_STATE(299)] = 8147,
  [SMALL_STATE(300)] = 8154,
  [SMALL_STATE(301)] = 8161,
  [SMALL_STATE(302)] = 8168,
  [SMALL_STATE(303)] = 8175,
  [SMALL_STATE(304)] = 8182,
  [SMALL_STATE(305)] = 8189,
  [SMALL_STATE(306)] = 8196,
  [SMALL_STATE(307)] = 8203,
  [SMALL_STATE(308)] = 8210,
  [SMALL_STATE(309)] = 8217,
  [SMALL_STATE(310)] = 8224,
  [SMALL_STATE(311)] = 8231,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cql_library, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_identifier, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_keyword_identifier, 1), SHIFT(252),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_keyword_identifier, 1), SHIFT(239),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interval_operator_phrase, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interval_operator_phrase, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_interval_operator_phrase, 1), SHIFT(155),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interval_operator_phrase, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interval_operator_phrase, 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interval_operator_phrase, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interval_operator_phrase, 3),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_interval_operator_phrase, 2), SHIFT(51),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_interval_operator_phrase, 1), SHIFT(53),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_interval_operator_phrase, 3), SHIFT(46),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_temporal_relationship, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_temporal_relationship, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_temporal_relationship, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_temporal_relationship, 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative_qualifier, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative_qualifier, 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interval_operator_phrase, 4),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interval_operator_phrase, 4),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_interval_operator_phrase, 4), SHIFT(48),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date_time_precision_specifier, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date_time_precision_specifier, 2),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interval_operator_phrase, 5),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interval_operator_phrase, 5),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interval_operator_phrase, 6),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interval_operator_phrase, 6),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_interval_operator_phrase, 5), SHIFT(49),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_quantity, 1), REDUCE(sym_literal, 1, .production_id = 7),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_quantity, 1), REDUCE(sym_literal, 1, .production_id = 7),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_named_type_specifier_repeat1, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_type_specifier_repeat1, 2),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_named_type_specifier_repeat1, 2), SHIFT_REPEAT(167),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_type_specifier_repeat1, 2), SHIFT_REPEAT(234),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_identifier_expression_repeat1, 2), SHIFT_REPEAT(213),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_identifier_expression_repeat1, 2), SHIFT_REPEAT(213),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_identifier_expression_repeat1, 2), SHIFT_REPEAT(167),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_identifier_expression_repeat1, 2), SHIFT_REPEAT(234),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_named_type_specifier_repeat1, 2, .production_id = 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_type_specifier_repeat1, 2, .production_id = 1),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_qualified_identifier_expression_repeat1, 2, .production_id = 12),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qualified_identifier_expression_repeat1, 2, .production_id = 12),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inequality_expression, 3),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inequality_expression, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_membership_expression, 2),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(55),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(59),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(217),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(182),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(309),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(275),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(42),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(34),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(163),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(169),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(40),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(36),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(35),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(271),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 2), SHIFT(155),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_existence_expression, 2),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_existence_expression, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_expression, 2),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_expression, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_expression, 3),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and_expression, 3),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_definition, 4),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equality_expression, 3),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equality_expression, 3),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_definition, 5),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_membership_expression, 3),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(55),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(59),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(217),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(182),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(309),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(275),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(42),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(34),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(163),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(169),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(40),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(36),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(35),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(271),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_membership_expression, 3), SHIFT(155),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_expression, 3),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_or_expression, 3),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implies_expression, 3),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implies_expression, 3),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_fix_set_expression, 3),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_fix_set_expression, 3),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timing_expression, 3),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(55),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(59),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(217),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(182),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(309),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(275),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(42),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(34),
  [419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(163),
  [422] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(169),
  [425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(40),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(36),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(35),
  [434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(271),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_timing_expression, 3), SHIFT(155),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8, .production_id = 15),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, .production_id = 14),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_identifier, 3),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_identifier, 3),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_referential_identifier, 1),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_referential_identifier, 1),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_source_clause_repeat1, 2),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_source_clause_repeat1, 2),
  [458] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_source_clause_repeat1, 2), SHIFT_REPEAT(58),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_source_clause, 2),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_source_clause, 2),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_source_clause, 3),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_source_clause, 3),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_source_clause, 1),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_source_clause, 1),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_identifier, 2),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_identifier, 2),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_type_specifier, 1),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_type_specifier, 1),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_type_specifier, 2),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_type_specifier, 2),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_referential_or_type_name_identifier, 1),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_referential_or_type_name_identifier, 1),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aliased_query_source, 2, .production_id = 11),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aliased_query_source, 2, .production_id = 11),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name_identifier, 1),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name_identifier, 1),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 1),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retrieve, 5),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retrieve, 5),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plural_date_time_precision, 1),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plural_date_time_precision, 1),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 1),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 2),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 2),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date_time_precision, 1),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date_time_precision, 1),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_source, 1),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_source, 1),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retrieve, 3),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retrieve, 3),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 2),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 2),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, .production_id = 8),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, .production_id = 8),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_identifier, 1),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_difference_between_expression, 7),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_difference_between_expression, 7),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration_between_expression, 7),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_duration_between_expression, 7),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_between_expression, 6),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_between_expression, 6),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration_between_expression, 5),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_duration_between_expression, 5),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_between_expression, 5),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_between_expression, 5),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_expression, 4),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_expression, 4),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_expression, 4),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cast_expression, 4),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_term, 1),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_term, 1),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, .production_id = 6),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, .production_id = 6),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, .production_id = 9),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, .production_id = 9),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_expression, 3),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_expression, 3),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expression, 3),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_expression, 3),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_specifier, 1),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_specifier, 1),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 1),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cql_library, 1),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cql_library, 2),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat1, 2),
  [659] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat1, 2), SHIFT_REPEAT(209),
  [662] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat1, 2), SHIFT_REPEAT(211),
  [665] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat1, 2), SHIFT_REPEAT(206),
  [668] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat1, 2), SHIFT_REPEAT(308),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 2),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 1),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_definition, 2),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_definition, 2),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset_definition, 4, .production_id = 4),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset_definition, 5, .production_id = 13),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_library_definition, 2),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_definition, 3),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_definition, 3),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_specifier, 2, .production_id = 2),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset_definition, 6, .production_id = 13),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_definition, 5, .production_id = 10),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_definition, 4, .production_id = 3),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 1),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_definition, 5, .production_id = 10),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_definition, 4, .production_id = 3),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cql_library, 3),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset_definition, 5, .production_id = 4),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_library_definition, 3),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat2, 2),
  [741] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat2, 2), SHIFT_REPEAT(226),
  [744] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cql_library_repeat2, 2), SHIFT_REPEAT(196),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity_offset, 1),
  [753] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_type_specifier_repeat1, 2), SHIFT_REPEAT(167),
  [756] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier_expression, 1),
  [778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier_expression, 2),
  [786] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [788] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(232),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_definition, 2),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [813] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_identifier_repeat1, 2),
  [815] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_identifier_repeat1, 2), SHIFT_REPEAT(247),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [822] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access_modifier, 1),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_modifier, 1),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_definition, 4, .production_id = 5),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset_relative_qualifier, 1),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity_offset, 2),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_source, 3),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_terminology, 1),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [906] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exclusive_relative_qualifier, 1),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
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
