#include <stdio.h>
#include <queue>
int n, k, G[101][101], v[101];
std::queue<int> Q;
void BFS(int t) {
    printf("%d ", t);
    Q.push(t);
    v[t]=1;
    while (!Q.empty()) {
        t=Q.front();
        Q.pop();
        for (int i=1;i<=n;i++) {
            if (G[t][i] && !v[i]) {
                printf("%d ", i);
                Q.push(i);
                v[i]=1;
            }
        }
    }
}
int main() {
    scanf("%d %d", &n, &k);
    int s, e;
    for (int i=1;i<=k;i++) {
        scanf("%d %d", &s, &e);
        G[s][e]=1;
        G[e][s]=1;
    }
    BFS(1);
}
