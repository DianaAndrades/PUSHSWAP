/*
** EPITECH PROJECT, 2022
** DISPLAY_H_FLAG
** File description:
** display flags
*/

#include <stdarg.h>
#include "my.h"

int upper_x_flag(va_list list)
{
    long int i = 0;
    i = my_upper_hexadecimal_nbr(va_arg(list, long int));
    return (i);
}

int lower_x_flag(va_list list)
{
    long int i = 0;
    i = my_lower_hexadecimal_nbr(va_arg(list, long int));
    return (i);
}
