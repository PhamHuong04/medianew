#include <stdio.h>
main(){
	int n,d=1;
	scanf("%d",&n);
	for (int i=1; i<=2*n-1; i++) printf ("*");
	printf("\n");
	int k=1;
	while (d<n-1){
		for (int i=1;i<=d;i++) printf ("~");
		printf ("*");
		for (int i=1;i<=2*n-1-2-d-k; i++) printf(".");
	    ++d;++k;
		printf("*\n");
	}
	for (int i=1;i<=d;i++) printf ("~");
	printf("*");
	return 0;
}
