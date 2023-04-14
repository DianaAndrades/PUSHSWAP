/*
** EPITECH PROJECT, 2022
** MY_STRDUP
** File description:
** function that allocates memory and
** copies the string given as argument in it
*/

#include "my.h"

char *my_strdup(char const *src)
{
    int i = 0;
    char *str = malloc(my_strlen(src) + 1);

    while (src[i] != '\0') {
        str[i] = src[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}
