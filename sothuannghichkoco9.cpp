#include<stdio.h>
#include<math.h>
int stn(int n){
	int r,t=0,a=n;
	while(n){
		r=n%10;
		t=t*10+r;
		n/=10;
	}
	if(t==a) return 1;
	return 0;
}
int chuso9(int n){
	int r;
	while(n){
		r=n%10;
		if(r==9) return 0;
		n/=10;
	}
	return 1;
}
int main(){
	int n,dem=0;
	scanf("%d",&n);
	for(int i=2;i<n;i++){
		if(stn(i) && chuso9(i)){
			dem++;
			printf("%d ",i);
		}
	}
	printf("\n%d",dem);
}
