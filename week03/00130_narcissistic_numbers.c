/*
	À×Óî³¬	26803070197
*/ 
#include<stdio.h>
int main(){
	int n,a,b,c,temp;
	for(n=100;n<=999;n++){
		a=n%10;
		temp=n/10;
		b=temp%10;
		temp=temp/10;
		c=temp%10;
		if(n==a*a*a+b*b*b+c*c*c)
		printf("%d\n",n);
	}
	return 0;
}
