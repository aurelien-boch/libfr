#include <stdio.h>
#include "lib_fr.h"

gros_entier_non_signe my_strlen(constant caractere tableau_de a)
{
    gros_entier_non_signe res egal 0;

    pour (; a[res] pas_egal_a '\0'; res++);
    renvoie (res);
}

entier debut(neant)
{
    printf("%lu\n", my_strlen("123"));
    printf("%lu\n", my_strlen(""));
}
