#include <stdio.h>
#include <math.h>
int ktnt (int n){
	for (int i=2; i<=sqrt(n);i++) 
	    if (n%i==0) return 0;
	return 1;
}

bool ktshh(int n){
      int sum=1;
      for(int i=2 ; i<=n ;i++)
            sum+= n%i==0 ?i:0;
      return sum==n;
}
int main () {
	int m,n,d;
	scanf ("%d%d",&m,&n);
	if (m>0 && n>0){
		if (m>n){
			d=m;
			m=n;
			n=d;
		}
		while (m<=n){
	    	for (int i=2; i<=sqrt(m); i++)
	        	if (ktnt(i) && m%(i*i)==0 && !ktshh(m)) {
              printf("%d ",m);
	        	}
	    	++m;
		}
	}
	return 0;
}
