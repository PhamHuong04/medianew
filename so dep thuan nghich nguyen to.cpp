#include <stdio.h>
int ktnt (int a){
	int dem=0,h=0;
	for (int i=1;i<=a;i++) 
	    if (a%i==0) ++dem;
	if (dem==2) h=1;
	return h;
}
int daonguoc(int n){
	int l=0,m;
	while (n>0){
		m=n%10;
		l=l*10+m;
		n/=10;
	}
	return l;
}
main (){
	int m,n,tg;
	scanf ("%d%d",&m,&n);
	if (m>n){
		tg=n;n=m;m=tg;
	}
	if (m<10) m=10;
	while (m<=n){
		if (ktnt(m)==1 && ktnt(daonguoc(m)) && m!= daonguoc (m)) printf ("%d ",m);
	    ++m;
	}
	return 0;
}
		
