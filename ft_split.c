#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int is_sep(char c)
{
	return c == ' ' || c == '\t' || c == '\n';
}

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i] && !is_sep(str[i]))
		i++;
	return i;
}

int	ft_count_words(char *str)
{
	int i = 0;
	int count = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i]))
			i++;
		if (str[i] && !is_sep(str[i]))
			count++;
		while (str[i] && !is_sep(str[i]))
			i++;
	}
	return count;
}

char *ft_strdup(char *str)
{
	int i = 0;
	int len = ft_strlen(str);
	char *new_str = (char *)malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		new_str[i] = str[i];
		i++;
	}
	new_str[i] = '\0';
	return new_str;
}

char **ft_split(char *str)
{
	int j = 0;
	int count = ft_count_words(str);
	char **tab = (char **)malloc(sizeof(char *) * (count + 1));
	while (*str)
	{
		while (*str && is_sep(*str))
			str++;
		if (*str && !is_sep(*str))
		{
			tab[j] = ft_strdup(str );
			j++;
			while (*str && !is_sep(*str))
				str++;
		}
		while (*str && is_sep(*str))
			str++;
	}
	tab[j] = NULL;
	return tab;
}

/*int main()
{
	char *str = "Hello World";
	char **tab = ft_split(str);
	int i = 0;
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		free(tab[i]);
		i++;
	}
	free(tab);
	return 0;
}*/
