#include<stdio.h>
int main(void){
	int a,b,c,d;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&d);
	int sum=a+b+c+d;
	double avg=sum/4.0;
	printf("%d %.1f\n",sum,avg);
	return 0;
}
