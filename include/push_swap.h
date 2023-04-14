/*
** EPITECH PROJECT, 2022
** PUSH_SWAP_H
** File description:
** push swap.h
*/

#ifndef PUSH_SWAP_H_
    #define PUSH_SWAP_H_

    #include "struct_pushswap.h"

    //library:
    t_node *create_linked_list(int size, char **av);
    void destroy_node(t_node *node);
    t_node *add_beginning(t_node *head, int data);
    t_node *create_node(int data);
    int count(t_node *head);
    void my_print_linkedlist(t_node *head);


    //push swap
    int error_handling(int ac, char **av);
    void push_swap(t_getinfo *info, t_node *node, int ac, char **av);
    t_node *algorithm(t_node *l_a, t_node *l_b, t_getinfo *info);
    int minor_nbr(t_node *head, t_getinfo *info);
    t_node *start_to_end(t_node *head);
    t_node *end_to_start(t_node *head);
    t_node *step1(t_node *head, t_getinfo *info);
    t_node *pb_function(t_getinfo *info, t_node *l_b);
    t_node *pa_function(t_getinfo *info, t_node *l_a);
    t_getinfo *ini_getinfo(void);
    int no_sort_nedeed(t_node *head);

    //move minor number to first posisition
    int get_newpos_firsthalf(t_getinfo *info);
    int get_newpos_secondhalf(t_getinfo *info);
    int get_newpos_secondhalf_odd_nb(t_getinfo *info);
    t_node *mv_firstpos_even_nb(t_getinfo *info, t_node *head);
    t_node *mv_firstpos_odd_nb(t_getinfo *info, t_node *head);

#endif
