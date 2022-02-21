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
	int n,i,j,d;
	scanf ("%d",&n);
	int a[n][n];
	for (i=1;i<=n;i++)
	    for (j=1; j<=n;j++)
	        scanf ("%d",&a[i][j]);
	for (i=1;i<=n;i++)
		if (ktnt(a[i][i])==1) ++d;
	i=1;
	j=n;
	while (i<=n){
		if (ktnt(a[i][j])==1) ++d;
		--j;
		++i;
	}
	if ((n%2!=0) &&(ktnt(a[(n/2)+1][(n/2)+1])==1)) --d;
	printf("%d",d);
	return 0;
}
