#include<stdio.h>
int soTN(int n){
	long long dao=0;
	while(n!=0){
	dao=dao*10+n%10;
	n/=10;
	}
	return dao;
}
int main(){
	long long n;
	scanf("%lld",&n);
	if(n>0){
	    if(soTN(n)==n) printf("1");
		else printf("0");
	}
	return 0;
}
