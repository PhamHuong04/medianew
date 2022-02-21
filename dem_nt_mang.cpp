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
	int n,m;
	scanf("%d",&n);
	int a[n];
	for (int i=1;i<=n;i++)
	        scanf ("%d",&a[i]);
    for (int i=1;i<=n;i++)
            if (ktnt(a[i])==1) ++m;
    printf ("%d ",m);
    for (int i=1;i<=n;i++)
            if (ktnt(a[i])==1) printf ("%d ",a[i]);
    return 0;
}
	
