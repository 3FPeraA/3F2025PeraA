/*
PAG. 117 ES. 6
Scrivi un programma in C o in C# che verifichi
se un carattere digitato da tastiera corrisponde a:
- “S” o “s”, e in tal caso visualizzi il messaggio “Sì”;
- “N” o “n”, e in tal caso visualizzi il messaggio “No”;
- un qualsiasi altro carattere, e il tal caso visualizzi il
messaggio “Errato”.
*/

#include <stdio.h>
int main() {
    char c;
    printf("Inserisci un carattere: ");
    scanf(" %c", &c);
    if (c == 'S' || c == 's') {
        printf("Si\n");
    } else if (c == 'N' || c == 'n') {
        printf("No\n");
    } else {
        printf("Errato\n");
    }
}