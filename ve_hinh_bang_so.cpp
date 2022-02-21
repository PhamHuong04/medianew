#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main (){
	int n,i,j,k,d,h;
	scanf("%d",&n);
	int a[n][n]={0};
	k=0;
	d=n;
	h=1;
	while (k <= pow (n,2)){
		for (j=h;j<=n;j++){
			++k;
			a[h][j]=k;
		}
		for (i=h+1;i<=n;i++){
			++k;
			a[i][j]=k;
		}
		for (j=n;j<=h;j--){
			++k;
			a[i][j]=k;
		}
		for (i=n-1;i<h;i--){
			++k;
			a[i][j]=k;
		}
		++h;
		--n;
	}
	for (i=1;i<=d;i++){
	    for (j=1;j<=d;j++) printf ("%d ",a[i][j]);
	    printf ("\n");
	}
	return 0;
}
