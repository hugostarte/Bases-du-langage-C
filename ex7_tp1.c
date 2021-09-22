#include <stdio.h>
int main (void)
{
	float nb_or = 1.61803398875;
	printf("Ecriture no. 1 : %f \n", nb_or);
	printf("Ecriture no. 2 :  %0.6f \n", nb_or);
	printf("Ecriture no. 3 : 0%0.6f \n", nb_or);
	printf("Ecriture no. 4 :   %0.7f \n", nb_or);
	printf("Ecriture no. 5 : 00%0.7f \n", nb_or);
	printf("Ecriture no. 6 :    %0.7f \n", nb_or);
	printf("Ecriture no. 7 : 000%0.7f \n", nb_or);
	printf("Ecriture no. 8 :       %0.3f \n", nb_or);
	printf("Ecriture no. 9 : 000000%0.3f \n", nb_or);
	return(0);
}