// Pag 259 es. 19
// Implementazione manuale
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char v1[21];
    char v2[6];
    for (int i = 0; i < 20; ++i) {
        if (scanf(" %c", &v1[i]) != 1) return 0;
    }
    v1[20] = '\0';
    for (int i = 0; i < 5; ++i) {
        if (scanf(" %c", &v2[i]) != 1) return 0;
    }
    v2[5] = '\0';
    for (int i = 0; i < 20; ++i) {
        for (int j = 0; j < 5; ++j) {
            if (v1[i] == v2[j]) { v1[i] = '*'; break; }
        }
    }
    for (int i = 0; i < 20; ++i) {
        if (i) printf(" ");
        printf("%c", v1[i]);
    }
    printf("\n");
    return 0;
}
