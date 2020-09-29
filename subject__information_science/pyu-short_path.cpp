#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;
//std 표준 이름공간에 포함된 vector를 사용하기 위함
//전처리기 영역에 이렇게 기술해두면 std::vector에서 std::를 생략할 수 있음
int v, e; //vertex, edge
vector<int> G[10]; //vector 배열 선언  
struct vertex {
	int now;
	int cnt;
} t;
/*
struct vertex {
	int now;
	int cnt;
};
vertex t;
와 같은 표현
*/ 
queue<vertex> Q;
bool visited[10]; //정점 방문 여부를 표시하는 boolean 

int main() {
    int v1, v2;
    scanf("%d %d", &v, &e); //정점 개수, 간선 개수 
    for (int i=1; i<=e; i++) {
        scanf("%d %d", &v1, &v2);
        G[v1].push_back(v2); //v1에 v2가 연결되어 있다 
        G[v2].push_back(v1); //v2에 v1가 연결되어 있다
    }
    
    scanf("%d %d", &v1, &v2); //출발정점, 도착정점 
    Q.push({v1, 0});
    visited[v1]=1;
    
    while (!Q.empty()) {
        t=Q.front(); //t에 큐의 가장 처음 자료의 값들 저장 
		Q.pop(); //큐의 가장 처음 자료 삭제 
        if (t.now==v2) { //현재 정점이 도착정점인지 확인 	
            printf("%d\n", t.cnt);
            return 0;
        }
        else { //현재 도착정점이 아니라면 
            for (int i=0; i<G[t.now].size(); i++) {
                if (visited[G[t.now][i]]==0) { //방문하지 않았을 경우 
                    Q.push({G[t.now][i], t.cnt+1});
                	printf("{%d, %d}", G[t.now][i], t.cnt+1);
                    visited[G[t.now][i]]=1; //방문했다고 표시 
                }
            }
        }
    }
    printf("Impossible");
}
