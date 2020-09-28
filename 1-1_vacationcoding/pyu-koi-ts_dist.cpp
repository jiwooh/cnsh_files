#include <stdio.h>
#include <math.h>
#define abs(k) ((k)>0?(k):-(k)) //returns absolute value
#define sq(k) ((k)*(k)) //squares value

struct ci {
	int x;
	int y;
	int d_t; //distance_taxi
	float d_s; //distance_straight
};
int main() {
	ci c[51], nc; //1~50 cities, new city
	int n;
	printf("Enter the number of cities : ");
	scanf("%d", &n); //# of cities
	printf("\n");
	for (int i=1;i<=n;i++) {
		printf("Enter coordinates of city#%d : ", i);
		scanf("%d %d", &c[i].x, &c[i].y); //get city coordinates 
	}
	printf("\nEnter coordinates of new city : ");
	scanf("%d %d", &nc.x, &nc.y);
	for (int i=1;i<=n;i++) {
		c[i].d_t=abs(c[i].x-nc.x)+abs(c[i].y-nc.y);
		c[i].d_s=sqrt(sq(c[i].x-nc.x)+sq(c[i].y-nc.y));
	}
	int min_ti=1, min_si=1, max_ti=1, max_si=1; //min/max _taxi/_straight
	for (int i=1;i<=n;i++) {
		if (c[i].d_t<c[min_ti].d_t) {
			min_ti=i;
		}
		if (c[i].d_s<c[min_si].d_s) {
			min_si=i;
		}
		if (c[i].d_t>c[max_ti].d_t) {
			max_ti=i;
		}
		if (c[i].d_s>c[max_si].d_s) {
			max_si=i;
		}
	}
	printf("\n");
	printf("\nRegarding taxi distance,\n");
	printf("\t city# of the CLOSEST city from new city is : %2d\n", min_ti);
	printf("\t and its coordinates are (x, y) : (%2d, %2d)\n", c[min_ti].x, c[min_ti].y);
	printf("\t the taxi distance is : %d\n", c[min_ti].d_t);
	printf("\t city# of the FARTHEST city from new city is : %2d\n", max_ti);
	printf("\t and its coordinates are (x, y) : (%2d, %2d)\n", c[max_ti].x, c[max_ti].y);
	printf("\t the taxi distance is : %d\n", c[max_ti].d_t);
	
	printf("\nRegarding straight distance,\n");
	printf("\t city# of the CLOSEST city from new city is : %2d\n", min_si);
	printf("\t and its coordinates are (x, y) : (%2d, %2d)\n", c[min_si].x, c[min_si].y);
	printf("\t the straight distance is : %.3f\n", c[min_si].d_s);
	printf("\t city# of the FARTHEST city from new city is : %2d\n", max_si);
	printf("\t and its coordinates are (x, y) : (%2d, %2d)\n", c[max_si].x, c[max_si].y);
	printf("\t the straight distance is : %.3f\n", c[max_si].d_s);
}
