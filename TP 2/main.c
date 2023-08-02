/*

- Objectifs:

Nous allons créer un programme qui permet d'afficher une liste de variable parmis
la liste suivante (int, long, short, float, double et char). l’objectif sera alors
d’afficher le contenue de la variable ainsi que la taille qu'elle occupe en mémoire.

*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("TP 2 - Memoire et Variable\n");

    char mon_char = 'A';

    int mon_int = 2;
    long mon_long = 2;
    short mon_short = 2;

    float mon_float = 12.3;
    double mon_double = 12.3;

    printf("mon double vaut %f et fait %d octet\n", mon_double, sizeof(mon_double));
    printf("mon float vaut %f et fait %d octet\n", mon_float, sizeof(mon_float));
    printf("mon int vaut %f et fait %d octet\n", mon_int, sizeof(mon_int));
    printf("mon long vaut %f et fait %d octet\n", mon_long, sizeof(mon_long));
    printf("mon short vaut %f et fait %d octet\n", mon_short, sizeof(mon_short));
    printf("mon char vaut %f et fait %d octet\n", mon_char, sizeof(mon_char));


    return 0;
}
