/*
** EPITECH PROJECT, 2022
** MY_H
** File description:
** my.h
*/

#ifndef MY_H_
    #define MY_H_

    #include <fcntl.h>
    #include <sys/stat.h>
    #include <sys/syscall.h>
    #include <sys/types.h>
    #include <unistd.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    #include <errno.h>
    #include <dirent.h>
    #include <pwd.h>
    #include <stdarg.h>
    #include "my_printf.h"

    int my_atoi(char *str);
    void my_put_nbr(int nb);
    void my_putchar(char c);
    void my_putstr(char const *str);
    int my_strcmp(char const *s1, char const *s2);
    int my_strlen (char const *str);
    char *my_strcpy(char *dest, char const *src);
    int my_compute_power_rec(int nb, int p);
    char *my_strdup(char const *src);
    char *my_strcat(char *dest, char const *src);
    char **my_str_to_array(char *buff, char c);

#endif
