#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int MAX_TENTATIVES = 12;
    const int NOMBRE_COULEUR = 5;
    const char COULEUR[] = {'R', 'V', 'B', 'J', 'O'};
    const int TAILLE_DU_CODE = 4;

    char code_secret[TAILLE_DU_CODE];
    char saisie_utilisateur[TAILLE_DU_CODE];

    //generation du code secret
    srand(time(NULL));
    for(int i=0; i<TAILLE_DU_CODE; i++)
    {
        int couleur_id = rand() % NOMBRE_COULEUR;
        code_secret[i] = COULEUR[couleur_id];

    }

    for(int nb_tentatives=1; nb_tentatives <= MAX_TENTATIVES; nb_tentatives++)
    {
        //lecture saisie utilisateur
        printf("Donnez un code de 4 couleurs parmis {'R', 'V', 'B', 'J', 'O']\n");
        fflush(stdin);
        scanf("%c%c%c%c", saisie_utilisateur, (saisie_utilisateur+1), (saisie_utilisateur+2), (saisie_utilisateur+3));

        int nb_couleur_place = 0;
        int nb_couleur_presente = 0;

        // comparaison du code secret et de la saisie utilisateur
        for(int i=0; i<TAILLE_DU_CODE; i++)
        {
            short couleur_presente = 0;
            for(int j=0; j<TAILLE_DU_CODE; j++) //boucle saisie utilisateur
            {
                if(code_secret[i] == saisie_utilisateur[j]) // couleur presente
                {
                    couleur_presente = 1;
                    if(i == j)
                    {
                        nb_couleur_place++;
                        break;
                    }
                }
            }
            nb_couleur_presente += couleur_presente;
        }


        //gestion fin de partie
        if(nb_couleur_place == TAILLE_DU_CODE)
        {
            printf("Bravos! vous avez trouvez le code secret en %d tentatives\n", nb_tentatives);
            break;
        }
        else if(nb_tentatives >= MAX_TENTATIVES)
        {
            printf("Dommage! vous avez depasse le nombre maximum de tentatives\n");
            printf("le bon code est %c%c%c%c\n", code_secret[0], code_secret[1], code_secret[2], code_secret[3]);
        }
        else
        {
            printf("\t Tentative %d/%d\n", nb_tentatives, MAX_TENTATIVES);
            printf("Couleurs bien placees: %d\n\n", nb_couleur_place);
            printf("Couleurs mal placees: %d\n\n", nb_couleur_presente - nb_couleur_place);
        }

    }


    return 0;
}
