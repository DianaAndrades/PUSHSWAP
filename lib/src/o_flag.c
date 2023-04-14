/*
** EPITECH PROJECT, 2022
** DISPLAY_O_FLAG
** File description:
** display flags
*/

#include <stdarg.h>
#include "my.h"

int o_flag(va_list list)
{
    long int i = 0;
    i = my_octal_nbr(va_arg(list, long int));
    return (i);
}
