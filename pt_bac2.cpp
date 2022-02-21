#include <stdio.h>
#include <math.h>

int main(){
	int a, b, c;
	scanf("%d%d%d",&a, &b, &c);
if (a==0){
	if ((b==0)&&(c==0)){
		printf("Phuong trinh vo so nghiem");}
	else if((b==0)&&(c!=0)){
		printf("Phuong trinh vo nghiem");}
	else{
		float x;
		x=(float)-c/b;
		printf("%.2f",x);}
}else{
	int delta = b*b-4*a*c;
	if (delta<0){
	printf("Vo nghiem");}
	else if (delta==0){
		float x = (float)-b/(2*a);
		printf("%.2f",x);
		}
	else{
		float x1=(float)(-b+sqrt(delta))/(2*a);
		float x2=(float)(-b-sqrt(delta))/(2*a);
		printf("%.2f %.2f",x1,x2);	
	}
}
	return 0;
}
