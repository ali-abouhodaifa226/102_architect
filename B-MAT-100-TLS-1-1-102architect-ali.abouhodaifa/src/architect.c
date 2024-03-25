/*
** EPITECH PROJECT, 2023
** architect.c
** File description:
** architect.c
*/

#include <stdio.h>

float calc_multi(float **f, float **m, int i, int j)
{
    float r;
    
    r = (f[i][0] * m[0][j]) + (f[i][1] * m[1][j]) + (f[i][2] * m[2][j]);
    return (r);
}

float **mult_architech(float **f, float **m)
{
    float **r = create_matrix_e();

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            r[i][j] = calc_multi(f, m, i, j);
        }
    }
    return (r);
}

void final_architech(float **f, float a, float b)
{
    float r[2];

    r[0] = (f[0][0] * a) + (f[0][1] * b) + (f[0][2] * 1);
    r[1] = (f[1][0] * a) + (f[1][1] * b) + (f[1][2] * 1);
    printf("(%.2f, %.2f) => (%.2f, %.2f)\n", a, b, r[0], r[1]);
}