/*
	雷宇超	26803070197
*/ 
#include<stdio.h>
void num(int i){
	int t;
	if(i==2){
		printf("%d ",i);
	}else{
		for(t=2;t*t<=i;t++){
			if(i%t==0){return;
			}
		}
		printf("%d ",i);
	
}
}
int main(){
	int n,i;
	scanf("%d",&n);
	for(i=2;i<=n;i++){
		num(i);
	}
	return 0;
}
