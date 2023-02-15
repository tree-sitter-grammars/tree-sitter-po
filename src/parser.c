#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 61
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_msgid = 1,
  anon_sym_msgid_LBRACK = 2,
  anon_sym_RBRACK = 3,
  anon_sym_msgstr_LBRACK = 4,
  anon_sym_msgstr = 5,
  anon_sym_msgctxt = 6,
  anon_sym_msgid_plural = 7,
  anon_sym_msgid_plural_LBRACK = 8,
  anon_sym_msgstr_plural = 9,
  anon_sym_msgstr_plural_LBRACK = 10,
  anon_sym_POUND_DOT = 11,
  anon_sym_POUND_PIPE = 12,
  anon_sym_POUND_COLON = 13,
  anon_sym_POUND_COMMA = 14,
  anon_sym_POUND_TILDEmsgid = 15,
  anon_sym_POUND_SLASH_TILDEmsgstr = 16,
  anon_sym_POUND = 17,
  sym_number = 18,
  sym_string = 19,
  sym_text = 20,
  sym_source_file = 21,
  sym_message = 22,
  sym_msgid = 23,
  sym_msgstr = 24,
  sym_msgctxt = 25,
  sym_msgid_plural = 26,
  sym_msgstr_plural = 27,
  sym_comment = 28,
  sym_comment_translator = 29,
  sym_comment_extracted = 30,
  sym_comment_reference = 31,
  sym_comment_flag = 32,
  sym_msg_previous_id = 33,
  sym_msg_previous_str = 34,
  sym_comment_text = 35,
  aux_sym_source_file_repeat1 = 36,
  aux_sym_msgid_repeat1 = 37,
  aux_sym_msgstr_repeat1 = 38,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_msgid] = "msgid ",
  [anon_sym_msgid_LBRACK] = "msgid[",
  [anon_sym_RBRACK] = "] ",
  [anon_sym_msgstr_LBRACK] = "msgstr[",
  [anon_sym_msgstr] = "msgstr ",
  [anon_sym_msgctxt] = "msgctxt",
  [anon_sym_msgid_plural] = "msgid_plural ",
  [anon_sym_msgid_plural_LBRACK] = "msgid_plural[",
  [anon_sym_msgstr_plural] = "msgstr_plural ",
  [anon_sym_msgstr_plural_LBRACK] = "msgstr_plural[",
  [anon_sym_POUND_DOT] = "#.",
  [anon_sym_POUND_PIPE] = "#|",
  [anon_sym_POUND_COLON] = "#:",
  [anon_sym_POUND_COMMA] = "#,",
  [anon_sym_POUND_TILDEmsgid] = "#~ msgid ",
  [anon_sym_POUND_SLASH_TILDEmsgstr] = "#/~ msgstr ",
  [anon_sym_POUND] = "#",
  [sym_number] = "number",
  [sym_string] = "string",
  [sym_text] = "text",
  [sym_source_file] = "source_file",
  [sym_message] = "message",
  [sym_msgid] = "msgid",
  [sym_msgstr] = "msgstr",
  [sym_msgctxt] = "msgctxt",
  [sym_msgid_plural] = "msgid_plural",
  [sym_msgstr_plural] = "msgstr_plural",
  [sym_comment] = "comment",
  [sym_comment_translator] = "comment_translator",
  [sym_comment_extracted] = "comment_extracted",
  [sym_comment_reference] = "comment_reference",
  [sym_comment_flag] = "comment_flag",
  [sym_msg_previous_id] = "msg_previous_id",
  [sym_msg_previous_str] = "msg_previous_str",
  [sym_comment_text] = "comment_text",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_msgid_repeat1] = "msgid_repeat1",
  [aux_sym_msgstr_repeat1] = "msgstr_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_msgid] = anon_sym_msgid,
  [anon_sym_msgid_LBRACK] = anon_sym_msgid_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_msgstr_LBRACK] = anon_sym_msgstr_LBRACK,
  [anon_sym_msgstr] = anon_sym_msgstr,
  [anon_sym_msgctxt] = anon_sym_msgctxt,
  [anon_sym_msgid_plural] = anon_sym_msgid_plural,
  [anon_sym_msgid_plural_LBRACK] = anon_sym_msgid_plural_LBRACK,
  [anon_sym_msgstr_plural] = anon_sym_msgstr_plural,
  [anon_sym_msgstr_plural_LBRACK] = anon_sym_msgstr_plural_LBRACK,
  [anon_sym_POUND_DOT] = anon_sym_POUND_DOT,
  [anon_sym_POUND_PIPE] = anon_sym_POUND_PIPE,
  [anon_sym_POUND_COLON] = anon_sym_POUND_COLON,
  [anon_sym_POUND_COMMA] = anon_sym_POUND_COMMA,
  [anon_sym_POUND_TILDEmsgid] = anon_sym_POUND_TILDEmsgid,
  [anon_sym_POUND_SLASH_TILDEmsgstr] = anon_sym_POUND_SLASH_TILDEmsgstr,
  [anon_sym_POUND] = anon_sym_POUND,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [sym_text] = sym_text,
  [sym_source_file] = sym_source_file,
  [sym_message] = sym_message,
  [sym_msgid] = sym_msgid,
  [sym_msgstr] = sym_msgstr,
  [sym_msgctxt] = sym_msgctxt,
  [sym_msgid_plural] = sym_msgid_plural,
  [sym_msgstr_plural] = sym_msgstr_plural,
  [sym_comment] = sym_comment,
  [sym_comment_translator] = sym_comment_translator,
  [sym_comment_extracted] = sym_comment_extracted,
  [sym_comment_reference] = sym_comment_reference,
  [sym_comment_flag] = sym_comment_flag,
  [sym_msg_previous_id] = sym_msg_previous_id,
  [sym_msg_previous_str] = sym_msg_previous_str,
  [sym_comment_text] = sym_comment_text,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_msgid_repeat1] = aux_sym_msgid_repeat1,
  [aux_sym_msgstr_repeat1] = aux_sym_msgstr_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_msgid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_msgid_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_msgstr_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_msgstr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_msgctxt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_msgid_plural] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_msgid_plural_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_msgstr_plural] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_msgstr_plural_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_TILDEmsgid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_SLASH_TILDEmsgstr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_message] = {
    .visible = true,
    .named = true,
  },
  [sym_msgid] = {
    .visible = true,
    .named = true,
  },
  [sym_msgstr] = {
    .visible = true,
    .named = true,
  },
  [sym_msgctxt] = {
    .visible = true,
    .named = true,
  },
  [sym_msgid_plural] = {
    .visible = true,
    .named = true,
  },
  [sym_msgstr_plural] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_translator] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_extracted] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_flag] = {
    .visible = true,
    .named = true,
  },
  [sym_msg_previous_id] = {
    .visible = true,
    .named = true,
  },
  [sym_msg_previous_str] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_text] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_msgid_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_msgstr_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(45);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(71);
      if (lookahead == ']') ADVANCE(1);
      if (lookahead == 'm') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(50);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(46);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '_') ADVANCE(27);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(52);
      if (lookahead == '[') ADVANCE(51);
      if (lookahead == '_') ADVANCE(28);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(67);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(69);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(55);
      if (lookahead == '[') ADVANCE(56);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(57);
      if (lookahead == '[') ADVANCE(58);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(26);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(75);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == ',') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(37);
      if (lookahead == 'i') ADVANCE(15);
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(3);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(5);
      END_STATE();
    case 17:
      if (lookahead == 'g') ADVANCE(14);
      END_STATE();
    case 18:
      if (lookahead == 'g') ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == 'g') ADVANCE(36);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(7);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 25:
      if (lookahead == 'm') ADVANCE(34);
      END_STATE();
    case 26:
      if (lookahead == 'm') ADVANCE(35);
      END_STATE();
    case 27:
      if (lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 28:
      if (lookahead == 'p') ADVANCE(24);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(4);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(6);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 36:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 41:
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 42:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 43:
      if (lookahead == 'x') ADVANCE(39);
      END_STATE();
    case 44:
      if (lookahead == '~') ADVANCE(9);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_msgid);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_msgid);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_msgid_LBRACK);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_msgid_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_msgstr_LBRACK);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_msgstr);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_msgctxt);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_msgctxt);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_msgid_plural);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_msgid_plural_LBRACK);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_msgstr_plural);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_msgstr_plural_LBRACK);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_POUND_DOT);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_POUND_DOT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_POUND_PIPE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_POUND_PIPE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_POUND_COLON);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_POUND_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_POUND_COMMA);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_POUND_COMMA);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_POUND_TILDEmsgid);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_POUND_TILDEmsgid);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_POUND_SLASH_TILDEmsgstr);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_POUND_SLASH_TILDEmsgstr);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == ',') ADVANCE(65);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == '/') ADVANCE(44);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == '|') ADVANCE(61);
      if (lookahead == '~') ADVANCE(2);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == ',') ADVANCE(66);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(100);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == '|') ADVANCE(62);
      if (lookahead == '~') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(11);
      if (lookahead == '.') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ' ') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ' ') ADVANCE(47);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ' ') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ' ') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == 'm') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(96);
      if (lookahead == 'i') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'd') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'd') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'x') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '~') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_text);
      if (eof) ADVANCE(45);
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == 'm') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
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
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 103},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 103},
  [27] = {.lex_state = 103},
  [28] = {.lex_state = 103},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 101},
  [60] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_msgid] = ACTIONS(1),
    [anon_sym_msgid_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_msgstr_LBRACK] = ACTIONS(1),
    [anon_sym_msgstr] = ACTIONS(1),
    [anon_sym_msgctxt] = ACTIONS(1),
    [anon_sym_msgid_plural] = ACTIONS(1),
    [anon_sym_msgid_plural_LBRACK] = ACTIONS(1),
    [anon_sym_msgstr_plural] = ACTIONS(1),
    [anon_sym_msgstr_plural_LBRACK] = ACTIONS(1),
    [anon_sym_POUND_DOT] = ACTIONS(1),
    [anon_sym_POUND_PIPE] = ACTIONS(1),
    [anon_sym_POUND_COLON] = ACTIONS(1),
    [anon_sym_POUND_COMMA] = ACTIONS(1),
    [anon_sym_POUND_TILDEmsgid] = ACTIONS(1),
    [anon_sym_POUND_SLASH_TILDEmsgstr] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(58),
    [sym_message] = STATE(3),
    [sym_msgid] = STATE(5),
    [sym_msgctxt] = STATE(44),
    [sym_comment] = STATE(3),
    [sym_comment_translator] = STATE(32),
    [sym_comment_extracted] = STATE(32),
    [sym_comment_reference] = STATE(32),
    [sym_comment_flag] = STATE(32),
    [sym_msg_previous_id] = STATE(32),
    [sym_msg_previous_str] = STATE(32),
    [sym_comment_text] = STATE(32),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_msgid] = ACTIONS(5),
    [anon_sym_msgid_LBRACK] = ACTIONS(7),
    [anon_sym_msgctxt] = ACTIONS(9),
    [anon_sym_POUND_DOT] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [anon_sym_POUND_COLON] = ACTIONS(15),
    [anon_sym_POUND_COMMA] = ACTIONS(17),
    [anon_sym_POUND_TILDEmsgid] = ACTIONS(19),
    [anon_sym_POUND_SLASH_TILDEmsgstr] = ACTIONS(21),
    [anon_sym_POUND] = ACTIONS(23),
  },
  [2] = {
    [sym_message] = STATE(2),
    [sym_msgid] = STATE(5),
    [sym_msgctxt] = STATE(44),
    [sym_comment] = STATE(2),
    [sym_comment_translator] = STATE(32),
    [sym_comment_extracted] = STATE(32),
    [sym_comment_reference] = STATE(32),
    [sym_comment_flag] = STATE(32),
    [sym_msg_previous_id] = STATE(32),
    [sym_msg_previous_str] = STATE(32),
    [sym_comment_text] = STATE(32),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_msgid] = ACTIONS(27),
    [anon_sym_msgid_LBRACK] = ACTIONS(30),
    [anon_sym_msgctxt] = ACTIONS(33),
    [anon_sym_POUND_DOT] = ACTIONS(36),
    [anon_sym_POUND_PIPE] = ACTIONS(39),
    [anon_sym_POUND_COLON] = ACTIONS(42),
    [anon_sym_POUND_COMMA] = ACTIONS(45),
    [anon_sym_POUND_TILDEmsgid] = ACTIONS(48),
    [anon_sym_POUND_SLASH_TILDEmsgstr] = ACTIONS(51),
    [anon_sym_POUND] = ACTIONS(54),
  },
  [3] = {
    [sym_message] = STATE(2),
    [sym_msgid] = STATE(5),
    [sym_msgctxt] = STATE(44),
    [sym_comment] = STATE(2),
    [sym_comment_translator] = STATE(32),
    [sym_comment_extracted] = STATE(32),
    [sym_comment_reference] = STATE(32),
    [sym_comment_flag] = STATE(32),
    [sym_msg_previous_id] = STATE(32),
    [sym_msg_previous_str] = STATE(32),
    [sym_comment_text] = STATE(32),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_msgid] = ACTIONS(5),
    [anon_sym_msgid_LBRACK] = ACTIONS(7),
    [anon_sym_msgctxt] = ACTIONS(9),
    [anon_sym_POUND_DOT] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [anon_sym_POUND_COLON] = ACTIONS(15),
    [anon_sym_POUND_COMMA] = ACTIONS(17),
    [anon_sym_POUND_TILDEmsgid] = ACTIONS(19),
    [anon_sym_POUND_SLASH_TILDEmsgstr] = ACTIONS(21),
    [anon_sym_POUND] = ACTIONS(23),
  },
  [4] = {
    [sym_msgstr] = STATE(22),
    [sym_msgid_plural] = STATE(12),
    [sym_msgstr_plural] = STATE(42),
    [aux_sym_msgstr_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(59),
    [anon_sym_msgid] = ACTIONS(59),
    [anon_sym_msgid_LBRACK] = ACTIONS(59),
    [anon_sym_msgstr_LBRACK] = ACTIONS(61),
    [anon_sym_msgstr] = ACTIONS(63),
    [anon_sym_msgctxt] = ACTIONS(59),
    [anon_sym_msgid_plural] = ACTIONS(65),
    [anon_sym_msgid_plural_LBRACK] = ACTIONS(67),
    [anon_sym_msgstr_plural] = ACTIONS(69),
    [anon_sym_msgstr_plural_LBRACK] = ACTIONS(71),
    [anon_sym_POUND_DOT] = ACTIONS(59),
    [anon_sym_POUND_PIPE] = ACTIONS(59),
    [anon_sym_POUND_COLON] = ACTIONS(59),
    [anon_sym_POUND_COMMA] = ACTIONS(59),
    [anon_sym_POUND_TILDEmsgid] = ACTIONS(59),
    [anon_sym_POUND_SLASH_TILDEmsgstr] = ACTIONS(59),
    [anon_sym_POUND] = ACTIONS(73),
  },
  [5] = {
    [sym_msgstr] = STATE(23),
    [sym_msgid_plural] = STATE(11),
    [sym_msgstr_plural] = STATE(34),
    [aux_sym_msgstr_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_msgid] = ACTIONS(75),
    [anon_sym_msgid_LBRACK] = ACTIONS(75),
    [anon_sym_msgstr_LBRACK] = ACTIONS(61),
    [anon_sym_msgstr] = ACTIONS(63),
    [anon_sym_msgctxt] = ACTIONS(75),
    [anon_sym_msgid_plural] = ACTIONS(65),
    [anon_sym_msgid_plural_LBRACK] = ACTIONS(67),
    [anon_sym_msgstr_plural] = ACTIONS(69),
    [anon_sym_msgstr_plural_LBRACK] = ACTIONS(71),
    [anon_sym_POUND_DOT] = ACTIONS(75),
    [anon_sym_POUND_PIPE] = ACTIONS(75),
    [anon_sym_POUND_COLON] = ACTIONS(75),
    [anon_sym_POUND_COMMA] = ACTIONS(75),
    [anon_sym_POUND_TILDEmsgid] = ACTIONS(75),
    [anon_sym_POUND_SLASH_TILDEmsgstr] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(77),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(81), 1,
      anon_sym_POUND,
    ACTIONS(83), 1,
      sym_string,
    STATE(9), 1,
      aux_sym_msgid_repeat1,
    ACTIONS(79), 16,
      ts_builtin_sym_end,
      anon_sym_msgid,
      anon_sym_msgid_LBRACK,
      anon_sym_msgstr_LBRACK,
      anon_sym_msgstr,
      anon_sym_msgctxt,
      anon_sym_msgid_plural,
      anon_sym_msgid_plural_LBRACK,
      anon_sym_msgstr_plural,
      anon_sym_msgstr_plural_LBRACK,
      anon_sym_POUND_DOT,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_TILDEmsgid,
      anon_sym_POUND_SLASH_TILDEmsgstr,
  [28] = 4,
    ACTIONS(87), 1,
      anon_sym_POUND,
    ACTIONS(89), 1,
      sym_string,
    STATE(6), 1,
      aux_sym_msgid_repeat1,
    ACTIONS(85), 16,
      ts_builtin_sym_end,
      anon_sym_msgid,
      anon_sym_msgid_LBRACK,
      anon_sym_msgstr_LBRACK,
      anon_sym_msgstr,
      anon_sym_msgctxt,
      anon_sym_msgid_plural,
      anon_sym_msgid_plural_LBRACK,
      anon_sym_msgstr_plural,
      anon_sym_msgstr_plural_LBRACK,
      anon_sym_POUND_DOT,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_TILDEmsgid,
      anon_sym_POUND_SLASH_TILDEmsgstr,
  [56] = 4,
    ACTIONS(93), 1,
      anon_sym_POUND,
    ACTIONS(95), 1,
      sym_string,
    STATE(10), 1,
      aux_sym_msgid_repeat1,
    ACTIONS(91), 16,
      ts_builtin_sym_end,
      anon_sym_msgid,
      anon_sym_msgid_LBRACK,
      anon_sym_msgstr_LBRACK,
      anon_sym_msgstr,
      anon_sym_msgctxt,
      anon_sym_msgid_plural,
      anon_sym_msgid_plural_LBRACK,
      anon_sym_msgstr_plural,
      anon_sym_msgstr_plural_LBRACK,
      anon_sym_POUND_DOT,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_TILDEmsgid,
      anon_sym_POUND_SLASH_TILDEmsgstr,
  [84] = 4,
    ACTIONS(99), 1,
      anon_sym_POUND,
    ACTIONS(101), 1,
      sym_string,
    STATE(9), 1,
      aux_sym_msgid_repeat1,
    ACTIONS(97), 16,
      ts_builtin_sym_end,
      anon_sym_msgid,
      anon_sym_msgid_LBRACK,
      anon_sym_msgstr_LBRACK,
      anon_sym_msgstr,
      anon_sym_msgctxt,
      anon_sym_msgid_plural,
      anon_sym_msgid_plural_LBRACK,
      anon_sym_msgstr_plural,
      anon_sym_msgstr_plural_LBRACK,
      anon_sym_POUND_DOT,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_TILDEmsgid,
      anon_sym_POUND_SLASH_TILDEmsgstr,
  [112] = 4,
    ACTIONS(83), 1,
      sym_string,
    ACTIONS(106), 1,
      anon_sym_POUND,
    STATE(9), 1,
      aux_sym_msgid_repeat1,
    ACTIONS(104), 16,
      ts_builtin_sym_end,
      anon_sym_msgid,
      anon_sym_msgid_LBRACK,
      anon_sym_msgstr_LBRACK,
      anon_sym_msgstr,
      anon_sym_msgctxt,
      anon_sym_msgid_plural,
      anon_sym_msgid_plural_LBRACK,
      anon_sym_msgstr_plural,
      anon_sym_msgstr_plural_LBRACK,
      anon_sym_POUND_DOT,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_TILDEmsgid,
      anon_sym_POUND_SLASH_TILDEmsgstr,
  [140] = 9,
    ACTIONS(61), 1,
      anon_sym_msgstr_LBRACK,
    ACTIONS(63), 1,
      anon_sym_msgstr,
    ACTIONS(69), 1,
      anon_sym_msgstr_plural,
    ACTIONS(71), 1,
      anon_sym_msgstr_plural_LBRACK,
    ACTIONS(73), 1,
      anon_sym_POUND,
    STATE(20), 1,
      aux_sym_msgstr_repeat1,
    STATE(22), 1,
      sym_msgstr,
    STATE(42), 1,
      sym_msgstr_plural,
    ACTIONS(59), 10,
      ts_builtin_sym_end,
      anon_sym_msgid,
      anon_sym_msgid_LBRACK,
      anon_sym_msgctxt,
      anon_sym_POUND_DOT,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_TILDEmsgid,
      anon_sym_POUND_SLASH_TILDEmsgstr,
  [177] = 9,
    ACTIONS(61), 1,
      anon_sym_msgstr_LBRACK,
    ACTIONS(63), 1,
      anon_sym_msgstr,
    ACTIONS(69), 1,
      anon_sym_msgstr_plural,
    ACTIONS(71), 1,
      anon_sym_msgstr_plural_LBRACK,
    ACTIONS(110), 1,
      anon_sym_POUND,
    STATE(20), 1,
      aux_sym_msgstr_repeat1,
    STATE(21), 1,
      sym_msgstr,
    STATE(36), 1,
      sym_msgstr_plural,
    ACTIONS(108), 10,
      ts_builtin_sym_end,
      anon_sym_msgid,
      anon_sym_msgid_LBRACK,
      anon_sym_msgctxt,
      anon_sym_POUND_DOT,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_TILDEmsgid,
      anon_sym_POUND_SLASH_TILDEmsgstr,
  [214] = 4,
    ACTIONS(114), 1,
      anon_sym_POUND,
    ACTIONS(116), 1,
      sym_string,
    STATE(14), 1,
      aux_sym_msgid_repeat1,
    ACTIONS(112), 13,
      ts_builtin_sym_end,
      anon_sym_msgid,
      anon_sym_msgid_LBRACK,
      anon_sym_msgstr_LBRACK,
      anon_sym_msgctxt,
      anon_sym_msgstr_plural,
      anon_sym_msgstr_plural_LBRACK,
      anon_sym_POUND_DOT,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_TILDEmsgid,
      anon_sym_POUND_SLASH_TILDEmsgstr,
  [239] = 4,
    ACTIONS(83), 1,
      sym_string,
    ACTIONS(120), 1,
      anon_sym_POUND,
    STATE(9), 1,
      aux_sym_msgid_repeat1,
    ACTIONS(118), 13,
      ts_builtin_sym_end,
      anon_sym_msgid,
      anon_sym_msgid_LBRACK,
      anon_sym_msgstr_LBRACK,
      anon_sym_msgctxt,
      anon_sym_msgstr_plural,
      anon_sym_msgstr_plural_LBRACK,
      anon_sym_POUND_DOT,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_TILDEmsgid,
      anon_sym_POUND_SLASH_TILDEmsgstr,
  [264] = 2,
    ACTIONS(124), 1,
      anon_sym_POUND,
    ACTIONS(122), 14,
      ts_builtin_sym_end,
      anon_sym_msgid,
      anon_sym_msgid_LBRACK,
      anon_sym_msgstr_LBRACK,
      anon_sym_msgstr,
      anon_sym_msgctxt,
      anon_sym_msgstr_plural,
      anon_sym_msgstr_plural_LBRACK,
      anon_sym_POUND_DOT,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_TILDEmsgid,
      anon_sym_POUND_SLASH_TILDEmsgstr,
  [284] = 4,
    ACTIONS(128), 1,
      anon_sym_POUND,
    ACTIONS(130), 1,
      sym_string,
    STATE(19), 1,
      aux_sym_msgid_repeat1,
    ACTIONS(126), 12,
      ts_builtin_sym_end,
      anon_sym_msgid,
      anon_sym_msgid_LBRACK,
      anon_sym_msgctxt,
      anon_sym_msgstr_plural,
      anon_sym_msgstr_plural_LBRACK,
      anon_sym_POUND_DOT,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_TILDEmsgid,
      anon_sym_POUND_SLASH_TILDEmsgstr,
  [308] = 4,
    ACTIONS(134), 1,
      anon_sym_msgstr_LBRACK,
    ACTIONS(137), 1,
      anon_sym_POUND,
    STATE(17), 1,
      aux_sym_msgstr_repeat1,
    ACTIONS(132), 12,
      ts_builtin_sym_end,
      anon_sym_msgid,
      anon_sym_msgid_LBRACK,
      anon_sym_msgctxt,
      anon_sym_msgstr_plural,
      anon_sym_msgstr_plural_LBRACK,
      anon_sym_POUND_DOT,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_TILDEmsgid,
      anon_sym_POUND_SLASH_TILDEmsgstr,
  [332] = 2,
    ACTIONS(141), 1,
      anon_sym_POUND,
    ACTIONS(139), 14,
      ts_builtin_sym_end,
      anon_sym_msgid,
      anon_sym_msgid_LBRACK,
      anon_sym_msgstr_LBRACK,
      anon_sym_msgstr,
      anon_sym_msgctxt,
      anon_sym_msgstr_plural,
      anon_sym_msgstr_plural_LBRACK,
      anon_sym_POUND_DOT,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_TILDEmsgid,
      anon_sym_POUND_SLASH_TILDEmsgstr,
  [352] = 4,
    ACTIONS(83), 1,
      sym_string,
    ACTIONS(145), 1,
      anon_sym_POUND,
    STATE(9), 1,
      aux_sym_msgid_repeat1,
    ACTIONS(143), 12,
      ts_builtin_sym_end,
      anon_sym_msgid,
      anon_sym_msgid_LBRACK,
      anon_sym_msgctxt,
      anon_sym_msgstr_plural,
      anon_sym_msgstr_plural_LBRACK,
      anon_sym_POUND_DOT,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_TILDEmsgid,
      anon_sym_POUND_SLASH_TILDEmsgstr,
  [376] = 4,
    ACTIONS(61), 1,
      anon_sym_msgstr_LBRACK,
    ACTIONS(128), 1,
      anon_sym_POUND,
    STATE(17), 1,
      aux_sym_msgstr_repeat1,
    ACTIONS(126), 12,
      ts_builtin_sym_end,
      anon_sym_msgid,
      anon_sym_msgid_LBRACK,
      anon_sym_msgctxt,
      anon_sym_msgstr_plural,
      anon_sym_msgstr_plural_LBRACK,
      anon_sym_POUND_DOT,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_TILDEmsgid,
      anon_sym_POUND_SLASH_TILDEmsgstr,
  [400] = 5,
    ACTIONS(69), 1,
      anon_sym_msgstr_plural,
    ACTIONS(71), 1,
      anon_sym_msgstr_plural_LBRACK,
    ACTIONS(149), 1,
      anon_sym_POUND,
    STATE(31), 1,
      sym_msgstr_plural,
    ACTIONS(147), 10,
      ts_builtin_sym_end,
      anon_sym_msgid,
      anon_sym_msgid_LBRACK,
      anon_sym_msgctxt,
      anon_sym_POUND_DOT,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_TILDEmsgid,
      anon_sym_POUND_SLASH_TILDEmsgstr,
  [425] = 5,
    ACTIONS(69), 1,
      anon_sym_msgstr_plural,
    ACTIONS(71), 1,
      anon_sym_msgstr_plural_LBRACK,
    ACTIONS(110), 1,
      anon_sym_POUND,
    STATE(36), 1,
      sym_msgstr_plural,
    ACTIONS(108), 10,
      ts_builtin_sym_end,
      anon_sym_msgid,
      anon_sym_msgid_LBRACK,
      anon_sym_msgctxt,
      anon_sym_POUND_DOT,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_TILDEmsgid,
      anon_sym_POUND_SLASH_TILDEmsgstr,
  [450] = 5,
    ACTIONS(69), 1,
      anon_sym_msgstr_plural,
    ACTIONS(71), 1,
      anon_sym_msgstr_plural_LBRACK,
    ACTIONS(73), 1,
      anon_sym_POUND,
    STATE(42), 1,
      sym_msgstr_plural,
    ACTIONS(59), 10,
      ts_builtin_sym_end,
      anon_sym_msgid,
      anon_sym_msgid_LBRACK,
      anon_sym_msgctxt,
      anon_sym_POUND_DOT,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_TILDEmsgid,
      anon_sym_POUND_SLASH_TILDEmsgstr,
  [475] = 3,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
    ACTIONS(155), 1,
      sym_text,
    ACTIONS(153), 10,
      anon_sym_msgid,
      anon_sym_msgid_LBRACK,
      anon_sym_msgctxt,
      anon_sym_POUND_DOT,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_TILDEmsgid,
      anon_sym_POUND_SLASH_TILDEmsgstr,
      anon_sym_POUND,
  [494] = 3,
    ACTIONS(159), 1,
      anon_sym_POUND,
    ACTIONS(161), 1,
      sym_string,
    ACTIONS(157), 10,
      ts_builtin_sym_end,
      anon_sym_msgid,
      anon_sym_msgid_LBRACK,
      anon_sym_msgctxt,
      anon_sym_POUND_DOT,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_TILDEmsgid,
      anon_sym_POUND_SLASH_TILDEmsgstr,
  [513] = 3,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
    ACTIONS(167), 1,
      sym_text,
    ACTIONS(165), 10,
      anon_sym_msgid,
      anon_sym_msgid_LBRACK,
      anon_sym_msgctxt,
      anon_sym_POUND_DOT,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_TILDEmsgid,
      anon_sym_POUND_SLASH_TILDEmsgstr,
      anon_sym_POUND,
  [532] = 3,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
    ACTIONS(173), 1,
      sym_text,
    ACTIONS(171), 10,
      anon_sym_msgid,
      anon_sym_msgid_LBRACK,
      anon_sym_msgctxt,
      anon_sym_POUND_DOT,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_TILDEmsgid,
      anon_sym_POUND_SLASH_TILDEmsgstr,
      anon_sym_POUND,
  [551] = 3,
    ACTIONS(175), 1,
      ts_builtin_sym_end,
    ACTIONS(179), 1,
      sym_text,
    ACTIONS(177), 10,
      anon_sym_msgid,
      anon_sym_msgid_LBRACK,
      anon_sym_msgctxt,
      anon_sym_POUND_DOT,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_TILDEmsgid,
      anon_sym_POUND_SLASH_TILDEmsgstr,
      anon_sym_POUND,
  [570] = 3,
    ACTIONS(183), 1,
      anon_sym_POUND,
    ACTIONS(185), 1,
      sym_string,
    ACTIONS(181), 10,
      ts_builtin_sym_end,
      anon_sym_msgid,
      anon_sym_msgid_LBRACK,
      anon_sym_msgctxt,
      anon_sym_POUND_DOT,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_TILDEmsgid,
      anon_sym_POUND_SLASH_TILDEmsgstr,
  [589] = 2,
    ACTIONS(189), 1,
      anon_sym_POUND,
    ACTIONS(187), 10,
      ts_builtin_sym_end,
      anon_sym_msgid,
      anon_sym_msgid_LBRACK,
      anon_sym_msgctxt,
      anon_sym_POUND_DOT,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_TILDEmsgid,
      anon_sym_POUND_SLASH_TILDEmsgstr,
  [605] = 2,
    ACTIONS(193), 1,
      anon_sym_POUND,
    ACTIONS(191), 10,
      ts_builtin_sym_end,
      anon_sym_msgid,
      anon_sym_msgid_LBRACK,
      anon_sym_msgctxt,
      anon_sym_POUND_DOT,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_TILDEmsgid,
      anon_sym_POUND_SLASH_TILDEmsgstr,
  [621] = 2,
    ACTIONS(197), 1,
      anon_sym_POUND,
    ACTIONS(195), 10,
      ts_builtin_sym_end,
      anon_sym_msgid,
      anon_sym_msgid_LBRACK,
      anon_sym_msgctxt,
      anon_sym_POUND_DOT,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_TILDEmsgid,
      anon_sym_POUND_SLASH_TILDEmsgstr,
  [637] = 2,
    ACTIONS(201), 1,
      anon_sym_POUND,
    ACTIONS(199), 10,
      ts_builtin_sym_end,
      anon_sym_msgid,
      anon_sym_msgid_LBRACK,
      anon_sym_msgctxt,
      anon_sym_POUND_DOT,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_TILDEmsgid,
      anon_sym_POUND_SLASH_TILDEmsgstr,
  [653] = 2,
    ACTIONS(73), 1,
      anon_sym_POUND,
    ACTIONS(59), 10,
      ts_builtin_sym_end,
      anon_sym_msgid,
      anon_sym_msgid_LBRACK,
      anon_sym_msgctxt,
      anon_sym_POUND_DOT,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_TILDEmsgid,
      anon_sym_POUND_SLASH_TILDEmsgstr,
  [669] = 2,
    ACTIONS(205), 1,
      anon_sym_POUND,
    ACTIONS(203), 10,
      ts_builtin_sym_end,
      anon_sym_msgid,
      anon_sym_msgid_LBRACK,
      anon_sym_msgctxt,
      anon_sym_POUND_DOT,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_TILDEmsgid,
      anon_sym_POUND_SLASH_TILDEmsgstr,
  [685] = 2,
    ACTIONS(149), 1,
      anon_sym_POUND,
    ACTIONS(147), 10,
      ts_builtin_sym_end,
      anon_sym_msgid,
      anon_sym_msgid_LBRACK,
      anon_sym_msgctxt,
      anon_sym_POUND_DOT,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_TILDEmsgid,
      anon_sym_POUND_SLASH_TILDEmsgstr,
  [701] = 2,
    ACTIONS(209), 1,
      anon_sym_POUND,
    ACTIONS(207), 10,
      ts_builtin_sym_end,
      anon_sym_msgid,
      anon_sym_msgid_LBRACK,
      anon_sym_msgctxt,
      anon_sym_POUND_DOT,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_TILDEmsgid,
      anon_sym_POUND_SLASH_TILDEmsgstr,
  [717] = 2,
    ACTIONS(213), 1,
      anon_sym_POUND,
    ACTIONS(211), 10,
      ts_builtin_sym_end,
      anon_sym_msgid,
      anon_sym_msgid_LBRACK,
      anon_sym_msgctxt,
      anon_sym_POUND_DOT,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_TILDEmsgid,
      anon_sym_POUND_SLASH_TILDEmsgstr,
  [733] = 2,
    ACTIONS(217), 1,
      anon_sym_POUND,
    ACTIONS(215), 10,
      ts_builtin_sym_end,
      anon_sym_msgid,
      anon_sym_msgid_LBRACK,
      anon_sym_msgctxt,
      anon_sym_POUND_DOT,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_TILDEmsgid,
      anon_sym_POUND_SLASH_TILDEmsgstr,
  [749] = 2,
    ACTIONS(221), 1,
      anon_sym_POUND,
    ACTIONS(219), 10,
      ts_builtin_sym_end,
      anon_sym_msgid,
      anon_sym_msgid_LBRACK,
      anon_sym_msgctxt,
      anon_sym_POUND_DOT,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_TILDEmsgid,
      anon_sym_POUND_SLASH_TILDEmsgstr,
  [765] = 2,
    ACTIONS(225), 1,
      anon_sym_POUND,
    ACTIONS(223), 10,
      ts_builtin_sym_end,
      anon_sym_msgid,
      anon_sym_msgid_LBRACK,
      anon_sym_msgctxt,
      anon_sym_POUND_DOT,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_TILDEmsgid,
      anon_sym_POUND_SLASH_TILDEmsgstr,
  [781] = 2,
    ACTIONS(110), 1,
      anon_sym_POUND,
    ACTIONS(108), 10,
      ts_builtin_sym_end,
      anon_sym_msgid,
      anon_sym_msgid_LBRACK,
      anon_sym_msgctxt,
      anon_sym_POUND_DOT,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_TILDEmsgid,
      anon_sym_POUND_SLASH_TILDEmsgstr,
  [797] = 2,
    ACTIONS(229), 1,
      anon_sym_POUND,
    ACTIONS(227), 10,
      ts_builtin_sym_end,
      anon_sym_msgid,
      anon_sym_msgid_LBRACK,
      anon_sym_msgctxt,
      anon_sym_POUND_DOT,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_TILDEmsgid,
      anon_sym_POUND_SLASH_TILDEmsgstr,
  [813] = 3,
    ACTIONS(5), 1,
      anon_sym_msgid,
    ACTIONS(7), 1,
      anon_sym_msgid_LBRACK,
    STATE(4), 1,
      sym_msgid,
  [823] = 1,
    ACTIONS(231), 2,
      anon_sym_msgid,
      anon_sym_msgid_LBRACK,
  [828] = 1,
    ACTIONS(233), 1,
      sym_number,
  [832] = 1,
    ACTIONS(235), 1,
      anon_sym_RBRACK,
  [836] = 1,
    ACTIONS(237), 1,
      anon_sym_RBRACK,
  [840] = 1,
    ACTIONS(239), 1,
      sym_number,
  [844] = 1,
    ACTIONS(241), 1,
      anon_sym_RBRACK,
  [848] = 1,
    ACTIONS(243), 1,
      sym_number,
  [852] = 1,
    ACTIONS(245), 1,
      sym_string,
  [856] = 1,
    ACTIONS(247), 1,
      sym_string,
  [860] = 1,
    ACTIONS(249), 1,
      sym_string,
  [864] = 1,
    ACTIONS(251), 1,
      sym_string,
  [868] = 1,
    ACTIONS(253), 1,
      sym_number,
  [872] = 1,
    ACTIONS(255), 1,
      anon_sym_RBRACK,
  [876] = 1,
    ACTIONS(257), 1,
      ts_builtin_sym_end,
  [880] = 1,
    ACTIONS(259), 1,
      sym_text,
  [884] = 1,
    ACTIONS(261), 1,
      sym_string,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 28,
  [SMALL_STATE(8)] = 56,
  [SMALL_STATE(9)] = 84,
  [SMALL_STATE(10)] = 112,
  [SMALL_STATE(11)] = 140,
  [SMALL_STATE(12)] = 177,
  [SMALL_STATE(13)] = 214,
  [SMALL_STATE(14)] = 239,
  [SMALL_STATE(15)] = 264,
  [SMALL_STATE(16)] = 284,
  [SMALL_STATE(17)] = 308,
  [SMALL_STATE(18)] = 332,
  [SMALL_STATE(19)] = 352,
  [SMALL_STATE(20)] = 376,
  [SMALL_STATE(21)] = 400,
  [SMALL_STATE(22)] = 425,
  [SMALL_STATE(23)] = 450,
  [SMALL_STATE(24)] = 475,
  [SMALL_STATE(25)] = 494,
  [SMALL_STATE(26)] = 513,
  [SMALL_STATE(27)] = 532,
  [SMALL_STATE(28)] = 551,
  [SMALL_STATE(29)] = 570,
  [SMALL_STATE(30)] = 589,
  [SMALL_STATE(31)] = 605,
  [SMALL_STATE(32)] = 621,
  [SMALL_STATE(33)] = 637,
  [SMALL_STATE(34)] = 653,
  [SMALL_STATE(35)] = 669,
  [SMALL_STATE(36)] = 685,
  [SMALL_STATE(37)] = 701,
  [SMALL_STATE(38)] = 717,
  [SMALL_STATE(39)] = 733,
  [SMALL_STATE(40)] = 749,
  [SMALL_STATE(41)] = 765,
  [SMALL_STATE(42)] = 781,
  [SMALL_STATE(43)] = 797,
  [SMALL_STATE(44)] = 813,
  [SMALL_STATE(45)] = 823,
  [SMALL_STATE(46)] = 828,
  [SMALL_STATE(47)] = 832,
  [SMALL_STATE(48)] = 836,
  [SMALL_STATE(49)] = 840,
  [SMALL_STATE(50)] = 844,
  [SMALL_STATE(51)] = 848,
  [SMALL_STATE(52)] = 852,
  [SMALL_STATE(53)] = 856,
  [SMALL_STATE(54)] = 860,
  [SMALL_STATE(55)] = 864,
  [SMALL_STATE(56)] = 868,
  [SMALL_STATE(57)] = 872,
  [SMALL_STATE(58)] = 876,
  [SMALL_STATE(59)] = 880,
  [SMALL_STATE(60)] = 884,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(60),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msgid, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msgid, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msgid, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msgid, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msgid, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msgid, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_msgid_repeat1, 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_msgid_repeat1, 2),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_msgid_repeat1, 2), SHIFT_REPEAT(9),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msgid, 4),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msgid, 4),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 3),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_msgstr_repeat1, 3),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_msgstr_repeat1, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_msgstr_repeat1, 4),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_msgstr_repeat1, 4),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msgid_plural, 4),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msgid_plural, 4),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msgstr, 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msgstr, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_msgstr_repeat1, 2),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_msgstr_repeat1, 2), SHIFT_REPEAT(56),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_msgstr_repeat1, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msgid_plural, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msgid_plural, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msgstr, 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msgstr, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 4),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 4),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_extracted, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_extracted, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msg_previous_str, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msg_previous_str, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_translator, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_translator, 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_reference, 1),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_reference, 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_flag, 1),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_flag, 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msg_previous_id, 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msg_previous_id, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_flag, 2),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_flag, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 5),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 5),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msg_previous_str, 2),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msg_previous_str, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msg_previous_id, 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msg_previous_id, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_text, 2),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_text, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msgstr_plural, 4),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msgstr_plural, 4),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_reference, 2),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_reference, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_extracted, 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_extracted, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msgstr_plural, 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msgstr_plural, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_translator, 2),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_translator, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msgctxt, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [257] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_po(void) {
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
