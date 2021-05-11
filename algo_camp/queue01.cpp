#include <stdio.h>
#include <queue>
using namespace std;
queue<int> Q;
int main() {
    Q.push(1);
    Q.push(2);
    printf("%d", Q.size());
}
