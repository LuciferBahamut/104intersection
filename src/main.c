/*
** EPITECH PROJECT, 2019
** main
** File description:
** 104
*/

#include "my.h"

int main(int ac, char **av)
{
    // CORRUPTION DE MEMOIRE !!!
//    int *list = malloc(ac - 1);
    if (error_handling(ac, av) == 1)
        return(84);
    if (av[1][0] == '-' && av[1][1] == 'h') {
        display_help();
        return (0);
    }
//    for (int i = 1; i < ac; i++)
//        list[i - 1] = atoi(av[i]);
//    printf("%d\n", list[0]);
//    printf("%d\n", list[1]);
//    printf("%d\n", list[2]);
//    printf("%d\n", list[3]);
//    printf("%d\n", list[4]);
//    printf("%d\n", list[5]);
//    printf("%d\n", list[6]);
//    printf("%d\n", list[7]);
//    free(list);
    return (0);
}
