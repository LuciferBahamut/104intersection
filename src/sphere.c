/*
** EPITECH PROJECT, 2019
** sphere
** File description:
** 104
*/

#include "my.h"

int calc_sphere(int *t)
{
    float *equ = compute_quad_eq_s(t);

    printf("Sphere of radius %d\n", t[7]);
    printf("Line passing through the point (%d, %d, %d) ", t[1], t[2], t[3]);
    printf("and parallel to the vector (%d, %d, %d)\n", t[4], t[5], t[6]);
    compute_des(equ, t);
    free(equ);
    return (0);
}
