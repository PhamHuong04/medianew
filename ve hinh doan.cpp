#include <stdio.h>
main (){
	int n;
	int k=1;
	scanf ("%d",&n);
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			printf ("%d ",k);
			++k;
		}
		printf ("\n");
	}
	return 0;
}
