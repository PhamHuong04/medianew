#include <stdio.h>
#include <math.h>
int snt(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	} 
	return 1;
}
int main(){
	int a,b,dem=0;
	scanf("%d%d",&a,&b);
	int tg;
	if (a>b) {
		tg=a;
		a=b;
		b=tg;
	}
	for(int i=a;i<=b;i++){
		if(snt(i)==1){
			++dem;
		}
	}
	printf ("%d",dem);
}
