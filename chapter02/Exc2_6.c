#include<stdio.h>
double fact(int n);
int main(void){
	int n;
	double sum=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		sum+=fact(i);
	printf("%.2f",sum);
}
double fact(int n){
	if(n==0||n==1){
		return 1;
	}
	else if(n>1){
		return n*fact(n-1);
	}
}
