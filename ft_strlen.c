/*░░██████ ▓█████▄  ██████▒		creator : Théau NICOLAS							
░░▒██    ▒ ▒██▀  █▌▓██   ▒ 		date : 05/11/2017 16:27:51
░░░ ▓██▄   ░██    ▌▒████ ░ 		name of program : ft_strlen.c		
░░  ▒   ██▒░▓█▄   ▌░▓█▒  ░ 														
░░▒██████▒▒░██████░ ██░    		----------------------------------------------	
░░▒ ▒▓▒ ▒ ░ ▒▒▓  ▒  ▒░░    		comments :										
░░░ ░▒  ░ ░ ░ ▒  ▒  ░░░     													
░░░  ░  ░   ░ ░  ░  ░ ░    														
░░      ░     ░            														
░░░ 							----------------------------------------------*/

int 	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return i;
}