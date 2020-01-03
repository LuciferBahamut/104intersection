/*
** EPITECH PROJECT, 2020
** intersection
** File description:
** 104
*/

#include "my.h"

int intersection(int ac, char **av)
{
    int *list = malloc((ac - 1) * sizeof(int));

    for (int i = 1; i < ac; i++)
        list[i - 1] = atoi(av[i]);
    if (list[0] == 1)
        calc_sphere(list);
    if (list[0] == 2)
        calc_cylinder(list);
    if (list[0] == 3)
        calc_cone(list);
    free(list);
    return (0);
}
