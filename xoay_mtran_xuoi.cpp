#include <stdio.h>
main(){
	int n,l,h;
	scanf("%d",&n);
	int a[n][n],b[n][n];
	for (int i=1;i<=n;i++)
	    for (int j=1;j<=n;j++) scanf ("%d",&a[i][j]);
	h=1;
	l=n;
	while (h<=n){
	    for (int i=1;i<=n;i++) b[i][h]=a[l][i];
    	++h;
    	--l;
    }
    for (int i=1;i<=n;i++){
    	for (int j=1;j<=n;j++) printf ("%d ",b[i][j]);
    	printf ("\n");
	}
	return 0;
}

