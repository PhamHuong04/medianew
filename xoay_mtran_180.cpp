#include <stdio.h>
main(){
	int n;
	scanf("%d",&n);
	int a[n][n],b[n][n];
	int l=n,h=n;
	for (int i=1;i<=n;i++)
	    for (int j=1;j<=n;j++) scanf ("%d",&a[i][j]);
	for (int i=1;i<=n;i++) {
		h=n;
		for (int j=1;j<=n;j++){
			b[i][j]=a[l][h];
			h--;
	    }
		--l;
    }
    for (int i=1;i<=n;i++){
    	for (int j=1;j<=n;j++) printf ("%d ",b[i][j]);
    	printf ("\n");
	}
	return 0;
}

