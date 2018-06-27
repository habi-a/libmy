#include <my.h>
#include <stdlib.h>

char *my_strdup(const char *src)
{
    int len;
    char *dest;

    len = my_strlen(src) + 1;
    dest = malloc((unsigned)len * sizeof(char));
    if (dest == NULL)
        return (NULL);
    dest = my_strcpy(dest, src);
    dest[len - 1] = '\0';
    return (dest);
}