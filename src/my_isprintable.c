/*
** my_isprintable.c for libmy in /Users/habi_a/Documents
**
** Made by HABI Açal
** Login   <habi_a@etna-alternance.net>
**
** Started on  Fri Apr  6 10:01:31 2018 HABI Açal
** Last update Fri Apr  6 10:01:33 2018 HABI Açal
*/
unsigned int my_isprintable(const char c)
{
    if (c >= 32 && c <= 126)
        return (1);
    else
        return (0);
}
