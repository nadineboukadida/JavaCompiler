%{ 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int line = 1;
%}


delim                                   [ \t]
bl                                      {delim}+
chiffre                                 [0-9]
lettre                                  [a-zA-Z]
COMMENT_LINE                            "//"
INTEGER_LITERAL                         [\b-?[1-9][0-9]*\b]
BOOLEAN_LITERAL                         (true|false)
TYPES                                   (int|String|boolean)
identifier                              [a-zA-Z][a-zA-Z0-9]*

%%

{bl}                                    
"\n"                                    line++;
{COMMENT_LINE}                          printf("--Comment Line-- \n");
{BOOLEAN_LITERAL}                       printf("--Boolean Literal-- \n");
{INTEGER_LITERAL}                       printf("--Integer Literal-- \n");
{TYPES}                                  printf("--Type--\n"); 
"class"                                  printf("--Keyword--\n"); 
"public"                                 printf("--Keyword--\n"); 
"static"                                 printf("--Keyword--\n"); 
"void"                                   printf("--Keyword--\n"); 
"main"                                   printf("--Keyword--\n"); 
"extends"                                printf("--Keyword--\n"); 
"return"                                 printf("--Keyword--\n"); 
"if"                                     printf("--Keyword--\n"); 
"else"                                   printf("--Keyword--\n"); 
"while"                                  printf("--Keyword--\n"); 
"System.out.println"                     printf("--Keyword--\n"); 
"length"                                 printf("--Keyword--\n"); 
"this"                                   printf("--Keyword--\n"); 
"new"                                    printf("--Keyword--\n"); 
{identifier}                            printf("--identifier-- \n");

%%

int main(int argc, char *argv[])
{
     yyin = fopen(argv[1], "r");
     yylex();
     fclose(yyin);
}

int yywrap()
{
	return(1);
}
