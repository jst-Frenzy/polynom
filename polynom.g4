grammar polynom;

INT: [+-]?[0-9]+;
FLOAT: [+-]?[0-9]+ '.' [0-9]+;
SEP: ';';
WS: [ \t\r\n]+ -> skip;

MUL: '*' ;
POW: '^' ;
ADD: '+' ;
SUB: '-' ;

VAR: [xyz];

prog: polynom (SEP polynom)* ;

polynom: monom ((ADD | SUB) monom)*;

monom: FLOAT (MUL varClose)+ | varClose (MUL varClose)* | FLOAT ;

varClose: VAR POW INT ;