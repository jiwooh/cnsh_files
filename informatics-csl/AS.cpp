#include <stdio.h>
int main() {
	int a;
	scanf("%X", &a);
	for (int i=1; i<=a; i++) {
		if (i%3) {
			printf("%d ", i);	
		} else {
			printf("X ");
		}
	}
}
