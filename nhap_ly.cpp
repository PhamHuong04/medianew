/*#include <stdio.h>
main(){
	int n;
	scanf("%d",&n);
	if (n>0){
	float a[n];
	for (int i=0;i<n;i++) scanf ("%f",&a[i]);
	for (int i=0;i<n;i++) printf ("%.2f ",a[i]);
	}
	return 0;
}*/
#include<stdio.h>
#include <math.h>
int main(){
	int a,b,c,d;
	float x1,x2;
	scanf("%d%d%d",&a,&b,&c);
	if(a!=0) {
	  d = b*b-4*a*c;
	  if(d>0){
	   x1 =(float) ((-b+sqrt(d))/(2*a));
	   x2 =(float) ((-b-sqrt(d))/(2*a));
	   printf("%.2f %.2f",x1,x2);}
	   else printf("NO");}
	else{
		if(b!=0){
			x1= -c/b;
			printf("%f",x1);
		} else printf("NO");
	}
	return 0;
}
