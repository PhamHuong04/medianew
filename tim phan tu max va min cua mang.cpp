#include <stdio.h>
main (){
	int n;
	scanf ("%d",&n);
	int a[n];
	for (int i=0;i<n;i++) scanf ("%d",&a[i]);
	int max=a[1],min=a[1];
	for (int i=1;i<n;i++){
		if (max<a[i]) max=a[i];
		if (min >a[i]) min=a[i];
	}
	printf ("%d %d",max,min);
	return 0;
}
