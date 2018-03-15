#include<stdio.h>
int main(void){
	int n;
	int flag=1;
	double sum=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		sum+=1.0*flag*i/(2*i-1);
		flag=-flag;
	}
	printf("%.2f\n",sum);
	return 0;
}
