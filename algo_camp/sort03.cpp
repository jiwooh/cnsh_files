#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> V;
bool cmp(int a, int b) {
    return a>b;
}
int main() {
    int t;
    for (int i=1;i<=10;i++) {
        scanf("%d", &t);
        V.push_back(t);
    }
    sort(V.begin(), V.end(), cmp);
    for (int i=0;i<=9;i++) {
        printf("%d ", V[i]);
    }
}
