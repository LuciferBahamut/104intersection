/*
** EPITECH PROJECT, 2019
** compute equa
** File description:
** 104
*/

#include "my.h"

void compute_equa_sol1(float t, int *list)
{
    float x = list[1] + (t * list[4]);
    float y = list[2] + (t * list[5]);
    float z = list[3] + (t * list[6]);

    printf("(%.3f, %.3f, %.3f)\n", x, y, z);
}

void compute_equa_sol2(float t, float t2, int *list)
{
    float x = list[1] + (t * list[4]);
    float y = list[2] + (t * list[5]);
    float z = list[3] + (t * list[6]);
    float x2 = list[1] + (t2 * list[4]);
    float y2 = list[2] + (t2 * list[5]);
    float z2 = list[3] + (t2 * list[6]);

    printf("(%.3f, %.3f, %.3f)\n", x, y, z);
    printf("(%.3f, %.3f, %.3f)\n", x2, y2, z2);
}
