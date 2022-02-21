#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main (){
	int n;
	scanf ("%d",&n);
	int a[n][n],b[n][n];
	for (int i=1; i<=n;i++){
	    for (int j=1;j<=n;j++) 
	    	scanf ("%d",&a[i][j]);	  
	}
	for (int i=1; i<=n; i++)
	    for (int j=1;j<=n;j++)
		    b[i][j]=a[j][i];
	for (int i=1; i<=n;i++){
	    for (int j=1;j<=n;j++) 
	    	printf ("%d ",b[i][j]);
	    printf("\n");
	}	
	return 0;
}
