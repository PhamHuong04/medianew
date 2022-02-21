#include <stdio.h>
main(){
	int n;
	scanf ("%d",&n);
	for (int i=5;i>=1;i--){
		for( int j=n;j>=i;j--) printf ("%d ",j);
		for (int j=1;j<i;j++) printf ("%d ",i);
		printf ("\n");
	}
	return 0;
}
