/*lex spec comment 1*/
%%
[\n\t ]		;
-?(([0-9]+)|([0-9]*\.([0-9]+))([eE][-+]?[0-9]+)?)   {printf("number found: %s\n", yytext);

.	;
%%
main () {
	yylex();
	
}