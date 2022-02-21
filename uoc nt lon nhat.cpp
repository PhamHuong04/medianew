#include<stdio.h>
#include<math.h>
int snt(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int uoc(int n){
	for(int i=n;i>=1;i--){
		if(n%i==0 && snt(i)) {
		printf("%d",i);
		return 0;
		}
	}
	return 1;
}
int main(){
	int T;
	scanf("%d",&T);
	if(T>100 && T<1) return 0;
	for(int i=1;i<=T;i++){
		int n;
		scanf("%d",&n);
		if(n> pow(10,10) && n<1) return 0;
		uoc(n);	}
}
