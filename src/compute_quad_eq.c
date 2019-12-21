/*
** EPITECH PROJECT, 2019
** compute quad eq
** File description:
** 104
*/

#include "my.h"

int *compute_quad_eq(int *t)
{
    int *res = malloc(3 * sizeof(int));

    res[0] = pow(t[4], 2) + pow(t[5], 2) + pow(t[6], 2);
    res[1] = ((t[1] * t[4]) + (t[2] * t[5]) + (t[3] * t[6])) * 2;
    res[2] = pow(t[1], 2) + pow(t[2], 2) + pow(t[3], 2) - pow(t[7], 2);
    return (res);
}
