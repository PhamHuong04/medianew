#include <stdio.h>
#include <math.h>
main (){
	int a,b,c;
	scanf ("%d%d%d",&a,&b,&c);
	if(a==b && b==c) printf ("3");
	if (a==b && b!=c) printf ("2");
	if (a*a+b*b==c*c ||a*a==b*b+c*c ||a*a+c*c==b*b) printf ("1");
	return 0;
}
