%{
	#include<stdio.h>
%}

%%
if|
else|
while {printf("\n %s is a keyword",yytext);}
.|\n {ECHO;}
%%

int main(){
	printf("\n Enter a string: ");
	yylex();
}
int yywrap(){
	return 1;
}
