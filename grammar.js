module.exports = grammar({
  // https://www.gnu.org/software/gettext/manual/html_node/PO-Files.html
  name: 'po',

  rules: {
    source_file: $ => repeat(choice(
      $.message,
      $.comment,
    )),

    message: $ => seq(
      optional($.msgctxt),
      $.msgid,
      optional($.msgid_plural),
      optional($.msgstr),
      optional($.msgstr_plural),
    ),

    msgid: $ => seq(
      choice("msgid ", seq("msgid[", $.number, "] ")),
      repeat($.string)
    ),

    msgstr: $ => choice(
      repeat1(seq("msgstr[", $.number, "] ", repeat($.string))),
      seq("msgstr ", repeat($.string)),
    ),

    msgctxt: $ => seq("msgctxt", $.string),
    msgid_plural: $ => seq(
      choice("msgid_plural ", seq("msgid_plural[", $.number, "] ")),
      $.string
    ),
    msgstr_plural: $ => seq(
      choice("msgstr_plural ", seq("msgstr_plural[", $.number, "] ")),
      $.string
    ),

    comment: $ => choice(
      $.comment_translator,
      $.comment_extracted,
      $.comment_reference,
      $.comment_flag,
      $.msg_previous_id,
      $.msg_previous_str,
      $.comment_text,
    ),

    comment_translator: $ => seq('#.', optional($.text)),
    comment_extracted: $ => seq('#|', optional($.text)),
    comment_reference: $ => seq('#:', optional($.text)),
    comment_flag: $ => seq('#,', optional($.text)),
    msg_previous_id: $ => seq('#~ msgid ', optional($.string)),
    msg_previous_str: $ => seq('#/~ msgstr ', optional($.string)),
    comment_text: $ => seq("#", $.text),

    _whitespace: (_) => repeat1(/[\t\v ]/),
    number: _$ => token(/([0-9]+|[0-9][0-9,]+[0-9])(\.[0-9]*)?/),
    string: _$ => token(/"[^"]*"/),
    text: _$ => token(/.*/),
  }
});
