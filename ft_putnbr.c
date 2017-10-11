void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	unsigned int conv;

	if (nb < 0)
	{
		nb = -nb;				//passage de nb a positif
		conv = -nb;
		ft_putchar('-');
	}
	conv = nb;
	if (conv > 10)
	{
		ft_putnbr(conv / 10);	//on le divise par dix puis on en fait le
		ft_putnbr(conv % 10);	//modulo afin d'afficher chaque caractères
	}
	else
	{
		ft_putchar(conv + 48);	// + 48 ou + '0' en ascii
	}
}
