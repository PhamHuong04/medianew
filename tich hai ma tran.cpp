#include <stdio.h>
main (){
	int n,m;
	scanf ("%d%d",&n,&m);
	int a[n][m];
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++)
	 scanf ("%d",&a[i][j]);
	}
	int b[m][n];
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++) scanf ("%d",&b[i][j]);
	}
	int c[n][n];
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			c[i][j]=0;
			for (int k=0;k<m;k++)
				c[i][j]+=a[i][k]*b[k][j];
		}
	}
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++)
		printf ("%d ",c[i][j]);
		printf ("\n");
	}
}
