#include <stdio.h>
main (){
	int n;
	scanf ("%d",&n);
	for (int i=1;i<=n;i++){
		for (int j=i;j>=1;j--) printf ("%d",j);
		for (int j=i;j<=n-i+1;j++) printf ("%d",j);
		printf ("\n");
	}
	return 0;
	
}
