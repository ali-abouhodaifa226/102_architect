/*
** EPITECH PROJECT, 2023
** main.c
** File description:
** main
*/
#include "my.h"

float **matrix_create(char **str, int i)
{
    float **r = malloc(3 * sizeof (float *));
    float a = atof(str[i + 1]);
    float b = 0;

    r[0] = malloc(3);
    r[1] = malloc(3);
    r[2] = malloc(3);
    if (str[i][0] == '-' && str[i][1] == 't') {
        b = atof(str[i + 2]);
        r = matrixgest(r, a, b, 1);
    }
    if (str[i][0] == '-' && str[i][1] == 'z') {
        b = atof(str[i + 2]);
        r = matrixgest(r, a, b, 2);
    }
    if (str[i][0] == '-' && str[i][1] == 'r')
        r = matrixgest(r, a, b, 3);
    if (str[i][0] == '-' && str[i][1] == 's')
        r = matrixgest(r, a, b, 4);
    return (r);
}

void print_matrixresult(float **r)
{
    printf("%.2f\t%.2f\t%.2f\n", r[0][0], r[0][1], r[0][2]);
    printf("%.2f\t%.2f\t%.2f\n", r[1][0], r[1][1], r[1][2]);
    printf("%.2f\t%.2f\t%.2f\n", r[2][0], r[2][0], r[2][2]);
}

void matrix_calc(char **str , int size)
{
    float a = atof(str[0]);
    float b = atof(str[1]);
    float **r = create_matrix_e();
    float **s;


    for (int i = size - 1; i >= 2; i--) {
        if (str[i][0] == '-' && (str[i][1] == 't' || str[i][1] == 'z'
                                || str[i][1] == 'r' || str[i][1] == 's')) {
            s = matrix_create(str, i);
            r = mult_architech(r, s);
        }
    }
    print_matrix_steps(str, size);
    print_matrixresult(r);
    final_architech(r, a, b);
}

int main(int ac, char **av)
{
    if (ac == 1)
        return (84);
    av++;
    if (error_handling(ac, av) == 1)
        return (84);
    if (av[0][0] == '-' && av[0][1] == 'h') {
        display_help();
        return (84);
    }
    matrix_calc(av, ac - 1);
    return (84);
}
