#include <stdio.h>
int f(int y, int m) {
	if (m!=2) {
		if ( (m%2==1 && m<8) || (m%2==0 && m>7)) {
			return 31;
		} else {
			return 30;
		}
	} else {
		if (y%4==0 && y%400==0) return 29;
		else if (y%4==0 && y%100!=0) return 29;
		else return 28;
	}
}
int main() {
	int yy, mm;
	scanf("%d %d", &yy, &mm);
	printf("%d", f(yy,mm));
}
