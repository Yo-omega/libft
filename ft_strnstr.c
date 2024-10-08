/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:46:06 by kali              #+#    #+#             */
/*   Updated: 2024/09/26 18:39:52 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(char *big, const char *little, int len)
{
	int	i;
	int	j;

	j = 0;
	while (big[j] && j < len)
	{
		i = 0;
		while (little[i] && little[i] == big[j + i])
			i++;
		if (little[i] == 0)
			return (&big[j]);
		j++;
	}
	return (&big[j]);
}
