#include <stdio.h>
int ktnt(int n){
	int dem=0,h=0;
	for (int i=1; i<=n; i++)
	    if (n%i==0) ++dem;
	if (dem==2) h=1;
	return h;
}
main (){
	int n;
	scanf ("%d",&n);
	for (int i=2;i<n;i++)
	    if (ktnt(i)==1) printf ("%d ",i);
	return 0;
}
