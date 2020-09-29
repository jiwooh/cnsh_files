#include <stdio.h>
int v, e, G[100001];
int main() { 
    int v1, v2, w;
    scanf("%d %d", &v, &e);
    for (int i=1;i<=e;i++) {
        scanf("%d %d %d", &G[i], &G[100+i], &G[10000+i]);
    }
    for (int i=1;i<=e;i++) {
        if (G[10000+i]!=0) {
            printf("%d¡æ%d: ", G[i], G[100+i]);
            printf("%d ", G[10000+i]);
            printf("\n");
        }
    }
}
