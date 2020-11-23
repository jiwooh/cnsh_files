#include <stdio.h>
int main() {
	char c[2001];
	fgets(c, 2000, stdin);
	printf("%s", c);
}
