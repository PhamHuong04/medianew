#include <stdio.h>
int tong(int n){
	int s=0,m;
	while (n>0){
		m=n%10;
		s+=m;
		n/=10;
	}
	return s;
}
main(){
	int a,b;
	scanf ("%d%d",&a,&b);
	if (tong(a)<=tong(b)) printf ("%d %d",a,b);
	else printf("%d %d",b,a);
	return 0;
}	
