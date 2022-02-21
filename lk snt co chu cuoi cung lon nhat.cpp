#include <stdio.h>
int ktnt (int n){
	int dem=0,h=0;
	for (int i=1;i<=n;i++)
	    if (n%i==0) ++dem;
	if (dem==2) return h=1;
}
int kt (int n){
	int m,h=0;
	m=n%10;
	n/=10;
	while (n>0)
		if (n%10 <= m) n/=10;
		else break;
	if (n==0) h=1;
	return h;
}
main(){
	int n,d=0,j,m;
	scanf ("%d",&n);
	n/=10;
	for (int i=1; i<=20;i++)
	    if (ktnt (i)==1) {
	    	printf ("%d ",i);
	    	++d;
	    }
	j=2;
	while (j<n){
		m=1;
		for (int i=j*10;i<(j+1)*10;i++)
		    if (ktnt(i)==1 && kt(i)==1){
		    	printf ("%d ",i);
		    	++d;
		    }
		++j;
	}
	printf ("\n%d ",d);
	return 0;
}
