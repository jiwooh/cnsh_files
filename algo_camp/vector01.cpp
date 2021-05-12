#include <stdio.h>
#include <vector>
using namespace std;
vector<int> V;
int main() {
    int a;
    for (int i=1;i<=5;i++) {
        scanf("%d", &a);
        V.push_back(a);
    }
    printf("%d", V[2]);
}
