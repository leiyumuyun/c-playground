/*
	À×Óî³¬	26803070197
*/ 
#include<stdio.h>
int main(){
	int n,i,x;
	i=0;
	int a[100]={0};
	scanf("%d",&n);
	while(n>=1){
		x=n%10;
		a[i]=x;
		i++;
		n=n/10;
	}
	for(i=99;i>=0;i--){
		if (a[i]!=0){
			break;
		}
	}
	while(i>=0){
		x=a[i];
		i--;
		printf("%d*",x);
	}
	return 0;
}
