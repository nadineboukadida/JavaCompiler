%{ 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include "java.tab.h"	    
#include <stdbool.h>                                                                     	
char nom[100];
%}

%option yylineno

delim                                   [ \t]
bl                                      {delim}+
chiffre                                 [0-9]
lettre                                  [a-zA-Z]
COMMENT_LINE                            "//"
INTEGER_LITERAL                         ([1-9][0-9]*)
BOOLEAN_LITERAL                         (true|false)
BOOLEAN                                   (boolean)
PROGRAM                                 (program)
identifier                              [a-zA-Z][a-zA-Z0-9]*
point_virgule                           (;)
OPER                                    ("&&"|"<"|"+"|"-")

AESTRIK                                 ("*")
THIS                                    (this)
NEW                                     (new)
INT                                     (int)
OPEN_BRACKET                          ("[")
CLOSED_BRACKET                          ("]")
OPEN_PARENTH                        ("(")
CLOSED_PARENTH                        (")")
NOT                                     ("!")
DOT                                      (".")
COMMA                                      (",")
QMARK                                       ("?")
LENGTH                                  ("length")
OPEN_CURLY                                  ("{")
CLOSE_CURLY                                  ("}")
IF                                            ("if")
ELSE                                         ("else")
WHILE                                        ("while")
PRINT                                        ("System.out.println")
AFFECT                                       ("=")
RETURN                                       (return)
PUBLIC                                       (public)
STATIC                                       (static)
VOID                                       (void)
MAIN                                       (main)
CLASS                                       (class)
EXTENDS                                       (extends)
STRING                                       (String)
IDERONNE                                [0-9][a-zA-Z]*
                                            

%%

{bl}                                    
"\n"                                    yylineno++;
{COMMENT_LINE}                          printf("--Comment Line-- \n");
"/*"                            {
                                   char c = input();
                                   bool done = false;
                                   while(c!= EOF && done==false){
                                   if(c == '*' &&  input() =='/') {

                                   printf("COMMENT BLOC \n");
                                   done = true;
                                   }
                                   c=input();
                                   }
                                   if(c==EOF&&done==false) printf("ERROR IN COMMENT BLOC");
                                   }
\n   ;
{BOOLEAN_LITERAL}                       {strcpy(nom,yytext);printf("--Boolean Literal-- \n"); return BOOLEAN_LITERAL;}
{INTEGER_LITERAL}                       {strcpy(nom,yytext);printf("--Integer Literal-- \n");return INTEGER_LITERAL;}
{BOOLEAN}                                   {strcpy(nom,yytext);printf("--boolean--\n"); return BOOLEAN ;}
{PUBLIC}                                {strcpy(nom,yytext);printf("--PUBLIC--\n"); return PUBLIC;} 
{RETURN}                                {strcpy(nom,yytext);printf("--RETURN--\n"); return RETURN;} 

{EXTENDS}                                   {strcpy(nom,yytext);printf("--extends keyword--\n"); return EXTENDS ;}
{CLASS}                                   {strcpy(nom,yytext);printf("--CLASS keyword--\n"); return CLASS ;}
{STATIC}                                   {strcpy(nom,yytext);printf("--STATIC keyword--\n"); return STATIC ;}
{VOID}                                   {strcpy(nom,yytext);printf("--VOID keyword--\n"); return VOID; }
{MAIN}                                   {strcpy(nom,yytext);printf("--MAIN keyword--\n"); return MAIN; }

{STRING}                                   {strcpy(nom,yytext);printf("--STRING keyword--\n"); return STRING; }
{LENGTH}                                 {strcpy(nom,yytext);printf("--LENGTH--\n"); return LENGTH;} 
{DOT}                                    {strcpy(nom,yytext);printf("--Dot--\n"); return DOT;} 
{AESTRIK}                               {strcpy(nom,yytext);printf("--AESTRIK--\n"); return AESTRIK;}
{THIS}                                   {strcpy(nom,yytext);printf("--THIS--\n"); return THIS;} 
{PROGRAM}                               { strcpy(nom,yytext);printf("--PROGRAM-- \n");return PROGRAM;}
{NEW}                                   {strcpy(nom,yytext);printf("--Keyword new--\n"); return NEW; }
{INT}                                   {strcpy(nom,yytext);printf("--Keyword int--\n"); return INT; }
{OPEN_BRACKET}                                   {strcpy(nom,yytext);printf("--open bracket--\n"); return OPEN_BRACKET; }
{CLOSED_BRACKET}                                   {strcpy(nom,yytext);printf("--closed bracket--\n"); return CLOSED_BRACKET; }
{OPEN_PARENTH}                                   {strcpy(nom,yytext);printf("--open parenth--\n"); return OPEN_PARENTH; }
{CLOSED_PARENTH}                                   {strcpy(nom,yytext);printf("--closed parenth--\n"); return CLOSED_PARENTH; }
{NOT}                                   {strcpy(nom,yytext);printf("--not--\n"); return NOT; }
{COMMA}                                 {strcpy(nom,yytext);printf("--comma--\n"); return COMMA; }
{QMARK}                                 {strcpy(nom,yytext);printf("--question mark--\n"); return QMARK; }
{OPEN_CURLY}                                {strcpy(nom,yytext);printf("--OPEN_CURLY--\n"); return OPEN_CURLY; }
{CLOSE_CURLY}                                  {strcpy(nom,yytext);printf("--CLOSE_CURLY--\n"); return CLOSE_CURLY; }
{IF}                                           {strcpy(nom,yytext);printf("--IF--\n"); return IF; }
{ELSE}                                        {strcpy(nom,yytext);printf("--ELSE--\n"); return ELSE; }
{WHILE}                                       {strcpy(nom,yytext);printf("--WHILE--\n"); return WHILE; }
{PRINT}                                        {strcpy(nom,yytext);printf("--PRINT--\n"); return PRINT; }
{AFFECT}                                       {strcpy(nom,yytext);printf("--AFFECT--\n"); return AFFECT; }

{identifier}                            { strcpy(nom,yytext);printf("--identifier-- \n"); return identifier;}
{point_virgule}                          {strcpy(nom,yytext);printf("--point_virgule-- \n");return point_virgule;}
{OPER}                                  {strcpy(nom,yytext);printf("--OPER-- \n"); return OPER ;}
{IDERONNE}                              {strcpy(nom,yytext);printf("--IDERONNE-- \n") ;}
%%


int yywrap()
{
	return(1);
}
