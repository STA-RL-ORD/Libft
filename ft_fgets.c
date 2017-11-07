/*░░██████ ▓█████▄  ██████▒		creator : Théau NICOLAS							
░░▒██    ▒ ▒██▀  █▌▓██   ▒ 		date : 27/10/2017 14:40:55
░░░ ▓██▄   ░██    ▌▒████ ░ 		name of program : ft_fgets.c			
░░  ▒   ██▒░▓█▄   ▌░▓█▒  ░ 														
░░▒██████▒▒░██████░ ██░    		----------------------------------------------	
░░▒ ▒▓▒ ▒ ░ ▒▒▓  ▒  ▒░░    		comments :										
░░░ ░▒  ░ ░ ░ ▒  ▒  ░░░     													
░░░  ░  ░   ░ ░  ░  ░ ░    														
░░      ░     ░            														
░░░ 																			*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

char *ft_fgets(char *str, int num, FILE *stream)
{
	int size;
	int i;

	size = num;
	i = 0;
	while (i <= size)
	{
		str[i] = fgetc(stream);
		if(str[i] == '\n')
			size = i;
		i++;
	}
	return str;
}