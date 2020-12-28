#include <string.h>
#include <stdio.h>
int main() {
	char s[999];
	scanf("%s", s);
	printf("입력받은 문자열의 길이는 %d입니다.\n입력받은 문자열을 거꾸로 출력합니다.\n", strlen(s));
	for (int i=strlen(s)-1;i>=0;i--) {
		printf("%c", s[i]);
	}
}
