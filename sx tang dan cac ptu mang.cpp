#include <stdio.h>
void hoanvi(int &a,int &b){
	int temp;
	temp=a;
	a=b;
	b=temp;
}
main(){
	int n;
	scanf ("%d",&n);
	int a[n];
	for (int i=0;i<n;i++) scanf ("%d",&a[i]);
	for (int i=0;i<n-1;i++) 
    	for (int j=i+1;j<n;j++) 
	    if (a[i]>a[j]) hoanvi(a[i],a[j]);
	for (int i=0;i<n;i++) printf ("%d ",a[i]);
	return 0;
}
	
