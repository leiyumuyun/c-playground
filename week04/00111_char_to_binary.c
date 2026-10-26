/*
	À×Óî³¬	26803070197 
*/
#include<stdio.h>
int main(){
	char c;
	scanf("%c",&c);
	int i;
	for(i=7;i>=0;i--){
		printf("%d",(c>>i)&1); 
	}
return 0;	
}
