#include <stdio.h>
main(){
	int n,le=0,chan=0;
	scanf ("%d",&n);
	while (n>0){
		if ((n%10)%2!=0) ++ le;
		else ++chan;
	    n/=10;
	}
	printf ("%d %d",le,chan);
	return 0;
}
