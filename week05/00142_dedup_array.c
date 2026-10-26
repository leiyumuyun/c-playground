/*
	À×Óî³¬	26803070197
*/ 
#include<stdio.h>
int main(){
	int n,i,j,count;
	count=1;
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	b[0]=a[0];
	for(i=1;i<n;i++){
		for(j=0;j<count;j++){
			if(a[i]==b[j]){
				break;
			}
		}
		if(j==count){
			b[count]=a[i];
			count++;
		}
	}
	for(i=0;i<count;i++){
		if(i>0){
			printf(" ");
		}
		printf("%d",b[i]);
	}
	return 0;
}
