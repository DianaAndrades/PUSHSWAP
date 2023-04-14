/*
** EPITECH PROJECT, 2022
** PUSH_SWAP
** File description:
** main
*/

#include "push_swap.h"
#include "my.h"

int main (int ac, char **av)
{
    t_getinfo *info = NULL;
    t_node *l_a = NULL;
    info = ini_getinfo();
    if (error_handling(ac, av) == 84)
        return (84);
    if (ac == 2) {
        my_putchar('\n');
        return (0);
    }
    push_swap(info, l_a, ac, av);
    return (0);
}
