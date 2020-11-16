#include <stdio.h>
#include <stdlib.h>




int main()
{
	
	//int age_utilisateur = 25;
	int age_utilisateur = 17;
	float taille_utilisateur = 1.70;
	int accompagne = 1;

	if ( ((age_utilisateur >= 18) && (taille_utilisateur > 1.65)) || (accompagne >= 1) ){

		printf("c'est ok\n");
	}
	else{
		printf("ce n'est pas possible !\n");
	}


	return 0;
}








 