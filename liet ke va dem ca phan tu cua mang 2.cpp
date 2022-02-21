#include <stdio.h>
main (){
	int n,d,j;
	scanf ("%d",&n);
	int a[n];
	for (int i=0;i<n;i++) scanf ("%d ",&a[i]);
	for (int i=0; i<n;i++){
		d=1;
		for ( j=i+1;j<n;j++){
		    if (a[i]==a[j]){
			    ++d;  
         	    for (int k=j; k< n-1; k++)
	            	a[k] = a[k+1];
	            n--;
        	}
        }	
	    printf ("%d %d\n",a[i],d);
	}
	return 0;
}

