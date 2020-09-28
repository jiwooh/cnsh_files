#include <stdio.h>

int n;

void f(int) {
	if (n==1) {
		printf("hello");
	} else if (n==2) {
		printf("world");
	}
}

int main()
{
  scanf("%d", &n);
  f(n);
}
