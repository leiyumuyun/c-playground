#include<stdio.h>
#include<string.h>

int max(int a,int b){
	return a>b?a:b;
}

int main(){
	char a[200],b[200];
	fgets(a,sizeof(a),stdin);
	fgets(b,sizeof(b),stdin);
	a[strcspn(a,"\n")]='\0';
	b[strcspn(b,"\n")]='\0';
	int len1,len2,i,j;
	len1=strlen(a);len2=strlen(b);
	int chart[200][200];
	memset(chart,0,sizeof chart);
	for(i=1;i<=len1;i++){
		for(j=1;j<=len2;j++){
			if(a[i-1]==b[j-1]){
				chart[i][j]=chart[i-1][j-1]+1;
			}
			else{
				chart[i][j]=max(chart[i-1][j],chart[i][j-1]);
			}
		}
	}
printf("%d",chart[len1][len2]);
}

