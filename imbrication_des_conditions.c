#include <stdio.h>
#include <stdlib.h>




int main()
{
	
	
	//int age_utilisateur = 17, code_pin = 1234, argent_utilisateur = 100;
	//int age_utilisateur = 25, code_pin = 1234, argent_utilisateur = 100;
	int age_utilisateur = 25, code_pin = 456, argent_utilisateur = 100;
	

	if ( age_utilisateur < 18)
	{
		printf("Vous devez etre majeur!\n");
	}
	else
	{
		if(code_pin != 1234)
		{
			printf("Vous devez avoir le code secret !\n");
		}
		else
		{
			if(argent_utilisateur < 250)
			{
			printf("Vous devez avoir au moins $250 !\n");
			}
		
		else
			{
			printf("Bienvenue au club !\n");
			}
		}
	}

	return 0;
}








 