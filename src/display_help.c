/*
** EPITECH PROJECT, 2019
** display_help
** File description:
** 104
*/

#include "my.h"

void display_help(void)
{
    printf("USAGE\n");
    printf("   ./104intersection opt xp yp zp xv yv zv p\n");
    printf("\nDESCRIPTION\n");
    printf("    opt\t\t\tsurface option: 1 for a sphere, 2 for a cylinder,");
    printf(" 3 for a cone\n");
    printf("    (xp, yp, zp)\tcoordinates of a point by which the light");
    printf(" ray passes through\n");
    printf("    (xv, yv, zv)\tcoordinates of a vector parallel");
    printf("to the light ray\n");
    printf("    p\t\t\tparameter: radius of the sphere,");
    printf(" radius of the cylinder, or\n");
    printf("     \t\t\tangle formed by the cone and the Z-axis\n");
}
