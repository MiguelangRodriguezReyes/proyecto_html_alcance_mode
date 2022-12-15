%code requires{
	#include <string>
}
%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <iostream>
	#include <memory>
	#include <string>
	using namespace std;
	extern char *yytext;
	std::string result;
	int yylex(void);
	void yyerror(char const *);
%}

%define api.value.type {std::string}

%token  ID COLON LEFT_BRACKET RIGHT_BRACKET RIGHT_ARROW LEFT_CURLY_BRACE 
	RIGHT_CURLY_BRACE SINGLECOMMENT QUOTES SHOW CHARACTERS SEMICOLON
	MULTILINECOMMENTS ANSWER LOAD INT INTEGER_VALUE DOLLAR_SIGN
	DECI BLN STR TRU FLS INC DEC EQUAL GREATHER_THAN LESS_EQUAL GREATHER_EQUAL
	LESS_THAN NOT_EQUAL QUESTION_MARK PIPE_MARK AT

%start input

%%

input:
	function function_list	{
result = std::string("#include <cstdio>\n #include <iostream> \n using namespace std; \n") + $1 + $2;
	}
	;

function_list:
	function function_list { $$ = $1 + $2; }
	|
	%empty		{ $$ = ""; }
	;

function:
	id COLON COLON LEFT_BRACKET RIGHT_BRACKET RIGHT_ARROW 
LEFT_BRACKET RIGHT_BRACKET COLON LEFT_CURLY_BRACE statements RIGHT_CURLY_BRACE	{
	$$ = std::string("int main(int argc, char *argv[]){ \n") + $11 + "} \n";
	}
	;

statements:
	statements statement	{ $$ = $1 + $2; }
	|
	%empty	{ $$ = ""; }
	;

statement:
	SINGLECOMMENT	{ $$ = ""; }
	|
	MULTILINECOMMENTS	{ $$ = ""; }
	|
	std_input SEMICOLON	{ $$ = $1; }
	|
	definition SEMICOLON	{ $$ = $1; }
	|
	assignment SEMICOLON	{ $$ = $1; }
	|
	std_output SEMICOLON	{ $$ = $1; }
	|
	logicalComparation SEMICOLON	{ $$ = $1; }
	|
	tertiaryOperator	{ $$ = $1; }
	|
	bucle_for	{ $$ = $1; }
	;

tertiaryOperator:
	LEFT_BRACKET logicalComparation RIGHT_BRACKET QUESTION_MARK LEFT_CURLY_BRACE statement RIGHT_CURLY_BRACE {
	$$ = "if (" + $2 + "){\n\t" + $6 + "}\n"; }
	|
	PIPE_MARK LEFT_CURLY_BRACE statement RIGHT_CURLY_BRACE { $$ = "else {\n\t" + $3 + "}\n"; }
	|
	LEFT_BRACKET logicalComparation RIGHT_BRACKET QUESTION_MARK LEFT_CURLY_BRACE statement RIGHT_CURLY_BRACE PIPE_MARK 
	LEFT_CURLY_BRACE statement RIGHT_CURLY_BRACE { $$ = "if (" + $2 + "){\n\t" + $6 + "} else{\n\t" + $10 + "}\n"; }
	|
	LEFT_BRACKET logicalComparation RIGHT_BRACKET QUESTION_MARK LEFT_CURLY_BRACE statement RIGHT_CURLY_BRACE
	LEFT_BRACKET logicalComparation RIGHT_BRACKET QUESTION_MARK LEFT_CURLY_BRACE statement RIGHT_CURLY_BRACE
	PIPE_MARK LEFT_CURLY_BRACE statement RIGHT_CURLY_BRACE
	{ $$ = "if (" + $2 + "){\n\t" + $6 + "\n} else if(" + $9 + "){\n\t" + $13 + "\n} else {\n\t" + $17 + "}\n"; }
	|
	LEFT_BRACKET logicalComparation RIGHT_BRACKET QUESTION_MARK LEFT_CURLY_BRACE statement RIGHT_CURLY_BRACE
        LEFT_BRACKET logicalComparation RIGHT_BRACKET QUESTION_MARK LEFT_CURLY_BRACE statement RIGHT_CURLY_BRACE
	LEFT_BRACKET logicalComparation RIGHT_BRACKET QUESTION_MARK LEFT_CURLY_BRACE statement RIGHT_CURLY_BRACE
        PIPE_MARK LEFT_CURLY_BRACE statement RIGHT_CURLY_BRACE
	{ $$ = "if (" + $2 + "){\n\t" + $6 + "\n} else if(" + $9 + "){\n\t" + $13 + "\n} else if(" + $16 + "){\n\t" + $20
	+ "\n} else{\n\t" + $24 + "}\n"; }
	|
	LEFT_BRACKET logicalComparation RIGHT_BRACKET QUESTION_MARK LEFT_CURLY_BRACE statement RIGHT_CURLY_BRACE
	LEFT_BRACKET logicalComparation RIGHT_BRACKET QUESTION_MARK LEFT_CURLY_BRACE statement RIGHT_CURLY_BRACE
	LEFT_BRACKET logicalComparation RIGHT_BRACKET QUESTION_MARK LEFT_CURLY_BRACE statement RIGHT_CURLY_BRACE
	LEFT_BRACKET logicalComparation RIGHT_BRACKET QUESTION_MARK LEFT_CURLY_BRACE statement RIGHT_CURLY_BRACE
	PIPE_MARK LEFT_CURLY_BRACE statement RIGHT_CURLY_BRACE
	{ $$ = "if (" + $2 + "){\n\t" + $6 + "\n} else if(" + $9 + "){\n\t" + $13 + "\n} else if(" + $16 + "){\n\t" + $20
        + "\n} else if(" + $23 + "){\n\t" + $27 + "\n} else{\n\t" + $31 + "}\n}"; }
	|
	LEFT_BRACKET logicalComparation RIGHT_BRACKET QUESTION_MARK LEFT_CURLY_BRACE statement RIGHT_CURLY_BRACE
	LEFT_BRACKET logicalComparation RIGHT_BRACKET QUESTION_MARK LEFT_CURLY_BRACE statement RIGHT_CURLY_BRACE
	LEFT_BRACKET logicalComparation RIGHT_BRACKET QUESTION_MARK LEFT_CURLY_BRACE statement RIGHT_CURLY_BRACE
	LEFT_BRACKET logicalComparation RIGHT_BRACKET QUESTION_MARK LEFT_CURLY_BRACE statement RIGHT_CURLY_BRACE
	LEFT_BRACKET logicalComparation RIGHT_BRACKET QUESTION_MARK LEFT_CURLY_BRACE statement RIGHT_CURLY_BRACE
	PIPE_MARK LEFT_CURLY_BRACE statement RIGHT_CURLY_BRACE
	{ $$ = "if (" + $2 + "){\n\t" + $6 + "\n} else if(" + $9 + "){\n\t" + $13 + "\n} else if(" + $16 + "){\n\t" + $20
        + "\n} else if(" + $23 + "){\n\t" + $27 + "\n} else if(" + $30 + "){\n\t" + $34 + "\n} else{\n\t" + $38 + "}\n"; }
	;

bucle_for:
	LEFT_BRACKET assignment PIPE_MARK identifiers logicalComparation integer_value PIPE_MARK identifiers COLON DOLLAR_SIGN
	identifiers for_operator RIGHT_BRACKET AT LEFT_CURLY_BRACE statement RIGHT_CURLY_BRACE {
	$$ = "for(" + $2 + ";" + $4 + $5 + $6 + ";" + $8 + $11 + $12 + "){\n\t" + $16 + "}\n"; }
	;

comp_operator:
	EQUAL	{ $$ = "=="; }
	|
	LESS_EQUAL	{ $$ = "<="; }
	|
	LESS_THAN	{ $$ = "<"; }
	|
	GREATHER_THAN	{ $$ = ">"; }
	|
	GREATHER_EQUAL	{ $$ = ">="; }
	|
	NOT_EQUAL	{ $$ = "!="; }
	;

for_operator:
	EQUAL	{ $$ = "="; }
	|
        LESS_EQUAL	{ $$ = "<="; }
        |
	LESS_THAN	{ $$ = "<"; }
	|
        GREATHER_THAN   { $$ = ">"; }
	|
        GREATHER_EQUAL  { $$ = ">="; }
	|
	DEC	{ $$ = "-1"; }
	|
	INC	{ $$ = "+1"; }
        ;

logicalComparation:
	DOLLAR_SIGN identifiers comp_operator DOLLAR_SIGN identifiers { $$ = $2 + $3 + $5; }
	;

std_output:
	SHOW COLON characters	{ $$ = "cout << " + $3 + " << endl;\n"; }
	|
	SHOW COLON DOLLAR_SIGN identifiers	{ $$ = "cout << " + $4 + " << endl;\n"; }
	;

assignment:
	identifiers COLON integer_value	{ $$ = $1 + "=" + $3 + ";"; }
	;

integer_value:
	INTEGER_VALUE	{ $$ = std::string(yytext); }
	;

std_input:
	LOAD COLON identifiers { $$ = "cin >> " + $3 + ";\n"; }
	;

definition:
	identifiers COLON INT	{ $$ = "int " + $1 + ";\n"; }
	|
	identifiers COLON DECI	{ $$ = "float " + $1 + ";\n"; }
	|
	identifiers COLON BLN	{ $$ = "bool " + $1 + ";\n"; }
	|
	identifiers COLON STR	{ $$ = "string " + $1 + ";\n"; }
	;

identifiers:
	identifiers ids { $$ = $1 + $2; }
	|
	%empty { $$ = ""; }
	;
ids:
	id { $$ = $1; }
	;

characters:
	CHARACTERS	{ $$ = std::string(yytext); }
	;

id:
	ID	{
		$$ = std::string(yytext);
	}
	;

%%
void yyerror(char const *x){
	printf("Error %s \n", x);
	exit (1);
}
