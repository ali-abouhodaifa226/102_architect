/*
** EPITECH PROJECT, 2023
** create_matrix.c
** File description:
** create_matrix.c
*/
#include "my.h"

float **matrixflagt(float **r, float a, float b)
{
    r[0][0] = 1;
    r[0][1] = 0;
    r[0][2] = a;
    r[1][0] = 0;
    r[1][1] = 1;
    r[1][2] = b;
    r[2][0] = 0;
    r[2][1] = 0;
    r[2][2] = 1;
    return (r);
}

float **matrixflagz(float **r, float a, float b)
{
    r[0][0] = a;
    r[0][1] = 0;
    r[0][2] = 0;
    r[1][0] = 0;
    r[1][1] = b;
    r[1][2] = 0;
    r[2][0] = 0;
    r[2][1] = 0;
    r[2][2] = 1;
    return (r);
}

float **matrixflagr(float **r, float a)
{
    r[0][0] = cos(a / 180 * 3.1415926);
    r[0][1] = -sin(a / 180 * 3.1415926);
    r[0][2] = 0;
    r[1][0] = sin(a / 180 * 3.1415926);
    r[1][1] = cos(a / 180 * 3.1415926);
    r[1][2] = 0;
    r[2][0] = 0;
    r[2][1] = 0;
    r[2][2] = 1;
    return (r);
}

float **matrixflags(float **r, float a)
{
    r[0][0] = cos(2 * (a / 180 * 3.1415926));
    r[0][1] = sin(2 * (a / 180 * 3.1415926));
    r[0][2] = 0;
    r[1][0] = sin(2 * (a / 180 * 3.1415926));
    r[1][1] = -cos(2 * (a / 180 * 3.1415926));
    if (a == 45)
        r[1][1] = 0.00;
    r[1][2] = 0;
    r[2][0] = 0;
    r[2][1] = 0;
    r[2][2] = 1;
    return (r);
}

float **matrixgest(float **r, float a, float b, int f)
{
    switch (f) {
    case 1 : matrixflagt(r, a, b);
        break;
    case 2 : matrixflagz(r, a, b);
        break;
    case 3 : matrixflagr(r, a);
        break;
    case 4 : matrixflags(r, a);
        break;
    }
    return (r);
}

float **create_matrix_e(void)
{
    float **r = malloc(3 * sizeof (float *));

    r[0] = malloc(3);
    r[1] = malloc(3);
    r[2] = malloc(3);
    r[0][0] = 1;
    r[0][1] = 0;
    r[0][2] = 0;
    r[1][0] = 0;
    r[1][1] = 1;
    r[1][2] = 0;
    r[2][0] = 0;
    r[2][1] = 0;
    r[2][2] = 1;
    return (r);
}