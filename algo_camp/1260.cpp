#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
vector<int> v[1002];
queue<int> Q;
int visited[1002], visited2[1002];
void dfs(int t) {
	printf("%d ", t);
	visited[t]=1;
	for (int i=0;i<v[t].size();i++) {
		if (visited[v[t][i]]==0) dfs(v[t][i]);
	}
}
int main() {
	int n, m, vv, a, b;
	scanf("%d %d %d", &n, &m, &vv);
	for (int i=1;i<=m;i++) {
		scanf("%d %d", &a, &b);
		v[a].push_back(b);
		v[b].push_back(a);
	}
	for (int i=1;i<=n;i++) sort(v[i].begin(),v[i].end());
	// DFS START
	dfs(vv);
	
	printf("\n");
	// BFS START
	Q.push(vv);
	visited2[vv]=1;
	while (!Q.empty()) {
		for (int i=0;i<Q.size();i++) {
			int t=Q.front();
			Q.pop();
			printf("%d ", t);
			for (int j=0;j<v[t].size();j++) {
				if (visited2[v[t][j]]==0) {
					Q.push(v[t][j]);
					visited2[v[t][j]]=1;
				}
			}
		}
	}
}
