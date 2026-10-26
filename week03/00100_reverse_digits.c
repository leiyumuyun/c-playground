/*
	À×Óî³¬	26803070197
*/ 
#include<stdio.h>
int main(){
	int a,b;
	scanf("%d",&a);
	for(b=0;a>=1;a=a/10){
		b=a%10;
		printf("%d",b);
	}
	return 0;
}
