#include <stdio.h>
int dao(int n){
	int r=0,t=0;
	while (n>0){
		r=n%10;
		t=t*10+r;
		n/=10;
	}
	return t;
}
main(){
	unsigned long long n,h;
	int m;
	scanf ("%lld",&n);
	h=n;
	int a[10]={0};
	if (n==0) a[0]++;
	while (n>0){
		m=n%10;
		++a[m];
		n/=10;
	}
	n=dao(h);
	while (n>0){
		m=n%10;
		if (a[m]!=0){
			printf("%d %d\n",m,a[m]);
			a[m]=0;
		}
		n/=10;
	}
	return 0;
}
