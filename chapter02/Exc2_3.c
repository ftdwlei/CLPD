#include<stdio.h>
int main(void){
	int m,n;
	double sum=0;
	scanf("%d",&m);
	scanf("%d",&n);
	for(int i=m;i<=n;i++){
		sum+=i*i+1.0/i;
	}
	printf("sum is %.6f",sum);
	return 0;
}
