/*
	À×Óî³¬	26803070197
*/ 
#include<stdio.h>
int main(){
	char str[1024];
	int i,flag;
	flag=1;
	fgets(str,sizeof str,stdin);
	for(i=0;str[i]!='\0';i++){
		if(str[i]=='\n'){
			str[i]='\0';
			break;
		}
	}
	for(i=0;str[i]!='\0';i++){
		if(str[i]==' '){
			flag=1;
			continue;
		}else{if(flag==1){
			str[i]=str[i]>='a'&&str[i]<='z'?str[i]-'a'+'A':str[i]; 
			flag=0;
		}else{
			str[i]=str[i]>='A'&&str[i]<='Z'?str[i]-'A'+'a':str[i];
			flag=0;
		}
		}
	}
	printf("%s\n",str);
	return 0;
}
