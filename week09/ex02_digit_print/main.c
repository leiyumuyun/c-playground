/*
	雷宇超	26803070197
*/ 
#include<stdio.h>
void back(int n){
	if(n==0){return;
	}
	printf("%d",n%10);
	if(n/10!=0){
		printf(" ");
		
	}
	back(n/10);
}

void forward(int n){
	if(n==0){
		return;
	}
	forward(n/10);
	if(n>=10){
		printf(" ");
	}
	printf("%d",n%10);
}

int main(){
	int n;
	scanf("%d",&n);
	forward(n);
	printf("\n");
	back(n);
}
