#include<stdio.h>
main(){
	int m,n,p,j,i;
	scanf("%d%d",&m,&n);
	int a[m],b[n];
	for( i=0;i<m;i++) scanf("%d", &a[i]);
	for( i=0;i<n;i++) scanf("%d", &b[i]);
	scanf ("%d",&p);
	for (int i=0;i<p;i++) printf ("%d ", a[i]);
	for (int i=0;i<n;i++) printf ("%d ", b[i]);
	for (int i=p;i<m;i++) printf ("%d ",a[i]);
	return 0;
}
