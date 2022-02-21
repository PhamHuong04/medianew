#include <stdio.h>
int ktnt (int n){
	int dem=0,h=0;
	for(int i=1;i<=n;i++)
		if (n%i==0) ++dem;
	if (dem==2) h=1;
	return h;
}
int thuannghich (int n) {
	int l=0,m=0;
	while (n>0){
		m=n%10;
		l=l*10+m;
		n/=10;
	}
	return l;
}
main (){
	int a,b,dem,tg;
	scanf ("%d%d",&a,&b);
	if (a>b){
		tg=a;
		a=b;
		b=tg;
	}
	++a;
	while (a<b){
		dem=0;
		for (int i=1;i<=a;i++){
		    if (a%i==0 && ktnt(i)==1) ++dem;
		    if (dem==3) break;
    	}
		if (dem>=3 && thuannghich(a)==a ) printf ("%d ",a);
		++a;
	}
	return 0;
}
