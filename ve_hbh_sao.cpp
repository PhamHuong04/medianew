#include <stdio.h>
main(){
	int a,b,d;
	scanf("%d%d",&a,&b);
	d=0;
	for (int i=1; i<=a; i++){
		for (int j=1;j<=d;j++) printf ("~");
		for (int j=1;j<=b;j++) printf ("*");
		printf ("\n");
		++d;
	}
	return 0;
}
