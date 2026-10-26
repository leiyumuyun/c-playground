/*
	À×Óî³¬	26803070197
*/
#include <stdio.h>
#include <string.h>

int main() {
    char str_a[501], str_b[501];
    int a[501]={0}, b[501]={0}, c[501]={0};
    
    scanf("%s", str_a);
    scanf("%s", str_b);
    
    int len_a=strlen(str_a);
    int len_b=strlen(str_b);
    
    for (int i=0; i<len_a; i++) {
        a[i]=str_a[len_a-1-i]-'0';
    }
    for (int i=0; i<len_b; i++) {
        b[i]=str_b[len_b-1-i]-'0';
    }
    
    int max_len=len_a>len_b?len_a:len_b;
    
    for (int i=0; i<max_len; i++) {
        c[i]+=a[i]+b[i];
        if (c[i]>=10) {
            c[i+1]+=c[i]/10;
            c[i]%=10;
        }
    }
    
    if (c[max_len]>0) {
        max_len++;
    }
    
    for (int i=max_len-1; i>=0; i--) {
        printf("%d", c[i]);
    }
    printf("\n");
    
    return 0;
}
