/*
	À×Óî³¬	26803070197
*/ 
#include<stdio.h>
int main(){
	int n,i,j,count;
	count=j=1;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]==a[i+1]){
			j++;
		}else{
		if(j>=count){
			count=j;
		}
		j=1;}
	}
	printf("%d",count);
	return 0;
}
	
