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

NOEUD rechercher(const char *identif, NOEUD table, int classe)
{
    if (!table)
        return NULL;
    NOEUD noeud = table;
    while (noeud)
    {
        if (strcmp(identif, noeud->info->identif) == 0 && classe == noeud->info->classe)
        {
            return noeud;
        }
        noeud = noeud->suivant;
    }
    return NULL;
}

void checkVariable(char *identif, int classe)
{
    if (classe == 0)
    {
        // classe == 0 => variable: local/global
        if (insideFunc == 1)
        {
            // inside a function

            if (rechercher(identif, table_local, variable))
            {
                printf("\x1b[31mvariable identifier already defined: %s\x1b[0m\n", identif);
                abort();
            }
            else
            {
                printf("\033[34mCreating new PRIVATE variable: %s\033[0m\n", identif);

                NOEUD noeud = creer(identif, tInt, variable, NULL);
                table_local = insert(noeud, table_local);
            }
        }
        else
        {
            // global
            if (rechercher(identif, table_global, variable))
            {
                printf("\x1b[31m Global variable identifier already defined: %s\x1b[0m\n", identif);
            }
            else
            {
                printf("\033[34mCreating new GLOBAL variable: %s\033[0m\n", identif);
                NOEUD noeud = creer(identif, tInt, variable, NULL);
                table_global = insert(noeud, table_global);
            }
        }
    }
    else if (classe == 1)
    {
        // argument name

        if (rechercher(identif, table_local, parametre))
        {
            printf("\x1b[31m Argument identifier already defined: %s\x1b[0m\n", identif);
            abort();
        }
        else
        {
            printf("\033[34m Creating new Argument: %s\033[0m\n", identif);

            NOEUD noeud = creer(identif, tInt, parametre, NULL);
            table_local = insert(noeud, table_local);
        }
    }
    else
    {
        // function name

        if (rechercher(identif, table_global, procedure))
        {
            printf("\x1b[31m Function identifier already defined: %s\x1b[0m\n", identif);
        }
        else
        {
            NOEUD noeud = creer(identif, tInt, procedure, NULL);
            table_global = insert(noeud, table_global);
        }
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

void init_helper(char *identif, NOEUD table)
{
    NOEUD noeud = table;
    while (noeud)
    {
        if (strcmp(identif, noeud->info->identif) == 0)
        {
            noeud->info->isInit = 1;
        }
        noeud = noeud->suivant;
    }
}
void initVariable(char *identif)
{
    if (insideFunc == 1)
    {
        init_helper(identif, table_local);
    }
    else
    {
        init_helper(identif, table_global);
    }
}
bool checkInit(char *identif, NOEUD table)
{
    if (!table)
        return NULL;
    NOEUD noeud = table;
    while (noeud)
    {
        if (strcmp(identif, noeud->info->identif) == 0)
        {
            return noeud->info->isInit;
        }
        noeud = noeud->suivant;
    }
    return false;
}

void checkIdentifier(char *identif, int classe)
{

    if (classe == 0)
    {
        printf("\033[34m --------- Checking identifier --------- \033[0m\n");

        if (insideFunc == 1)
        {
            if (rechercher(identif, table_local, classe))
            {
                if (checkInit(identif, table_local))
                {
                    printf("\033[32m Variable initialised %s\033[0m\n", identif);
                }
                else
                {
                    printf("\x1b[31m variable NOT initialised: %s\x1b[0m\n", identif);
                }
            }
            else
            {
                printf("\x1b[31m identifier NOT defined: %s\x1b[0m\n", identif);
            }
        }
        else
        {
            if (rechercher(identif, table_global, classe))
            {

                if (checkInit(identif, table_global))
                {
                    printf("\033[32m Variable initialised %s\033[0m\n", identif);
                }
                else
                {
                    printf("\x1b[31m variable NOT initialised: %s\x1b[0m\n", identif);
                }
            }
        }

        // }
        // else if (classe==1){

        // }else {
    }
}
