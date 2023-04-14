/*
** EPITECH PROJECT, 2022
** PUSH_SWAP
** File description:
** nodes counter
*/

#include "push_swap.h"
#include "my.h"

int count(t_node *head)
{
    int i = 0;
    for (t_node *curr = head; curr != NULL; curr = curr->next)
        i++;
    return (i);
}
