#include <stdio.h>
#include <time.h>
/*
忙式式式式式式式式式式式式式式式式式式忖 
弛 ####  #       ####   ####  #    #  弛
弛#    # #    o #    # #    # #   #   弛
弛#      #      #    # #      ####    弛
弛#      #    o #    # #      #  #    弛 
弛#    # #      #    # #    # #   #   弛 
弛 ####  ######  ####   ####  #    #  弛
戌式式式式式式式式式式式式式式式式式式戎 
*/
int main() {
	printf("\n");
	printf("弛  ####  #       ####   ####  #    # 弛\n弛 #    # #    o #    # #    # #   #  弛\n弛 #      #      #    # #      ####   弛\n弛 #      #    o #    # #      #  #   弛\n弛 #    # #      #    # #    # #   #  弛\n弛  ####  ######  ####   ####  #    # 弛 \n");
	printf("\n");
	
	printf("＝ output types : input the number at the front of each line\n");
	
	printf("  [1] : yyyy-mm-dd hh:mm:ss \n");
	printf("  [11] : yy-mm-dd hh:mm:ss \n");
	printf("  [12] : mm-dd-yyyy hh:mm:ss \n");
	printf("  [13] : mm-dd-yy hh:mm:ss \n");
	printf("  [2] : hh:mm:ss \n");
	printf("  [21] : mm:ss \n");
	printf("\n");
	
	int type;
	scanf("%d", &type);
	int d[11]={1,11,12,13,2,21}, inv=1;
	while (inv) {
		for (int i=1;i<=10;i++) {
			if (d[i]==type) inv--;
		}
		if (inv==0) break;
		printf("Input the given numbers.\n");
		scanf("%d", &type);
	}
	printf("\n");
	
	time_t t = time(NULL);
	struct tm tm = *localtime(&t);
	int Y=tm.tm_year+1900, M=tm.tm_mon+1, D=tm.tm_mday, h=tm.tm_hour, m=tm.tm_min, s=tm.tm_sec;
	
	if (type==1) { //yyyy-mm-dd hh:mm:ss
		printf("[ %04d-%02d-%02d %02d:%02d:%02d ]", Y, M, D, h, m, s);
	} else if (type==11) { //yy-mm-dd hh:mm:ss
		Y-=Y/100*100;
		printf("[ %02d-%02d-%02d %02d:%02d:%02d ]", Y, M, D, h, m, s);
	} else if (type==12) { //mm-dd-yyyy hh:mm:ss
		printf("[ %02d-%02d-%04d %02d:%02d:%02d ]", M, D, Y, h, m, s);
	} else if (type==13) { //mm-dd-yy hh:mm:ss
		Y-=Y/100*100;
		printf("[ %02d-%02d-%02d %02d:%02d:%02d ]", M, D, Y, h, m, s);
	} else if (type==2) { //hh:mm:ss
		printf("[ %02d:%02d:%02d ]", h, m, s);
	} else if (type==21) { //mm:ss
		printf("[ %02d:%02d ]", m, s);
	}
}

