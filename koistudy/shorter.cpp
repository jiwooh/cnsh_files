#include <stdio.h>
main(){int i,j,n,c=1,d[101][101];scanf("%d",&n);for(i=0;i<n;i++){for(j=0;j<n;j++){if(i%2){d[i][j]=c++;}else{d[i][n-j+1]=c++;}}}for(i=0;i<n;i++){for(j=0;j<n;j++){printf("%d ",d[i][j]);}printf("\n");}}
