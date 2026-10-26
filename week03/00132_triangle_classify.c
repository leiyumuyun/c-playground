/*
	雷宇超	26803070197
*/ 
#include<stdio.h>
#include<math.h>
int main(){
	float x1,y1,x2,y2,x3,y3;
	float s1,s2,s3;
	scanf("%f %f %f %f %f %f",&x1,&y1,&x2,&y2,&x3,&y3);
	s1=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	s2=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
	s3=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
	if(s1+s2>s3&&s1+s3>s2&&s2+s3>s1){
		if(s2-s1<0.00001&&s3-s2<0.00001&&s1-s3<0.00001){
			printf("等边三角形");
		}else if(s1==s2||s1==s3||s2==s3){
			if(s1*s1+s2*s2-s3*s3<0.00001||s3*s3+s2*s2-s1*s1<0.00001||s1*s1+s3*s3-s2*s2<0.00001){
				printf("等腰直角三角形");
		}else
		printf("等腰三角形");
		}else if(s1*s1+s2*s2-s3*s3<0.00001||s3*s3+s2*s2-s1*s1<0.00001||s1*s1+s3*s3-s2*s2<0.00001){
			if(s1==s2||s1==s3||s2==s3){
				printf("等腰直角三角形");
			}else{
			printf("直角三角形");
			}
		printf("普通三角形");
		}
	}else
	printf("非三角形");
	return 0; 
}
