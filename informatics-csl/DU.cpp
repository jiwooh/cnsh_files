#include <stdio.h>
int s;
int f(int num, int left){
    if(num==1){
        left-=1;
    }
    else if(num==2){
        left-=2;
    }
    if(left==0){
        s++;
        return 0;
    }
    else{
        if(left>=1)
        f(1,left);
        if(left>=2)
        f(2,left);
    }  
}
int main() {
	int n;
	scanf("%d", &n);
	printf("%d", s);
}
