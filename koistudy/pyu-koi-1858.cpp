#include <stdio.h>

int n;

void f(int) {
	for (int i=1;i<=n;i++) {
		printf("love\n");
	}
}

int main()
{
  scanf("%d", &n);
  f(n);
}
