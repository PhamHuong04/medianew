#include <stdio.h>
int thuannghich(int i){
	int m,l=0;
	while (i>0){
		m=i%10;
		l=l*10+m;
		i/=10;
	}
	return l;
}
int kt(int i){
	int m,h=0;
	while (i>0){
		m=i%10;
		if (m==9) break;
		i/=10;
	}
	if (i==0) return h=1;
}
main (){
	int i,d=0,n;
	scanf ("%d",&n);
	i=2;
	while (i<n){
		if (thuannghich(i)==i && kt(i)==1) { 
		    printf ("%d ",i);
		    ++d;
		}
		++i;
	}
	printf ("\n%d",d);
	return 0;
}
