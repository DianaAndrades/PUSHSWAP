/*
** EPITECH PROJECT, 2022
** MY_HEXADECIMAL_NBR
** File description:
** decimal nbr to hexadecimal nbr
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "my.h"

char *hex_convertup(long int decimal, int *i, int p)
{
    int result_div;
    int rest = decimal;
    char *base = "0123456789ABCDEF";
    char *hexadecimal = malloc(10000);
    while (p >= 0) {
        result_div = rest / my_compute_power_rec(16, p);
        rest = rest % my_compute_power_rec(16, p);
        hexadecimal[*i] = base[result_div];
        (*i)++;
        p--;
    }
    return (hexadecimal);
}

int my_upper_hexadecimal_nbr(long int decimal)
{
    int p = 0;
    int i = 0;
    int pow = my_compute_power_rec(16, p);
    char *hexadecimal = malloc(10000);

    while (pow < decimal) {
        p++;
        pow = my_compute_power_rec(16, p);
    }
    p--;
    my_strcpy(hexadecimal, hex_convertup(decimal, &i, p));
    hexadecimal[i] = '\0';
    my_putstr(hexadecimal);
    free(hexadecimal);
    return (i);
}
