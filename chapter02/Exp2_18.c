#include<stdio.h>
double fact(int n);
int main(void){
	int m,n;
	double C;
	scanf("%d",&m);
	scanf("%d",&n);
	C=fact(n)/(fact(m)*fact(n-m));
	printf("%.0f\n",C);
	return 0;
}
double fact(int n){
	double total=1;
	if(n>1){
		total=n*fact(n-1);
	}
	else if(n==1||n==0){
		total=1;
	}
	return total;
}
