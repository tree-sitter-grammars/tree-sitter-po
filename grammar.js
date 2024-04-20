/**
 * @file PO grammar for tree-sitter
 * @author Erasin Wang <erasinoo@gmail.com>
 * @author Amaan Qureshi <amaanq12@gmail.com>
 * @license MIT
 * @see {@link https://www.gnu.org/software/gettext/manual/html_node/PO-Files.html|official syntax spec}
 */

/* eslint-disable arrow-parens */
/* eslint-disable camelcase */
/* eslint-disable-next-line spaced-comment */
/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'po',

  rules: {
    source_file: $ => repeat(
      choice(
        $.message,
        $.comment,
      ),
    ),

    message: $ => seq(
      optional($.msgctxt),
      $.msgid,
      optional($.msgid_plural),
      optional($.msgstr),
      optional($.msgstr_plural),
    ),

    msgctxt: $ => seq('msgctxt', $.string),

    msgid: $ => seq(
      choice(
        'msgid',
        seq('msgid', '[', $.number, ']'),
      ),
      repeat1($.string),
    ),

    msgid_plural: $ => seq(
      choice(
        'msgid_plural',
        seq('msgid_plural', '[', $.number, ']'),
      ),
      repeat1($.string),
    ),

    msgstr: $ => choice(
      repeat1(seq(
        'msgstr',
        '[',
        $.number,
        ']',
        repeat1($.string),
      )),
      seq('msgstr', repeat1($.string)),
    ),

    msgstr_plural: $ => seq(
      choice(
        'msgstr_plural',
        seq('msgstr_plural', '[', $.number, ']'),
      ),
      $.string,
    ),

    comment: $ => choice(
      $.translator_comment,
      $.extracted_comment,
      $.reference,
      $.flag,
      $.previous_untranslated_string,
      seq('#', $.text),
    ),

    translator_comment: $ => seq('#.', optional($.text)),
    extracted_comment: $ => seq(
      '#|',
      optional(choice('msgid', 'msgid_plural')),
      $.string,
    ),
    reference: $ => seq('#:', optional($.text)),
    flag: $ => seq('#,', optional($.text)),
    previous_untranslated_string: $ => seq(
      choice('#~', '#~|'),
      optional(choice(
        'msgctxt',
        'msgid',
        'msgid_plural',
        'msgstr',
        seq('msgstr', '[', $.number, ']'),
      )),
      $.string,
    ),

    number: _ => /([0-9]+|[0-9][0-9,]+[0-9])(\.[0-9]*)?/,

    string: $ => choice(
      seq(
        '"',
        repeat(choice(
          $.string_fragment,
          $._escape_sequence,
        )),
        '"',
      ),
    ),
    string_fragment: _ => token.immediate(prec(1, /[^"\\]+/)),

    _escape_sequence: $ =>
      choice(
        prec(2, token.immediate(seq('\\', /[^abfnrtvxu'\"\\\?]/))),
        prec(1, $.escape_sequence),
      ),
    escape_sequence: _ => token.immediate(seq(
      '\\',
      choice(
        /[^xu0-7]/,
        /[0-7]{1,3}/,
        /x[0-9a-fA-F]{2}/,
        /u[0-9a-fA-F]{4}/,
        /u\{[0-9a-fA-F]+\}/,
      ))),

    text: _ => /.*/,
  },
});
