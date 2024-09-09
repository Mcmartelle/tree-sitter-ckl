const newline = /[\r\n\u2028\u2029]/;

module.exports = grammar({
  name: 'ckl',
  extras: $ => [$.comment],
  rules: {
    checklist: $ => repeat($.line),
    line: $ => seq(optional($.content), newline),
    _text: $ => /[^\r\n\u2028\u2029]/,
    comment: _ => token(seq('//', /.*/)),
    content: $ => prec.left(repeat1(choice($.clipboard, $._text))),
    clipboard: $ => 
      prec.left(seq('```', $.content, '```')),
  }
});
