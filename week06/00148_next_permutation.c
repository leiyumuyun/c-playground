/*
	À×Óî³¬	26803070197
*/ 
#include <stdio.h>
int main() {
    int n, a[100],i,tmp,s;
    scanf("%d", &n);
    for (i=0; i < n; i++) scanf("%d", &a[i]);
	i=n-2; 
    while(i>=0&&a[i]>=a[i+1]){
    	i--;
	}
	if(i>=0){
		s=n-1;
		while(a[s]<=a[i]) s--;
		tmp=a[i],a[i]=a[s],a[s]=tmp;
		for(s=i+1,i=n-1;s<i;s++,i--){
			tmp=a[i],a[i]=a[s],a[s]=tmp;
		}
	}
	for(i=0;i<n;i++){
		printf("%d",a[i]);
		if(i<n-1) printf(" ");
	}
}
    
