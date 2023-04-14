/*
** EPITECH PROJECT, 2022
** PUSH_SWAP
** File description:
** step 1
*/

#include "push_swap.h"
#include "my.h"

t_node *two_first_positions(t_node *head, t_getinfo *info)
{
    if (info->pos_minor_nbr == 1) {
        return (head);
    }
    if (info->pos_minor_nbr == 2) {
        head = start_to_end(head);
        return (head);
    }
    return (head);
}

t_node *step1(t_node *head, t_getinfo *info)
{
    if (info->pos_minor_nbr == 1 || info->pos_minor_nbr == 2) {
        head = two_first_positions(head, info);
        info->data = head->data;
        return (head);
    }
    if (info->nbr_nodes % 2 == 0) {
        info->half = info->nbr_nodes / 2;
        head = mv_firstpos_even_nb(info, head);
    }
    if (info->nbr_nodes % 2 != 0) {
        info->half = (info->nbr_nodes + 1) / 2;
        head = mv_firstpos_odd_nb(info, head);
    }
    info->data = head->data;
    return (head);
}
