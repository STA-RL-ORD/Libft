/*░░██████ ▓█████▄  ██████▒		creator : Théau NICOLAS							
░░▒██    ▒ ▒██▀  █▌▓██   ▒ 		date : 05/11/2017 14:55:54
░░░ ▓██▄   ░██    ▌▒████ ░ 		name of program : printb.c					
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

void	ft_putstr(char* str)
{
	while(str)
		write(1, str++, 1);
}

void	printb(int a, int nb_bits)
{
	int	msk;

	msk = 1 << (nb_bits - 1);
	while (msk > 0)
	{
		if (a & msk)
			ft_putchar('1');
		else
			ft_putchar('0');
		msk >>= 1;
	}
}

int main()
{
	printb(10, 16);
	return 0;
}