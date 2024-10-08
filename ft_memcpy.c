#include <stdlib.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    char    *sour;
    char    *dst;
    int     i;

    sour = (char *)src;
    dst = (char *)dest;
    i = 0;
    while (sour[i])
    {
        dst[i] = sour[i];
        i++;
    }
    src = (void *)sour;
    dest = (void *)dst;
    return (dest);
   
}
