/*
** EPITECH PROJECT, 2019
** main
** File description:
** 104
*/

#include "my.h"

int main(int ac, char **av)
{
    int *list = malloc((ac - 1) * sizeof(int));

    if (error_handling(ac, av) == 1)
        return(84);
    if (av[1][0] == '-' && av[1][1] == 'h') {
        display_help();
        return (0);
    }
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
