#include <stdio.h>
main(){
	int n;
	scanf("%d",&n);
	int a[n];
	int j=n;
	for (int i=1;i<=n;i++) scanf ("%d",&a[i]);
	for (int i=1;i<=n/2;i++)
		if (a[i]==a[j]) --j;
		else break;
	if(n%2==0)
    	if (j==n/2) printf ("1");
    	else printf ("0");
	else
	    if (j==n/2+1) printf ("1");
     	else printf ("0");
    return 0;
}
