#include <stdio.h>
#define MAX 20

void Isort(int d[], int n) {
    int j, temp;
    for (int i=1;i<n;i++) {
        j=i;
        while (j>0 && d[j-1]>d[j]) {
            temp=d[j-1];
            d[j-1]=d[j];
            d[j]=temp;
            j--;
        }
    }
}
int main() {
    int n, d[MAX];
    scanf("%d", &n);
    for (int i=0;i<n;i++) {
        scanf("%d", &d[i]);
    }
    Isort(d, n);
    for (int i=0;i<n;i++) {
        printf("%d ", d[i]);
    }
}
