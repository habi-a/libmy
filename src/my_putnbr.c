/*
** my_putnbr.c for libmy in /Users/habi_a/Documents
** 
** Made by HABI Açal
** Login   <habi_a@etna-alternance.net>
** 
** Started on  Fri Apr  6 10:01:48 2018 HABI Açal
** Last update Fri Apr  6 10:01:55 2018 HABI Açal
*/
#include <my.h>

void		my_put_un_nbr(const unsigned int n)
{
    int			i;
    unsigned int	divisible;

    divisible = n / 10;
    i = n % 10;
    if (divisible != 0)
        my_put_un_nbr(divisible);
    my_putchar((char)i + (char)'0');
}

void			my_putnbr(int n)
{
    if (n < 0)
    {
        my_putchar('-');
        n *= (-1);
    }
    my_put_un_nbr((unsigned int)n);
}
