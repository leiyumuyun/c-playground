/*
	À×Óî³¬	26803070197
*/
#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,l,s;
	scanf("%f %f %f",&a,&b,&c);
	l=(a+b+c)/2;
	if(a+b>c&&a+c>b&&b+c>a){
	s=sqrt(l*(l-a)*(l-b)*(l-c));
	printf("%.2f",s);
	}else{
		printf("ÊäÈë´íÎó");
	}
	return 0;
}
