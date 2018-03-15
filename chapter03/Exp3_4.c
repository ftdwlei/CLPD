#include<stdio.h>
int main(void){
	int letters=0,blank=0,enter=0,digits=0,others=0;
	for(int i=1;i<=10;i++){
		char ch=getchar();
		if((ch<='Z'&&ch>='A')||(ch<='z'&&ch>='a')){
			letters++;
		}else if(ch==' '){
			blank++;
		}else if(ch=='\n'){
			enter++;
		}else if(ch<='9'&&ch>='0'){
			digits++;
		}else{
			others++;
		}
	}
	printf("letters=%d,blank=%d,enter=%d,digits=%d,others=%d",letters,blank,enter,digits,others);
	return 0;
}
