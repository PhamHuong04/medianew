#include<stdio.h>
#include<math.h>
int snt(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int tang(int n){
	while(n>10){
		int r=n%10;
		n/=10;
		if(r<=n%10) return 0;
	}
	return 1;
}
int giam(int n){
	while(n>10){
		int r=n%10;
		n/=10;
		if(r>=n%10) return 0;
	}
	return 1;
}
int main(){
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++){
		int n,dem=0;
		scanf("%d",&n);
		for(int j=pow(10,n-1);j<pow(10,n);j++){
			if(snt(j) && (tang(j) || giam(j))){
				dem++;
			}
		}
		printf("%d ",dem);
	}
	return 0;
}