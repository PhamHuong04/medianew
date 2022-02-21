#include <stdio.h>
main (){
	int n;
	scanf ("%d ",&n);
	int a[n];
	for (int i=0; i<n;i++){
		scanf ("%d ",&a[i]);
	}
	int j=n-1;
	for (int i=0;i<n;i++){
		if (a[i]=a[j]) --j;
		else break;
	}
	if (j==0) printf ("1");
	else printf ("0");
	return 0;
}
