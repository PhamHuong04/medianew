#include <stdio.h>
main(){
	int n,b,d=1;
	scanf ("%d",&n);
	b=n-3;
    for (int i=1; i<=n;i++) printf ("*");
    printf("\n");
	for (int i=1; i<=n-3; i++){
		for (int j=1;j<=d;j++) printf("~");
		printf("*");
		for (int j=1; j<=b;j++) printf (".");
		printf ("*\n");
		b--;
		d++;
	}
		for (int i=1;i<=2;i++){
    	for (int j=1;j<=d;j++) printf("~");
        for (int j=1;j<=n-d; j++) printf ("*");
        printf("\n");
        d++;
    }
	return 0;
}
