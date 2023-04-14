/*
** EPITECH PROJECT, 2022
** MY_PRINTF_H
** File description:
** my_printf.h
*/

#ifndef MY_PRINTF_H_
    #define MY_PRINTF_H_

    #define FLAGNUM 9
    #include "my.h"

    typedef struct s_fxptr {
    char c;
    int (*ptr)(va_list);
    } t_fxptr;

    int my_printf(const char *format, ...);
    int s_flag(va_list list);
    int di_flag(va_list list);
    int c_flag(va_list list);
    int percentatge_flag(void);
    int o_flag(va_list list);
    int lower_x_flag(va_list list);
    int upper_x_flag(va_list list);
    int u_flag(va_list list);
    int my_u_nbr(long int nb);
    int my_octal_nbr(long int decimal);
    int my_upper_hexadecimal_nbr(long int decimal);
    int my_lower_hexadecimal_nbr(long int decimal);

#endif
