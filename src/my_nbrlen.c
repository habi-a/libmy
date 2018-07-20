/*
** my_nbrlen.c for libmy in /cygdrive/c/Users/Habi/Documents
** 
** Made by HABI Açal
** Login   <habi_a@etna-alternance.net>
** 
** Started on  Tue Dec 26 13:18:38 2017 HABI Açal
** Last update Sat Jan  6 22:34:59 2018 HABI Açal
*/
unsigned int	my_nbrlen(int n)
{
    unsigned int	i;

    i = 1;
    while (n > 9)
    {
        n /= 10;
        i++;
    }
    return (i);
}
