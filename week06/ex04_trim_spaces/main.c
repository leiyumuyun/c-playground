/*
	À×Óî³¬	26803070197
*/ 
#include<stdio.h>
int main(){
	char str[100];
	int r,w,flag;
	flag=1;
	fgets(str,sizeof str,stdin);
	for(r=0,w=0;str[r]!='\0';r++){
		if(str[r]=='\n'){
			continue;
		}
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
	str[w]='\0';
	printf("%s\n",str);
	return 0;
}
