#include <stdio.h>
main(){
	int n,i;
	scanf ("%d",&n);
	int a[n],b[n]={0};
	for ( i=0;i<n;i++){
		scanf ("%d",&a[i]);
		++b[a[i]];
	}
	for ( i=0;i<n;i++) 
		if (b[a[i]]!=1) break;
	if (i==n) printf ("0");
	for ( i=0;i<n;i++)
		if (b[a[i]]>1){
			printf ("%d ",a[i]);
			b[a[i]]=0;
		}
	return 0;
}
