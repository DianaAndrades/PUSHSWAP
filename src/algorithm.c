/*
** EPITECH PROJECT, 2022
** PUSH_SWAP
** File description:
** algorithm
*/

#include "push_swap.h"
#include "my.h"

t_node *algorithm(t_node *l_a, t_node *l_b, t_getinfo *info)
{
    while (info->nbr_nodes != 1) {
        info->nbr_nodes = count(l_a);
        minor_nbr(l_a, info);
        l_a = step1(l_a, info);
        l_b = pb_function(info, l_b);
        l_a = l_a->next;
    }
    info->nbr_nodes = count(l_b);
    while (info->nbr_nodes != 0) {
        info->data = l_b->data;
        l_a = pa_function(info, l_a);
        l_b = l_b->next;
        info->nbr_nodes--;
    }
    return (l_a);
}
