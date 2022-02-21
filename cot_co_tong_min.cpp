#include <stdio.h>
main(){
	int n;
	scanf ("%d",&n);
	int a[n][n];
	int min=9999999,vt,s;
	for (int i=1;i<=n;i++)
	    for (int j=1; j<=n;j++) scanf ("%d",&a[i][j]);
	for (int j=1;j<=n;j++){
		s=0;
		for (int i=1;i<=n;i++) s+=a[i][j];
		if (s<min){
			min =s;
			vt=j;
		}
	}
	printf ("%d\n",vt);
	for (int i=1;i<=n;i++) printf ("%d ",a[i][vt]);
	return 0;
}
