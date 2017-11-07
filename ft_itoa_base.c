/*░░██████ ▓█████▄  ██████▒		creator : Théau NICOLAS							
░░▒██    ▒ ▒██▀  █▌▓██   ▒ 		date : 05/11/2017 15:35:05
░░░ ▓██▄   ░██    ▌▒████ ░ 		name of program : ft_itoa_base.c
░░  ▒   ██▒░▓█▄   ▌░▓█▒  ░ 														
░░▒██████▒▒░██████░ ██░    		----------------------------------------------	
░░▒ ▒▓▒ ▒ ░ ▒▒▓  ▒  ▒░░    		comments :										
░░░ ░▒  ░ ░ ░ ▒  ▒  ░░░     													
░░░  ░  ░   ░ ░  ░  ░ ░    														
░░      ░     ░            														
░░░ 							----------------------------------------------*/

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
		int i;

		i = 0;
		while (str[i])
		{
			ft_putchar(str[i]);
			i++;
		}
}

int 	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return i;
}

char	*ft_strrev(char *str)
{
	int i;
	int j;
	char s;

	i = 0;
	j = ft_strlen(str) - 1;
	while (i < j)
	{
		s = str[i];
		str[i] = str[j];
		str[j] = s;
		i++;
		j--;
	}
	return str;
}

char	*ft_itoa_base(int nb, int base)
{
	int 	i;
	char	*str;

	i = 0;
	if ((str = malloc(sizeof(int)  * nb + 1)) == NULL)
			return NULL;
	while (nb > 0)
	{
		str[i] = (nb % base) + 48;
		nb /= base;
		i++;
	}
	str[i] = '\0';
	str = ft_strrev(str);
	return str;
}

int 	main()
{
	ft_putstr(ft_itoa_base(255,2));
	return 0;
}