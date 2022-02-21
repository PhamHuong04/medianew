#include <stdio.h>
#include <math.h>
/*unsigned long long giaithua(int i){
	int s=1;
	if (i==0) s=1;
	if (i<0) s=0;
    if (i>0)
		for (int j=1;j<=i;j++) s=s*j;
	return s;
}*/
unsigned long long giaithua(int n){
	if (n==1) return 1;
	else return n*giaithua(n-1);
}
 main (){
	int n;
	scanf ("%d",&n);
	if (n==0) printf("1");
	if (n<0) printf ("0");
	if (n>0)
	    printf ("%lld",giaithua(n));
	return 0;
}
