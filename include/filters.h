#ifndef FILTERS_H
#define FILTERS_H

#define MAX_WORDS 10000
#define MAX_LEN 50

// Charger les mots depuis fichier
int loadWords(char words[MAX_WORDS][MAX_LEN], const char *filename);

// Filtres
int filterContains(char words[MAX_WORDS][MAX_LEN], int size, char letter);
int filterExclude(char words[MAX_WORDS][MAX_LEN], int size, char letter);
int filterPosition(char words[MAX_WORDS][MAX_LEN], int size, char letter, int pos);

// Affichage
void displayWords(char words[MAX_WORDS][MAX_LEN], int size);

#endif
