/*
	À×Óî³¬ 26803070197
*/ 
#include<stdio.h>
int max(int a,int b,int c){
	int max;
	if(a>b&&a>c) max=a;
	else if(b>a&&b>c) max=b;
	else max=c;
	return max;
}
int main(){
	int x,y,z,maximum;
	printf("Please input three integers:\n");
	scanf("%d,%d,%d",&x,&y,&z);
	maximum=max(x,y,z);
	printf("max=%d",maximum);
	return 0;
}
