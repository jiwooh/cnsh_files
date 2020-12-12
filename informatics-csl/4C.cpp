#include <stdio.h>
int n, cnt=0, down[11], ldown[22], rdown[22];
void solve(int t) {
	if (t>n) {
		cnt++;
		return;
	}
	for (int i=1;i<=n;i++) {
		if (!down[i] && !ldown[t+i] && !rdown[n-(t-i)]) {
			down[i]=ldown[t+i]=rdown[n-(t-i)]=1;
			solve(t+1);
			down[i]=ldown[t+i]=rdown[n-(t-i)]=0;
		}
	}
}

int main() {
	scanf("%d", &n);
	solve(1);
	printf("%d", cnt);
}
