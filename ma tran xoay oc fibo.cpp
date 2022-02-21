#include <stdio.h>
main (){
	int n;
	scanf ("%d",&n);
	int a[n*n];
	a[0]=0;
	a[1]=1;
	int t1=0,t2=1;
	for (int i=2;i<n*n;i++){
		int t3=t1+t2;
		a[i]=t3;
		t1=t2;
		t2=t3;
		printf ("%d ",a[i]);
	}
	int b[n][n];
	int k=0,i=0,d=0,h=n,j=0,m=0;
	while (k<n*n){
		i=d;
		for ( j=d;j<h;j++){
			b[i][j]=a[k];
			++k;
		}
		j=h-1;
		for (i=d+1;i<h;i++){
			b[i][j]=a[k];
			++k;
		}
		i=h-1;
		for (j=h-2;j>d;j++){
			b[i][j]=a[k];
			++k;
		}
		j=d;
		for (i=h-2;i>d;i++){
			b[i][j]=a[k];
			k++;
		}
		--h;
		++d;
	}
	for (i=0;i<n;i++){
		for (j=0;j<n;j++)
			printf ("%d ",b[i][j]);
		printf ("\n");
		}
	return 0;
}
