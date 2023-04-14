/*
** EPITECH PROJECT, 2022
** DISPLAY_DI_FLAG
** File description:
** display flags
*/

#include <stdarg.h>
#include "my.h"

int di_flag(va_list list)
{
    my_put_nbr(va_arg(list, int));
    return (1);
}
