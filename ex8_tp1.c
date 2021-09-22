#include <stdio.h> 
int main (void)
{
	unsigned char i= 'A'; 
	int j=1;
	unsigned short int retourLigne = 10;
	unsigned short int guillemets = 34;
	unsigned short int tabHorizontale = 9;

	printf ("\n \t i=%d \t \"j=%d\" \n", i, j);
	printf ("\n \t i=%c \t \" \n", i); 
	// Réécriture sans utiliser de "\"
	printf("%c %c i=%d %c %cj=%d %c %c", retourLigne,tabHorizontale,i,tabHorizontale,guillemets,j,guillemets,retourLigne );
	printf ("%c %c i=%c %c %c %c", retourLigne,tabHorizontale,i,tabHorizontale,guillemets,retourLigne); 
	return(0);
}

// retour a la ligne ascii -> 10
// Umprime les guillemets ascii -> 34
// Tabulation horizontale -> 9