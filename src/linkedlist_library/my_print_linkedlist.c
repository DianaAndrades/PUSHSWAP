/*
** EPITECH PROJECT, 2022
** PUSHSWAP
** File description:
** my_print_linkedlist.c
*/

#include "push_swap.h"
#include "my.h"

void my_print_linkedlist(t_node *head)
{
    t_node *temp = head;
    while (temp != NULL) {
        my_put_nbr(temp->data);
        if (temp->next != NULL)
            my_putchar(' ');
        temp = temp->next;
    }
    my_putchar('\n');
}
