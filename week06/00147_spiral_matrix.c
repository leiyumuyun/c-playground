/*
	À×Óî³¬	26803070197
*/ 
#include<stdio.h>
#include<string.h>
int main(){
    int n,num,i,j,turn;
    scanf("%d",&n);
    int a[n][n];
    memset(a,0,sizeof a);
    turn=1,i=0,j=0;
    for(num=1;num<=n*n;num++){
        a[i][j] = num;
        if(turn==1){
            if(j+1 < n && a[i][j+1] == 0){ j++; }
            else{ turn=2; i++; }
        }
        else if(turn==2){
            if(i+1 < n && a[i+1][j] == 0){ i++; }
            else{ turn=3; j--; }
        }
        else if(turn==3){
            if(j-1 >= 0 && a[i][j-1] == 0){ j--; }
            else{ turn=4; i--; }
        }
        else if(turn==4){
            if(i-1 >= 0 && a[i-1][j] == 0){ i--; }
            else{ turn=1; j++; }
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
