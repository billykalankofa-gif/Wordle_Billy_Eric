#include <stdio.h>
#include <stdlib.h>

char** load_words(const char *filename, int *size) {
    FILE *file = fopen(filename, "r");
    if (!file) return NULL;

    char **words = malloc(10000 * sizeof(char*));
    char buffer[100];

    int i = 0;
    while (fscanf(file, "%s", buffer) != EOF) {
        words[i] = strdup(buffer);
        i++;
    }

    *size = i;
    fclose(file);
    return words;
}
