#include <stdio.h>
main(){
	int n,j,h;
	scanf ("%d",&n);
	j=n;
	for (int i=1;i<=n;i++){
			for ( h=1;h<=j;h++) printf ("*");
		    j--;
    	printf ("\n");
    }
    return 0;
}
