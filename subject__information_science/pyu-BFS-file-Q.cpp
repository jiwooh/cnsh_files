#include <stdio.h>
#include <queue>
#define N 100
FILE *in=fopen("in.txt", "r");
FILE *out=fopen("out.txt", "w");
int n, st, G[N][N], v[N];
std::queue<int> Q;
void BFS(int t) {
    Q.push(t);
    v[t]=1;
    while (!Q.empty()) {
        t=Q.front();
        fprintf(out, "%d ", t);
        Q.pop();
        for (int i=1;i<=n;i++) {
            if (G[t][i] && !v[i]) {
                //fprintf(out, "%d ", i);
                Q.push(i);
                v[i]=1;
            }
        }
    }
}
int main() {
    int x, y;
    fscanf(in, "%d %d", &n, &st);
    while ( fscanf(in, "%d %d", &x, &y)!=EOF ) {
        G[x][y]=G[y][x]=1;
    }
    BFS(1);
    fclose(in);
    fclose(out);
}
