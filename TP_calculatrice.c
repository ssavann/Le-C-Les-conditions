#include <stdio.h>
#include <stdlib.h>
#include <math.h>




int main()
{

	int nombre_1 = 0, nombre_2 = 0, resultat = 0;
	char operateur = 'X';
	int operateur_valide = 0;

	printf("Bienvenue dans SUPER CALCULATOR\n");
	printf("Indiquer l'operation mathematique que je dois resoudre (sans espace):\n");
	printf("t -sous la forme [nombre1] operateur [nombre2] par exemple (2+3)\n");
	printf("t -operateur possible [+, -, *, /]\n");
	

	scanf("%d%c%d", &nombre_1, &operateur, &nombre_2);

	if(operateur == '/' && nombre_2 == 0 )
	{
		printf("La division par 0 est impossible !\n");
	}

	else
	{
		switch(operateur)
			{
		case '+':
			resultat = nombre_1 + nombre_2;
			operateur_valide = 1;
			break;

		case '-':
			resultat = nombre_1 - nombre_2;
			operateur_valide = 1;
			break;

		case '*':
			resultat = nombre_1 * nombre_2;
			operateur_valide = 1;
			break;

		case '/':
			resultat = nombre_1 / nombre_2;
			operateur_valide = 1;
			break;

		default: 
			printf("Operateur invalide! \n");
			operateur_valide = 0;
			break;



			}
	

	if(operateur_valide)
		{	
	printf("Trop simple! Le resultat est: %d %c %d = %d\n", nombre_1, operateur, nombre_2, resultat);
		}
	}
	return 0;
}








 