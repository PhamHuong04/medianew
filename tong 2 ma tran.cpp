#include <stdio.h>
void nhapmang(int a[][100],int n, int m){
	for (int i=0; i<n;i++)
	    for (int j=0; j<m;j++)
	        scanf("%d",&a[i][j]);
}
main (){
	int n,m;
	scanf ("%d%d",&n,&m);
	int a[100][100],b[100][100];
	nhapmang(a, n, m);
	nhapmang(b, n, m);
	for (int i=0;i<n;i++){
	    for (int j=0;j<m;j++)
	    	printf ("%d ",a[i][j]+b[i][j]);
	    printf ("\n");
	}
	return 0;
}
