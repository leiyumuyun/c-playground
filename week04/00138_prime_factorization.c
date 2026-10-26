/*
	À×Óî³¬	26803070197
*/
#include<stdio.h>
int main(){
	int n,i,tmp,num;
	scanf("%d",&n);
	tmp=n;
	i=2,num=0;
	printf("%d=",n);
	int a[100]={0};
	while(i*i<=tmp){
	if(n%i==0){
		a[num]=i;
		num++;
		n/=i;
	}
	if(n%i!=0){
		i++;
	}
}
	if(n>1){
		a[num]=n;
	}
	i=0;
	if(a[i]==0){
		printf("%d",tmp);
	}else{
		printf("%d",a[i]);
		for(i=1;i<100;i++){
			if(a[i]==0){
				break;
			}else{
				printf("*%d",a[i]);
			}
		}
	}
	return 0;
}
	
