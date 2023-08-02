/*

- Objectifs :

Nous allons créer une petite calculatrice. Ce programme vas donc demander à
l'utilisateur de saisir deux nombres entier ainsi qu'un opérateur. Puis, il affichera
le résultat de l'opération constitué de ces 3 saisies.

- Instructions :

 1- Lire la saisie de l'utilisateur:
    - 1er Nombre: Entier
    - Opérateur: char (+, -, *, /, %)
    - 2eme Nombre: Entier
 2- En fonction de l'opérateur choisi, effectuer la bonne opération.
 3- Afficher le résultat sous la forme suivante: nombre1 opérateur nombre2 =
    resultat (ex: 2 + 3 = 5)

- Pour aller plus loin :

 A- Ajouter la gestion des cas d'erreur de saisie de l'opérateur. Si, l'opérateur saisie, par
    l'utilisateur n'est pas compris dans la liste (+, -, *, /).
 B- Gérer le cas de la division par 0 !

*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("TP5 - Les Conditions\n");

    //declaration des variables
    int nombre_1=0, nombre_2=0, resultat=0;
    char operateur='X';

    //recuperation des saisies utilisateur
    printf("Bonjour et bienvenue dans SUPER CALCULATOR!\n");
    printf("Indiquez l'operation mathematique que je doit resoudre.\n");
    printf("\t -sous la forme [nombre1 operateur nombre2] par exemple (2+3)\n");
    printf("\t -operateurs possibles [+, -, *, /]\n");

    scanf("%d%c%d",&nombre_1,&operateur,&nombre_2);


	// gestion de la division par 0
	if(operateur == '/' && nombre_2 == 0)
	{
		printf("Attention la division par 0 est impossible!\n");
	}
	else
	{
		//gestion des op�rateurs et calcul du resultat
		switch(operateur)
		{
			case '+':
				resultat = nombre_1 + nombre_2;
			break;

			case '-':
				resultat = nombre_1 - nombre_2;
			break;

			case '*':
				resultat = nombre_1 * nombre_2;
			break;

			case '/':
				resultat = nombre_1 / nombre_2;
			break;

			default:
				printf("Operateur %c invalide. Operateurs possibles [+, -, *, /]\n", operateur);
			break;
		}

		// verification de l'operateur saisie par l'utilisateur
		if(operateur == '+' || operateur == '-' || operateur == '*' || operateur == '/')
		{
			//Affichage du r�sultat
			printf("Trop simple! le r�sultat est: %d %c %d = %d.\n",nombre_1 , operateur, nombre_2, resultat);
		}
	}







    return 0;
}
