#include <stdio.h>
main (){
	int n,k=1;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for (int j=1;j<=n;j++) {
		    printf("%d ",k);
		    k++;
		}
		printf("\n");
	}
	return 0;
}
		
