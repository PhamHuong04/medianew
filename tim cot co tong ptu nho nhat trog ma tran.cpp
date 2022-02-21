#include <stdio.h>
main (){
	int n,min=99999999,s;
	scanf ("%d",&n);
	int a[n][n];
	for (int i=0;i<n;i++)
	    for (int j=0;j<n;j++) scanf ("%d",&a[i][j]);
	for (int j=0; j<n;j++){
	    s=0;
	    for (int i=0;i<n;i++) s+=a[i][j];
	    if (min>s) min=s;
	}
    for (int j=0; j<n;j++){
	    s=0;
	    for (int i=0;i<n;i++) s+=a[i][j];
	    if (s==min) {
	    	printf ("%d\n",j+1);
	    	for (int i=0;i<n;i++) printf ("%d ",a[i][j]);
	    	break;
		}
	}	
	return 0;
}
