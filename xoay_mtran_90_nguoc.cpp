/*#include <stdio.h>
main(){
	int n,l,h;
	scanf("%d",&n);
	int a[n][n],b[n][n];
	for (int i=1;i<=n;i++)
	    for (int j=1;j<=n;j++) scanf ("%d",&a[i][j]);
	h=1;
	l=n;
	while (h<=n){
	    for (int i=1;i<=n;i++) b[h][i]=a[i][l];
    	++h;
    	--l;
    }
    for (int i=1;i<=n;i++){
    	for (int j=1;j<=n;j++) printf ("%d ",b[i][j]);
    	printf ("\n");
	}
	return 0;
}*/
#include <stdio.h>
main(){
	int n,l,h;
	scanf("%d",&n);
	int a[n][n],b[n][n];
	for (int i=1;i<=n;i++)
	    for (int j=1;j<=n;j++) scanf ("%d",&a[i][j]);
	h=1;
	l=n;
	for (h=1;h<=n;h++){
	    for (int i=1;i<=n;i++) b[h][i]=a[i][l];
    	--l;
    }
    for (int i=1;i<=n;i++){
    	for (int j=1;j<=n;j++) printf ("%d ",b[i][j]);
    	printf ("\n");
	}
	return 0;
}

