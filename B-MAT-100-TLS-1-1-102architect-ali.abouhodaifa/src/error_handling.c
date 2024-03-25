/*
** EPITECH PROJECT, 2023
** error
** File description:
** error_handle
*/

#include "my.h"

int check_number_arg(int ac, char **av)
{
    int nb_arg = 3;

    for (int i = 2, j = 0; i != ac - 1; i++) {
        if (av[i][j] == '-') {
            j++;
            if (av[i][j] == 't' || av[i][j] == 'z')
                nb_arg = nb_arg + 3;
            if (av[i][j] == 'r' || av[i][j] == 's')
                nb_arg = nb_arg + 2;
        }
        j = 0;
    }
    if (nb_arg != ac)
        return (1);
    return (84);
}

int check_if_number(char **av, int i)
{
    for (int j = 0; av[i][j]; j++) {
        if (av[i][j] == '-')
            j++;
        if (av[i][j] < '0' || av[i][j] > '9')
            return (1);
    }
    return (84);
}

int check_arg2_after_flag(char **av, int i)
{
    if (check_if_number(av, i) == 1 || check_if_number(av, i + 1) == 1)
        return (1);
    return (84);
}

int check_arg1_after_flag(char **av, int i)
{
    if (check_if_number(av, i) == 1)
        return (1);
    return (84);
}

int error_handling(int ac, char **av)
{
    if (av[0][0] == '-' && av[0][1] == 'h')
        return (0);
    if (ac <= 4 || check_number_arg(ac, av) == 1)
        return (84);
    for (int i = 0; i < ac - 1; i++) {
        if ((i == 0 || i == 1) && check_if_number(av, i) == 1)
            return (84);
        if (i >= 2)
        {
            if (av[i][1] == 't' || av[i][1] == 'z') {
                if (check_arg2_after_flag(av, i + 1) == 1)
                    return (84);
            }
            if (av[i][1] == 'r' || av[i][1] == 's') {
                if (check_arg1_after_flag(av, i + 1) == 1)
                    return (84);
            }
        }
    }
    return (84);
}
