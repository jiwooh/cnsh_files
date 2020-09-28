#include <stdio.h>

int n;

void f(int n) {
	for (int i=2;i<n;i++) {
		if (!(n%i)) {
			printf("composite");
			return;
		}
	}
	printf("prime");
}

int main()
{
  scanf("%d", &n);
  f(n);
}
