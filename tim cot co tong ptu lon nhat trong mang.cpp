#include <stdio.h>
main (){
	int n,max=-99999999,s;
	scanf ("%d",&n);
	int a[n][n];
	for (int i=0;i<n;i++)
	    for (int j=0;j<n;j++) scanf ("%d",&a[i][j]);
	for (int j=0; j<n;j++){
	    s=0;
	    for (int i=0;i<n;i++) s+=a[i][j];
	    if (max<s) max=s;
	}
    for (int j=0; j<n;j++){
	    s=0;
	    for (int i=0;i<n;i++) s+=a[i][j];
	    if (s==max) {
	    	printf ("%d\n",j+1);
	    	for (int i=0;i<n;i++) printf ("%d ",a[i][j]);
	    	break;
		}
	}	
	return 0;
}
