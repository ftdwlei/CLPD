#include<stdio.h>
int main(void){
	int lower,upper,fahr;
	float celsius;
	scanf("%d",&lower);
	scanf("%d",&upper);
	for(fahr=lower;fahr<=upper;fahr=fahr+2){
		celsius=5.0*(fahr-32)/9;
		printf("%d %.1f\n",fahr,celsius);
	}
	return 0;
}
