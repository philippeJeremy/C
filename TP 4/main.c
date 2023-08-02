/*

- Objectifs :

Nous allons créer un programme qui permet de faire des calculs géométriques
plus avancées. Nous allons alors demander à l’utilisateur les dimensions de la
forme géométrique puis faire les calculs et affichage des résultats.

- Instructions :

 1- Demander à l'utilisateur de donner le rayon d'un cercle (int)
 2- Calculer et afficher le Diamètre du cercle (int)
 3- Calculer et afficher la Circonférence du cercle (float)
 4- Calculer et afficher l'Aire du cercle (float)

- Pour aller plus loin :

 A- Calculer et afficher le volume d'un cylindre (float).
 B- Calculer et afficher le volume d'un cône (float)

*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("TP4 - Complements sur les variables\n");

    int rayon=0, diametre=0;
    float circonference=0.0, air=0.0;

    int hauteur = 0;
    float volume_cylindre=0, volume_cone=0;

    printf("Veuillez indiquez le rayon d'un cercle :");
    scanf("%d", &rayon);

    diametre = 2 * rayon;
    circonference = M_PI * (float)diametre;
    air = M_PI * pow(rayon, 2);

    printf("Cercle de rayon %d\n", rayon);
    printf("\t diametre = %d\n", diametre);
    printf("\t circonference = %f\n", circonference);
    printf("\t air = %f\n", air);


    printf("Donnez la hauteur de la forme geometrique 3D :");
    scanf("%d", &hauteur);

    volume_cylindre = air * (float)hauteur;
    volume_cone = volume_cylindre / 3.0;

    printf("Cylindre de hauteur %d a pour volume %f \n",hauteur, volume_cylindre);
    printf("Cone de hauteur %d a pour volume %f\n", hauteur, volume_cone);

    return 0;
}
