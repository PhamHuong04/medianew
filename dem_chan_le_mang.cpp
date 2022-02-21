#include <stdio.h>
main (){
	int n,chan=0,le=0;
	scanf ("%d",&n);
	int a[n];
	for (int i=1;i<=n;i++) scanf ("%d",&a[i]);
	for (int i=1;i<=n;i++)
	    if (a[i]%2==0) ++chan;
	    else ++le;
	printf("%d ",chan);
	for (int i=1;i<=n;i++)
	    if (a[i]%2==0) printf ("%d ",a[i]);
	printf("\n%d ",le);
	for (int i=1;i<=n;i++)
	    if (a[i]%2!=0) printf ("%d ",a[i]);
	return 0;
}
