#include<stdio.h>
#include<math.h>
int main(void){
	int n;
	scanf("%d",&n);
	for(int i=0;i<=n;i++){
		printf("pow(3,%d) %.0f\n",i,pow(3,i));  //pow�ķ���ֵΪdouble����
	}
	return 0;
}
