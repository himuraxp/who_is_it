#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char lire_caractere()
{
    char caractere = 0;

    caractere = gets(); // On lit le premier caract�re
    caractere = toupper(caractere); // On met la lettre en majuscule si elle ne l'est pas d�j�

    // On lit les autres caract�res m�moris�s un � un jusqu'au \n (pour les effacer)
    while (gets() != '\n') ;

    return caractere; // On retourne le premier caract�re qu'on a lu.
}
