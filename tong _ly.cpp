#include <stdio.h>
#include <math.h>
main (){
	int n;
	float sum=0;
	scanf ("%d",&n);
	if (n>0)
		for (float i=1;i<=n;i++){
			sum += (float) 1/i;
		}
	printf ("%.3f",sum);
	return 0;
}
