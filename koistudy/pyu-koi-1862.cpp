#include <stdio.h>

int n;

bool prime(int n) {
	for (int i=2;i<n;i++) {
		if (!(n%i)) {
			return 0;
		}
	}
	return 1;
}

int main()
{
  scanf("%d", &n);
  if(prime(n)) printf("prime\n");
  else printf("composite\n");
}
