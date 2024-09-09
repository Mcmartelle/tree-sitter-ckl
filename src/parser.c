#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 14
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 11
#define ALIAS_COUNT 0
#define TOKEN_COUNT 5
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_line_token1 = 1,
  sym__text = 2,
  sym_comment = 3,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 4,
  sym_checklist = 5,
  sym_line = 6,
  sym_content = 7,
  sym_clipboard = 8,
  aux_sym_checklist_repeat1 = 9,
  aux_sym_content_repeat1 = 10,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_line_token1] = "line_token1",
  [sym__text] = "_text",
  [sym_comment] = "comment",
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = "```",
  [sym_checklist] = "checklist",
  [sym_line] = "line",
  [sym_content] = "content",
  [sym_clipboard] = "clipboard",
  [aux_sym_checklist_repeat1] = "checklist_repeat1",
  [aux_sym_content_repeat1] = "content_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_line_token1] = aux_sym_line_token1,
  [sym__text] = sym__text,
  [sym_comment] = sym_comment,
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [sym_checklist] = sym_checklist,
  [sym_line] = sym_line,
  [sym_content] = sym_content,
  [sym_clipboard] = sym_clipboard,
  [aux_sym_checklist_repeat1] = aux_sym_checklist_repeat1,
  [aux_sym_content_repeat1] = aux_sym_content_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_line_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__text] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_checklist] = {
    .visible = true,
    .named = true,
  },
  [sym_line] = {
    .visible = true,
    .named = true,
  },
  [sym_content] = {
    .visible = true,
    .named = true,
  },
  [sym_clipboard] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_checklist_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_content_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
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
  [9] = 5,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(2);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '`') ADVANCE(6);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 1:
      if (lookahead == '`') ADVANCE(8);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(aux_sym_line_token1);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym__text);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '/') ADVANCE(7);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '`') ADVANCE(1);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_line_token1] = ACTIONS(1),
    [sym__text] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_checklist] = STATE(11),
    [sym_line] = STATE(2),
    [sym_content] = STATE(12),
    [sym_clipboard] = STATE(5),
    [aux_sym_checklist_repeat1] = STATE(2),
    [aux_sym_content_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_line_token1] = ACTIONS(7),
    [sym__text] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(11),
  },
  [2] = {
    [sym_line] = STATE(3),
    [sym_content] = STATE(12),
    [sym_clipboard] = STATE(5),
    [aux_sym_checklist_repeat1] = STATE(3),
    [aux_sym_content_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(13),
    [aux_sym_line_token1] = ACTIONS(7),
    [sym__text] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(11),
  },
  [3] = {
    [sym_line] = STATE(3),
    [sym_content] = STATE(12),
    [sym_clipboard] = STATE(5),
    [aux_sym_checklist_repeat1] = STATE(3),
    [aux_sym_content_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(15),
    [aux_sym_line_token1] = ACTIONS(17),
    [sym__text] = ACTIONS(20),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(23),
  },
  [4] = {
    [sym_content] = STATE(13),
    [sym_clipboard] = STATE(9),
    [aux_sym_content_repeat1] = STATE(9),
    [sym__text] = ACTIONS(26),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(11),
  },
  [5] = {
    [sym_clipboard] = STATE(6),
    [aux_sym_content_repeat1] = STATE(6),
    [aux_sym_line_token1] = ACTIONS(28),
    [sym__text] = ACTIONS(30),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(11),
  },
  [6] = {
    [sym_clipboard] = STATE(6),
    [aux_sym_content_repeat1] = STATE(6),
    [aux_sym_line_token1] = ACTIONS(32),
    [sym__text] = ACTIONS(34),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(37),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      sym__text,
    ACTIONS(40), 3,
      ts_builtin_sym_end,
      aux_sym_line_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [12] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 1,
      sym__text,
    ACTIONS(44), 3,
      ts_builtin_sym_end,
      aux_sym_line_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [24] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(28), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(30), 1,
      sym__text,
    STATE(6), 2,
      sym_clipboard,
      aux_sym_content_repeat1,
  [38] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      sym__text,
    ACTIONS(48), 2,
      aux_sym_line_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [49] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
  [56] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      aux_sym_line_token1,
  [63] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 12,
  [SMALL_STATE(9)] = 24,
  [SMALL_STATE(10)] = 38,
  [SMALL_STATE(11)] = 49,
  [SMALL_STATE(12)] = 56,
  [SMALL_STATE(13)] = 63,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_checklist, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_checklist, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_checklist_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_checklist_repeat1, 2), SHIFT_REPEAT(7),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_checklist_repeat1, 2), SHIFT_REPEAT(5),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_checklist_repeat1, 2), SHIFT_REPEAT(4),
  [26] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(6),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(4),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clipboard, 3),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clipboard, 3),
  [52] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_ckl(void) {
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
