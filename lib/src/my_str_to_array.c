/*
** EPITECH PROJECT, 2023
** MY_H
** File description:
** my_str_to_array.c
*/

#include "my.h"

int lines_counter(char *buff, char c)
{
    int i = 0;
    int lines = 0;
    while (buff[i] != '\0') {
        if (buff[i] == c || buff[i] == '\0')
            lines++;
        i++;
    }
    lines++;
    return (lines);
}

int len_line(char *buff, int i)
{
    while (buff[i] != ' ' && buff[i] != '\0')
        i++;
    return (i);
}

char **my_str_to_array(char *buff, char c)
{
    int lines = lines_counter(buff, c);
    char **array = malloc(sizeof(char *) * (lines + 1));
    int a = 0; int b = 0; int i = 0;
    for (int j = 0; j <= lines; j++)
        array[j] = NULL;
    while (a != lines) {
        b = 0;
        array[a] = malloc(sizeof(char) * (len_line(buff, i) + 1));
        while (buff[i] != c && buff[i] != '\0') {
            array[a][b] = buff[i];
            b++;
            i++;
        }
        array[a][b] = '\0';
        i++;
        a++;
    }
    array[a] = NULL;
    return (array);
}
