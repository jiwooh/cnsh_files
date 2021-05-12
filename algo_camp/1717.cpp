#include <stdio.h>
int parent[1000010];
int find(int t) {
	if (parent[t]<0) return t;
	else return parent[t]=find(parent[t]);
}
void unity(int x, int y) {
	x=find(x);
	y=find(y);
	if (x==y) return;
	if (parent[x]<parent[y]) {
		parent[x]+=parent[y];
		parent[y]=x;
	} else {
		parent[y]+=parent[x];
		parent[x]=y;
	}
}
int main() {
	int n, m, f, a, b;
	scanf("%d %d", &n, &m);
	for (int i=0;i<=n;i++) {
		parent[i]=-1;
	}
	for (int i=0;i<m;i++) {
		scanf("%d %d %d", &f, &a, &b);
		if (f==1) {
			if (find(a)==find(b)) printf("YES");
			else printf("NO");
		} else {
			unity(a, b);
		}
	}
}
