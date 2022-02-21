#include <stdio.h>
main (){
	int b=1,d,n;
	scanf("%d",&n);
	d=n-1;
	for (int i=1;i<=d;i++) printf ("~");
	printf("*\n");
	--d;
	while (d>0){
		for (int i=1;i<=d;i++) printf ("~");
		printf("*");
		for (int i=1; i<=b;i++) printf (".");
		printf ("*\n");
		--d;
		b+=2;
	}
	for (int i=1; i<2*n;i++) printf("*");
	return 0;
}
