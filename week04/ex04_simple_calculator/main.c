/*
	À×Óî³¬	26803070197 
*/
#include<stdio.h>
int main(){
	char n;
	float x,y,output;
	scanf("%f %c %f",&x,&n,&y);
	if(n=='+'||n=='-'||n=='*'||n=='/'){
		if(n=='+'){
			output=x+y;
			printf("%.2f",output);
		}
		if(n=='-'){
			output=x-y;
			printf("%.2f",output);
		}	
		if(n=='*'){
			output=x*y;
			printf("%.2f",output);
		}
		if(n=='/'){
			if(y==0){
				printf("Wrong input");
			}
			else {	
				output=x/y;
				printf("%.2f",output);
			}
		}
	}else
	printf("Wrong input");
	return 0;
}
