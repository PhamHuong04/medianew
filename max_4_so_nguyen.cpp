#include <stdio.h>
#include <conio.h>
int main (){
	int a[4];
	int i,dem,max;
	for (i=1; i<=4;i++){
		printf("nhap so thu %d \n",i);
		scanf ("%d",&a[i]);
	}
	max=a[1];
	for ( i=2;i<=4; i++){
	    if (max < a[i]) max=a[i];
	    if (a[i-1]==a[i]) ++dem;
	}
	if (dem==4) printf ("ko co so lon nhat");
	else
	printf("so lon nhat trong 4 so da cho la %d",max);
	getch();
}
