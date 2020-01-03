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
int intersection(int ac, char **av);
int calc_sphere(int *t);
int calc_cylinder(int *t);
int calc_cone(int *t);
void compute_equa_sol1(float t, int *list);
void compute_equa_sol2(float t, float t2, int *list);
void compute_des(float *equa, int *list);
float *compute_quad_eq_s(int *t);
float *compute_quad_eq_c(int *t);
float *compute_quad_eq_cn(int *t);

#endif
