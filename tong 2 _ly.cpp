#include<stdio.h>
int main(){
	int n,i;
	float sum = 0;
	scanf("%d",&n);
	if(n>0)
		for(i=1;i<=n;i++)
		sum +=(float) 1/(2*i);
	printf("%.2f",sum);
	return 0;
}
