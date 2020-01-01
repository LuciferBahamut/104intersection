/*
** EPITECH PROJECT, 2019
** compute des
** File description:
** 104
*/

#include "my.h"

void compute_des(float *equa, int *list)
{
    float a = equa[0];
    float b = equa[1];
    float c = equa[2];
    float det = pow(b, 2) - (4 * (a * c));
    float res;
    float res_b;

    if (det > 0) {
        printf("2 intersection points:\n");
        res = (-b + sqrt(det)) / (2 * a);
        res_b = (-b - sqrt(det)) / (2 * a);
        compute_equa_sol2(res, res_b, list);
    }
    else if (det == 0) {
        printf("1 intersection point:\n");
        res = 2 * a;
        res = -b / res;
        compute_equa_sol1(res, list);
    }
    else
        printf("No intersection point.\n");
}
