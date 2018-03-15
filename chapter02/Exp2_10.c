#include<stdio.h>
int main(void){
	int x;
	double y;
	scanf("%d",&x);
	if(x==0)
		y=0;
	else
		y=1.0/x;
	printf("%.1f",y);
	return 0;
}
