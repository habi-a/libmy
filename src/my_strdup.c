#include <my.h>
#include <stdlib.h>

char *my_strdup(const char *src)
{
    char *dest;
    unsigned int len;

    len = my_strlen(src) + 1;
    dest = malloc(len * sizeof(char));
    if (dest == NULL)
        return (NULL);
    my_strcpy(dest, src);
    return (dest);
}

char	*my_strndup(char *str, unsigned int n)
{
    char *dest;

    dest = malloc((n + 1) * sizeof(char));
    if (dest == NULL)
        return (NULL);
    my_strncpy(dest, str, n);
    return (dest);
}

char	*my_strrdup(char *str, unsigned int r)
{
    char *dest;
    unsigned int len;

    len = my_strlen(str) - r + 1;
    dest = malloc(len * sizeof(char));
    if (dest == NULL)
        return (NULL);
    my_strrcpy(dest, str, r);
    return (dest);
}
