#include <stdio.h>
#define MAX 20

void bubble_sort(int d[], int n) {
	int tmp;
	for (int i=1;i<n;i++) {
		for (int j=1;j<n;j++) {
			if (d[j-1]>d[j]) {
				tmp=d[j-1];
				d[j-1]=d[j];
				d[j]=tmp;
			}
		}
	}
}

int main() {
	int n, d[MAX];
	printf("# of data : ");
	scanf("%d", &n);
	
	for (int i=0;i<n;i++) {
		printf("num #%d : ", i+1);
		scanf("%d", &d[i]);
	}
	bubble_sort(d, n);
	for (int i=0;i<n;i++) {
		printf("%d ", d[i]);
	}
}
