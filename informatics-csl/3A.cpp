#include <stdio.h>
#include <string.h>
int main() {
	char str[] = "Kim,Park,Lee,Choi,Jang";
	char *ptr = strtok(str, ","); 
	while (ptr != NULL) {
		printf("%s\n", ptr); 
		ptr = strtok(NULL, ",");
	}
}
