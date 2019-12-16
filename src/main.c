/*
** EPITECH PROJECT, 2019
** main
** File description:
** 104
*/

#include "my.h"

int main(int ac, char **av)
{
    if (error_handling(ac, av) == 1)
        return (84);
    if (av[1][0] == '-' && av[1][1] == 'h')
        display_help();
    return (0);
}
