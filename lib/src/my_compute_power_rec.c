/*
** EPITECH PROJECT, 2022
** MY_COMPUTE_POWER_REC
** File description:
** recursive function that
** returns the first
** argument raised to the
** power p, where p is the second
** argument.
*/

#include "my.h"

int my_compute_power_rec(int nb, int p)
{
    int sol = nb;
    if (p == 0)
        return (1);
    if (p < 0)
        return (0);
    if (p == 1)
        return (nb);
    if (p > 1) {
        sol = (nb * my_compute_power_rec(nb, p - 1));
    }
    return (sol);
}
