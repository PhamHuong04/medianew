#include <stdio.h>
main(){
	int a,b,d;
	scanf("%d",&a);
	for(int i=1;i<=a-1;i++) printf ("~");
	for (int i=1; i<=a;i++) printf("*");
	printf("\n");
	d=a-2;
	while(d>0){
		for(int i=1;i<=d;i++) printf("~");
		printf("*");
		for (int i=1;i<=a-2;i++) printf(".");
		printf("*\n");
		--d;
	}
	for(int i=1;i<=d;i++) printf ("~");
	for(int i=1;i<=a;i++) printf ("*");
	return 0;
}
