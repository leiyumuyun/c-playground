/*
	雷宇超	26803070197
*/
#include<stdio.h>
long long hanoi(int n,char from,char via,char to){
	if(n==1){
		return 1;
	}
	long long step=0;
	step+=hanoi(n-1,from,to,via);
	step++;
	step+=hanoi(n-1,via,from,to);
	return step;
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%lld",hanoi(n,'A','B','C'));
}
