#include <stdio.h>
int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int d=1;
	while(d%a!=0 || d%b!=0 || d%c!=0) d++;
	printf("%d", d);
}

