/*
	À×Óî³¬	26803070197 
*/
#include<stdio.h>
int main(){
	int n;
	double e,q;
	e=0;
	for(n=1,q=1.0;q>=1e-6;n++){
		e+=q;
		q=q/n;
	}
	printf("%.3f",e);
	return 0;
}
