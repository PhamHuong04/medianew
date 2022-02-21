#include <stdio.h>
main (){
	int n=90;
	long long f1=0,f2=1;
	for (int i=1;i<=90;i++){
		long long f3 = f1+f2;
		f1=f2;
		f2=f3;
		printf ("%lld,",f3);
	}
}
