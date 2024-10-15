/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouz <yel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:17:28 by yel-bouz          #+#    #+#             */
/*   Updated: 2024/10/15 15:17:28 by yel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *substr;

    substr = malloc((len + 1) * sizeof(char));
    substr[len] = 0;
    while (len)
    {
        substr[len - 1] = s[start + len - 1];
        len--;
    }
    return (substr);
}
