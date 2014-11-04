%{
int linenum = 0;
int wordnum = 0;
int charnum = 0;
%}
word [^ \t\n]+
eol  \n
%%
{word}		{wordnum++; charnum += yyleng;}
{eol}		{linenum++; }
.			{charnum++; }
%%

int main (int argc, char *argv[]) {
if (argc > 1) {
	FILE *infile;
	infile = fopen(argv[1], "r");
	yyin = infile;
}
	yylex();
	printf("Lines;%d\tWords:%d\tCharacters:%d\t", linenum, wordnum, charnum);
}