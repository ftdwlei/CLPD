#include<stdio.h>
int main(void){
	double power,fee;
	scanf("%lf",&power);
	if(power<=50)
		fee=0.53*power;
	else
		fee=0.58*power;
	printf("%.2f",fee);
	return 0;
}
