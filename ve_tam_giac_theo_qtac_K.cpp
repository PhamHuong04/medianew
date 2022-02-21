#include <stdio.h>
main(){
	int k=1,d=1,n;
	scanf ("%d",&n);
	int a[n][n];
	for (int i=1;i<=n;i++)
		for (int j=1;j<=n;j++) a[i][j]=0;
	for (int j=1;j<=n;j++){
		for (int i=1;i<=d;i++){
			a[i][j]=k;
			++k;
		}
		++d;
	}
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++)
		    if (a[i][j]!=0) printf ("%4d",a[i][j]);
            else printf ("    ");
        printf ("\n");
    }
    return 0;
}
