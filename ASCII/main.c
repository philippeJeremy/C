/*

- Objectifs :

1- Afficher le code ASCII (décimal) d'une lettre écrite par l'utilisateur.
2- Afficher également le code ASCII en hexadécimal

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ASCII \n");

    char mon_char = ' ';

    printf("Entrez une lettre : ");
    scanf("%c", &mon_char);

    printf("Vous avez entrez la lettre ASCII %c, soit:\n", mon_char);
    printf("\t - %d en decimal\n", (int)mon_char);
    printf("\t - %x en hexadecimal\n", (int)mon_char);

    return 0;
}
