/**
 *  Soluzione di for2
 *
 *  Autore: Romeo Rizzi
 *
 *  Descrizione: Banale
 */
#include <stdio.h>
int main() {
#ifdef EVAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int N, i, j;
    scanf("%d", &N);
    for(i = 1; i <= N; i++) {
       for(j = 1; j <= N; j++)
          printf("%d ", i*j);
       printf("\n");
    }
    return 0;
}

