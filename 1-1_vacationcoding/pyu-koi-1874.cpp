#include <stdio.h>

long long int n;

long long int f(long long int k) {
	unsigned long long int ri, rt, t=1, s=0, d[31];
	for (int i=1;i<=30;i++) {
		if (t>k) {
			break;
		} else {
			d[i]=(k/t-10*(k/(10*t)));
			ri=i;
			rt=t;
		}
		t*=10;
	}
	for (int i=1;i<=ri;i++) {
		s+=d[i]*rt;
		rt/=10;
	}
	return s;
}

int main()
{
  scanf("%lld", &n);
  printf("%lld\n", f(n));
}
