#include <stdio.h>
#define MAX 101

void selection_sort(int d[], int n) {
	int min, tmp;
	for (int i=1;i<n;i++) {
		min=i;
		for (int j=i+1;j<=n;j++) {
			if (d[j]<d[min]) {
				min=j;
			}
		}
		tmp=d[i];
		d[i]=d[min];
		d[min]=tmp;
		for (int i=1;i<=n;i++) {
			printf("%d ", d[i]);
		}
		printf("\n");
	}	
}

int main() {
	int n, d[MAX];
	scanf("%d", &n);
	
	for (int i=1;i<=n;i++) {
		scanf("%d", &d[i]);
	}
	selection_sort(d, n);
}
