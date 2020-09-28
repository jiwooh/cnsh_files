#include <stdio.h>
#include <math.h>
int a[110];

int main() {
   int n, g, min=1000; 
   scanf("%d %d", &n, &g);   
   for (int i=1;i<=n;i++) {
      scanf("%d", &a[i]);
   }
   for (int i=n+1;i<=n+g;i++) {
      a[i]=1000;
   }
   for (int i=1;i<=ceil((float)n/g);i++) {
      for (int j=(i-1)*g+1;j<=i*g;j++) {
         if (a[j]<min) {
            min=a[j];
         }
      }
      printf("%d ", min);
      min=1000;
   }
   return 0;
} 
