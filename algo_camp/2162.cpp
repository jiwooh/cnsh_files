#include <stdio.h>
#include <utility>
#include <algorithm>
using namespace std;
int parent[3001];
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
int ccw(pair<int, int> a, pair<int, int> b, pair<int, int> c) {
	int op=a.first*b.second+b.first*c.second+c.first*a.second;
	op-=a.second*b.first+b.second*c.first+c.second*a.first;
	if (op>0) return 1;
	else if (op==0) return 0;
	else return -1;
}
int check(pair<int, int> a, pair<int, int> b, pair<int, int> c, pair<int, int> d) {
	int ab=ccw(a,b,c)*ccw(a,b,d);
	int cd=ccw(c,d,a)*ccw(c,d,b);
	if (ab==0&&cd==0) {
		if (a>b) swap(a,b);
		if (c>d) swap(c,d);
		return c<=b&&a<=d;
	}
	return ab<=0&&cd<=0;
}
pair<int, int> p[3001], q[3001];
int main() {
	int n, m, f, a, b;
	scanf("%d", &n);
	
	for (int i=0;i<n;i++) {
		scanf("%d %d %d %d", &p[i].first, &p[i].second, &q[i].first, &q[i].second);
		parent[i]=-1;
	}
	for (int i=0;i<n;i++) {
		for (int j=i+1;j<n;j++) {
			if (check(p[i],q[i],p[j],q[j])) unity(i, j);		
		}
	}
	int c=0, min=111;
	for (int i=0;i<n;i++) {
		if (parent[i]<0) c++;
		if (parent[i]<min) {
			min=parent[i];
		}
	}
	printf("%d\n%d", c, -min);
	
}
