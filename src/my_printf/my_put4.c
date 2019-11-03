/*
** my_put3.c for my_printf in /Users/habi_a/Documents
**
** Made by HABI Açal
** Login   <habi_a@etna-alternance.net>
**
** Started on  Mon Jul 23 16:16:53 2018 HABI Açal
** Last update Mon Jul 23 16:37:43 2018 HABI Açal
*/

#include <my.h>
#include <my_puts.h>
#include <stdlib.h>

unsigned int        my_put_f(va_list variables, unsigned int count)
{
    float           var;

    var = (float)va_arg(variables, double);
    my_put_nbr_float(var);
    count += my_nbrlen(var);
    return (count);
}

unsigned int        my_put_t(va_list variables, unsigned int count)
{
    double          var;

    var = va_arg(variables, double);
    my_put_nbr_double(var);
    count += my_nbrlen(var);
    return (count);
}
