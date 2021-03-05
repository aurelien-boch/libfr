/*
** EPITECH PROJECT, 2021
** 
** File description:
** 
*/

#ifndef LIB_FR_H
#define LIB_FR_H

// --- types ---

#include <stdbool.h>

typedef float           flottant;
typedef double          gros_flottant;
typedef long            gros_entier;
typedef int             entier;
typedef short           court;
typedef char            caractere;
typedef void            neant;
typedef bool            booleen;

typedef unsigned long   gros_entier_non_signe;
typedef unsigned int    entier_non_signe;
typedef unsigned short  court_non_signe;
typedef unsigned char   caractere_non_signe;

typedef long long       tres_gros_entier;
typedef long double     tres_gros_flottant;

#define vrai true
#define faux false

// --- fonctions ---
#define DEBUT_1_ARG(ac) main(ac)
#define DEBUT_2_ARGS(ac, av) main(ac, av)
#define DEBUT_3_ARGS(ac, av, env) main(ac, av, env)

#define MAIN_4_ARGS(arg1, arg2, arg3, arg4, ...) arg4

#define MAIN_MACRO_CHOOSER(...) \
            MAIN_4_ARGS(        \
                __VA_ARGS__,    \
                DEBUT_3_ARGS,   \
                DEBUT_2_ARGS,   \
                DEBUT_1_ARG,    \
            )

#define debut(...) MAIN_MACRO_CHOOSER(__VA_ARGS__)(__VA_ARGS__)

// --- instructions ---
#define si(...) if (__VA_ARGS__)
#define sinon else
#define pour(...) for (__VA_ARGS__)
#define tant_que(...) while (__VA_ARGS__)
#define fait do

// --- mot clés --
#define registre register
#define constant const
#define statique static
#define en_une_ligne inline
#define renvoie return
#define taille_de(...) sizeof(__VA_ARGS__)
#define structure struct
#define definir_type typedef
#define dans_le switch
#define cas_de case
#define tableau_de *
#define dereferencer *
#define referencer &
#define plus +
#define moins -
#define diviser_par /
#define multiplier_par *
#define modulo_de %

// --- CONSTS ---

#define nul NULL


// --- OPERATEURS ---

#define egal =
#define egal_a ==
#define pas_egal_a !=
#define inferieur_a <
#define superieur_a >
#define inferieur_ou_egal_a <=
#define superieur_ou_egal_a >=
#define pas !
#define et &&
#define ou ||
#define et_binaire &
#define ou_binaire |
#define ou_exclusif ^


#endif //LIB_FR_H
