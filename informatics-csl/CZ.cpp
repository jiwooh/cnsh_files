#include <stdio.h>
 
int n;
 
 
 
char grade(int N) {
    if (N >= 90) { return 'A'; }
    else if (N >= 80) { return 'B'; }
    else if (N >= 70) { return 'C'; }
    else if (N >= 60) { return 'D'; }
    else { return 'F'; }
}
int main()
{
  scanf("%d", &n);
  printf("%c", grade(n));
  return 0;
}

