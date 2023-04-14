/*
** EPITECH PROJECT, 2022
** PUSH_SWAP
** File description:
** destroy list
*/

#include "push_swap.h"
#include "my.h"

void destroy_node(t_node *node)
{
    t_node *temp = node;
    while (node) {
        temp = node;
        node = node->next;
        free(temp);
    }
}
