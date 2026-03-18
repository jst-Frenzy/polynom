grammar polynom;

INT: [0-9]+;
FLOAT: [0-9]+ '.' [0-9]+;
SEP: ';';
WS: [ \t\r\n]+ -> skip;

MUL: '*' ;
POW: '^' ;
ADD: '+' ;
SUB: '-' ;

VAR: [xyz];

prog: polynom (SEP polynom)* ;

polynom: (SUB)? monom ((ADD | SUB) monom)* EOF ;

monom: (FLOAT | INT) (MUL varClose)+ | varClose (MUL varClose)* | (FLOAT | INT);

varClose: VAR POW (INT | SUB INT) ;