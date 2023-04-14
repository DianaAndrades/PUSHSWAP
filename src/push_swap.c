/*
** EPITECH PROJECT, 2022
** PUSH_SWAP
** File description:
** push swap
*/

#include "push_swap.h"
#include "my.h"

void push_swap(t_getinfo *info, t_node *l_a, int ac, char **av)
{
    t_node *l_b = NULL;
    l_a = create_linked_list(ac, av);
    if (no_sort_nedeed(l_a) != 0)
        l_a = algorithm(l_a, l_b, info);
    my_putchar('\n');
    my_print_linkedlist(l_a);
    destroy_node(l_a);
}
