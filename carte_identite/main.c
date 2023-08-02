#include <stdio.h>
#include <stdlib.h>

int main()
{
    const TAILLE_STRING = 100;

    char date[TAILLE_STRING];
    char nom[TAILLE_STRING];
    char prenom[TAILLE_STRING];
    char couleur[TAILLE_STRING];

    printf("Donnez les informations suivante\n");

    printf("\tDate de naissance: ");
    scanf("%s", date);

    printf("\tnom: ");
    scanf("%s", nom);

    printf("\tprenom: ");
    scanf("%s", prenom);

    printf("\tCouleur des yeux: ");
    scanf("%s", couleur);

    printf("Vous vous appelez %s %s, vous êtes née le %s et vos yeux sont %s.", prenom, nom, date, couleur);

    return 0;
}
