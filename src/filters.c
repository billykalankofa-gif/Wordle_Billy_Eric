#include <stdio.h>
#include <string.h>

void filter_contains(char **words, int size, char letter) {
    for (int i = 0; i < size; i++) {
        if (strchr(words[i], letter)) {
            printf("%s\n", words[i]);
        }
    }
}

