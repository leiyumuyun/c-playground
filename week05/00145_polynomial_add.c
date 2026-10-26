/*
	À×Óî³¬	26803070197
*/ 
#include<stdio.h>
#include<stdio.h>
int main(){
	int i,j,flag;
	flag=0;
	i=0;
	int a[101]={0};
	while(1){
		scanf("%d",&i);
		if(i==-1){break;
		}
		scanf("%d",&a[i]);
	}
	i=0;
	while(1){
		scanf("%d",&i);
		if(i==-1){
			break;
		}
		scanf("%d",&j);
		a[i]+=j;
	}
	for(i=100;i>=0;i--){
		if(a[i]!=0){
			break;
		}
	}
	for(;i>0;i--){
		if(a[i]==0) continue; 
		
		if(a[i]>0){
			if(flag==1){printf("+");
			}
			if(a[i]==1){;
			}
			if(a[i]>1){printf("%d",a[i]);
			}
		}
		if(a[i]==-1){printf("-");
		}
		if(a[i]<-1){printf("%d",a[i]);
		}
		printf("x^%d",i);
		flag=1;
	}
	i=0;
	if(a[i]<0){
		printf("%d",a[i]);
	}
	if(a[i]>0){
		if(flag==1){ printf("+"); } 
		printf("%d",a[i]); 
	}
	if(a[i]==0 && flag==0){ 
		printf("0");
	}
	return 0;
}
