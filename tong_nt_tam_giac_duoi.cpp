#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int ktnt (int h){
	int dem,k;
	dem=0;
	k=0;
	for (int i=1;i<=h;i++)
		if (h%i==0) ++dem;
	if (dem ==2) k=1;
 	return k;
}
main (){
	int j,n,sum,d,m;
	scanf ("%d",&n);
	int a[n][n];
	for (int i=1;i<=n; i++)
	    for ( j=1;j<=n; j++)
	        scanf ("%d",&a[i][j]);
	d=1; sum=0;
	for (int i=1;i<=n;i++){
		for (j=1;j<=d;j++){
			m=ktnt(a[i][j]);
			if (m==1)
			    sum+=a[i][j];
		}
		++d;
	}
	printf("%d",sum);
	return 0;
}
