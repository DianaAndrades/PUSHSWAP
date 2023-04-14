/*
** EPITECH PROJECT, 2022
** my_u_nbr.c
** File description:
** print number
*/

#include "my.h"

int convert_unsigned_nbr(long int nb)
{
    if (nb < 0)
        return (nb);
    if (nb >= 0)
        return (nb);
    if (nb >= 'a' || nb <= 'z' || nb >= 'A' || nb <= 'Z')
        return (nb);
    return (0);
}

int my_u_nbr(long int nb)
{
    nb = convert_unsigned_nbr(nb);
    my_put_nbr(nb);
    return 0;
}
