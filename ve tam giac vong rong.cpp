#include<stdio.h>
int main(){
	int m;
	scanf("%d",m);
	if(m>0) {
		int i,j;
		for(i=1;i<=m;i++) {
			for(j=1;j<=m;j++) 
			 {
				if(j==1 || j==m || i==1 || i==m)
				printf("*");
				else printf(".");
				}
			printf("\n");
			}
		}
	return 0;
}
