#include <stdio.h>
main(){
	int n,d=0;
	scanf ("%d",&n);
	printf("*\n");
	for (int i=1; i<n-1;i++){
		printf ("*");
		for (int i=1; i<=d;i++) printf (".");
		++d;
		printf("*\n");
	}
	for (int i=1; i<=n;i++) printf("*");
	return 0;
}
