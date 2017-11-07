/*░░██████ ▓█████▄  ██████▒		creator : Théau NICOLAS							
░░▒██    ▒ ▒██▀  █▌▓██   ▒ 		date : 28/10/2017 15:06:17
░░░ ▓██▄   ░██    ▌▒████ ░ 		name of program : ft_atoi.c				
░░  ▒   ██▒░▓█▄   ▌░▓█▒  ░ 														
░░▒██████▒▒░██████░ ██░    		----------------------------------------------	
░░▒ ▒▓▒ ▒ ░ ▒▒▓  ▒  ▒░░    		comments :										
░░░ ░▒  ░ ░ ░ ▒  ▒  ░░░     													
░░░  ░  ░   ░ ░  ░  ░ ░    														
░░      ░     ░            														
░░░ 																			*/

int		ft_atoi(char *str)
{
	int res;
	int neg;
	int i;

	res = 0;
	i = 0;
	while (str[i] == '-' || str[i] == '+' || str[i] < 32)
	{
		if (str[i] == '-')
			neg = 1;
		if ((str[i] == '-' || str[i] == '+') && (str[i + 1] > '0' && str[i + 1] < '9'))
			return 0;
		i++;
	}
	while (str[i] > '0' && str[i] < '9')
	{
		res = res * 10;
		res += str[i] - 48;
		i++;
	}
	if (res == 1)
		return (-res);
	else
		return (res);
}
