#include <stdio.h>
#include <stdlib.h>
#include "un_joueur.h"
#include "deux_joueurs.h"

void color(int couleurDuTexte,int couleurDeFond);

int main()
{
    int mode = 0;
    color(4,0);
    printf("=====================\n|MARVEL VS DC COMICS|\n=====================");
    color(15,0);
    printf("\n\n-----------------------------------------------------------------\n| Bienvenue dans le jeu du Qui est-ce ? Version super heros !!! |\n-----------------------------------------------------------------\n");

    printf("\nVeuillez selectionner le mode de jeu:\n");
    printf("\nSolo: tapez 1");
    printf("\nVersus: tapez 2");

        while(mode == 0)
        {
            printf("\n\nVotre choix --> ");
            scanf("%d", &mode);

            if (mode == 1)
            {
                jouer_1();
            }

            else if (mode == 2)
            {
                jouer_2();
            }

            else
            {
                printf("Vous vous etes trompe dans votre choix, recommencer");
                mode = 0;
            }

        }

    return 0;
}
