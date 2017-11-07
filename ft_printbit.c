/*░░██████ ▓█████▄  ██████▒		creator : Théau NICOLAS							
░░▒██    ▒ ▒██▀  █▌▓██   ▒ 		date : 04/11/2017 22:45:26
░░░ ▓██▄   ░██    ▌▒████ ░ 		name of program : ft_printbit.c
░░  ▒   ██▒░▓█▄   ▌░▓█▒  ░ 														
░░▒██████▒▒░██████░ ██░    		----------------------------------------------	
░░▒ ▒▓▒ ▒ ░ ▒▒▓  ▒  ▒░░    		comments :										
░░░ ░▒  ░ ░ ░ ▒  ▒  ░░░     													
░░░  ░  ░   ░ ░  ░  ░ ░    														
░░      ░     ░            														
░░░ 																			*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printbit(unsigned char octet)
{
	unsigned char	msk;

	msk = 1 << 7; 			//msk est un masque
	while (msk > 0)
	{
		if (octet & msk)	//ici c'est un & entre l'octet de base et le masque si le resultat bit a bit est 1 on affiche 1
			ft_putchar('1');
		else
			ft_putchar('0');
		msk >>= 1;
	}
}

int main()
{
	ft_printbit(5);
	return 0;
}