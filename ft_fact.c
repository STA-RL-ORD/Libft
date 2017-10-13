#include <stdio.h>

int		ft_fact(int nb)
{
	if (nb < 0 || nb > 12)
		return 0;
	if (nb > 1)
		return (nb * ft_fact(nb - 1));
	else
		return (1);
}

int main()
{
	printf("%d", ft_fact(0));
	return 0;
}
