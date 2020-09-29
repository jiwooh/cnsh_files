#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;
int v, e;
vector<int> G[10];
struct vertex {
	int now;
	int cnt;
} t;
queue<vertex> Q;
bool visited[10];

int main() {
    int v1, v2;
    scanf("%d %d", &v, &e);
    for (int i=1; i<=e; i++) {
        scanf("%d %d", &v1, &v2);
        G[v1].push_back(v2);
        G[v2].push_back(v1);
    }
    
    scanf("%d %d", &v1, &v2);
    Q.push({v1, 0});
    visited[v1]=1;
    
    while (!Q.empty()) {
        t=Q.front();
		Q.pop();
        if (t.now==v2) {
            printf("%d\n", t.cnt);
            return 0;
        }
        else {
            for (int i=0; i<G[t.now].size(); i++) {
                if (visited[G[t.now][i]]==0) {
                    Q.push({G[t.now][i], t.cnt+1});
                    visited[G[t.now][i]]=1;
                }
            }
        }
    }
    printf("Impossible");
}
