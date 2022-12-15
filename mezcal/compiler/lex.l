%option noyywrap
%{
	#include "grammar.tab.h"
%}
digit	[0-9]
alpha	[a-zA-Z]
id	{alpha}({alpha}*{digit}*)+
whitespace	[ \r\t\v\f]
linefeed	\n
slash [/]
singlecomment	{slash}{slash}({dot}*{whitespace}*)+{linefeed}
multilinecomments	{opencomment}({dot}*{whitespace}*{linefeed}*)+{closecomment}
opencomment	[<+]
closecomment	[+>]
quotes [\"]
characters	{quotes}({alpha}*{digit}*{whitespace}*:*)+{quotes}
dot .

%%

{digit}+        { return INTEGER_VALUE; }
{singlecomment}	{ return SINGLECOMMENT; }
{multilinecomments}	{ return MULTILINECOMMENTS; }
"show"	{ return SHOW; }
"answer"	{ return ANSWER; }
"load"	{ return LOAD; }
"Int"	{ return INT; }
"Deci"	{ return DECI; }
"Bln"	{ return BLN; }
"tru"	{ return TRU; }
"fls"	{ return FLS; }
"inc"	{ return INC; }
"dec"	{ return DEC; }
"@"	{ return AT; }
"=="	{ return EQUAL; }
">"	{ return GREATHER_THAN; }
"<="	{ return LESS_EQUAL; }
">="	{ return GREATHER_EQUAL; }
"<"	{ return LESS_THAN; }
"!="	{ return NOT_EQUAL; }
{id}	{ return ID; }
{quotes} { return QUOTES; }
{characters}	 { return CHARACTERS; }
":"	{ return COLON; }
";"	{ return SEMICOLON; }
"$"	{ return DOLLAR_SIGN; }
"|"	{ return PIPE_MARK; }
"["	{ return LEFT_BRACKET; }
"]"	{ return RIGHT_BRACKET; }
"?"	{ return QUESTION_MARK; }
"->"	{ return RIGHT_ARROW; }
"{"	{ return LEFT_CURLY_BRACE; }
"}"	{ return RIGHT_CURLY_BRACE; }
{whitespace}
{linefeed}	++yylineno;
