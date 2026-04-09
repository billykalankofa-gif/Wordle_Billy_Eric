#include <stdio.h>
#include <string.h>
#include "filters.h"

// Charger les mots depuis fichier
int loadWords(char words[MAX_WORDS][MAX_LEN], const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Erreur ouverture fichier\n");
        return 0;
    }

    int count = 0;
    while (fscanf(file, "%s", words[count]) != EOF) {
        count++;
    }

    fclose(file);
    return count;
}

// Filtre : contient une lettre
int filterContains(char words[MAX_WORDS][MAX_LEN], int size, char letter) {
    char temp[MAX_WORDS][MAX_LEN];
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (strchr(words[i], letter) != NULL) {
            strcpy(temp[count], words[i]);
            count++;
        }
    }

    for (int i = 0; i < count; i++) {
        strcpy(words[i], temp[i]);
    }

    return count;
}

// Filtre : exclure une lettre
int filterExclude(char words[MAX_WORDS][MAX_LEN], int size, char letter) {
    char temp[MAX_WORDS][MAX_LEN];
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (strchr(words[i], letter) == NULL) {
            strcpy(temp[count], words[i]);
            count++;
        }
    }

    for (int i = 0; i < count; i++) {
        strcpy(words[i], temp[i]);
    }

    return count;
}

// Filtre : lettre à une position
int filterPosition(char words[MAX_WORDS][MAX_LEN], int size, char letter, int pos) {
    char temp[MAX_WORDS][MAX_LEN];
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (words[i][pos] == letter) {
            strcpy(temp[count], words[i]);
            count++;
        }
    }

    for (int i = 0; i < count; i++) {
        strcpy(words[i], temp[i]);
    }

    return count;
}

// Affichage
void displayWords(char words[MAX_WORDS][MAX_LEN], int size) {
    for (int i = 0; i < size; i++) {
        printf("%s\n", words[i]);
    }
}
