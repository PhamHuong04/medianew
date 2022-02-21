#include<stdio.h>
#include<string.h>
#include<ctype.h>
//ngUYEN     van nam
//OUTPUT
//Van Nam, NGUYEN
int chuanhoa(char c[]){
	c[0]=toupper(c[0]);
	for(int i=1;i<strlen(c);i++){
		c[i]=tolower(c[i]);
	}
}
int main(){
	char c[1000],a[100][100];
	gets(c);
	int n=0;
	char *token=strtok(c," ");
	while(token!=NULL){
		strcpy(a[n++],token);
		token=strtok(NULL," ");
	}
	for(int i=1;i<=n-1;i++){
		chuanhoa(a[i]);
		printf("%s",a[i]);
		if(i!=n-1){
			printf(" ");
		}
		else printf(", ");
	}
	strupr(a[n-3]);
	printf("%s",a[n-3]);
	return 0;
}
