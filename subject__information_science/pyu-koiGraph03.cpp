#include <stdio.h>
#include <vector>
int v, e;
std::vector<int> G[10];
int main() { 
    int v1, v2;
    scanf("%d %d", &v, &e);
    for (int i=1;i<=e;i++) {
        scanf("%d %d", &v1, &v2);
        G[v1].push_back(v2);
    }
    for (int i=1;i<=v;i++) {
        printf("%d: ", i);
        for (int j=0;j<G[i].size();j++) {
            printf("%d ", G[i][j]);
        }
        printf("\n");
    }
}
