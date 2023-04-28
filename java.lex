%{ 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include "java.tab.h"	    
#include <stdbool.h>                                                                     	
char nom[100];
char nomID[100];
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
{BOOLEAN_LITERAL}                       {strcpy(nom,yytext); return BOOLEAN_LITERAL;}
{INTEGER_LITERAL}                       {strcpy(nom,yytext);return INTEGER_LITERAL;}
{BOOLEAN}                                   {strcpy(nom,yytext); return BOOLEAN ;}
{PUBLIC}                                {strcpy(nom,yytext); return PUBLIC;} 
{RETURN}                                {strcpy(nom,yytext); return RETURN;} 

{EXTENDS}                                   {strcpy(nom,yytext); return EXTENDS ;}
{CLASS}                                   {strcpy(nom,yytext); return CLASS ;}
{STATIC}                                   {strcpy(nom,yytext); return STATIC ;}
{VOID}                                   {strcpy(nom,yytext); return VOID; }
{MAIN}                                   {strcpy(nom,yytext); return MAIN; }

{STRING}                                   {strcpy(nom,yytext); return STRING; }
{LENGTH}                                 {strcpy(nom,yytext); return LENGTH;} 
{DOT}                                    {strcpy(nom,yytext);return DOT;} 
{AESTRIK}                               {strcpy(nom,yytext); return AESTRIK;}
{THIS}                                   {strcpy(nom,yytext) ;return THIS;} 
{PROGRAM}                               { strcpy(nom,yytext);return PROGRAM;}
{NEW}                                   {strcpy(nom,yytext); return NEW; }
{INT}                                   {strcpy(nom,yytext); return INT; }
{OPEN_BRACKET}                                   {strcpy(nom,yytext) ;return OPEN_BRACKET; }
{CLOSED_BRACKET}                                   {strcpy(nom,yytext); return CLOSED_BRACKET; }
{OPEN_PARENTH}                                   {strcpy(nom,yytext); return OPEN_PARENTH; }
{CLOSED_PARENTH}                                   {strcpy(nom,yytext); return CLOSED_PARENTH; }
{NOT}                                   {strcpy(nom,yytext); return NOT; }
{COMMA}                                 {strcpy(nom,yytext);return COMMA; }
{QMARK}                                 {strcpy(nom,yytext); return QMARK; }
{OPEN_CURLY}                                {strcpy(nom,yytext); return OPEN_CURLY; }
{CLOSE_CURLY}                                  {strcpy(nom,yytext); return CLOSE_CURLY; }
{IF}                                           {strcpy(nom,yytext); return IF; }
{ELSE}                                        {strcpy(nom,yytext); return ELSE; }
{WHILE}                                       {strcpy(nom,yytext); return WHILE; }
{PRINT}                                        {strcpy(nom,yytext); return PRINT; }
{AFFECT}                                       {strcpy(nom,yytext); return AFFECT; }

{identifier}                            { strcpy(nomID,yytext);return identifier;}
{point_virgule}                          {strcpy(nom,yytext);return point_virgule;}
{OPER}                                  {strcpy(nom,yytext);return OPER ;}
{IDERONNE}                              {strcpy(nom,yytext);}
%%


int yywrap()
{
	return(1);
}
