#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main (){
	int n,d,i,j,k,b;
	scanf ("%d",&n);
	int a[n][n];
	for (i=1;i<=n;i++)
		for(j=1;j<=n;j++) a[i][j]=0;
	d=1;
	k=n*n;
	b=n;
	i=1;
	j=1;
	while (k>=1){
		i=d;
		for (j=d;j<=n;j++){
			a[i][j]=k;
			--k;
		}
		j=n;
		for (i=d+1;i<=n;i++){
		    a[i][j]=k;
		    --k;
		}
		i=n;
		for (j=n-1;j>=d;j--){
			a[i][j]=k;
			--k;
		}
		j=d;
		for (i=n-1;i>d;i--){
		    a[i][j]=k;
			--k;    
		}
		--n;
		++d;
	}
	for (i=1;i<=b;i++){
	    for (j=1;j<=b;j++)
	        printf("%d ",a[i][j]);
	    printf ("\n");
	}
	return 0;
}
