/*
** EPITECH PROJECT, 2020
** CPOOL
** File description:
** menger
*/

#include <stdint.h>
#include <stdio.h>
#include "menger.h"

static void conditional_call(
    uint32_t mid,
    uint32_t level,
    coords_t coords,
    coords_t iteration)
{
    if (iteration.x != 1 || iteration.y != 1)
        menger(
            mid,
            level - 1,
            (coords_t) {
                coords.x + (mid * iteration.x),
                coords.y + (mid * iteration.y)
            }
        );
}

void menger(uint32_t size, uint32_t level, coords_t coords)
{
    int mid = size / 3;

    if (level == 0)
        return;
    printf(
        "%.3d %.3d %.3d\n",
        mid,
        coords.x + mid,
        coords.y + mid
    );
    for (int x = 0; x < 3; x++)
        for (int y = 0; y < 3; y++)
            if (x != 1 || y != 1)
                conditional_call(
                    mid,
                    level,
                    coords,
                    (coords_t) {x, y}
                );
}