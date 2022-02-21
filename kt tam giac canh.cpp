#include <stdio.h>
main (){
	int a,b,c;
	scanf ("%d%d%d",&a,&b,&c);
	if (a<=0|| b<=0|| c<=0) printf ("0");
	else 
	    if (a+b>c && a+c>b && c+b>a) printf ("1");
	    else printf ("0");
	return 0;
}
