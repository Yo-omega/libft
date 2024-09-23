int	ft_atoi(char *str)
{
    int	res;
	int	sign;

	sign = 1;
	res = 0;
    while (*str == ' ' || *str == '\t' || *str == '\n')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while('0' <= *str && *str <= '9')
	{
		res = (res * 10) + (*str - 48);
		str++;
	}
    return (res * sign);
}