#include<stdio.h>
int main(void){
	int n;
	scanf("%d",&n);
	double grade,sum=0,avg;
	int count=0;
	for(int i=1;i<=n;i++){
		scanf("%lf",&grade);
		sum+=grade;
		if(grade>=60){
			count++;
		}
	}
	avg=sum/n;
	printf("%.2f %d\n",avg,count);
	return 0;
}
