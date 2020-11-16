#include <stdio.h>
#include <stdlib.h>




int main()
{
	int choix_utilisateur = 0;

	printf("Que voulez-vous manger? 1-croissant 2-paint-chocolat 3-eclair au cafe: ");
	scanf("%d", &choix_utilisateur);

	int prix = (choix_utilisateur == 3) ? 2:1;	
	//Operateur Conditionnel: soit qu'il va payer 2$ s'il choisit #3, soit qu'il va payer 1$ s'il choisit autre chose
	printf("Vous devez payer %d $\n", prix);

	switch(choix_utilisateur)
	{

		case 1: 
			printf("Vous avez pris le croissant\n");
			break;
		case 2: 
			printf("Vous avez pris le paint-chocolat\n");
			break;

		case 3: 
			printf("Vous avez pris l'eclair au cafe\n");
			break;
		case 4: 
		case 5: 
			printf("Vous avez pris des beignes\n");	// soit 4 ou 5
			break;

		default:
			printf("Vous avez faites une erreur\n");
			break;

	}
	
	
	

	return 0;
}








 