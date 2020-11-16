#include <stdio.h>
#include <stdlib.h>




int main()
{
	int saisie_utilisateur = 0;
	const int CODE_PIN = 1234;

	printf("Entrez un code pin: ")
	scanf("%d", &saisie_utilisateur);

	if (saisie_utilisateur == CODE_PIN){
		printf("Code correct!\n");
	}
	else {
		printf("Code incorrect!\n");
	}

	return 0;
}








 