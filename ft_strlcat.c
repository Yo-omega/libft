/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 18:51:00 by kali              #+#    #+#             */
/*   Updated: 2024/09/26 18:52:40 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	length(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
			i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
    unsigned int	j;
	unsigned int	dlen;
	unsigned int	slen;

	j = 0;
	dlen = length(dest);
	slen = length(src);
	i = dlen;
	if (size <= dlen || size == 0)
		return (slen + size);
	while ((src[j] != '\0') && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (slen + dlen);
}
