/*
	雷宇超	26803070197
*/ 
#include<stdio.h>
#include<stdlib.h>
int main(){
	int s,target,n;
	scanf("%d""%d",&s,&n);
	srand(s);
	target=rand()%100+1;
	if(n>target){
		printf("猜得太大");
	}
	if(n<target){
		printf("猜得太小");
	}
	if(n==target){
		printf("猜对了");
	}
}
