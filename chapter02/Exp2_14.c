#include<stdio.h>
int main(void){
	int n;
	double sum=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		sum+=1.0/(2*i-1);
	}
	printf("%.2f",sum);
	return 0;
}
