#include <stdio.h>
int dgt(int n, int k) {
	int a=1;
	for (int i=1;i<k;i++) {
		a*=10;
	}
	return (n%(10*a)-n%a)/a;
}
int main() {
	int a, b, c;
	char n[100], s;
	scanf("%d-%d", &a, &b);
	scanf("%d", &c);
	scanf("%s", n);
	if(dgt(b,7)%2) {
		s='M';
	} else {
		s='F';
	}
	printf("%d-%d NO.%d\n", dgt(c,4), dgt(c,3), dgt(c,2)*10+dgt(c,1));
	for (int i=0;n[i]!='\0';i++) {
		printf("%c", n[i]);
	}
	printf("(%c)\n", s);
	printf("BirthDay %d/%d", dgt(a,4)*10+dgt(a,3), dgt(a,2)*10+dgt(a,1));
}
