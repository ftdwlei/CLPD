#include<stdio.h>
int main(void){
	int year;
	scanf("%d",&year);
	for(int i=2000;i<=year;i++){
		if((i%400==0)||(i%4==0&&i%100!=0)){
			printf("%d\n",i);	
		}
	}
	return 0;
}
