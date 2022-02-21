#include <stdio.h>
main (){
	int n;
	scanf ("%d",&n);
	int a=n,r;
	while (n>0){
		r=n%10;
		n=n/10;
	}
	printf ("%d %d",r,a%10);
	return 0;
}
