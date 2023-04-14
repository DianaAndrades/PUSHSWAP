/*
** EPITECH PROJECT, 2022
** PUSH_SWAP
** File description:
** sorted list
*/

#include "push_swap.h"
#include "my.h"

int no_sort_nedeed(t_node *head)
{
    t_node *current = head;
    int data = current->data;
    int no_sort = 0;
    while (current) {
        if (data > current->data) {
            no_sort++;
        }
        data = current->data;
        current = current->next;
    }
    return (no_sort);
}
