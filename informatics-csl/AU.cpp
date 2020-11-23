#include <stdio.h>
int main() {
	double h, b, c, s;
	scanf("%lf %lf %lf %lf", &h, &b, &c, &s);
	double si=1;
	si*=b/8.0;
	si*=h/1024.0;
	si*=s/1024.0;
	si*=c;
	printf("%.1f MB", si);
}
