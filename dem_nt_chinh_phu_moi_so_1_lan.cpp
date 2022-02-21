#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int ktnt(int n){
	int dem,k;
	dem=0;
	k=0;
	for (int i=1;i<=n;i++)
        if (n%i==0) ++dem;
    if (dem==2) k=1;
    return k;
}
main(){
	int n,i,j,d=1;
	scanf ("%d",&n);
	int a[n][n],b[100];
	for (i=1;i<=n;i++)
	    for (j=1; j<=n;j++)
	        scanf ("%d",&a[i][j]);
	for (i=1;i<=n;i++)
		if (ktnt(a[i][i])==1){
		     b[d]=a[i][i];
		     ++d;
		}
	i=1;
	j=n;
	while (i<=n){
		if (ktnt(a[i][j])==1){
		b[d]=a[i][j];
		++d;
	}
		--j;
		++i;
	}
	n=0;
    for (i=1;i<d;i++){
       for ( j=1;j<i;j++)
	      if (b[i]==b[j]) break;
	    if (j==i) ++n;
	}
	printf("%d",n);
	return 0;
}
