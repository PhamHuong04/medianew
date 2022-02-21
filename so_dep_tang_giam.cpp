#include <stdio.h>
#include <math.h>
int sodepgiam(int i){
	int h=0,b,n,m;
	b=i;
	m=i%10;
	i/=10;
	while (i>0){
		n=i%10;
		if (m>n){
		    i/=10;
		    m=n;
		}
		else break;
	}
	if (i==0) h=1;
	return h; 
}
int sodeptang(int i){
	int h=0,m,n;
	m=i%10;
	i/=10;
	while (i>0){
		n=i%10;
		if (m<n){
		 i/=10;
		 m=n;
		}
		else break;
	}
	if ( i==0) h=1;
	return h;
}
int ktnt(int i){
	int dem=0,h=0;
	for (int j=1;j<=i;j++)
	    if (i%j==0) ++dem;
	if (dem==2) h=1;
	return h;
}
main(){
	int a,dem=0;
	scanf ("%d",&a);
	for (int i=pow(10,a-1);i<=pow(10,a)-1;i++)
		if (((sodeptang(i)==1)||(sodepgiam(i)==1)) && (ktnt(i)==1) ) ++dem;
	printf ("%d",dem);
    return 0;
}
