#include <stdio.h>
main(){
	int a,b,d;
	scanf("%d",&a);
	b=a;
	for (int i=1; i<=b;i++) printf("*");
	printf("\n");
	d=1;
	while(d<a-1){
		for(int i=1;i<=d;i++) printf("~");
		printf("*");
		for (int i=1;i<=b-2;i++) printf(".");
		printf("*\n");
		++d;
	}
	for(int i=1;i<=d;i++) printf ("~");
	for(int i=1;i<=b;i++) printf ("*");
	return 0;
}
