#include <stdio.h>
main(){
	int n,k,m;
	scanf ("%d%d",&n,&m);
	int a[n][n];
	for (int i=1;i<=n;i++){
		k=i;
	    for (int j=1;j<=m;j++){
	    	a[i][j]=k;
	    	printf ("%d",a[i][j]);
	    	k++;
		}
		printf ("\n");
    }
    return 0;
}
