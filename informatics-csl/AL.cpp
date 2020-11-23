#include <stdio.h>
int main() {
	int a=1;
	while(a) {
		scanf("%d", &a);
		if(!a) break;
		printf("%d\n", a);
	}
}
