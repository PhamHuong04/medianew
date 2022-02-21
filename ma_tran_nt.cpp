#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int ktnt(int n){
	int dem,k;
	dem=0;
	k=0;
	for (int i=1;i<=n;i++)
        if (n%i==0) ++dem;
    if (dem==2) 
	    k=1;
    return k;
}
main (){
	int n,d,i,j,k,h;
	scanf ("%d",&n);
	int a[n][n];
	i=n*n;
	int b[i];
	k=2;
	i=1;
	while (i<=n*n){
		if (ktnt(k)==1){
		    b[i]=k;
		    ++i;
		}
		++k;
	}   
	d=1;
	k=1;
	h=n;
	i=1;
	j=1;	
	while (k<h*h+1){
		i=d;
		for (j=d;j<=n;j++){
			a[i][j]=b[k];
			++k;
		}
		j=n;
		for (i=d+1;i<=n;i++){
		    a[i][j]=b[k];
		    ++k;
		}
		i=n;
		for (j=n-1;j>=d;j--){
			a[i][j]=b[k];
			++k;
		}
		j=d;
		for (i=n-1;i>d;i--){
		    a[i][j]=b[k];
			k++;    
		}
		--n;
		++d;
	}
	for (i=1;i<=h;i++){
	    for (j=1;j<=h;j++)
	        printf("%d ",a[i][j]);
	    printf ("\n");
	}
	return 0;
}
