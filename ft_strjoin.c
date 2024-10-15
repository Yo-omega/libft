/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouz <yel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:39:40 by yel-bouz          #+#    #+#             */
/*   Updated: 2024/10/15 15:39:40 by yel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int _lenght(char *s)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

char *ft_strjoin(char const *s1, char const *s2)
{
    char    *join;
    int     i;

    i = 0;
    join = malloc((_lenght(s1) + _lenght(s2) + 1) * sizeof(char));
    if (!join)
        return (NULL);
    while (s1[i])
    {
        join[i] = s1[i];
        i++;
    }
    while (s2[i - _lenght(s1)])
    {
        join[i] = s2[i - _lenght(s1)];
        i++;
    }
    join[i] = 0;
    return (join);
}