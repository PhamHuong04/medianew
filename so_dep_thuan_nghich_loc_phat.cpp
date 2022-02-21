#include <stdio.h>
int thuannghich(int n){
	int m,l=0;
	while (n>0){
		m=n%10;
		l=l*10+m;
		n/=10;
	}
	return l;
}
int tong(int n){
	int s=0,m;
	while (n>0){
		m=n%10;
		s+=m;
		n/=10;
	}
	return s;
}
int ktlocphat(int n){
	int h=0;
	while (n>0){
		if (n%10==6){
	        return 1;
		}
		else n/=10;
	}
	return h;
}
main(){
	int a,b,tg,dem=0;
	scanf ("%d%d",&a,&b);
	if (a>b){
		tg=a;
		a=b;
		b=tg;
	}
	while (a<=b){
	    if (thuannghich(a)==a && ktlocphat(a)==1 && (tong(a)%10==8)){
	    	printf ("%d ",a);
	}
	    ++a; 
    } 
    return 0;
}
