/*
** malloc2d.c for Game_of_ants in /Users/habi_a/Documents
** 
** Made by HABI Açal
** Login   <habi_a@etna-alternance.net>
** 
** Started on  Fri Apr  6 09:59:05 2018 HABI Açal
** Last update Fri Apr  6 09:59:37 2018 HABI Açal
*/
#include <stdlib.h>
#include "my.h"

char			**malloc2d(unsigned int row, unsigned int column)
{
    char		**array2d;
    unsigned int	i;

    i = 0;
    array2d = malloc(sizeof(*array2d) * row);
    if (array2d == NULL)
        return (NULL);
    while (i < row)
    {
        array2d[i] = malloc(sizeof(**array2d) * column);
        if (array2d[i] == NULL)
            return (NULL);
        i++;
    }
    fill2d(array2d, row, column);
    return (array2d);
}

void			fill2d(char **array2d, unsigned int row,
			       unsigned int column)
{
    unsigned int	i;
    unsigned int	j;

    i = 0;
    while (i < row)
    {
        j = 0;
        while (j < column)
        {
            array2d[i][j] = '\0';
            j++;
        }
        i++;
    }
}

void			free2d(char **array2d, unsigned int row)
{
    unsigned int	i;

    i = 0;
    while (i < row)
    {
        free(array2d[i]);
        i++;
    }
    free(array2d);
}
