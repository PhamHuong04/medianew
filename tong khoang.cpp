#include <stdio.h>
main (){
	int a,b,tg,s=0;
	scanf ("%d%d",&a,&b);
	if (a>b){
		tg=a;
		a=b;
		b=tg;
	}
	for (a;a<=b;a++) s+=a;
	printf ("%d",s);
	return 0;
}
