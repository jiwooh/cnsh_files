#include <stdio.h>
int v, e, G[10][10];
int main() { 
    int v1, v2, w;
    scanf("%d %d", &v, &e);
    for (int i=1;i<=e;i++) {
        scanf("%d %d %d", &v1, &v2, &w);
        G[v1][v2]=w;
    }
    for (int i=1;i<=v;i++) {
        for (int j=1;j<=e;j++) {
            if (G[i][j]!=0) {
                printf("%d¡æ%d: ", i, j);
                printf("%d ", G[i][j]);
                printf("\n");
            }
        }
    }
}
