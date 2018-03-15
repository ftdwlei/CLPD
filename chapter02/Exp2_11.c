#include<stdio.h>
#include<math.h>
int main(void){
	int x;
	double y;
	scanf("%d",&x);
	if(x<0)
		y=pow(x,5)+2*x+1.0/x;
	else
		y=pow(x,0.5);
	printf("%.2f",y);
	return 0;
}
