#include <stdio.h>
#include <math.h>
int snt(int n){
	if (n<2) return 0;
	for (int i=2;i<=sqrt(n);i++)
		if (n%i==0) return 0;
	return 1;
}
int main (){
	int n,tg;
	scanf ("%d",&n);
	int a[n],b[100]={1};
	for (int i=0;i<n;i++){
		scanf ("%d",&a[i]);
		if (snt(a[i])) ++b[a[i]];
	}
	for (int i=0;i<n-1;i++){
		if (a[i]>a[i+1]) {
			tg=a[i];
			a[i]=a[i+1];
			a[i+1]=tg;
		}
	}
	for (int i=0;i<n;i++){
		if (b[a[i]]>=1 && snt (a[i])) {
			printf ("%d %d\n",a[i],b[a[i]]);
			b[a[i]]=0;
		}
	}
	return 0;
}
