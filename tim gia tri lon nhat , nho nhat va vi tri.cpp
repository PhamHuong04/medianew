#include <stdio.h>
main (){
	int n,vtmax,vtmin;
	scanf ("%d",&n);
	int a[n];
	for (int i=0; i<n;i++) scanf ("%d",&a[i]);
	int max=a[0],min=a[0];
	for (int i=0;i<n;i++){
		if (a[i]>=max) {
			max=a[i];
			vtmax=i;
		}
		if (a[i]<=min){
			min=a[i];
			vtmin=i;
		}
	}
	printf ("%d %d\n",max,vtmax+1);
	printf ("%d %d",min,vtmin+1);
	return 0;
}
