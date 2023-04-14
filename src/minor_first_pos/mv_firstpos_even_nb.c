/*
** EPITECH PROJECT, 2022
** PUSH_SWAP
** File description:
** change the minor nbr to the first position
*/

#include "push_swap.h"
#include "my.h"

int get_newpos_firsthalf(t_getinfo *info)
{
    int temp = 0;
    int new_pos = 0;
    temp = (info->half - info->pos_minor_nbr) + 1;
    new_pos = info->half - temp;
    return (new_pos);
}

int get_newpos_secondhalf(t_getinfo *info)
{
    int temp = 0;
    int new_pos = 0;
    temp = (info->pos_minor_nbr - info->half) - 1;
    new_pos = info->half - temp;
    return (new_pos);
}

t_node *mv_firstpos_even_nb(t_getinfo *info, t_node *head)
{
    int new_pos = 0;
    int i = 0; int j = 0;
    if (info->pos_minor_nbr <= info->half) {
            new_pos = get_newpos_firsthalf(info);
            while (i != new_pos) {
                head = start_to_end(head);
                i++;
            }
            return (head);
    }
    if (info->pos_minor_nbr > info->half) {
        new_pos = get_newpos_secondhalf(info);
        while (j != new_pos) {
            head = end_to_start(head);
            j++;
        }
        return (head);
    }
    return (head);
}
