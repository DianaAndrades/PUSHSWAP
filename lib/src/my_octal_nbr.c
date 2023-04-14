/*
** EPITECH PROJECT, 2022
** MY_OCTAL_NBR
** File description:
** convert decimal nbr into octal nbr
*/

#include "my.h"

char *oct_convert(long int decimal, int p, int *i)
{
    int result_div;
    int rest = decimal;
    char *base = "01234567";
    char *octal = malloc(10000);
    while (p >= 0) {
        result_div = rest / my_compute_power_rec(8, p);
        rest = rest % my_compute_power_rec(8, p);
        octal[*i] = base[result_div];
        (*i)++;
        p--;
    }
    return (octal);
}

int my_octal_nbr(long int decimal)
{
    int p = 0;
    int i = 0;
    int pow = my_compute_power_rec(8, p);
    char *octal = malloc(10000);

    while (pow < decimal) {
        p++;
        pow = my_compute_power_rec(8, p);
    }
    p--;
    my_strcpy(octal, oct_convert(decimal, p, &i));
    octal[i] = '\0';
    my_putstr(octal);
    return (i);
    free(octal);
}
