/**
 *  Soluzione di for1
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
    int N, i;
    scanf("%d", &N);
    for(i = 1; i <= N; i++)
       printf("%d ", i);
    printf("\n");
    return 0;
}

