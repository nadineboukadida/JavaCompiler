%{
	

#include <stdio.h>	
 			
int yyerror(char const *msg);	
int yylex(void);
extern int yylineno;

%}

%token PROGRAM 
%token point_virgule
%token identifier
%token OPER
%token THIS
%token NEW
%token INT
%token OPEN_BRACKET
%token CLOSED_BRACKET
%token OPEN_PARENTH
%token CLOSED_PARENTH
%token NOT
%token INTEGER_LITERAL
%token BOOLEAN_LITERAL
%token LENGTH
%token DOT
%token AESTRIK
%token COMMA
%token QMARK
%token OPEN_CURLY                                  
%token CLOSE_CURLY                                  
%token IF                                            
%token ELSE                           
%token WHILE                           
%token PRINT                                        
%token AFFECT       
%token BOOLEAN      
%token RETURN                      
%token PUBLIC                      
%token STRING
%token EXTENDS
%token CLASS
%token STATIC
%token VOID
%token MAIN

 
/*%error-verbose*/
%start programme
%left identifier
%left OPER
%left THIS
%left NEW
%left INT
%left OPEN_BRACKET
%left CLOSED_BRACKET
%left OPEN_PARENTH
%left CLOSED_PARENTH
%left NOT
%left INTEGER_LITERAL
%left BOOLEAN_LITERAL
%left LENGTH
%left DOT
%left AESTRIK
%left COMMA
%left QMARK
%left error
%left OPEN_CURLY                                  
%left CLOSE_CURLY                                  
%left IF                                            
%left ELSE                           
%left WHILE                           
%left PRINT                                        
%left AFFECT   
%left BOOLEAN   
%left RETURN   
%left PUBLIC 
%left point_virgule
%left STRING
%left EXTENDS
%left CLASS
%left STATIC
%left VOID
%left MAIN

%%
programme :              MAINCLASS CLASS_DECLARATIONS

MAINCLASS              :CLASS identifier OPEN_CURLY PUBLIC STATIC VOID MAIN OPEN_PARENTH STRING OPEN_BRACKET CLOSED_BRACKET identifier  CLOSED_PARENTH OPEN_CURLY STATEMENT CLOSE_CURLY CLOSE_CURLY { printf("***MAIN CLASS DECLARED***.\n"); }
                        |CLASS error OPEN_CURLY PUBLIC STATIC VOID MAIN OPEN_PARENTH STRING OPEN_BRACKET CLOSED_BRACKET identifier  CLOSED_PARENTH OPEN_CURLY STATEMENT CLOSE_CURLY CLOSE_CURLY  {yyerror (" identifier attendu on line : "); YYABORT}
                        |CLASS identifier error PUBLIC STATIC VOID MAIN OPEN_PARENTH STRING OPEN_BRACKET CLOSED_BRACKET identifier  CLOSED_PARENTH OPEN_CURLY STATEMENT CLOSE_CURLY CLOSE_CURLY  {yyerror (" OPEN_CURLY attendu on line : "); YYABORT}
                        |CLASS identifier OPEN_CURLY error STATIC VOID MAIN OPEN_PARENTH STRING OPEN_BRACKET CLOSED_BRACKET identifier  CLOSED_PARENTH OPEN_CURLY STATEMENT CLOSE_CURLY CLOSE_CURLY  {yyerror (" PUBLIC attendu on line : "); YYABORT}
                        |CLASS identifier OPEN_CURLY PUBLIC error VOID MAIN OPEN_PARENTH STRING OPEN_BRACKET CLOSED_BRACKET identifier  CLOSED_PARENTH OPEN_CURLY STATEMENT CLOSE_CURLY CLOSE_CURLY  {yyerror (" STATIC attendu on line : "); YYABORT}
                        |CLASS identifier OPEN_CURLY PUBLIC STATIC error MAIN OPEN_PARENTH STRING OPEN_BRACKET CLOSED_BRACKET identifier  CLOSED_PARENTH OPEN_CURLY STATEMENT CLOSE_CURLY CLOSE_CURLY  {yyerror (" VOID attendu on line : "); YYABORT}
                        |CLASS identifier OPEN_CURLY PUBLIC STATIC VOID error OPEN_PARENTH STRING OPEN_BRACKET CLOSED_BRACKET identifier  CLOSED_PARENTH OPEN_CURLY STATEMENT CLOSE_CURLY CLOSE_CURLY  {yyerror (" MAIN attendu on line : "); YYABORT}
                        |CLASS identifier OPEN_CURLY PUBLIC STATIC VOID MAIN error STRING OPEN_BRACKET CLOSED_BRACKET identifier  CLOSED_PARENTH OPEN_CURLY STATEMENT CLOSE_CURLY CLOSE_CURLY  {yyerror (" OPEN_PARENTH attendu on line : "); YYABORT}
                        |CLASS identifier OPEN_CURLY PUBLIC STATIC VOID MAIN OPEN_PARENTH error OPEN_BRACKET CLOSED_BRACKET identifier  CLOSED_PARENTH OPEN_CURLY STATEMENT CLOSE_CURLY CLOSE_CURLY  {yyerror (" STRING attendu on line : "); YYABORT}
                        |CLASS identifier OPEN_CURLY PUBLIC STATIC VOID MAIN OPEN_PARENTH STRING error CLOSED_BRACKET identifier  CLOSED_PARENTH OPEN_CURLY STATEMENT CLOSE_CURLY CLOSE_CURLY  {yyerror (" OPEN_BRACKET attendu on line : "); YYABORT}
                        |CLASS identifier OPEN_CURLY PUBLIC STATIC VOID MAIN OPEN_PARENTH STRING OPEN_BRACKET error identifier  CLOSED_PARENTH OPEN_CURLY STATEMENT CLOSE_CURLY CLOSE_CURLY  {yyerror (" CLOSED_BRACKET attendu on line : "); YYABORT}
                        |CLASS identifier OPEN_CURLY PUBLIC STATIC VOID MAIN OPEN_PARENTH STRING OPEN_BRACKET CLOSED_BRACKET error  CLOSED_PARENTH OPEN_CURLY STATEMENT CLOSE_CURLY CLOSE_CURLY  {yyerror (" identifier attendu on line : "); YYABORT}
                        |CLASS identifier OPEN_CURLY PUBLIC STATIC VOID MAIN OPEN_PARENTH STRING OPEN_BRACKET CLOSED_BRACKET identifier  error OPEN_CURLY STATEMENT CLOSE_CURLY CLOSE_CURLY  {yyerror (" CLOSED_PARENTH attendu on line : "); YYABORT}
                        |CLASS identifier OPEN_CURLY PUBLIC STATIC VOID MAIN OPEN_PARENTH STRING OPEN_BRACKET CLOSED_BRACKET identifier  CLOSED_PARENTH error STATEMENT CLOSE_CURLY CLOSE_CURLY  {yyerror (" OPEN_CURLY attendu on line : "); YYABORT}
                        |CLASS identifier OPEN_CURLY PUBLIC STATIC VOID MAIN OPEN_PARENTH STRING OPEN_BRACKET CLOSED_BRACKET identifier  CLOSED_PARENTH OPEN_CURLY STATEMENT error CLOSE_CURLY  {yyerror (" CLOSE_CURLY attendu on line : "); YYABORT}
                        |CLASS identifier OPEN_CURLY PUBLIC STATIC VOID MAIN OPEN_PARENTH STRING OPEN_BRACKET CLOSED_BRACKET identifier  CLOSED_PARENTH OPEN_CURLY STATEMENT CLOSE_CURLY error  {yyerror (" CLOSE_CURLY attendu on line : "); YYABORT}



CLASS_DECLARATION     : CLASS identifier EXTENDS identifier OPEN_CURLY VAR_DECLARATIONS METHOD_DECLARATIONS CLOSE_CURLY { printf("***IDENTIFY CLASS WITH EXTENDS***.\n"); }
                        | CLASS error OPEN_CURLY VAR_DECLARATIONS METHOD_DECLARATIONS CLOSE_CURLY {yyerror (" identifier attendu on line : "); YYABORT}
                        | CLASS identifier error VAR_DECLARATIONS METHOD_DECLARATIONS CLOSE_CURLY {yyerror (" OPEN_CURLY attendu on line : "); YYABORT}
                        | CLASS identifier OPEN_CURLY VAR_DECLARATIONS METHOD_DECLARATIONS CLOSE_CURLY {yyerror (" CLOSE_CURLY attendu on line : "); YYABORT}
                    
                    ;
CLASS_DECLARATIONS      : CLASS_DECLARATION
                        | CLASS_DECLARATION CLASS_DECLARATIONS
                    ;

VAR_DECLARATIONS      :  TYPE identifier point_virgule  { printf("***VARIABLES DECLARED***.\n"); }
                        |TYPE identifier point_virgule VAR_DECLARATIONS 
                        |TYPE error point_virgule {yyerror (" identifier attendu on line : "); YYABORT}
                        |TYPE identifier error {yyerror (" point_virgule attendu on line : "); YYABORT}
                        ; 

ARGUMENTS               : TYPE identifier|TYPE identifier COMMA ARGUMENTS { printf("***ARGUMENTS DECLARED***.\n"); }
                         ;

METHOD_DECLARATION      :       PUBLIC TYPE identifier OPEN_PARENTH ARGUMENTS CLOSED_PARENTH OPEN_CURLY VAR_DECLARATIONS   STATEMENTLIST RETURN EXPRESSION point_virgule CLOSE_CURLY  { printf("***METHOD DECLARED***.\n"); }
                                |PUBLIC TYPE identifier OPEN_PARENTH CLOSED_PARENTH OPEN_CURLY VAR_DECLARATIONS   STATEMENTLIST RETURN EXPRESSION point_virgule CLOSE_CURLY  { printf("***METHOD DECLARED***.\n"); }
                                |error TYPE identifier OPEN_PARENTH ARGUMENTS CLOSED_PARENTH OPEN_CURLY VAR_DECLARATIONS   STATEMENTLIST RETURN EXPRESSION point_virgule CLOSE_CURLY  {yyerror (" PUBLIC attendu on line : "); YYABORT}
                                |PUBLIC error identifier OPEN_PARENTH ARGUMENTS CLOSED_PARENTH OPEN_CURLY VAR_DECLARATIONS   STATEMENTLIST RETURN EXPRESSION point_virgule CLOSE_CURLY  {yyerror (" TYPE attendu on line : "); YYABORT}
                                |PUBLIC TYPE error OPEN_PARENTH ARGUMENTS CLOSED_PARENTH OPEN_CURLY VAR_DECLARATIONS   STATEMENTLIST RETURN EXPRESSION point_virgule CLOSE_CURLY  {yyerror (" identifier attendu on line : "); YYABORT}
                                |PUBLIC TYPE identifier error ARGUMENTS CLOSED_PARENTH OPEN_CURLY VAR_DECLARATIONS   STATEMENTLIST RETURN EXPRESSION point_virgule CLOSE_CURLY  {yyerror (" OPEN_PARENTH attendu on line : "); YYABORT}
                                |PUBLIC TYPE identifier OPEN_PARENTH ARGUMENTS error OPEN_CURLY VAR_DECLARATIONS   STATEMENTLIST RETURN EXPRESSION point_virgule CLOSE_CURLY  {yyerror (" CLOSED_PARENTH attendu on line : "); YYABORT}
                                |PUBLIC TYPE identifier OPEN_PARENTH ARGUMENTS CLOSED_PARENTH error VAR_DECLARATIONS   STATEMENTLIST RETURN EXPRESSION point_virgule CLOSE_CURLY  {yyerror (" OPEN_CURLY attendu on line : "); YYABORT}
                                |PUBLIC TYPE identifier OPEN_PARENTH ARGUMENTS CLOSED_PARENTH OPEN_CURLY error   STATEMENTLIST RETURN EXPRESSION point_virgule CLOSE_CURLY  {yyerror (" VAR_DECLARATIONS attendu on line : "); YYABORT}
                                |PUBLIC TYPE identifier OPEN_PARENTH ARGUMENTS CLOSED_PARENTH OPEN_CURLY VAR_DECLARATIONS   error RETURN EXPRESSION point_virgule CLOSE_CURLY  {yyerror (" STATEMENTLIST attendu on line : "); YYABORT}
                                |PUBLIC TYPE identifier OPEN_PARENTH ARGUMENTS CLOSED_PARENTH OPEN_CURLY VAR_DECLARATIONS   STATEMENTLIST RETURN error point_virgule CLOSE_CURLY  {yyerror (" EXPRESSION attendu on line : "); YYABORT}RETURN
                                |PUBLIC TYPE identifier OPEN_PARENTH ARGUMENTS CLOSED_PARENTH OPEN_CURLY VAR_DECLARATIONS   STATEMENTLIST RETURN EXPRESSION error CLOSE_CURLY  {yyerror (" point_virgule attendu on line : "); YYABORT}RETURN
                                |PUBLIC TYPE identifier OPEN_PARENTH ARGUMENTS CLOSED_PARENTH OPEN_CURLY VAR_DECLARATIONS   STATEMENTLIST RETURN EXPRESSION point_virgule error  {yyerror (" CLOSE_CURLY attendu on line : "); YYABORT}RETURN
                                ;
METHOD_DECLARATIONS         :   METHOD_DECLARATION
                                |METHOD_DECLARATION METHOD_DECLARATIONS ;


TYPE                    :       INT OPEN_BRACKET CLOSED_BRACKET  { printf("***TYPE ARRAY of int***.\n"); }
                                |error OPEN_BRACKET CLOSED_BRACKET {yyerror (" INT attendu on line : "); YYABORT}
                                |INT error CLOSED_BRACKET {yyerror (" OPEN_BRACKET attendu on line : "); YYABORT}
                                |INT OPEN_BRACKET error {yyerror (" CLOSED_BRACKET attendu on line : "); YYABORT}
                                | BOOLEAN  
                                | INT  
                                |identifier  
                        ; 
                                                                                                                       
STATEMENT               :       OPEN_CURLY STATEMENTLIST CLOSE_CURLY { printf("***STATEMENTS***.\n"); }

                                |IF OPEN_PARENTH EXPRESSION CLOSED_PARENTH STATEMENT ELSE STATEMENT { printf("***IF STATEMENT***.\n"); }
                                |error OPEN_PARENTH EXPRESSION CLOSED_PARENTH STATEMENT ELSE STATEMENT {yyerror (" IF attendu on line : "); YYABORT}
                                |IF error EXPRESSION CLOSED_PARENTH STATEMENT ELSE STATEMENT {yyerror (" OPEN_PARENTH attendu on line : "); YYABORT}
                                |IF OPEN_PARENTH error CLOSED_PARENTH STATEMENT ELSE STATEMENT {yyerror (" EXPRESSION attendu on line : "); YYABORT}
                                |IF OPEN_PARENTH EXPRESSION error STATEMENT ELSE STATEMENT {yyerror (" CLOSED_PARENTH attendu on line : "); YYABORT}
                                |IF OPEN_PARENTH EXPRESSION CLOSED_PARENTH error ELSE STATEMENT {yyerror (" IF attendu on line : "); YYABORT}
                                |IF OPEN_PARENTH EXPRESSION CLOSED_PARENTH STATEMENT error STATEMENT {yyerror (" ELSE attendu on line : "); YYABORT}
                                |IF OPEN_PARENTH EXPRESSION CLOSED_PARENTH STATEMENT ELSE error {yyerror (" STATEMENT attendu on line : "); YYABORT}

                                |WHILE OPEN_PARENTH EXPRESSION CLOSED_PARENTH STATEMENT { printf("***WHILE STATEMENT***.\n"); }
                                |error OPEN_PARENTH EXPRESSION CLOSED_PARENTH STATEMENT {yyerror (" WHILE attendu on line : "); YYABORT}
                                |WHILE error EXPRESSION CLOSED_PARENTH STATEMENT {yyerror (" OPEN_PARENTH attendu on line : "); YYABORT}
                                |WHILE OPEN_PARENTH error error STATEMENT {yyerror (" EXPRESSION attendu on line : "); YYABORT}
                                |WHILE OPEN_PARENTH EXPRESSION error STATEMENT {yyerror (" CLOSED_PARENTH attendu on line : "); YYABORT}
                                |WHILE OPEN_PARENTH EXPRESSION CLOSED_PARENTH error {yyerror (" STATEMENT attendu on line : "); YYABORT}

                                |PRINT OPEN_PARENTH EXPRESSION CLOSED_PARENTH point_virgule { printf("***PRINT STATEMENT***.\n"); }
                                |error OPEN_PARENTH EXPRESSION CLOSED_PARENTH point_virgule {yyerror (" PRINT attendu on line : "); YYABORT}
                                |PRINT error EXPRESSION CLOSED_PARENTH point_virgule {yyerror (" OPEN_PARENTH attendu on line : "); YYABORT}
                                |PRINT OPEN_PARENTH error CLOSED_PARENTH point_virgule {yyerror (" EXPRESSION attendu on line : "); YYABORT}
                                |PRINT OPEN_PARENTH EXPRESSION error point_virgule {yyerror (" CLOSED_PARENTH attendu on line : "); YYABORT}
                                |PRINT OPEN_PARENTH EXPRESSION CLOSED_PARENTH error {yyerror (" point_virgule attendu on line : "); YYABORT}

                                |identifier AFFECT EXPRESSION point_virgule { printf("***AFFECT STATEMENT***.\n"); }
                                |error AFFECT EXPRESSION point_virgule {yyerror (" identifier attendu on line : "); YYABORT}
                                |identifier error EXPRESSION point_virgule {yyerror (" AFFECT attendu on line : "); YYABORT}
                                |identifier AFFECT error point_virgule {yyerror (" EXPRESSION attendu on line : "); YYABORT}
                                |identifier AFFECT EXPRESSION error {yyerror (" point_virgule attendu on line : "); YYABORT}

                                |identifier OPEN_BRACKET EXPRESSION CLOSED_BRACKET AFFECT EXPRESSION point_virgule { printf("*** AFFECT STATEMENT in array***.\n"); }
                                |error OPEN_BRACKET EXPRESSION CLOSED_BRACKET AFFECT EXPRESSION point_virgule {yyerror (" identifier attendu on line : "); YYABORT}
                                |identifier error EXPRESSION CLOSED_BRACKET AFFECT EXPRESSION point_virgule {yyerror (" OPEN_BRACKET attendu on line : "); YYABORT}
                                |identifier OPEN_BRACKET error CLOSED_BRACKET AFFECT EXPRESSION point_virgule {yyerror (" EXPRESSION attendu on line : "); YYABORT}
                                |identifier OPEN_BRACKET EXPRESSION error AFFECT EXPRESSION point_virgule {yyerror (" CLOSED_BRACKET attendu on line : "); YYABORT}
                                |identifier OPEN_BRACKET EXPRESSION CLOSED_BRACKET error EXPRESSION point_virgule {yyerror (" AFFECT attendu on line : "); YYABORT}
                                |identifier OPEN_BRACKET EXPRESSION CLOSED_BRACKET AFFECT error point_virgule {yyerror (" EXPRESSION attendu on line : "); YYABORT}
                                |identifier OPEN_BRACKET EXPRESSION CLOSED_BRACKET AFFECT EXPRESSION error {yyerror (" point_virgule attendu on line : "); YYABORT}
STATEMENTLIST :             STATEMENT    
                            |STATEMENT STATEMENTLIST;

EXPRESSION             :        EXPRESSION OPER EXPRESSION { printf("***expression avec operateur***.\n"); }
                                |EXPRESSION AESTRIK EXPRESSION  { printf("***expression avec operateur***.\n"); }
                                |EXPRESSION error EXPRESSION {yyerror (" OPER/AESTRIK attendu on line : "); YYABORT}
                                |EXPRESSION OPEN_BRACKET EXPRESSION CLOSED_BRACKET   { printf("***expression avec accees par cle***.\n"); }
                                |EXPRESSION OPEN_BRACKET EXPRESSION error {yyerror (" CLOSED_BRACKET attendu on line : "); YYABORT}
                                |EXPRESSION OPEN_BRACKET error CLOSED_BRACKET {yyerror (" EXPRESSION attendu on line : "); YYABORT}
                                |EXPRESSION DOT LENGTH   { printf("***access longeur valide***.\n"); }
                                |EXPRESSION error LENGTH {yyerror (" DOT attendu on line : "); YYABORT}
                                |EXPRESSION DOT error {yyerror (" LENGTH attendu on line : "); YYABORT}
                                |INTEGER_LITERAL 
                                |BOOLEAN_LITERAL
                                |identifier 

                                |THIS 
                                |NEW INT  OPEN_BRACKET EXPRESSION CLOSED_BRACKET  { printf("***instanciation int valide***.\n"); }
                                |error INT  OPEN_BRACKET EXPRESSION CLOSED_BRACKET {yyerror (" NEW attendu on line : "); YYABORT}
                                |NEW error  OPEN_BRACKET EXPRESSION CLOSED_BRACKET {yyerror (" INT attendu on line : "); YYABORT}
                                |NEW INT  error EXPRESSION CLOSED_BRACKET {yyerror (" OPEN_BRACKET attendu on line : "); YYABORT}
                                |NEW INT  OPEN_BRACKET error CLOSED_BRACKET {yyerror (" EXPRESSION attendu on line : "); YYABORT}
                                |NEW INT  OPEN_BRACKET EXPRESSION error {yyerror (" CLOSED_BRACKET attendu on line : "); YYABORT}

                                |NEW identifier OPEN_PARENTH CLOSED_PARENTH  { printf("***instanciation classe valide***.\n"); }
                                |error identifier OPEN_PARENTH CLOSED_PARENTH {yyerror (" NEW attendu on line : "); YYABORT}
                                |NEW error OPEN_PARENTH CLOSED_PARENTH {yyerror (" identifier attendu on line : "); YYABORT}
                                |NEW identifier error CLOSED_PARENTH {yyerror (" OPEN_PARENTH attendu on line : "); YYABORT}
                                |NEW identifier OPEN_PARENTH error {yyerror (" CLOSED_PARENTH attendu on line : "); YYABORT}
                                
                                |NOT EXPRESSION  { printf("***expression avec operateur non valide***.\n"); }
                                |NOT error {yyerror (" EXPRESSION attendu on line : "); YYABORT}
                                |OPEN_PARENTH EXPRESSION CLOSED_PARENTH  { printf("***expression entre parentheses valide***.\n"); }
                                |error EXPRESSION CLOSED_PARENTH {yyerror (" OPEN_PARENTH attendu on line : "); YYABORT}
                                |OPEN_PARENTH error CLOSED_PARENTH {yyerror (" EXPRESSION attendu on line : "); YYABORT}
                                |OPEN_PARENTH EXPRESSION error {yyerror (" CLOSED_PARENTH attendu on line : "); YYABORT}
                                ;


%% 

int yyerror(char const *msg) {
       
	
	fprintf(stderr, "%s %d\n", msg,yylineno);
	return 0;
	
	
}

extern FILE *yyin;

int main()
{
 yyparse();
 
 
}

  
                   
