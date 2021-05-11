#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> V;
int main() {
    int t;
    for (int i=1;i<=10;i++) {
        scanf("%d", &t);
        V.push_back(t);
    }
    sort(V.begin(), V.end());
    for (int i=0;i<=9;i++) {
        printf("%d ", V[i]);
    }
}
