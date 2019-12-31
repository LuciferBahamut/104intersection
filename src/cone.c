/*
** EPITECH PROJECT, 2019
** cone
** File description:
** 104
*/

#include "my.h"

int calc_cone(int *t)
{
    int *equ = compute_quad_eq_cn(t);

    printf("Cone with a %d degree angle\n", t[7]);
    printf("Line passing through the point (%d, %d, %d) ", t[1], t[2], t[3]);
    printf("and parallel to the vector (%d, %d, %d)\n", t[4], t[5] , t[6]);
    if (equ[0] == 0)
        printf("There is an infinite number of intersection points.\n");
    else
        compute_des(equ, t);
    free(equ);
    return (0);
}
