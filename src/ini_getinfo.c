/*
** EPITECH PROJECT, 2022
** PUSH_SWAP
** File description:
** error handling
*/

#include "push_swap.h"
#include "my.h"

t_getinfo *ini_getinfo(void)
{
    t_getinfo *info = NULL;
    info = malloc(sizeof(t_getinfo));
    if (!info)
        return (NULL);
    info->pos_minor_nbr = 0;
    info->minor_nbr = 0;
    info->half = 0;
    info->nbr_nodes = 0;
    info->size = 0;
    info->data = 0;
    return (info);
}
