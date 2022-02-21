#include <stdio.h>
main (){
	int n,temp;
	scanf ("%d",&n);
	int a[n];
	for (int i=1; i<=n;i++) scanf ("%d",&a[i]);
	for (int i=1; i<=n;i++){
		for (int j=1; j<i;j++){
		    if (a[i]<a[j]) {
		    	temp=a[i];
		    	a[i]=a[j];
		    	a[j]=temp;
		    	break;
		}
		}
		for (int d=1; d<=n;d++) printf("%d ",a[d]);
		printf ("\n");
	}
	return 0;
}
