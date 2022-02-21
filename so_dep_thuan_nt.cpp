#include <stdio.h>
int ktnt (int i){
	int j,h=0,dem=0;
	for (int j=1;j<=i;j++)
	    if (i%j==0) ++dem;
	if (dem==2) h=1;
	return h;
}
int tinhtong(int i){
	int s=0;
	while (i>0){
	    s+= (i%10);
	    i/=10;
	}
	return s;
}
main (){
	int a,b,dem=0;
	scanf("%d%d",&a,&b);
	int i=a;
	i=(a>b)?a:b;
	a=(a>b)?b:a;
	b=(a>b)?i:b;
	while (a<=b){
		i=a;
		while (i>0){
	        if (ktnt(i%10)==1) i/=10;
	        else break;
	}
	    if (ktnt(a)==1&& ktnt(tinhtong(a))==1 && i==0) ++dem;
	    ++a;
	}
	printf("%d",dem);
	return 0;
}

