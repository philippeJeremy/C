/*
- Objectifs

Corriger et mettre au propre le code source fournis pour l’exercice.

#include <stdio.h>include <stdlib.h>
int main(){printf("TP 1, "Syntaxe et structure" Hello World!")return 0;}

 1- Indenter le code pour le rendre plus lisible.
 2- Corriger les erreurs de compilation.
 3- Commenter le code.

- Améliorer l'affichage du message:

 A- Afficher le texte sur deux lignes (titre puis le hello world).
 B- Ajouter une tabulation sur la ligne du hello world (utiliser \t pour ajouter une tabulation).

*/

#include <stdio.h>
#include <stdlib.h>

/*
    fonction principale d'un programme écrit en C.
    cette fonction retourne 0 quand tout se passe bien
*/
int main()
{
    // Affichage de notre message de bienvenue
    printf("TP 1, \"Synthaxe et structure\"\n");
    printf("\tHello World!\n");

    return 0; // fin de programme, tout est ok
}
