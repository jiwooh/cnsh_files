#include <stdio.h>
#define abs(a) (a)>0?(a):-(a)
int d[101][101], n, x, y, xd, yd, a, b;
struct poi {
	int xx;
	int yy;
};
poi r[9001];
int main() {
	scanf("%d %d", &x, &y);
	scanf("%d", &n);
	for (int i=1;i<=n;i++) {
		scanf("\n%c %d", &a, &b);
		if (a=='U') {
			xd=0; yd=1;
		} 
		if (a=='D') {
			xd=0; yd=-1;
		} 
		if (a=='R') {
			xd=1; yd=0;
		} 
		if (a=='L') {
			xd=-1; yd=0;
		}
		for (int j=1;j<=b;j++) {
			d[x][y]++;
			x+=xd;
			y+=yd;
		}
		d[x][y]++;
	}
	int c=1;
	for (int i=1;i<=100;i++) {
		for (int j=1;j<=100;j++) {
			if (d[i][j]>1 || (i==x && j==y)) {
				r[c].xx=i;
				r[c].yy=j;
				c++;
			}
		}
	}
	c--;
	int min=99999, ar, ri, rj, inv=0;
	for (int i=1;i<=c;i++) {
		for (int j=i+1;j<=c;j++) {
			inv=0;
			if (r[i].xx<=r[j].xx) {
				for (int k=r[i].xx;k<=r[j].xx;k++) {
					if (d[k][r[i].yy]==0) inv=1;
					if (d[k][r[j].yy]==0) inv=1;
				}
			} else {
				for (int k=r[i].xx;k>=r[j].xx;k--) {
					if (d[k][r[i].yy]==0) inv=1;
					if (d[k][r[j].yy]==0) inv=1;
				}
			}
			if (inv) break;
			if (r[i].yy<=r[j].yy) {
				for (int k=r[i].yy;k<=r[j].yy;k++) {
					if (d[r[i].xx][k]==0) inv=1;
					if (d[r[j].xx][k]==0) inv=1;
				}
			} else {
				for (int k=r[i].yy;k>=r[j].yy;k--) {
					if (d[r[i].xx][k]==0) inv=1;
					if (d[r[j].xx][k]==0) inv=1;
				}
			}
			if (inv) break;
			ar=abs( (r[i].xx-r[j].xx)*(r[i].yy-r[j].yy)) ;
			if (ar<min && ar!=0) {
				ri=i;
				rj=j;
			}
		}
	}
	int minx, maxx, miny, maxy;
	if (r[ri].xx<r[rj].xx) {
		minx=r[ri].xx;
		maxx=r[rj].xx;
	} else {
		minx=r[rj].xx;
		maxx=r[ri].xx;
	}
	if (r[ri].yy<r[rj].yy) {
		miny=r[ri].yy;
		maxy=r[rj].yy;
	} else {
		miny=r[rj].yy;
		maxy=r[ri].yy;
	}
	printf("%d %d\n", minx, miny);
	printf("%d %d", maxx, maxy);
}
