#include <stdio.h>
using namespace std;
int visited[52][52], d[52][52], cnt[52];
int dx[]={0,1,-1,0};
int dy[]={1,0,0,-1};
int t, m, n;
void find(int x, int y) {
	visited[x][y]=1;
	for (int i=0;i<4;i++) {
		int nx=x+dx[i];
		int ny=y+dy[i];
		if (nx<n && ny<m && nx>=0 && ny>=0 && visited[nx][ny]==0 && d[nx][ny]==1) {
			find(nx, ny);
		}
	}
}
int main() {
	int k, q, w;
	scanf("%d", &t);
	
	for (int a=1;a<=t;a++) {
		scanf("%d %d %d", &n, &m, &k);
		for (int i=1;i<=k;i++) {
			scanf("%d %d", &q, &w);
			d[w][q]=1;
		}
		for (int i=0;i<m;i++) {
			for (int j=0;j<n;j++) {
				if (visited[i][j]==0 && d[i][j]==1) {
					find(i,j);
					cnt[a]++;
					printf("%d %d\n", i, j);
				}
			}
		}
		for (int i=0;i<m;i++) {
			for (int j=0;j<n;j++) {
				visited[i][j]=0;
				d[i][j]=0;
			}
		}
	}
	for (int a=1;a<=t;a++) {
		printf("%d\n", cnt[a]);
	}
}
