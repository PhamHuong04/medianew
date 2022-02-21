#include <stdio.h>
void hoanvi(int &a, int &b){
	int temp;
	temp=a;
	a=b;
	b=temp;
}
main(){
	int n,c,b,m;
	scanf ("%d%d",&n,&m);
	int a[n][m];
	for (int i=0;i<n;i++)
	    for (int j=0;j<m;j++) scanf ("%d",&a[i][j]);
	scanf ("%d%d",&c,&b);
	for (int i=0;i<n;i++){
		hoanvi (a[i][c-1],a[i][b-1]);
	}
	for (int i=0;i<n;i++){
	    for (int j=0;j<m;j++) printf ("%d ",a[i][j]);
	    printf ("\n");
	}
	return 0;
}
