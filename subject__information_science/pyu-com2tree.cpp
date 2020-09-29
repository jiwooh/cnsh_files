#include <stdio.h>
int main() {
    int n, T[1<<10]; //전역변수로 선언하면 T[0]==0 : true
    scanf("%d", &n);
    for (int i=1;i<=n;i++) { //방번호 1부터, 0 사용 X 
        scanf("%d", &T[i]); //1~n번방까지 입력 
    }
    for (int k=1;k<=n;k*=2) { //k=1,2,4,8,...
        for (int i=k;i<=n&&i<=2*k-1;i++) { //i<=n인 경우 k ~ 2k-1 까지 k개 출력 
            printf("%d ", T[i]);
        }
        printf("\n");
    }
}
