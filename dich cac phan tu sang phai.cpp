#include <stdio.h>
main (){
	int n,p;
	scanf ("%d",&n);
	int a[n];
	for (int i=0;i<n;i++) scanf ("%d",&a[i]);
	scanf ("%d",&p);
	for (int i=n-p;i<n;i++) printf ("%d ",a[i]);
	for (int i=0;i<n-p;i++) printf ("%d ",a[i]);
	return 0;
}
