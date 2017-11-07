/*░░██████ ▓█████▄  ██████▒		creator : Théau NICOLAS							
░░▒██    ▒ ▒██▀  █▌▓██   ▒ 		date : 27/10/2017 12:57:15
░░░ ▓██▄   ░██    ▌▒████ ░ 		name of program : SetHeader.c		
░░  ▒   ██▒░▓█▄   ▌░▓█▒  ░ 														
░░▒██████▒▒░██████░ ██░    		----------------------------------------------	
░░▒ ▒▓▒ ▒ ░ ▒▒▓  ▒  ▒░░    		comments :										
░░░ ░▒  ░ ░ ░ ▒  ▒  ░░░     													
░░░  ░  ░   ░ ░  ░  ░ ░    														
░░      ░     ░            														
░░░ 																			*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv)
{
	char	text[256];
	FILE	*head 	= fopen(argv[1], "r");
	FILE 	*fic	= fopen(argv[2], "r+");
	/* lire l'heure courante */
   	time_t now = time (NULL);

  	/* la convertir en heure locale */
  	struct tm tm_now = *localtime (&now);
   	/* Creer une chaine JJ/MM/AAAA HH:MM:SS */
   	char s_now[sizeof "JJ/MM/AAAA HH:MM:SS"];

	strftime (s_now, sizeof s_now, "%d/%m/%Y %H:%M:%S", &tm_now);
	rewind(fic);
	while (fgets(text, 255, head) != NULL)
	{
		fputs(text, fic);
	}
	if (fic == NULL || head == NULL)
		exit(1);
	/*afficher le nom du programme*/
	fseek(fic, 275, SEEK_SET);
	fputs(argv[2], fic);
	/* afficher le resultat : */
	fseek(fic, 174, SEEK_SET);
	fputs(s_now, fic);
	fclose(fic);
	fclose(head);
	return 0;
}