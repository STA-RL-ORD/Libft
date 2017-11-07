/*░░██████ ▓█████▄  ██████▒		creator : Théau NICOLAS							
░░▒██    ▒ ▒██▀  █▌▓██   ▒ 		date : 05/11/2017 15:35:25
░░░ ▓██▄   ░██    ▌▒████ ░ 		name of program : ft_printbase.c
░░  ▒   ██▒░▓█▄   ▌░▓█▒  ░ 														
░░▒██████▒▒░██████░ ██░    		----------------------------------------------	
░░▒ ▒▓▒ ▒ ░ ▒▒▓  ▒  ▒░░    		comments :										
░░░ ░▒  ░ ░ ░ ▒  ▒  ░░░     													
░░░  ░  ░   ░ ░  ░  ░ ░    														
░░      ░     ░            														
░░░ 							----------------------------------------------*/

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_printbase(int nb, int base)
{
	unsigned int conv;

  	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		conv = -nb;
	}
	conv = nb;
	if (conv > 0)
	{
		ft_printbase(conv / base, base);
		ft_printbase(conv % base, base);
	}
	else
		ft_putchar(conv + 48);
}

int 	main()
{

	printf("%d\n", ft_printbase(10, 5));

	return 0;
}