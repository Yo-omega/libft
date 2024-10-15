/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouz <yel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 13:00:05 by yel-bouz          #+#    #+#             */
/*   Updated: 2024/10/15 13:00:05 by yel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *temp;
    unsigned char *d;
    size_t          i;

    temp = (unsigned char *)src;
    d = (unsigned char *)dest;
    i = 0;
    if (temp > d)
    {
        while (i < n)
        {
            d[i] = temp[i];
            i++;
        }
    }
    else if ( temp < d)
    {
        while (n)
        {
            d[n - 1] = temp[n - 1];
            n--;
        }
    }
    return (dest);
}
