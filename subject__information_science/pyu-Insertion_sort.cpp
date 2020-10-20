#include <stdio.h>
#define MAX 20

void insertion_sort(int d[], int n) {
    int j, temp;
    for (int i=1;i<n;i++) {
        j=i;
        while (j>0 && d[j-1]>d[j]) {
            temp=d[j-1];
            d[j-1]=d[j];
            d[j]=temp;
            j--;
        }
        printf("sorting :");
        for (int i=0;i<n;i++) {
            printf("%d ", d[i]);
        }
        printf("\n");
    }
}
int main() {
    int n, d[MAX];
    scanf("%d", &n);
    for (int i=0;i<n;i++) {
        //printf("number #%d : ", i+1);
        scanf("%d", &d[i]);
    }
    insertion_sort(d, n);
    
    printf("\n");
    printf("res : ");
    for (int i=0;i<n;i++) {
        printf("%d ", d[i]);
    }
}
