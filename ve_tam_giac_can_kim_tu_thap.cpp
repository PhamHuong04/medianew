#include <stdio.h>
main(){
	int n;
	scanf ("%d",&n);
	int d=n-1;
	for (int i=1;i<=2*n;i+=2){
		for (int j=1;j<=d;j++) printf ("~");
		for (int j=1; j<=i;j++) printf ("*");
		printf("\n");
		--d;
	}
	return 0;
}
