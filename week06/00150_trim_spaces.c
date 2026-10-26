/*
	À×Óî³¬	26803070197
*/ 
#include<stdio.h>
int main(){
	char str[100],ch;
	int r,w,flag;
	flag=1;
	gets(str);
	for(r=0,w=0;r<100;r++){
		if(str[r]==' '){
			if(flag==0){
			str[w++]=str[r];
			flag=1;
			}
		}else{
			str[w++]=str[r];
			flag=0;
		}
	}
	printf("%s",str);
}
