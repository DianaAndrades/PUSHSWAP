/*
** EPITECH PROJECT, 2022
** DISPLAY_S_FLAG
** File description:
** display flags
*/

#include <stdarg.h>
#include <stdlib.h>
#include "my.h"

int s_flag(va_list list)
{
    char *str;
    str = va_arg(list, char *);
    my_putstr(str);
    return (my_strlen(str));
}
