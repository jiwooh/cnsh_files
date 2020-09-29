#include <stdio.h>
#include <vector>
int v, e;
std::vector<int> G[10][10];
int main() { 
    int v1, v2, w;
    scanf("%d %d", &v, &e);
    for (int i=1;i<=e;i++) {
        scanf("%d %d %d", &v1, &v2, &w);
        G[v1][v2].push_back(w);
    }
    for (int i=1;i<=v;i++) {
        for (int j=1;j<=e;j++) {
            for (int k=0;k<G[i][j].size();k++) {
                printf("%d,%d: ", i, j);
                printf("%d ", G[i][j][k]);
                printf("\n");
            }
        }
    }
}
