#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "lire_caractere.h"


void jouer_1()
{
    //Nom
    char name_hero[6][15] = {{"BATMAN"},
                          {"GREEN LANTERN"},
                          {"IRON MAN"},
                          {"WONDER WOMAN"},
                          {"HARLEY QUINN"},
                          {"JOKER"}};

    char *hero_enter = NULL;
    char *hero_mystere = NULL;
    long taille_nom = 0;

    //Caractéristiques = Homme, Armure, Arme, Pouvoir, Gentil.
    int heros[6][4] = {{1, 0, 1, 0, 1},
                       {1, 0, 0, 1, 1},
                       {1, 1, 1, 0, 1},
                       {0, 0, 1, 1, 1},
                       {0, 0, 1, 0, 0},
                       {1, 0, 1, 0, 0}};

    //Caractéristique héros pour le rand.
    int batman[5] = {1, 0, 1, 0, 1},
        green_lanterne[5] = {1, 0, 0, 1, 1},
        iron_man[5] = {1, 1, 1, 0, 1},
        wonder_woman[5] = {0, 0, 1, 1, 1},
        harley_quinn[5] = {0, 0, 1, 0, 0},
        joker[5] = {1, 0, 1, 0, 0};

    int choix_critere = 0; //Questionnaire
    int erreur_crit = 0; //While
    int compteur = 0, compteur_positif = 0;
    int liste_hero[4] = {0}; //Héros restants.
    int search_hero[4] = {0}; //Héros Trouvé.
    int sexe = 0, armure = 0, arme = 0, pouvoir = 0, gentil = 0; //Caractéristique d'incrementation.
    int crit_1 = 0, crit_2 = 0, crit_3 = 0, crit_4 = 0, crit_0 = 0; //Boucle while.
    int i = 0, a = 0, c = 0; //Boucle for i et a. c pour les different critères.
    //Création random.
    int h_rand = 0;
    const int MAX = 6, MIN = 1;

    printf("\nBienvenue dans le mode 1 joueur !!\n==================================\n");
    printf("Liste des Heros:\n----------------\n");

    //Boucle d'affichage des héros.
    for (a = 0; a < 6; a++)
    {
        printf("\n%s", name_hero[a]);
    }

    //Auto-select du héro par random.
    srand(time(NULL));
    h_rand = (rand() % (MAX - MIN + 1)) + MIN;

    if (h_rand == 1)
    {
        for (i = 0 ; i < 5 ; i++)
        {
            liste_hero[i] = batman[i];
        }
    hero_mystere = "BATMAN";
    printf("\n\nLe Hero Mystere est %s", hero_mystere);
    }
    else if (h_rand == 2)
    {
        for (i = 0 ; i < 5 ; i++)
        {
            liste_hero[i] = green_lanterne[i];
        }
    hero_mystere = "GREEN LANTERN";
    printf("\n\nLe Hero Mystere est %s", hero_mystere);
    }
    else if (h_rand == 3)
    {
        for (i = 0 ; i < 5 ; i++)
        {
            liste_hero[i] = iron_man[i];
        }
    hero_mystere = "IRON MAN";
    printf("\n\nLe Hero Mystere est %s", hero_mystere);
    }
    else if (h_rand == 4)
    {
        for (i = 0 ; i < 5 ; i++)
        {
            liste_hero[i] = wonder_woman[i];
        }
    hero_mystere = "WONDER WOMAN   ";
    printf("\n\nLe Hero Mystere est %s", hero_mystere);
    }
    else if (h_rand == 5)
    {
        for (i = 0 ; i < 5 ; i++)
        {
            liste_hero[i] = harley_quinn[i];
        }
    hero_mystere = "HARLEY QUINN";
    printf("\n\nLe Hero Mystere est %s", hero_mystere);
    }
    else if (h_rand == 6)
    {
        for (i = 0 ; i < 5 ; i++)
        {
            liste_hero[i] = joker[i];
        }
    hero_mystere = "JOKER";
    printf("\n\nLe Hero Mystere est %s", hero_mystere);
    }
    else
    {
        printf("\n================\nErreur rank hero\n================\n");
    }


    //Questionnaire
    while (crit_0 == 0 || crit_2 == 0 || crit_3 == 0 || crit_4 == 0 || crit_1 == 0)
    {
        printf("\n\n----------------------------\nNombre de bon(s) coup(s): %d \n----------------------------\n", compteur_positif);
        printf("Nombre d'erreur(s): %d \n----------------------------\n", compteur);
        printf("\n\n--------------------------------------------------------------\nVeuillez selectionner un critere pour trouver le hero mystere:\n--------------------------------------------------------------");

        //Affichage du menu de critère non trouvé.
        if (sexe == 0)
        {
            printf("\n1 = Sexe");
        }
        if (armure == 0)
        {
            printf("\n2 = Armure");
        }
        if (arme == 0)
        {
            printf("\n3 = Arme");
        }
        if (pouvoir == 0)
        {
            printf("\n4 = Pouvoir");
        }
        if (gentil == 0)
        {
            printf("\n5 = Gentil");
        }

        //Proposer directement un héro.
        printf("\n6 = Qui est le HERO MYSTERE ?");

        do
        {
            erreur_crit = 0;
            printf("\n\nFAITES VOTRE CHOIX --> ");

            scanf("%d", &choix_critere);

            printf("\n\n");

            //Questionnaire
            if (choix_critere == 1)
            {
                c = 0;
                crit_0 = 1;
                printf("\n---------------------\n| 1 = oui | 0 = non |\n---------------------\nEst-ce un HOMME ? ");
                scanf("%d", &search_hero[0]);
                if (search_hero[0] == liste_hero[0])
                {
                    printf("\nBien jouer !\n============\n");
                    compteur_positif++;
                    sexe++;
                }
                else
                {
                    printf("\nNon, dommage !\n==============\n");
                    search_hero[0] = liste_hero[0];
                    compteur++;
                }
            }
            else if (choix_critere == 2)
            {
                c = 1;
                crit_1 = 1;
                printf("\n---------------------\n| 1 = oui | 0 = non |\n---------------------\nPosede t-il (elle) une ARMURE ? ");
                scanf("%d", &search_hero[1]);
                if (search_hero[1] == liste_hero[1])
                {
                    printf("\nBien jouer !\n============\n");
                    compteur_positif++;
                    armure++;
                }
                else
                {
                    printf("\nNon, dommage !\n==============\n");
                    search_hero[1] = liste_hero[1];
                    compteur++;
                }
            }
            else if (choix_critere == 3)
            {
                c = 2;
                crit_2 = 1;
                printf("\n---------------------\n| 1 = oui | 0 = non |\n---------------------\nPosede t-il (elle) une(s) ARME(S) ? ");
                scanf("%d", &search_hero[2]);
                if (search_hero[2] == liste_hero[2])
                {
                    printf("\nBien jouer !\n============\n");
                    compteur_positif++;
                    arme++;
                }
                else
                {
                    printf("\nNon, dommage !\n==============\n");
                    search_hero[2] = liste_hero[2];
                    compteur++;
                }
            }
            else if (choix_critere == 4)
            {
                c = 3;
                crit_3 = 1;
                printf("\n---------------------\n| 1 = oui | 0 = non |\n---------------------\nPosede t-il (elle) un (des) POUVOIR(S) ? ");
                scanf("%d", &search_hero[3]);
                if (search_hero[3] == liste_hero[3])
                {
                    printf("\nBien jouer !\n============\n");
                    compteur_positif++;
                    pouvoir++;
                }
                else
                {
                    printf("\nNon, dommage !\n==============\n");
                    search_hero[3] = liste_hero[3];
                    compteur++;
                }
            }
            else if (choix_critere == 5)
            {
                c = 4;
                crit_4 = 1;
                printf("\n---------------------\n| 1 = oui | 0 = non |\n---------------------\nEs-un SUPER-VILIAN ? ");
                scanf("%d", &search_hero[4]);
                if (search_hero[4] == liste_hero[4])
                {
                    printf("\nBien jouer !\n============\n");
                    compteur_positif++;
                    gentil++;
                }
                else
                {
                    printf("\nNon, dommage !\n==============\n");
                    search_hero[4] = liste_hero[4];
                    compteur++;
                }
            }
            else if (choix_critere == 6)
            {
                taille_nom = strlen(hero_mystere);

                // On alloue dynamiquement le tableau lettreTrouvee (dont on ne connaissait pas la taille au départ)
                hero_enter = malloc(taille_nom * sizeof(char));
                if (hero_enter == NULL)
                    exit(0);

                printf("\nQui est le HERO MYSTERE ? ");
                hero_enter = lire_caractere();
                printf("\nVous pensez que le HERO MYSTERE est %s", hero_enter);
                if (hero_enter == hero_mystere)
                {
                    printf("\n\nVrai\n\n");
                }
                else
                {
                    printf("\n\nErreur\n\n");
                }
            }
            else
            {
                printf("\nVotre choix n'est pas dans la liste !!\n");
                erreur_crit = 1;
            }
        }while (erreur_crit == 1);
        printf("\nVoici les heros repondants a ce critere:\n=======================================\n");

        //Affichage de la liste des héros restants.
        if (liste_hero[c] == 1)
        {
          for (a = 0 ; a <= 5; a++)
                {
                    if(heros[a][c] == 1)
                    {
                        printf("\n%s", name_hero[a]);
                    }

                }
        }
        else
        {
            for (a = 0 ; a <= 5; a++)
                {
                    if(heros[a][c] != 1)
                    {
                        printf("\n%s", name_hero[a]);
                    }
                }
        }

    }
        printf("\n=====================\nBravo tu as reussis !\n=====================\nLe hero etait %s \n\n", hero_mystere);
}


