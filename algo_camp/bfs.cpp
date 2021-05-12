#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;
vector<int> V[20];
queue<int> Q;
int visited[20];
int main() {
	int a, b;
	v[1].push_back(2);
	v[2].push_back(1);
	v[1].push_back(4);
	v[4].push_back(1);
	v[2].push_back(3);
	v[3].push_back(2);
	
	Q.push(1);
	visited[1]=1;
	while (!Q.empty()) {
		for (int i=0;i<Q.size();i++) {
			int t=Q.front();
			Q.pop();
			printf("%d", t);
			for (int j=0;j<v[t].size();j++) {
				if (visited[v[t][i]]==0) {
					Q.push(v[t][i]);
					visited[v[t][j]]=1;
				}
			}
		}
	}
}
