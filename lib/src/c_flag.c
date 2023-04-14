/*
** EPITECH PROJECT, 2022
** DISPLAY_C_FLAG
** File description:
** display flags
*/

#include <stdarg.h>
#include "my.h"

int c_flag(va_list list)
{
    my_putchar(va_arg(list, int));
    return (1);
}
