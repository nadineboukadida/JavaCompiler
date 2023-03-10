%{ 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include "java.tab.h"	    
#include <stdbool.h>                                                                     	


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
{BOOLEAN_LITERAL}                       {printf("--Boolean Literal-- \n"); return BOOLEAN_LITERAL;}
{INTEGER_LITERAL}                       {printf("--Integer Literal-- \n");return INTEGER_LITERAL;}
{BOOLEAN}                                   {printf("--boolean--\n"); return BOOLEAN ;}
{PUBLIC}                                {printf("--PUBLIC--\n"); return PUBLIC;} 
{RETURN}                                {printf("--RETURN--\n"); return RETURN;} 

{EXTENDS}                                   {printf("--extends keyword--\n"); return EXTENDS ;}
{CLASS}                                   {printf("--CLASS keyword--\n"); return CLASS ;}
{STATIC}                                   {printf("--STATIC keyword--\n"); return STATIC ;}
{VOID}                                   {printf("--VOID keyword--\n"); return VOID; }
{MAIN}                                   {printf("--MAIN keyword--\n"); return MAIN; }

{STRING}                                   {printf("--STRING keyword--\n"); return STRING; }
{LENGTH}                                 {printf("--LENGTH--\n"); return LENGTH;} 
{DOT}                                    {printf("--Dot--\n"); return DOT;} 
{AESTRIK}                               {printf("--AESTRIK--\n"); return AESTRIK;}
{THIS}                                   {printf("--THIS--\n"); return THIS;} 
{PROGRAM}                               { printf("--PROGRAM-- \n");return PROGRAM;}
{NEW}                                   {printf("--Keyword new--\n"); return NEW; }
{INT}                                   {printf("--Keyword int--\n"); return INT; }
{OPEN_BRACKET}                                   {printf("--open bracket--\n"); return OPEN_BRACKET; }
{CLOSED_BRACKET}                                   {printf("--closed bracket--\n"); return CLOSED_BRACKET; }
{OPEN_PARENTH}                                   {printf("--open parenth--\n"); return OPEN_PARENTH; }
{CLOSED_PARENTH}                                   {printf("--closed parenth--\n"); return CLOSED_PARENTH; }
{NOT}                                   {printf("--not--\n"); return NOT; }
{COMMA}                                 {printf("--comma--\n"); return COMMA; }
{QMARK}                                 {printf("--question mark--\n"); return QMARK; }
{OPEN_CURLY}                                {printf("--OPEN_CURLY--\n"); return OPEN_CURLY; }
{CLOSE_CURLY}                                  {printf("--CLOSE_CURLY--\n"); return CLOSE_CURLY; }
{IF}                                           {printf("--IF--\n"); return IF; }
{ELSE}                                        {printf("--ELSE--\n"); return ELSE; }
{WHILE}                                       {printf("--WHILE--\n"); return WHILE; }
{PRINT}                                        {printf("--PRINT--\n"); return PRINT; }
{AFFECT}                                       {printf("--AFFECT--\n"); return AFFECT; }

{identifier}                            { printf("--identifier-- \n"); return identifier;}
{point_virgule}                          {printf("--point_virgule-- \n");return point_virgule;}
{OPER}                                  {printf("--OPER-- \n"); return OPER ;}
{IDERONNE}                              {printf("--IDERONNE-- \n") ;}
%%


int yywrap()
{
	return(1);
}
