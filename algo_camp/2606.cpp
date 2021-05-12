#include <stdio.h>
#include <vector>
using namespace std;
vector<int> v[102];
int visited[102], c;
void dfs(int t) {
	c++;
	visited[t]=1;
	for (int i=0;i<v[t].size();i++) {
		if (visited[v[t][i]]==0) dfs(v[t][i]);
	}
}
int main() {
	int n, m, vv, a, b;
	scanf("%d", &n);
	scanf("%d", &m);
	for (int i=1;i<=m;i++) {
		scanf("%d %d", &a, &b);
		v[a].push_back(b);
		v[b].push_back(a);
	}
	dfs(1);
	printf("%d", c-1);
}
