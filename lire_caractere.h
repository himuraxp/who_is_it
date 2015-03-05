#ifndef LIRE_CARACTERE_H_INCLUDED
#define LIRE_CARACTERE_H_INCLUDED

char lire_caractere();

char lire_caractere()
{
    char caractere = 0;

    gets(caractere); // On lit le premier caract�re
    caractere = toupper(caractere); // On met la lettre en majuscule si elle ne l'est pas d�j�

    // On lit les autres caract�res m�moris�s un � un jusqu'au \n (pour les effacer)
    while (getchar() != '\n') ;

    return caractere; // On retourne le premier caract�re qu'on a lu.
}

#endif // LIRE_CARACTERE_H_INCLUDED
