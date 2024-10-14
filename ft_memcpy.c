#include <stdlib.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    char    *sour;
    char    *dst;
    size_t  i;

    sour = (char *)src;
    dst = (char *)dest;
    i = 0;
    while (i < n)
    {
        dst[i] = sour[i];
        i++;
    }
    return (dest);
}
