#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char lire_caractere()
{
    char caractere = 0;

    caractere = gets(); // On lit le premier caractère
    caractere = toupper(caractere); // On met la lettre en majuscule si elle ne l'est pas déjà

    // On lit les autres caractères mémorisés un à un jusqu'au \n (pour les effacer)
    while (gets() != '\n') ;

    return caractere; // On retourne le premier caractère qu'on a lu.
}
