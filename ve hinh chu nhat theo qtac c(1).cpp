#include <stdio.h>
main (){
	int n,m;
	scanf ("%d%d",&m,&n);
	int a[n];
	for (int i=1; i<=n ;i++) a[i]=i;
	if ( n==m || m<n){
	    for (int i=1; i<=m;i++){
	    	for (int j=i;j<=n;j++) printf ("%d",a[j]);
	    	for (int j=i-1; j>0;j--) printf ("%d",a[j]);
	    	printf ("\n");
    	}
    }
    if (m>n){
    	for (int i=1; i<=n;i++){
	    	for (int j=i;j<=n;j++) printf ("%d",a[j]);
	    	for (int j=i-1; j>0;j--) printf ("%d",a[j]);
	    	printf ("\n");
	    }
	    for (int i=n+1;i<=m;i++){
	    	printf ("%d",i);
	    	for (int j=n-1; j>0;j--) printf ("%d",a[j]);
	    	printf ("\n");
	    }
	}
	return 0;
}
