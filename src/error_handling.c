/*
** EPITECH PROJECT, 2019
** error_handling
** File description:
** 104
*/

int error_handling(int ac, char **av)
{
    if (ac == 2 || ac == 9)
        return (0);
    else
        return (1);
}
