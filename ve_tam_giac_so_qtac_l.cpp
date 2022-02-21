#include <stdio.h>
main(){
	int n,d=0,k=1;
	scanf ("%d",&n);
	int a[n][n];
	for (int i=1; i<=n; i++){
		for (int j=1;j<=k;j++){
			printf ("%d ",(d*(d+1)/2)+1);
			++d;
		}
		printf ("\n");
		++k;
	}
	return 0;
}
