
/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** 103architect
*/

#ifndef MY_H_
#define MY_H_

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int error_handling(int ac, char **av);
void display_help(void);
int calc_sphere(int *t);
int calc_cylinder(int *t);
int calc_cone(int *t);

#endif
