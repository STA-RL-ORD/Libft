int		ft_atoi(char *str)
{
	int res;
	int neg;
	int i;

	i = 0;
	res = 0;
	while (str[i] == ' ' || str[i] == '+' || str[i] == '-' || str[i] == '\t' || str[i] == '\n')
	{
		if (str[i] == '-')
			neg = 1;
		if ((str[i] == '-' || str[i] == '+') && !(str[i + 1] >= '0' && str[i + 1]<= '9'))
			return 0;
	i++;
	}
	while (str[i] >= '0' && str[i]<= '9')
	{
		res *= 10;
		res += (str[i] - 48);
		i++;
	}
	if (neg == 1)
		return (-res);
	else
		return (res);
}
