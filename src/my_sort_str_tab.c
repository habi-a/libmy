#include <my.h>

void my_sort_str_tab(char **tab, unsigned int size)
{
    char *temp;
    unsigned int i;
    unsigned int j;

    i = 0;
    while (i < size)
    {
        j = i + 1;
        while (j < size)
        {
            if (my_strcmp(tab[j], tab[j - 1]) < 0)
            {
                temp = my_strdup(tab[j]);
                tab[j] = tab[j - 1];
                tab[j - 1] = temp;
            }
            j++;
        }
        i++;
    }
}
