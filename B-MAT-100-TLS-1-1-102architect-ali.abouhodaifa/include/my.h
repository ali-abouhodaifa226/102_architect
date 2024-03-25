/*
** EPITECH PROJECT, 2023
** my.h
** File description:
** my.h
*/

#ifndef MY_H_
    #define MY_H_

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void display_help(void);
int error_handling(int ac, char **av);
void final_architech(float **f, float a, float b);
float **mult_architech(float **f, float **m);
float **matrixgest(float **r, float a, float b, int f);
float **create_matrix_e(void);
void print_matrix_steps(char **str, int size);

#endif
