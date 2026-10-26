/*
	À×Óî³¬	26803070197 
*/
#include<stdio.h>
int main(){
    int n, i, space;
    scanf("%d", &n);
    
    for(i=1; i<=2*n-1; i++){
        printf("*");
        if(i < 2*n-1){
            printf(" ");
        }
    } 
    printf("\n");
    
    for(i=1; i<n; i++){
        space = 2 * i;
        printf("%*c", space, ' ');
        printf("*");
        
        if(i == n-1){
            printf("\n");
            break;
        }
        
        space = 4 * n - 4 * i - 5;
        printf("%*c", space, ' ');
        printf("*");
        printf("\n");
    }
    return 0;
}
