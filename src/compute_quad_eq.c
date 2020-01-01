/*
** EPITECH PROJECT, 2019
** compute quad eq
** File description:
** 104
*/

#include "my.h"

float *compute_quad_eq_s(int *t)
{
    float *res = malloc(3 * sizeof(int));

    res[0] = pow(t[4], 2) + pow(t[5], 2) + pow(t[6], 2);
    res[1] = ((t[1] * t[4]) + (t[2] * t[5]) + (t[3] * t[6])) * 2;
    res[2] = pow(t[1], 2) + pow(t[2], 2) + pow(t[3], 2) - pow(t[7], 2);
    return (res);
}

float *compute_quad_eq_c(int *t)
{
    float *res = malloc(3 * sizeof(int));

    res[0] = pow(t[4], 2) + pow(t[5], 2);
    res[1] = ((t[1] * t[4]) + (t[2] * t[5])) * 2;
    res[2] = pow(t[1], 2) + pow(t[2], 2) - pow(t[7], 2);
    return (res);
}

float *compute_quad_eq_cn(int *t)
{
    float *res = malloc(3 * sizeof(int));
    float angle = (t[7] * PI) / 180;
    float r = pow(tan(angle), 2);

    res[0] = pow(t[4], 2) + pow(t[5], 2) - (pow(t[6], 2) * r);
    res[1] = (2 * t[1] * t[4]) + (2 * t[2] * t[5]) - ((2 * t[3] * t[6]) * r);
    res[2] = pow(t[1], 2) + pow(t[2], 2) - (pow(t[3], 2) * r);
    return (res);
}
