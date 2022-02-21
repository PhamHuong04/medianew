#include<stdio.h>
#include<math.h>
int sodep(int n){
	int m=n;
	int r,dem=0,tong=0,tn=0;
	while(n>0){
		r=n%10;
		if(r==6) dem++;
		tn=tn*10+r;
		tong=tong+r;
		n/=10;
	}
	if(tn==m && tong%10==8 && dem>=1)
		return 1;
	return 0;
}
int main(){
	int a,b,dem=0;
	scanf("%d%d",&a,&b);
	int min=a;
	if(min>b){
		min=b;
	}
	for(int i=min;i<=a+b-min;i++){
		if(sodep(i)) dem++;
		}
	printf("%d",dem);
}
