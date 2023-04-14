/*
** EPITECH PROJECT, 2022
** PUSH_SWAP
** File description:
** pb
*/

#include "push_swap.h"
#include "my.h"

t_node *pb_function(t_getinfo *info, t_node *l_b)
{
    l_b = add_beginning(l_b, info->data);
    my_printf("%s ", "pb");
    return (l_b);
}

t_node *pa_function(t_getinfo *info, t_node *l_a)
{
    l_a = add_beginning(l_a, info->data);
    if (info->nbr_nodes != 1)
        my_printf("%s ", "pa");
    else if (info->nbr_nodes == 1)
        my_printf("%s", "pa");
    return (l_a);
}
