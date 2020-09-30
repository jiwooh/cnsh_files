#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;
int v, e;
vector<int> G[10]; 
vector<int> L[10]; //방문 기록 
int ro[45]; //경로 저장 
int num=0;
struct vertex {
	int now;
	int cnt;
} t;
queue<vertex> Q;
bool visited[10];

int main() {
    int v1, v2;
    scanf("%d %d", &v, &e);
    for (int i=1;i<=e;i++) {
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
            do {
            	for (int i=1;i<=v;i++) {
            		for (int j=0;j<L[i].size();j++) {
						if (t.now==L[i][j]) { //찾는 위치가 기록 배열에서 발견될 경우  
							ro[++num]=i; //route 배열에 경로 저장 (끝에서 처음 방향) 
							t.now=i; //찾는 위치의 값을 찾던 위치로 가기 전 정점의 값으로 변경
						}
					}
				}
			} while (t.now!=v1); //찾는 위치가 출발점이 될 때까지 반복  
			for (int i=num;i>0;i--) { //경로가 반대로 저장되었으므로 처음에서 끝 방향으로 출력위해 i-- 
				printf("%d -> ", ro[i]); //경로 출력  
			}
			printf("%d", v2); //도착점  
            return 0;
        } else {
            for (int i=0;i<G[t.now].size();i++) {
                if (visited[G[t.now][i]]==0) {
                    Q.push({G[t.now][i], t.cnt+1});
                    visited[G[t.now][i]]=1;
                    L[t.now].push_back(G[t.now][i]);
                }
            }
        }
    }
    printf("Impossible");
}
