#include<stdio.h>
#include <math.h>
/*int ktnt(int n){
	int dem=0,h=0;
	for (int i=1; i<=n; i++)
	    if (n%i==0) ++dem;
	if (dem==2) h=1;
	return h;
}*/
main(){
	int a,b,tg;
	scanf ("%d%d",&a,&b);
	if (a>b) {
		tg=a;
		a=b;
		b=tg;
	}
	while (a<=b){
		for (int i=1;i<=a;i++)
		    if (a%i!=0 && a%(i*i)!=0){
			    printf ("%d ",a);
			    break;
	    	}
		++a;
	}
	return 0;
}/*
#include <stdio.h>
int main (){
	int a,b;
	scanf ("%d%d", &a, &b);
	if (b==0) printf ("0");
		else{
		int tong= a+b;
		int hieu = a-b;
		int tich = a*b;
		double chia1 = (double) a/b;
		int chia2= a % b;
		printf ("%d %d %d %.2f %d", tong , hieu, tich, chia1, chia2);
		}
	return 0;
}*/
