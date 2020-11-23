#include <stdio.h>
int main() {
	int w, h, b;
	scanf("%d %d %d", &w, &h, &b);
	double si=w*h*b;
	si=si/8.0;
	si=si/1024.0;
	si=si/1024.0;
	printf("%.2f MB", si);
}
