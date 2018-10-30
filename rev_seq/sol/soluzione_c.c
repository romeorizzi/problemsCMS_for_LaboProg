/**
 *  Soluzione di reverseseq.
 *
 *  Autore: Romeo Rizzi
 *
 *  Descrizione: Banale.
 */
#include <stdio.h>
int main() {
#ifdef EVAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int N, i;
    scanf("%d", &N);
    int vect[N];
    for(i = 0; i < N; i++)
       scanf("%d", &vect[i]);
    printf("%d\n", N);
    for(i = N-1; i >= 0; i--)
       printf("%d ", vect[i]);
    printf("\n");
    return 0;
}

