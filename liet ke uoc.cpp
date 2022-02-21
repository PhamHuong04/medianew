/*#include <stdio.h>
#define ll unsigned long long
main (){
	ll n;
	scanf ("%lld",&n);
	for (ll i=1;i<=n;i++)
		printf ("%d ",i);
	return 0;
}*/
#include<stdio.h>
#include<string.h>
#include <ctype.h>
void chuanhoa(char c[]){
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
	for(int i=0;i<n-1;i++){
		chuanhoa(a[i]);
		if(i!=n-2)
			printf("%s ",a[i]);
		else 
		printf("%s, ",a[i]);
	}
	strupr(a[n-1]);
	printf("%s",a[n-1]);
}
