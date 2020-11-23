#include <stdio.h>
#define N 100
FILE *in=fopen("in.txt", "r");
FILE *out=fopen("out.txt", "w");
int n, st, G[N][N], v[N];
int Q[N], rear, front=1;
bool Q_empty() {
    if (rear<front) return true;
    else return false;
}
int Q_top() {
    return Q[front];
}
void Q_pop() {
    front++;
}
void Q_push(int s) {
    rear++;
    Q[rear]=s;
}
void BFS() {
    int i, t;
    Q_push(t);
    v[t]=1;
    while (!Q_empty()) {
        t=Q_top();
        fprintf(out, "%d ", t);
        Q_pop();
        for (int i=1;i<=n;i++) {
            if (G[t][i] && !v[i]) {
                //fprintf(out, "%d ", i);
                Q_push(i);
                v[i]=1;
            }
        }
    }
}
int main() {
    int x, y;
    fscanf(in, "%d %d", &n, &st);
    while (fscanf(in, "%d %d", &x, &y)!=EOF) {
        G[x][y]=G[y][x]=1;
    }
    BFS();
    fclose(in);
    fclose(out);
}
