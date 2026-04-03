// Pag 259 es. 13
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    unsigned int n;
    if (scanf("%u", &n) != 1) return 0;
    if (n == 0) { printf("0\n"); return 0; }
    char buf[64];
    int pos = 0;
    while (n > 0) {
        buf[pos++] = (n % 2) ? '1' : '0';
        n /= 2;
    }
    for (int i = pos - 1; i >= 0; --i) putchar(buf[i]);
    putchar('\n');
    return 0;
}
