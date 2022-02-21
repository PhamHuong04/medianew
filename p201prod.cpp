#include <stdio.h>
#include <math.h>
main(){
	int n=1;
	long long s=0;
	for (int i=1;i<=10;i++) 
		s+= pow (7,i);
	printf ("%lld",s);
}
	
