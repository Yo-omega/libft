/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:38:30 by kali              #+#    #+#             */
/*   Updated: 2024/09/26 12:40:11 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(char *str)
{
	char	*new_str;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(str);
	new_str = (char *)malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		new_str[i] = str[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
