#include <stdio.h>
#include <queue>
using namespace std;
queue<int> Q;
int main() {
    int n, c=1, a;
    scanf("%d", &n);
    for (int i=1;i<=n;i++) {
        Q.push(i);
    }
    while (Q.size()!=1) {
        if (c%2) {
            Q.pop();
        } else {
            a=Q.front();
            Q.pop();
            Q.push(a);
        }
        c++;
    }
    printf("%d", Q.front());
}
