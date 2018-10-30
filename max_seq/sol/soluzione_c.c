/**
 *  Soluzione di max_seq
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
    int N, i, max_so_far, spoon;
    scanf("%d", &N);
    scanf("%d", &max_so_far);
    for(i = 1; i < N; i++) {
       scanf("%d", &spoon);
       if(spoon > max_so_far) max_so_far = spoon;
    }
    printf("%d\n", max_so_far);
    return 0;
}

