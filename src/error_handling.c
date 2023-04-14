/*
** EPITECH PROJECT, 2022
** PUSH_SWAP
** File description:
** error handling
*/

#include "push_swap.h"
#include "my.h"

int condition_loop(int i, char **av)
{
    int j = 0;
    int last = 0;
    while (av[i][j] != '\0') {
        last = my_strlen(av[i]) - 1;
        if (((av[i][j] < '0') || (av[i][j] > '9')) && av[i][j] != '-')
            return (84);
        if ((av[i][last] == '-')) {
            return (84);
        }
        j++;
    }
    return (0);
}

int error_handling(int ac, char **av)
{
    int i = 1;
    if (ac == 1)
        return (84);
    while (av[i] != NULL) {
        if (condition_loop(i, av) == 84)
            return (84);
        i++;
    }
    return (0);
}
