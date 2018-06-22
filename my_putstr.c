/*
** my_putstr.c for Game_of_ants in /Users/habi_a/Documents
** 
** Made by HABI Açal
** Login   <habi_a@etna-alternance.net>
** 
** Started on  Fri Apr  6 10:02:16 2018 HABI Açal
** Last update Fri Apr  6 10:02:21 2018 HABI Açal
*/
#include "my.h"

void			my_putstr(const char *str)
{
    unsigned int	i;

    i = 0;
    while (str[i] != '\0')
    {
        my_putchar(str[i]);
        i++;
    }
}
