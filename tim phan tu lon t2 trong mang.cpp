#include <stdio.h>
void hoanvi(int *a,int *b){
	int tmp=*a;
	*a=*b;
	*b=tmp;
}
main (){
	int n;
	scanf ("%d",&n);
	int a[n];
	for (int i=0;i<n;i++) scanf ("%d ",&a[i]);	
	for (int i=0;i<n;i++){
		for (int j=0;j<n-1;j++)
		if (a[j]>a[j+1]) hoanvi(&a[j],&a[j+1]);
	}
	printf ("%d ",a[n-2]);
}
