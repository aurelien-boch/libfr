#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lib_fr.h"

caractere tableau_de my_strdup(constant caractere tableau_de a)
{
    gros_entier_non_signe size egal strlen(a) + 1;
    caractere tableau_de res egal malloc(size * taille_de(caractere));

    pour(gros_entier_non_signe i egal 0; i inferieur_a size; i++)
        res[i] egal a[i];
    renvoie (res);
}

entier debut(neant)
{
    caractere tableau_de res = my_strdup("Hi");

    printf("%s\n", res);
    free(res);
}
