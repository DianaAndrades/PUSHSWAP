/*
** EPITECH PROJECT, 2022
** PRINTF
** File description:
** my_printf
*/

#include "my.h"

t_fxptr functions[FLAGNUM] = {
    {'s', &s_flag},
    {'d', &di_flag},
    {'i', &di_flag},
    {'c', &c_flag},
    {'o', &o_flag},
    {'x', &lower_x_flag},
    {'X', &upper_x_flag},
    {'u', &u_flag},
};

int flag_checker(char c, va_list list)
{
    int len = 0;
    int i = 0;
    while (i < FLAGNUM) {
        if (c == functions[i].c)
            len += functions[i].ptr(list);
        i++;
    }
    return (len);
}

int count_len(const char *format, int i)
{
    int len = 0;
    if ((format[i] > 32 || format[i] < 126 ) && format[i] != ' ')
        len += 1;
    return (len);
}

int my_printf(const char *format, ...)
{
    int len = 0;
    int i = 0;
    va_list list;

    va_start(list, format);
    while (format[i] != '\0') {
        if (format[i] == '%' && format[i + 1] != '\0') {
            len += flag_checker(format[i + 1], list);
            i++;
        } else {
            my_putchar(format[i]);
            len += count_len(format, i);
        }
        i++;
    }
    return (len);
}
