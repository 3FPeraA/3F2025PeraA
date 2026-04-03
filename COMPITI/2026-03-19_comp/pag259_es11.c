// Pag 259 es. 11
#include <stdio.h>

int main(void) {
    int v[10];
    for (int i = 0; i < 10; ++i) {
        if (scanf("%d", &v[i]) != 1) return 0;
    }
    int all_pari = 1;
    for (int i = 0; i < 10; ++i) {
        /* posizioni pari in senso 1-based: i+1 */
        if (((i+1) % 2) == 0) {
            if ((v[i] % 2) != 0) { all_pari = 0; break; }
        }
    }
    if (all_pari) printf("Si\n"); else printf("No\n");
    return 0;
}
