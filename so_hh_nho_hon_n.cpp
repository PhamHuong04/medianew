#include <stdio.h>
#include <math.h>
int  kthh(int n){
	int s=0,h=0;
	for (int i=1;i<n;i++) 
	    if (n%i==0) s+=i;
	if (s==n) h=1;
	return h;
}
main (){
	int n;
	scanf ("%d",&n);
	int a[n];
	for (int i=1;i<=n;i++){
	    a[i]=i;
	    if (kthh(a[i])==1) printf ("%d ",a[i]);
		 }
	return 0;
}	
