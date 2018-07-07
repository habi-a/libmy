#include <my.h>
#include <stdlib.h>

void my_revert_tab(char **tab, unsigned n)
{
    char *tmp;
    unsigned int i;
    unsigned int end;

    i = 0;
    end = n - 1;
    while (i < n / 2)
    {
        tmp = my_strdup(tab[i]);
        free(tab[i]);
        tab[i] = tab[end];
        tab[end] = tmp;
        end--;
        i++;
    }
}

