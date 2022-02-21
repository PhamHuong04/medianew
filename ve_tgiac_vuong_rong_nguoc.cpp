#include <stdio.h>
main (){
	int n,d;
	scanf("%d",&n);
	for (int i=1;i<=n; i++) printf ("*");
	printf ("\n");
	d=n-3;
	while (d>=0){
		printf("*");
		for (int i=1; i<=d; i++) printf (".");
		printf ("*\n");
		--d;
	}
	printf ("*");
	return 0;
}
