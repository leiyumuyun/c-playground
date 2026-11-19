/*
	雷宇超	26803070197
*/ 
#include<stdio.h>
void num(int i){
	int q,p,sum;
	sum=1;
	for(q=2;q*q<i;q++){
			if(i%q==0){
				p=i/q;
				sum=sum+(q+p);
			}
		}
		if(sum==i){printf("%d ",i);
		}
	}

int main(){
	int n,i;
	scanf("%d",&n);
	for(i=2;i<n;i++){
		num(i);
	}
	return 0;
}
	
