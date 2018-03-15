#include<stdio.h>
int main(void){
	int n;
	double sum=0;
	int flag=1;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		sum+=flag*1.0/(3*i-2);
		flag=-flag;
	}
	printf("%.2f",sum);
	return 0;
}
