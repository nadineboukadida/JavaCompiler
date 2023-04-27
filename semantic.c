#include "semantic.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

NOEUD table_global, table_local;
int insideFunc = 0;
NOEUD creer(const char *identif, TYPE_IDENTIFIER type, CLASSE classe, NOEUD suivant)
{
    NOEUD noeud = (NOEUD)malloc(sizeof(struct NOEUD));
    ENTREE_DICO info = (ENTREE_DICO)malloc(sizeof(struct ENTREE_DICO));
    info->identif = (char *)malloc(strlen(identif));
    strcpy(info->identif, identif);
    info->type = type;
    info->isUsed = 0;
    info->isInit = 0;
    info->classe = classe;
    noeud->info = info;
    noeud->suivant = suivant;
    return noeud;
}

NOEUD insert(NOEUD noeud, NOEUD table)
{
    if (!table)
    {
        return noeud;
    }
    else
    {
        NOEUD last = table;
        while (last->suivant)
        {
            last = last->suivant;
        }
        last->suivant = noeud;

        return table;
    }
}

NOEUD rechercher(const char *identif, NOEUD table)
{
    if (!table)
        return NULL;
    NOEUD noeud = table;
    while (noeud)
    {
        if (strcmp(identif, noeud->info->identif) == 0)
        {
            return noeud;
        }
        noeud = noeud->suivant;
    }
    return NULL;
}

void checkVariable(char *identif, int classe)
{
    printf("---------------------------The identifier is: %s\n", identif);
    printf("---------------------------classe: %d\n", classe);
    printf("---------------------------insideFunc: %d\n", insideFunc);

    if (classe == 0)
    {
        // classe == 0 => variable: local/global
        if (insideFunc == 1)
        {
            // inside a function

            if (rechercher(identif, table_local))
            {
                printf("\x1b[31mvariable identifier already defined: %s\x1b[0m\n", identif);
                abort();
            }
            else
            {
                printf("\033[34mCreating new variable: %s\033[0m\n", identif);

                NOEUD noeud = creer(identif, tInt, variable, NULL);
                table_local = insert(noeud, table_local);
            }
        }
        else
        {
            // global
            if (rechercher(identif, table_global))
            {
                printf("-------------------------variable identifier already defined: ", identif);
            }
            else
            {
                NOEUD noeud = creer(identif, tInt, variable, NULL);
                table_global = insert(noeud, table_global);
            }
        }
    }
    else if (classe == 1)
    {
        /// insideFunc = 1;
    }
    else
    {
    }
}

void enterFunction()
{
    printf("\x1b[33mEntered Function\x1b[0m\n");
    insideFunc = 1;
}

void closeFunction()
{
    printf("\x1b[33mExited Function\x1b[0m\n");
    table_local = NULL;
    insideFunc = 0;
}

void checkParam(char *identif)
{
    if (insideFunc == 1)
    {
        // inside a function
        if (rechercher(identif, table_local))
        {
            printf("variable identifier already defined: ", identif);
        }
        else
        {
            NOEUD noeud = creer(identif, tInt, parametre, NULL);
            table_local = insert(noeud, table_local);
        }
    }
}