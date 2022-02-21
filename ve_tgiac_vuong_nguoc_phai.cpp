#include <stdio.h>
main(){
	int n,d=0;
	scanf ("%d",&n);
	while (n>0){
		for (int i=1; i<=d; i++) printf("~");
		for (int i=1; i<=n;i++) printf ("*");
		printf ("\n");
		d++;
		n--;
	}
	return 0;
}
