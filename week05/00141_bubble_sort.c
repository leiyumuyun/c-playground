/*
	À×Óî³¬	26803070197
*/ 
#include<stdio.h>
int main(){
	int n,i,j,temp;
	scanf("%d",&n);
	int a[101];
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
		if(i>0){printf(" "); 
		}
		printf("%d",a[i]);
	}
}
