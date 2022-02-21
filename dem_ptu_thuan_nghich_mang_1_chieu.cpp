#include <stdio.h>
int kttn(int n){
	int l=0,m;
	while (n>0){
		m=n%10;
		l=l*10+m;
		n/=10;
	}
	return l;
}
int kt(int n){
	int h=0;
	if (n>10) h=1;
	return h;
}
main (){
	int n,dem=0;
	scanf ("%d",&n);
	int a[n];
	for (int i=1;i<=n;i++){
	    scanf ("%d",&a[i]);
	    if (kttn(a[i])==a[i] && kt(a[i])==1) ++dem;
	}
	printf ("%d ",dem);
    for (int i=1;i<=n;i++)
	    if (kttn(a[i])==a[i] && kt(a[i])==1) printf("%d ",a[i]);
	return 0;	
}
