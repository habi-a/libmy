/*
** my_strcmp.c for libmy in /Users/habi_a/Documents
** 
** Made by HABI Açal
** Login   <habi_a@etna-alternance.net>
** 
** Started on  Fri Apr  6 10:04:03 2018 HABI Açal
** Last update Fri Apr  6 10:04:18 2018 HABI Açal
*/

int			my_strcmp(const char *s1, const char *s2)
{
    unsigned int	i;

    i = 0;
    while (s1[i] && s2[i] && s1[i] == s2[i])
        ++i;
    return (s1[i] - s2[i]);
}
