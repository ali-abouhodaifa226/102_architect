/*
** EPITECH PROJECT, 2023
** display_help.c
** File description:
** display_help.c
*/

#include "my.h"

void print_matrix_steps(char **str, int size)
{
    float a;
    float b;

    for (int i = 2; i < size; i++) {
        if (str[i][0] == '-' && str[i][1] == 't') {
            a = atof(str[i + 1]);
            b = atof(str[i + 2]);
            printf("Translation along vector (%.0f, %.0f)\n", a, b);
        }
        if (str[i][0] == '-' && str[i][1] == 'z') {
            a = atof(str[i + 1]);
            b = atof(str[i + 2]);
            printf("Scaling by factors %.0f and %.0f\n", a, b);
        }
        if (str[i][0] == '-' && str[i][1] == 's') {
            a = atof(str[i + 1]);
            printf("Reflection over an axis with an inclination angle of ");
            printf("%.0f degrees\n", a);
        }
        if (str[i][0] == '-' && str[i][1] == 'r') {
            a = atof(str[i + 1]);
            printf("Rotation by a %.0f degree angle\n", a);
        }
    }
}

void display_help(void)
{
    printf("USAGE\n");
    printf("    ./102architect x y transfo1 arg11");
    printf("[arg12] [transfo2 arg12 [arg22]] ...\n");
    printf("\nDESCRIPTION\n");
    printf("    x\tabscissa of the original point\n");
    printf("    y\tordinate of the original point\n");
    printf("\n\n    transfo arg1 [arg2]\n");
    printf("    -t i j  translation along vector(i, j)\n");
    printf("    -z m n  scaling by factors m (w-axis) and n (y-axis)\n");
    printf("    -r d    rotation centered in O by a d degree angle\n");
    printf("    -s d    reflection over the axis passing through O with an inclination\n");
    printf("\t    angle of d degrees\n");
}
