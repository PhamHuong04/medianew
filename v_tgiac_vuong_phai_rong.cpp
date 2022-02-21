#include <stdio.h>
main(){
	int n,d,b=1;
	scanf ("%d",&n);
	d=n-1;
	while (n-d<3){
    	for (int j=1;j<=d;j++) printf("~");
        for (int j=1;j<=n-d; j++) printf ("*");
        printf("\n");
        d--;
    }
	for (int i=1; i<=n-3; i++){
		for (int j=1;j<=d;j++) printf("~");
		printf("*");
		for (int j=1; j<=b;j++) printf (".");
		printf ("*\n");
		b++;
		d--;
	}
	for (int i=1; i<=n;i++) printf ("*");
	return 0;
}
