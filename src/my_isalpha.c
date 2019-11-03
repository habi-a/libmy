/*
** my_isalpha.c for libmy in /Users/habi_a/Documents
**
** Made by HABI Açal
** Login   <habi_a@etna-alternance.net>
**
** Started on  Fri Apr  6 10:01:31 2018 HABI Açal
** Last update Fri Apr  6 10:01:33 2018 HABI Açal
*/

unsigned int my_isalpha(const char c)
{
    if (c >= 'A' && c <= 'Z')
        return (1);
    else if (c >= 'a' && c <= 'z')
        return (1);
    return (0);
}
