/*
** EPITECH PROJECT, 2022
** DISPLAY_U_FLAG
** File description:
** display flags
*/

#include <stdarg.h>
#include "my.h"

int u_flag(va_list list)
{
    my_u_nbr(va_arg(list, long int));
    return (1);
}
