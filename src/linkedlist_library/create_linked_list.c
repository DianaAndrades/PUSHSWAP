/*
** EPITECH PROJECT, 2022
** PUSH_SWAP
** File description:
** create the linked list
*/

#include "push_swap.h"
#include "my.h"

t_node *create_linked_list(int size, char **av)
{
    t_node *head = malloc(sizeof(t_node));
    t_node *current = head;
    t_node *new_node;
    for (int i = 1; i < size; i++) {
        current->data = my_atoi(av[i]);
        if (i == size - 1) {
            current->next = NULL;
            break;
        }
        new_node = malloc(sizeof(t_node));
        current->next = new_node;
        current = current->next;
    }
    return (head);
}
