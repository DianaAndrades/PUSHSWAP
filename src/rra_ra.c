/*
** EPITECH PROJECT, 2022
** PUSH_SWAP
** File description:
** rra and ra
*/

#include "push_swap.h"
#include "my.h"

t_node *start_to_end(t_node *head)
{
    t_node *curr = head;
    t_node *new_node = head->next;

    while (curr->next != NULL)
        curr = curr->next;
    curr->next = head;
    head->next = NULL;
    my_printf("%s ", "ra");
    return (new_node);
}

t_node *end_to_start(t_node *head)
{
    t_node *curr = head;
    t_node *temp;
    t_node *new_node;
    while (curr->next != NULL) {
        if (curr->next->next == NULL)
            temp = curr;
        curr = curr->next;
    }
    new_node = curr;
    new_node->next = head;
    temp->next = NULL;
    my_printf("%s ", "rra");
    return (new_node);
}
