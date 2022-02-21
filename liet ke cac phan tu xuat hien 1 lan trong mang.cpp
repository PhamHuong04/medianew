#include <stdio.h>
main (){
	int n,j=0,dem=0,i;
	scanf("%d",&n);
	int a[n];
	for ( i=0 ; i<n ; i++ ) scanf ("%d",&a[i]);
	while (j<n){
		for ( i=0; i<n; i++)
			if (a[j]==a[i] && i!=j ) break;
		if (i==n) ++dem;
		++j;
	}
	if (dem==0) printf ("0");
	else {
	j=0;
	while (j<n){
		for ( i=0; i<n; i++)
			if (a[j]==a[i] && i!=j ) break;
		if (i==n) printf ("%d ",a[j]);
		++j;
	}
	}
	return 0;
}	
