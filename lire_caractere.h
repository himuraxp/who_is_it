#ifndef LIRE_CARACTERE_H_INCLUDED
#define LIRE_CARACTERE_H_INCLUDED

char lire_caractere();

char lire_caractere()
{
    char caractere = 0;

    gets(caractere); // On lit le premier caractère
    caractere = toupper(caractere); // On met la lettre en majuscule si elle ne l'est pas déjà

    // On lit les autres caractères mémorisés un à un jusqu'au \n (pour les effacer)
    while (getchar() != '\n') ;

    return caractere; // On retourne le premier caractère qu'on a lu.
}

#endif // LIRE_CARACTERE_H_INCLUDED
