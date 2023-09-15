

int	ft_atoi(const char *str)
{
	int				i;
	int				neg;
	unsigned long	res;

	i = 0;
	neg = 1;
	res = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (str[i] - 48) + (res * 10);
		if (res > 9223372036854775808UL && neg == -1)//9223372036854775808 es 2 elevado a la 63a potencia (2^63) que es el valor máximo de un long
			return (0);
		if (res > 9223372036854775808UL && neg == 1)
			return (-1);
		i++;
	}
	return (res * neg);
}

/*int	main(void)
{
	char	str[] = "  -12345c abc";
	char str2[] = " -9223372036854775809";

	printf("%d", ft_atoi(str));
	printf("\n%d", ft_atoi(str2));
}*/
