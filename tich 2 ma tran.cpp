#include <stdio.h>
void nhapmang(int a[][100],int n, int m){
	for (int i=0; i<n;i++)
	    for (int j=0; j<m;j++)
	        scanf("%d",&a[i][j]);
}
main (){
	int n,m;
	scanf ("%d%d",&n,&m);
	int a[100][100];
	int b[100][100];
	int c[100][100];
	nhapmang(a,n,m);
	nhapmang (b,m,n);
	int j=0,i=0;
	int l=0;;
	for (i=0;i<m;i++)
		for (int j=0;j<n;j++){
			c[i][j]=0;
			for (int h=0;h<n;h++){
		    	c[i][j]=a[i][h]*b[h][j]+c[i][j];	
	    	}
	}
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++)
		     printf ("%d ",c[i][j]);
		printf ("\n");
	}
	return 0;
}

