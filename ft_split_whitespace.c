#include <stdlib.h>
#include <stdio.h>

void	ft_putstr(char *str);
int		ft_strlen(char *str);
void	ft_print_words_tables(char **tab);

char	**ft_split(char *str, char **dest, int i, int nbwrd, int j)
{
	while (str[i])
	{
		dest [nbwrd] = (char *)malloc(sizeof(char) * ft_strlen(str));
		if (str[i] != ' ')
		{
			while (str[i] != ' ')
			{
				if (str[i] == '\0')
				{
					dest[nbwrd][j] = '\0';
					dest[nbwrd + 1] = 0;
					return (dest);
				}
				dest[nbwrd][j++] = str[i++];
			}
			dest[nbwrd][j] = '\0';
			j = 0;
			nbwrd++;
		}
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
				i++;
	}
	dest[nbwrd] = 0;
	return (dest);
}

char	**ft_split_whitespace(char *str)
{
	int		i;
	int		nbwrd;
	int		j;
	char	**dest;

	i = 0;
	j = 0;
	nbwrd = 0;
	dest = (char **)malloc(sizeof(char *) * ft_strlen(str));
	return (ft_split(str, dest, i, nbwrd, j));
}

int main(int argc, char **argv)
{
	char str[] = "   \tBonjout  \n Salut";
	ft_print_words_tables(ft_split_whitespace(argv[1]));
	return 0;
}
