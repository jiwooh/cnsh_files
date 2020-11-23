#include <stdio.h>
#define N 100
int n, k, G[N][N], v[N];
int Q[N], rear, front=1;
bool Q_empty() {
    if (rear<front) return true;
    else return false;
}
int Q_front() {
    return Q[front];
}
void Q_pop() {
    front++;
}
void Q_push(int s) {
    rear++;
    Q[rear]=s;
}
void BFS(int t) {
    printf("%d ", t);
    Q_push(t);
    v[t]=1;
    while (!Q_empty()) {
        t=Q_front();
        Q_pop();
        for (int i=1;i<=n;i++) {
            if (G[t][i] && !v[i]) {
                printf("%d ", i);
                Q_push(i);
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
