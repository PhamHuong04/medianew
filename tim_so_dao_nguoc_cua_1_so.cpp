#include <stdio.h>
int thuannghich(int i){
	int m,n;
	n=0;
	while (i>0){
		m=i%10;
		n=n*10+m;
		i/=10;
	}
	return n;
}
main(){
	int n;
	scanf("%d",&n);
	printf ("%d",thuannghich(n));
	return 0;
}
