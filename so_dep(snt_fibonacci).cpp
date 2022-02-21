#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int day_fibonaci(int i){
   if(i == 0)
      return 0;
   if(i == 1)
      return 1;
   return day_fibonaci(i-1) + day_fibonaci(i-2);
}
int ktnt(int n){
	int dem=0,h=0;
	for (int i=1; i<=n; i++)
	    if (n%i==0) ++dem;
	if (dem==2) ++h;
    return h;
}
int tongchuso(int n){
	int m=0,s=0;
	while (n>0){
		m=n%10;
		s+=m;
		n/=10;
	}
	return s;
}
main (){
	int a,b,tg;
	scanf("%d%d",&a,&b);
	if (a>b){
		tg=a;
		a=b;
		b=tg;
	}
	while (a<=b){
		tg=0;
		for (int i=1;i<=a+1;i++) {
		    if (day_fibonaci(i)==tongchuso(a)) {
		    	++tg;
		    	break;	
			}
			if (day_fibonaci(i)>tongchuso(a)) break;
		}
		if (tg==1 && ktnt(a)==1) printf ("%d ",a);
		++a;
	}
	return 0;
}
	
