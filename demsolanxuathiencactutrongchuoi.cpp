#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char c[1000],a[100][100];
	gets(c);
	strlwr(c);
	int n=0;
	char *token=strtok(c," ");
	while(token!=NULL){
		strcpy(a[n++],token);
		token=strtok(NULL," ");
	}
	int b[100]={0};
	for(int i=0;i<n;i++){
		if(b[i]==0){
			int dem=1;
			for(int j=i+1;j<n;j++){
				if(strcmp(a[i],a[j])==0){
					b[j]=1;
					dem++;
				}
			}
			printf("%s %d\n",a[i],dem);
		}
	}
}
