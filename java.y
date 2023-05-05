%{
	
    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    #include <stdbool.h>
    #include "semantic.c"
    #include "generator.c"

int yyerror(char const *msg);	
int yylex(void);
extern int yylineno;
char nom[256];
char nomID[256];
#define YYSTYPE char*
extern char *yytext;
int indexIf;
int indexWhile1;
int indexWhile2;
char oper[10];
void EndCodeGen();
void BeginCodeGen();
int val;
char op[256];

%}

%token  PROGRAM 
%token  point_virgule
%token  identifier
%token  OPER
%token  THIS
%token  NEW
%token  INT
%token  OPEN_BRACKET
%token  CLOSED_BRACKET
%token  OPEN_PARENTH
%token  CLOSED_PARENTH
%token  NOT
%token  INTEGER_LITERAL
%token  BOOLEAN_LITERAL
%token  LENGTH
%token  DOT
%token  AESTRIK
%token  COMMA
%token  QMARK
%token  OPEN_CURLY                                  
%token  CLOSE_CURLY                                  
%token  IF                                            
%token  ELSE                           
%token  WHILE                           
%token  PRINT                                        
%token  AFFECT       
%token  BOOLEAN      
%token  RETURN                      
%token  PUBLIC                      
%token  STRING
%token  EXTENDS
%token  CLASS
%token  STATIC
%token  VOID
%token  MAIN
%token  ADD
%token  SUB


 
/*%error-verbose*/
%start programme


%%
programme :              CLASS_DECLARATION {genererCode();}

MAINCLASS              : CLASS identifier OPEN_CURLY PUBLIC STATIC VOID MAIN OPEN_PARENTH STRING OPEN_BRACKET CLOSED_BRACKET identifier  CLOSED_PARENTH OPEN_CURLY CLOSE_CURLY CLOSE_CURLY { printf("***EMPTY MAIN CLASS DECLARED***.\n"); }
                        |CLASS identifier OPEN_CURLY PUBLIC STATIC VOID MAIN OPEN_PARENTH STRING OPEN_BRACKET CLOSED_BRACKET identifier  CLOSED_PARENTH OPEN_CURLY STATEMENT CLOSE_CURLY CLOSE_CURLY { printf("***MAIN CLASS DECLARED***.\n"); }
                        |CLASS error OPEN_CURLY PUBLIC STATIC VOID MAIN OPEN_PARENTH STRING OPEN_BRACKET CLOSED_BRACKET identifier  CLOSED_PARENTH OPEN_CURLY STATEMENT CLOSE_CURLY CLOSE_CURLY  {yyerror (" identifier attendu on line : "); YYABORT}
                        |CLASS identifier error PUBLIC STATIC VOID MAIN OPEN_PARENTH STRING OPEN_BRACKET CLOSED_BRACKET identifier  CLOSED_PARENTH OPEN_CURLY STATEMENT CLOSE_CURLY CLOSE_CURLY  {yyerror (" OPEN_CURLY attendu on line : "); YYABORT}
                        |CLASS identifier OPEN_CURLY PUBLIC STATIC VOID MAIN error STRING OPEN_BRACKET CLOSED_BRACKET identifier  CLOSED_PARENTH OPEN_CURLY STATEMENT CLOSE_CURLY CLOSE_CURLY  {yyerror (" OPEN_PARENTH attendu on line : "); YYABORT}
                        |CLASS identifier OPEN_CURLY PUBLIC STATIC VOID MAIN OPEN_PARENTH error OPEN_BRACKET CLOSED_BRACKET identifier  CLOSED_PARENTH OPEN_CURLY STATEMENT CLOSE_CURLY CLOSE_CURLY  {yyerror (" STRING attendu on line : "); YYABORT}
                        |CLASS identifier OPEN_CURLY PUBLIC STATIC VOID MAIN OPEN_PARENTH STRING error identifier  CLOSED_PARENTH OPEN_CURLY STATEMENT CLOSE_CURLY CLOSE_CURLY  {yyerror (" BRACKETs attendu on line : "); YYABORT}
                        |CLASS identifier OPEN_CURLY PUBLIC STATIC VOID MAIN OPEN_PARENTH STRING error CLOSED_BRACKET identifier  CLOSED_PARENTH OPEN_CURLY STATEMENT CLOSE_CURLY CLOSE_CURLY  {yyerror (" OPEN_BRACKET attendu on line : "); YYABORT}
                        |CLASS identifier OPEN_CURLY PUBLIC STATIC VOID MAIN OPEN_PARENTH STRING OPEN_BRACKET error identifier  CLOSED_PARENTH OPEN_CURLY STATEMENT CLOSE_CURLY CLOSE_CURLY  {yyerror (" CLOSED_BRACKET attendu on line : "); YYABORT}
                        |CLASS identifier OPEN_CURLY PUBLIC STATIC VOID MAIN OPEN_PARENTH STRING OPEN_BRACKET CLOSED_BRACKET error  CLOSED_PARENTH OPEN_CURLY STATEMENT CLOSE_CURLY CLOSE_CURLY  {yyerror (" identifier attendu on line : "); YYABORT}
                        |CLASS identifier OPEN_CURLY PUBLIC STATIC VOID MAIN OPEN_PARENTH STRING OPEN_BRACKET CLOSED_BRACKET identifier error OPEN_CURLY STATEMENT CLOSE_CURLY CLOSE_CURLY  {yyerror (" CLOSED_PARENTH attendu on line : "); YYABORT}
                        |CLASS identifier OPEN_CURLY PUBLIC STATIC VOID MAIN OPEN_PARENTH STRING OPEN_BRACKET CLOSED_BRACKET identifier  CLOSED_PARENTH error STATEMENT CLOSE_CURLY CLOSE_CURLY  {yyerror (" OPEN_CURLY attendu on line : "); YYABORT}
                        |CLASS identifier OPEN_CURLY PUBLIC STATIC VOID MAIN OPEN_PARENTH STRING OPEN_BRACKET CLOSED_BRACKET identifier  CLOSED_PARENTH OPEN_CURLY STATEMENT error CLOSE_CURLY  {yyerror (" main class: CLOSE_CURLY attendu on line : "); YYABORT}



CLASS_DECLARATION     :  CLASS identifier OPEN_CURLY  CLOSE_CURLY { printf("***IDENTIFY EMPTY CLASS WITHOUT EXTENDS***.\n");}
                        |error identifier OPEN_CURLY  {yyerror (" CLASS keyword attendu on line : "); YYABORT}
                        |CLASS identifier OPEN_CURLY  VAR_DECLARATIONS CLOSE_CURLY { printf("***1- IDENTIFY  CLASS WITHOUT EXTENDS***.\n"); }
                        |CLASS identifier EXTENDS identifier OPEN_CURLY  VAR_DECLARATIONS METHOD_DECLARATIONS CLOSE_CURLY { printf("***IDENTIFY CLASS WITH EXTENDS***.\n"); }
                        | CLASS identifier OPEN_CURLY  VAR_DECLARATIONS METHOD_DECLARATIONS CLOSE_CURLY { printf("***2- IDENTIFY CLASS WITHOUT EXTENDS***.\n"); }
                        | CLASS identifier OPEN_CURLY STATEMENT CLOSE_CURLY { printf("***3-IDENTIFY CLASS WITHOUT EXTENDS***.\n"); }
                        | CLASS identifier OPEN_CURLY METHOD_DECLARATIONS CLOSE_CURLY { printf("***IDENTIFY  CLASS WITHOUT EXTENDS***.\n"); }
                        | CLASS error OPEN_CURLY VAR_DECLARATIONS METHOD_DECLARATIONS CLOSE_CURLY {yyerror (" identifier attendu on line : "); YYABORT}
                        | CLASS identifier error VAR_DECLARATIONS METHOD_DECLARATIONS CLOSE_CURLY {yyerror (" OPEN_CURLY attendu on line : "); YYABORT}
                    
                    ;
CLASS_DECLARATIONS      : CLASS_DECLARATION
                        | CLASS_DECLARATION CLASS_DECLARATIONS
                    ;

VAR_DECLARATIONS      : TYPE identifier TYPE_OPT       
                        |VAR_DECLARATIONS TYPE identifier TYPE_OPT; 

ARGUMENTS               :TYPE {checkVariable(nomID,1)}  identifier 
                        |ARGUMENTS COMMA TYPE  identifier {checkVariable(nomID,1)}
                        ;
                        
METHOD_DECLARATION      :       PUBLIC TYPE {checkVariable(nomID,2)} identifier OPEN_PARENTH ARGUMENTS CLOSED_PARENTH {enterFunction()} OPEN_CURLY VAR_DECLARATIONS STATEMENTLIST RETURN EXPRESSION point_virgule {closeFunction()} CLOSE_CURLY  { printf("***METHOD DECLARED***.\n"); }
                    
                                
METHOD_DECLARATIONS         :   METHOD_DECLARATION
                                |METHOD_DECLARATION METHOD_DECLARATIONS ;


TYPE                    :   INT {changeCurrentType(0);}  
                            |BOOLEAN {changeCurrentType(1);}  
                            |INT error CLOSED_BRACKET {yyerror (" OPEN_BRACKET attendu on line : "); YYABORT}
                            |INT OPEN_BRACKET error {yyerror (" CLOSED_BRACKET attendu on line : "); YYABORT}
      
                        ; 
TYPE_OPT                :         AFFECT var_type point_virgule 
                                |{checkVariable(nomID,0)}point_virgule ;
var_type                :       {checkType(1);checkVariable(nomID,0),initVariable(nomID)}BOOLEAN_LITERAL
                                |{checkType(0);checkVariable(nomID,0),initVariable(nomID)}INTEGER_LITERAL;


statement_type                :  {checkIdentifier(nomID,0,1)}BOOLEAN_LITERAL
                                |{checkIdentifier(nomID,0,0)}INTEGER_LITERAL;
                                                                                                                       
STATEMENT               :       identifier AFFECT {tabCodeInt[indextab]=creerOp("STORE",getAddress(nomID,table_local));indextab++;} EXPRESSION point_virgule
                                |IF OPEN_PARENTH EXPRESSION CLOSED_PARENTH  {tabCodeInt[indextab]=creerCode("SIFAUX");indexIf=indextab;indextab++;}
                                  OPEN_CURLY  STATEMENT CLOSE_CURLY {tabCodeInt[indextab]=creerCode("SAUT");indextab++;tabCodeInt[indexIf].operande=indextab;indexIf=indextab-1;}
                                  ELSE OPEN_CURLY STATEMENT CLOSE_CURLY {tabCodeInt[indexIf].operande=indextab;}
                                |WHILE OPEN_PARENTH EXPRESSION CLOSED_PARENTH STATEMENT { printf("***WHILE STATEMENT***.\n"); }
                                |WHILE error EXPRESSION CLOSED_PARENTH STATEMENT {yyerror (" OPEN_PARENTH attendu on line : "); YYABORT}
                                |WHILE OPEN_PARENTH error CLOSED_PARENTH STATEMENT {yyerror (" EXPRESSION attendu on line : "); YYABORT}
                                |WHILE OPEN_PARENTH EXPRESSION error STATEMENT {yyerror (" CLOSED_PARENTH attendu e on line : "); YYABORT}
                                |WHILE OPEN_PARENTH EXPRESSION CLOSED_PARENTH error {yyerror (" STATEMENT attendu on line : "); YYABORT}

                                |PRINT OPEN_PARENTH EXPRESSION CLOSED_PARENTH point_virgule { printf("***PRINT STATEMENT***.\n"); }
                                |PRINT error EXPRESSION CLOSED_PARENTH point_virgule {yyerror (" OPEN_PARENTH attendu on line : "); YYABORT}
                                |PRINT OPEN_PARENTH error CLOSED_PARENTH point_virgule {yyerror (" EXPRESSION attendu on line : "); YYABORT}
                                |PRINT OPEN_PARENTH EXPRESSION error point_virgule {yyerror (" CLOSED_PARENTH attendu a on line : "); YYABORT}
                                |PRINT OPEN_PARENTH EXPRESSION CLOSED_PARENTH error {yyerror (" 2222222point_virgule attendu on line : "); YYABORT}
STATEMENTLIST :             STATEMENT 
                            |STATEMENT STATEMENTLIST;

EXPRESSION             :        {checkIdentifier(nomID,0,-1)} identifier 
                                |statement_type 
                                |EXPRESSION ADD EXPRESSION {tabCodeInt[indextab]=creerCode(op);indextab++;}
                                |EXPRESSION SUB EXPRESSION {tabCodeInt[indextab]=creerCode(op);indextab++;}
                                |EXPRESSION AESTRIK EXPRESSION{tabCodeInt[indextab]=creerCode(op);indextab++;}
                                |EXPRESSION OPER EXPRESSION {tabCodeInt[indextab]=creerCode(op);indextab++;}
                                |EXPRESSION OPEN_BRACKET EXPRESSION CLOSED_BRACKET   { printf("***expression avec accees par cle***.\n"); }
                                |EXPRESSION OPEN_BRACKET EXPRESSION error {yyerror (" CLOSED_BRACKET attendu on line : "); YYABORT}
                                |EXPRESSION OPEN_BRACKET error CLOSED_BRACKET {yyerror (" EXPRESSION attendu on line : "); YYABORT}
                                |EXPRESSION DOT LENGTH   { printf("***access longeur valide***.\n"); }
                                |EXPRESSION error LENGTH {yyerror (" DOT attendu on line : "); YYABORT}
                                |EXPRESSION DOT error {yyerror (" LENGTH attendu on line : "); YYABORT}
                                |INTEGER_LITERAL {tabCodeInt[indextab]=creerOp("LDC",val);indextab++;}
                                |BOOLEAN_LITERAL

                                |THIS 
                                |NEW INT  OPEN_BRACKET EXPRESSION CLOSED_BRACKET  { printf("***instanciation int valide***.\n"); }
                                |NEW error  OPEN_BRACKET EXPRESSION CLOSED_BRACKET {yyerror (" INT attendu on line : "); YYABORT}
                                |NEW INT  error EXPRESSION CLOSED_BRACKET {yyerror (" OPEN_BRACKET attendu on line : "); YYABORT}
                                |NEW INT  OPEN_BRACKET error CLOSED_BRACKET {yyerror (" EXPRESSION attendu on line : "); YYABORT}
                                |NEW INT  OPEN_BRACKET EXPRESSION error {yyerror (" CLOSED_BRACKET attendu on line : "); YYABORT}

                                |NEW identifier OPEN_PARENTH CLOSED_PARENTH  { printf("***instanciation classe valide***.\n");}
                                |NEW error OPEN_PARENTH CLOSED_PARENTH {yyerror (" identifier attendu on line : "); YYABORT}
                                |NEW identifier error CLOSED_PARENTH {yyerror (" OPEN_PARENTH attendu on line : "); YYABORT}
                                |NEW identifier OPEN_PARENTH error {yyerror (" CLOSED_PARENTH attendu b on line : "); YYABORT}
                                
                                |NOT EXPRESSION  { printf("***expression avec operateur non valide***.\n"); }
                                |NOT error {yyerror (" EXPRESSION attendu on line : "); YYABORT}
                                |OPEN_PARENTH EXPRESSION CLOSED_PARENTH  { printf("***expression entre parentheses valide***.\n"); }
                                |OPEN_PARENTH error CLOSED_PARENTH {yyerror (" EXPRESSION attendu on line : "); YYABORT}
                                |OPEN_PARENTH EXPRESSION error {yyerror (" CLOSED_PARENTH attendu c on line : "); YYABORT}
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
  
                   
