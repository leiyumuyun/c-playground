/*
	À×Óî³¬	26803070197
*/ 
#include<stdio.h>
int main(){
	int n,i,j,count;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	if(n<=0){
		printf("0");
		return 0;
	}
	count=1;
	j=1;
	for(i=0;i<n-1;i++){
		if(a[i]==a[i+1]){
			j++;
		}else{
			if(j>count){
				count=j;
			}
			j=1;
		}
	}
	if(j>count){
		count=j;
	}
	printf("%d",count);
	return 0;
}
