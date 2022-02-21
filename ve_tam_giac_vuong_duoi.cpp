#include <stdio.h>
main(){
	int n,d;
	scanf("%d",&n);
	d=1;
	for (int i=1;i<=n;i++){
	    for (int j=1; j<=d; j++)
	        printf ("*");
	    ++d;
	    printf ("\n");
	}
	return 0;
}
