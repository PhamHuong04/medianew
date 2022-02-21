#include <stdio.h>
#include <math.h>
int ktnt(int n){
	int h=0,d=0;
	for (int i=1; i<=n ;i++)
		if (n%i==0) ++d;
	if (d==2) h=1;
	return h;
}
main (){
	int n,i=1,a=1,b,c;
	scanf ("%d",&n);
	while (a<n) {
		b=pow(2,i-1);
		c=pow (2,i);
		a=b*(c-1);
		printf ("%d ",a);
		if (ktnt(c-1)==1 && a<n) printf ("%d ",a);
		++i;
	}
	return 0;
}
