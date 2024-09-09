const newline = /[\r\n\u2028\u2029]/;

module.exports = grammar({
  name: 'ckl',
  rules: {
    checklist: $ => repeat($.line),
    line: $ => seq(optional($.content), newline),
    _text: $ => /[^\r\n\u2028\u2029]/,
    content: $ => prec.left(repeat1(choice($.clipboard, $._text))),
    clipboard: $ => 
      prec.left(seq('```', $.content, '```')),
  }
});
