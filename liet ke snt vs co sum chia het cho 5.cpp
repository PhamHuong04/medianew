#include <stdio.h>
#include <stdbool.h>
int ktnt (int n){
	int dem=0,h=0;
	for (int i=1;i<=n;i++)
	    if (n%i==0) ++dem;
	if (dem==2) {
	return h=1;}
}
int tong(int n){
	int s=0,m,h=0;
	while (n>0) {
		m=n%10;
		s+=m;
		n/=10;
	}
	if (s%5==0){
	 return h=1;}
}
main (){
	int n;
	scanf ("%d",&n);
	int d=0,i=2;
	while (i<n)
	    if (ktnt(i)==1 && tong(i)==1) {
	    	printf("%d ",i);
	    	++i;
		}
	printf("\n%d",d);
	return 0;
}
