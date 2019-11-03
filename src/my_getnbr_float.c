/*
** my_getnbr_float.c for libmy in /Users/habi_a/Documents
**
** Made by HABI Açal
** Login   <habi_a@etna-alternance.net>
**
** Started on  Fri Apr  6 09:59:59 2018 HABI Açal
** Last update Fri Apr  6 10:00:28 2018 HABI Açal
*/

#include <my.h>
#include <stdlib.h>

static char *get_str_after_point(const char *str)
{
    char    *str_after;

    while (*str && *str != '.')
        ++str;
    if (*str != '.')
        return (NULL);
    str_after = my_strdup(++str);
    return (str_after);
}

float           my_getnbr_float(const char *str)
{
    signed char multiplicator = (-1);
    float       nbr = (float)my_getnbr(str);
    char        *str_after_point = get_str_after_point(str);
    float       decimal = (float)my_getnbr(str_after_point);

    if (nbr >= 0)
        multiplicator = 1;
    decimal = decimal / my_pow(10, my_strlen(str_after_point)) * multiplicator;
    nbr += decimal;
    free(str_after_point);
    return (nbr);
}

double          my_getnbr_double(const char *str)
{
    signed char multiplicator = (-1);
    double      nbr = (double)my_getnbr(str);
    char        *str_after_point = get_str_after_point(str);
    double      decimal = (double)my_getnbr(str_after_point);

    if (nbr >= 0)
        multiplicator = 1;
    decimal = decimal / my_pow(10, my_strlen(str_after_point)) * multiplicator;
    nbr += decimal;
    free(str_after_point);
    return (nbr);
}
