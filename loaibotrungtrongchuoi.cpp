#include<stdio.h>
#include<string.h>
int main(){
	char c[1000],a[100][100];
	gets(c);
	int n=0;
	char *token=strtok(c," ");
	while(token!=NULL){
		strcpy(a[n++],token);
		token=strtok(NULL," ");
	}
	for(int i=0;i<n;i++){
		int cmp=1;
		for(int j=0;j<i;j++){
			if(strcmp(a[i],a[j])==0){
				cmp=0;
				break;
			}
		}
		if(cmp){
			printf("%s ",a[i]);
		}
	}
}
