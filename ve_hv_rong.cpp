#include <stdio.h>
main(){
	int n,d;
	scanf("%d",&n);
	d=1;
	for(int i=1; i<=n;i++) printf ("*");
	printf("\n");
	while (d<=n-2){
		printf("*");
		for (int i=1;i<=n-2;i++) printf (".");
		printf("*\n");
	    ++d;
	}
	for(int i=1; i<=n;i++) printf ("*");
	return 0;
}
