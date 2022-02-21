#include <stdio.h>
#include <math.h>
int ktnt (int n){
	int d=0,h=0;
	for (int i=1; i<=n;i++) 
	    if (n%i==0) ++d;
	if (d==2) h=1;
	return h;
}
main () {
	int m,n,d,a;
	scanf ("%d%d",&m,&n);
	if (m>n){
		d=m;
		m=n;
		n=d;
	}
	while (m<n){
	    for (int i=1; i<=m/2; i++){
	        if (ktnt(i)==1 && m%(i*i)==0){
	        	a=m; 
	        	while (a%i==0) a=a/i;
	        	if (a==1){
	        		printf ("%d ",m);
				}
			}
		}
	    ++m;
	}
	return 0;
}
