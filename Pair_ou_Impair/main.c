/*

- Objectifs :

1- Demander à l’utilisateur de rentrer un nombre entier
2- Afficher si le nombre est pair ou impair

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Pair ou impair ?\n");

    int nombre = 0;

    printf("Veuillez entrez un nombre :");
    scanf("%d", &nombre);

    if((nombre % 2) == 0)
    {
        printf("Votre nombre %d est pair\n", nombre);
    }
    else
    {
        printf("Votre nombre %d est impair\n", nombre);
    }

    return 0;
}
