#include <stdio.h>
int main() {
	int n, c=0;
	scanf("%d", &n);
	while (n-500>=0) {
		n-=500;
		c++;
	}
	while (n-100>=0) {
		n-=100;
		c++;
	}
	while (n-50>=0) {
		n-=50;
		c++;
	}
	while (n-10>=0) {
		n-=10;
		c++;
	}
	printf("동전의 개수는 %d개 입니다. ", c);
}
