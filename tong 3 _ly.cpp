#include<stdio.h>
int main(){
	int x,y,i;
	long long a=1;
	scanf("%d%d",&x,&y);
	if(x>=0 && y>=0){
		for(i=0;i<y;i++)
        a= a*x;
        }
        printf("%lld",a);
	return 0;
}
