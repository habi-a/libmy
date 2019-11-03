/*
** my_put_nbr_float.c for libmy in /Users/habi_a/Documents
**
** Made by HABI Açal
** Login   <habi_a@etna-alternance.net>
**
** Started on  Thu Jul 19 10:37:47 2018 HABI Açal
** Last update Tue Jul 24 09:51:02 2018 HABI Açal
*/
#include <my.h>

void        my_put_nbr_float(float n)
{
    long    ent = n;
    long    dec = n * (float)1000000 - ent * 1000000;
    float	aff_dec = (float)dec;

    my_put_long_nbr_base(ent, "0123456789");
    my_putchar('.');
    my_put_long_nbr_base((long)aff_dec, "0123456789");
 }

 void        my_put_nbr_double(double n)
 {
     long    ent = n;
     long    dec = n * (double)1000000 - ent * 1000000;
     double	 aff_dec = (double)dec;

     my_put_long_nbr_base(ent, "0123456789");
     my_putchar('.');
     my_put_long_nbr_base((long)aff_dec, "0123456789");
  }
