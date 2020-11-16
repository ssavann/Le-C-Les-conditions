#include <stdio.h>
#include <stdlib.h>




int main()
{
	int age_utilisateur = 25;
	int age_majorite = 18;
	//int resultat = (age_utilisateur == 25);
	//int resultat = (age_utilisateur >= age_majorite);
	//int resultat = (age_utilisateur <= age_majorite);
	int resultat = (age_utilisateur != age_majorite);

	printf("Resultat = %d", resultat);
	

	return 0;
}








 