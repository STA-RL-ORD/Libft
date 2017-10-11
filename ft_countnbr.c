/* Wes#h */
#include <stdio.h>

int		ft_search(int *tab, int i)
{
	int j;

	j = 0;
	while (j <= i)
	{
		if ((tab[j] == tab[i]) && (j != i))
			return 1;
		j++;
	}
	return 0;
}

int		ft_countnbr(int *tab, int size)
{
	int i;
	int nb;

	i = 0;
	nb = 0;
	while (i < size)
	{
		if (ft_search(tab, i) == 0)
		{
			printf("[%d]",tab[i]);
			nb++;
		}
		i++;
	}
	return nb;
}

int		main()
{
	int tab[20] = {0,1,2,3,4,5,6,7,8,9,1,2};

	printf("\nnbr = %d", ft_countnbr(tab,20));
	printf("\n");
	return 0;
}
