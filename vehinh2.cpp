#include <stdio.h>
main (){
	int n;
	scanf ("%d",&n);
	int h=1;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n-i;j++) printf (" ");
		for (int j=1;j<=h;j++) printf ("*");
		printf ("\n");
		h+=2;
	}
	return 0;
}
