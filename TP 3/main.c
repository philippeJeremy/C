/*

- Objectifs

Nous allons créer un programme qui permet de faire des calculs géométriques.
Nous allons alors demander à l’utilisateur les dimensions de la forme
géométrique, puis, faire les calculs et affichage des résultats.

 1- Demander la taille d'un côté de rectangle à l'utilisateur (entier).
 2- Calculer le périmètre du rectangle.
 3- Calculer la surface du rectangle.
 4- Afficher des résultats des calculs.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("TP 3 - Operations sur variables\n\n");

    int largeur=0, hauteur=0;
    int perimetre=0, surface=0;

    printf("Donnez la largeur du rectangle : ");
    scanf("%d", &largeur);

    printf("Donnez la hauteur du rectangle : ");
    scanf("%d", &hauteur);

    perimetre = 2*hauteur + 2*largeur;
    surface = hauteur * largeur;

    printf("Le rectangle fait %d%d \n", largeur, hauteur);
    printf("Le perimetre = %d \n", perimetre);
    printf("La surface = %d \n", surface);


    return 0;
}
