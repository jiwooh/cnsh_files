#include <stdio.h>
int a[24];
int main() {
	int n, i, t;
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
	  scanf("%d", &t);
	  a[t]++;
	}
	for(i=1;i<=23;i++)
	{
	  printf("%d ", a[i]);
	}
}

