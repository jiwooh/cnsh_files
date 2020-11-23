#include <stdio.h>
#include <stack>
#define MAX 1000
int n, k, G[MAX+1][MAX+1];
int v[MAX+1];
std::stack<int> S;
void DFS(int t) {
    S.push(t);
    while(!S.empty()) {
        t=S.top();
        S.pop();
        if (v[t]==0) {
            printf("%d ", t);
            v[t]=1;
            for (int i=n;i>=1;i--) {
                if (G[t][i]==1 && v[i]==0) {
                    S.push(i);
                }
            }
        }
    }
}
int main() {
    int s, e, st;
    scanf("%d %d", &n, &k);
    for (int i=1;i<=k;i++) {
        scanf("%d %d", &s, &e);
        G[s][e]=1;
        G[e][s]=1;
    }
    printf("start from : ");
    scanf("%d", &st);
    DFS(st);
}
