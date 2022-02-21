#include <stdio.h>
#include <math.h>
int ktnt (int n){
	for (int i=2; i<=sqrt(n);i++) 
	    if (n%i==0) return 0;
	return 1;
}
int main () {
	int m,n,d,test,test1;
	scanf ("%d%d",&m,&n);
	if (m>0 && n>0){
		if (m>n){
			d=m;
			m=n;
			n=d;
		}
		while (m<=n){
			test=1;
			test1=0;
	    	for (int i=2; i<=m/2; i++){
	        	if (ktnt(i)) {
	        		if (m%i==0){
	        			test1=1;
	        			if (m%(i*i)!=0) test=0;
	        		}
	        	}
	        }
	        if (test==1 && test1==1) printf ("%d ",m);
	    	++m;
		}
	}
	return 0;
}
