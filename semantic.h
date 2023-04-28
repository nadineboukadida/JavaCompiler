#include "stdio.h"
#include <stdlib.h>
#include <string.h>

typedef enum
{
    variable,
    parametre,
    procedure
} CLASSE;

typedef enum
{
    tChar,
    tShort,
    tInt,
    tLong,
    tFloat,
    tDouble,
    tPointeur,
    tTableau,
    tFonction,
    tStructure
} TYPE_IDENTIFIER;

struct ENTREE_DICO
{
    char *identif;
    TYPE_IDENTIFIER type;
    CLASSE classe;
    int isInit;
    int isUsed;
    int nbParam;
};

typedef struct ENTREE_DICO *ENTREE_DICO;

struct NOEUD
{
    ENTREE_DICO info;
    struct NOEUD *suivant, *precedent;
};

typedef struct NOEUD *NOEUD;

NOEUD creer(const char *nom, TYPE_IDENTIFIER type, CLASSE classe, NOEUD suivant);
NOEUD insert(NOEUD noeud, NOEUD table);
NOEUD rechercher(const char *nom, NOEUD table, int classe);
void checkVariable(char *identif, int classe);
void checkParam(char *identif);
void enterFunction();
void closeFunction();
void destructTable(NOEUD table);
void checkIdentifier(char *nom, int classe);
bool checkInit(char *identif, NOEUD table);
void init_helper(char *identif, NOEUD table);
void initVariable(char *identif);
