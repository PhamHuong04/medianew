#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int kttamgiac(int a,int b, int c){
	int k;
	k=0;
	if ( (a>0) && (b>0) && (c>0))
	    if (a+b+c==180) k=1;
	return k;
}
main (){
	int a,b,c;
	int n;
	scanf ("%d%d%d",&a,&b,&c);
	/*	sum=a+b+c;
	if ( (a>0) && (b>0) && (c>0))
	    if (sum==180) printf("1");
	    else printf("0");
	else printf("0");*/
	n= kttamgiac(a,b,c);
	printf ("%d",n);
	return 0;
}
