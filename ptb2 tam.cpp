#include<stdio.h>
#include<math.h>
main()
{ int a,b,c;
 float delta,x1,x2;
scanf("%d%d%d",&a,&b,&c);
delta=b*b-4*a*c;
/*x1=(-b-sqrt(delta))/(2*a);
x2=(-b+sqrt(delta))/(2*a;
if(a==0)
	if(b==0)
		if(c==0)
		printf("vo so nghiem");
		else printf("0");
	else printf("%.2f",-c/b);
else*/
	if(delta<0)
    	printf("NO");
	if(delta==0)
    	printf("%.2f",-b/2*a);
	if(delta>0){
        x1=(-b-sqrt(delta))/(2*a);
        x2=(-b+sqrt(delta))/(2*a); 
    	printf("%.2f %.2f",x1,x2);
    }
}
