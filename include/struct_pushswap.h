/*
** EPITECH PROJECT, 2022
** PUSH_SWAP_H
** File description:
** push swap structures
*/

#ifndef STRUCT_PUSH_SWAP_H_
    #define STRUCT_PUSH_SWAP_H_

    #include <criterion/criterion.h>
    #include <criterion/redirect.h>
    #include <stdlib.h>

    typedef struct s_node {
        int data;
        struct s_node *next;
        struct s_node *prev;
    }t_node;

    typedef struct s_getinfo {
        int minor_nbr;
        int pos_minor_nbr;
        int half;
        int nbr_nodes;
        int size;
        int data;
    }t_getinfo;

#endif
