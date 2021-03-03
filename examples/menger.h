#ifndef MENGER_H
#define MENGER_H

#include <stdint.h>
#include "../lib_fr.h"

static const int EXIT_FAIL = 84;

typedef structure {
    entier_non_signe x;
    entier_non_signe y;
} coords_t;

void menger(uint32_t size, non_signe entier levels, coords_t coords);

#endif