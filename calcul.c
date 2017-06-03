#include <stdlib.h>
#include <stdio.h>

int addition(int n1, int n2);
int multiplication(int n1,int n2);
int soustraction (int n1, int n2);
int division(int n1, int n2);

int addition(int n1, int n2)
{
	return n1 + n2;
}

int multiplication(int n1, int n2)
{
	return n1 * n2;
}

int soustraction(int n1, int n2)
{
	return n1 - n2;
}

int division(int n1, int n2)
{
	return n1 / n2;
}

int main(int argc, char const *argv[])
{
	int choix = 0;
	int nb1 = 0;
	int nb2 = 0;
	int resultat = 0;
	int (*fonctionCalcul[4])(int,int) = {addition,soustraction,multiplication,division};

	printf("CALCULATRICE\n");
	printf("Choisissez un type de calcul\n1 pour une addition,\n2 pour une soustraction,\n3 pour une multiplication,\n4 pour une division\n");
	scanf("%d", &choix);
	
	printf("Entrez les deux chiffres a calculer:\n Chiffre 1: ");
	scanf("%d", &nb1);
	printf("\nChiffre 2 : ");
	scanf("%d", &nb2);	



	printf("Resultat: %d\n", (*fonctionCalcul[choix-1])(nb1,nb2));

	return EXIT_SUCCESS;			
}
