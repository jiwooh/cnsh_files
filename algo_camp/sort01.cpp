#include <stdio.h>
#include <algorithm>
using namespace std;
int main() {
    int a[16];
    for (int i=1;i<=10;i++) {
        scanf("%d", &a[i]);
    }
    sort(a+1, a+11);
    for (int i=1;i<=9;i++) {
        printf("%d ", a[i]);
    }
}
