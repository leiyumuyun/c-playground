/*
	À×Óî³¬	26803070197
*/ 
#include<stdio.h>
int main(){
	int x,n;
	n=1;
	double tmp,sum;
	sum=1.0;
	tmp=1.0;
	scanf("%d",&x);
	while(tmp>=1e-6){
		tmp=tmp*x/n;
		sum+=tmp;
		n++;
	}
	printf("%.3f",sum);
	return 0;
}
