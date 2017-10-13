#include <stdio.h>

int		ft_pow(int	nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	else
		return (nb * ft_pow(nb, power - 1));
}

int main()
{
	printf("%d", ft_pow(5,0));
	return 0;
}
