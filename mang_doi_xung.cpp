#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main(){
	int n,i,j;
	scanf ("%d",&n);
	int a[n];
	for (i=1;i<=n;i++) scanf ("%d",&a[i]);
	j=n;
	for (i=1;i<=n/2;i++) 
	    if (a[i]==a[j]) --j;
	    else break;
	if (i==(n/2)+1) printf ("1");
	else printf ("0");
	return 0;
}
