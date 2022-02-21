#include<stdio.h>
int check(int n){
	int temp=0;
	if (n<=1) return 0;
	for(int j=2 ; j<=n/2 ;j++){
		if(n%j==0)
			return 0;
	}
	return 1;
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",check(n));
	return 0;
}
