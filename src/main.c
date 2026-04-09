#include <stdio.h>
#include "filters.h"

int main() {
    char words[MAX_WORDS][MAX_LEN];
    int size;

    // Charger les mots
    size = loadWords(words, "ressource/bdd_wordle.txt");

    printf("Nombre de mots initial : %d\n", size);

    int choix;
    char letter;
    int pos;

    do {
        printf("\n--- MENU ---\n");
        printf("1. Filtrer mots contenant une lettre\n");
        printf("2. Exclure une lettre\n");
        printf("3. Lettre a une position\n");
        printf("4. Afficher mots\n");
        printf("0. Quitter\n");
        printf("Choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                printf("Lettre : ");
                scanf(" %c", &letter);
                size = filterContains(words, size, letter);
                printf("Nouveau nombre de mots : %d\n", size);
                break;

            case 2:
                printf("Lettre : ");
                scanf(" %c", &letter);
                size = filterExclude(words, size, letter);
                printf("Nouveau nombre de mots : %d\n", size);
                break;

            case 3:
                printf("Lettre : ");
                scanf(" %c", &letter);
                printf("Position (0-4) : ");
                scanf("%d", &pos);
                size = filterPosition(words, size, letter, pos);
                printf("Nouveau nombre de mots : %d\n", size);
                break;

            case 4:
                displayWords(words, size);
                break;
        }

    } while (choix != 0);

    return 0;
}
