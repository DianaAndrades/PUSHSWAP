/*
** EPITECH PROJECT, 2022
** PUSH_SWAP
** File description:
** sorted list
*/

#include "push_swap.h"
#include "my.h"

int minor_nbr(t_node *head, t_getinfo *info)
{
    t_node *current = head;
    info->minor_nbr = current->data;
    int pos = 0;
    while (current) {
        if (info->minor_nbr >= current->data) {
            info->minor_nbr = current->data;
            info->pos_minor_nbr = pos + 1;
        }
        current = current->next;
        pos++;
    }
    if (info->pos_minor_nbr == 0)
        info->pos_minor_nbr = 1;
    return (info->minor_nbr);
}
