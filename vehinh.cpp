#include <stdio.h>
main (){
	int n;
	scanf ("%d",&n);
	for (int i=1; i<=n;i++){
		for (int j=0;j<i-1;j++) printf ("!");
		for (int j=1;j<=n;j++) printf ("*");
		printf ("\n");
	}
}