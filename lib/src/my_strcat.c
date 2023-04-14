/*
** EPITECH PROJECT, 2022
** MY_STRCAT
** File description:
** function that concatenates two strings
*/

#include "my.h"

char *my_strcat(char *dest, char const *str)
{
    int a = 0;
    int b = 0;

    while (dest[a] != '\0') {
        a++;
    }
    while (str[b] != '\0') {
        dest[a] = str[b];
        a++;
        b++;
    }
    dest[a] = '\0';
    return (dest);
}
