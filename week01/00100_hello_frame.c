/*
	À×Óî³¬ 26803070197
*/
#include<stdio.h>
#include<string.h>
int main(){
	char name[128];
	int num,lenth,i;
	scanf("%s",&name);
	lenth=strlen(name);
	num=6+6+lenth+1+6;
	for(i=1;i<=num;i++){
			printf("*");
	}
	printf("\n      Hello %s!      \n",name);
	for(i=1;i<=num;i++){
		printf("*");
	}
	return 0;
} 
