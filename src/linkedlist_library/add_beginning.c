/*
** EPITECH PROJECT, 2022
** PUSH_SWAP
** File description:
** add beginning
*/

#include "push_swap.h"
#include "my.h"

t_node *create_node(int data)
{
    t_node *node = malloc(sizeof(t_node));
    if (node == NULL)
        return (NULL);
    node->data = data;
    node->next = NULL;
    return (node);
}

t_node *add_beginning(t_node *head, int data)
{
    t_node *node = create_node(data);
    if (node == NULL)
        return (NULL);
    node->next = head;
    return (node);
}
