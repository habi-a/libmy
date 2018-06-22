/*
** my_strlen.c for Game_of_ants in /Users/habi_a/Documents
** 
** Made by HABI Açal
** Login   <habi_a@etna-alternance.net>
** 
** Started on  Fri Apr  6 10:02:33 2018 HABI Açal
** Last update Fri Apr  6 10:02:41 2018 HABI Açal
*/

int	my_strlen(const char *str)
{
    int	i;

    i = 0;
    while (*(str + i) != '\0')
    {
        ++i;
    }
    return (i);
}
