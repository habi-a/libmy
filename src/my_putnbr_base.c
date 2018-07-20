/*
** my_putnbr_base.c for libmy in /Users/habi_a/Documents
** 
** Made by HABI Açal
** Login   <habi_a@etna-alternance.net>
** 
** Started on  Thu Jul 19 10:37:47 2018 HABI Açal
** Last update Thu Jul 19 12:11:37 2018 HABI Açal
*/
#include <my.h>

void			my_put_un_nbr_base(unsigned int n, char *base)
{
    unsigned int	i;
    unsigned int	j;

    j = n % my_strlen(base);
    i = n / my_strlen(base);
    if (i > 0)
        my_put_un_nbr_base(i, base);
    my_putchar(base[j]);
}

void	my_putnbr_base(int n, char *base)
{
    int	i;
    int	j;

    if (n < 0)
    {
        my_putchar('-');
        n *= (-1);
    }
    j = n % my_strlen(base);
    i = n / my_strlen(base);
    if (i > 0)
        my_putnbr_base(i, base);
    my_putchar(base[j]);
}
