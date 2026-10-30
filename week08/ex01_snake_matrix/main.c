/*
	À×Óî³¬	26803070197
*/
#include<stdio.h>
#include<string.h>
int main(){
	int n,turn,count,i,j,h;
	scanf("%d",&n);
	int a[n][n];
	memset(a,0,sizeof a);
	a[0][0]=1;
	for(count=2,turn=1,i=1,j=1,h=1;count<=n*n;){
		if(turn==1){
			while(i>=0 && i<n && j>=0 && j<n){
				j=h-i;
				a[i][j]=count++;
				if(j==n-1){i++;turn=2;h++;break;
				}
				if(i==0){j++;turn=2;h++;break;
				}
				i--;
			}
		}
		if(turn==2){
			while(i>=0 && i<n && j>=0 && j<n){
				j=h-i;
				a[i][j]=count++;
				if(i==n-1){j++;turn=1;h++;break;
				}
				if(j==0){i++;turn=1;h++;break;
				}
				i++;
			}
		}
	}
	for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%4d",a[i][j]);
            if(j==n-1){printf("\n");}
        }
    }
    return 0;
}
