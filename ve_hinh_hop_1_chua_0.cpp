#include <stdio.h>
main(){
	int n,j=1,m;
	scanf("%d%d",&n,&m);
	for (int i=1;i<=m;i++) printf("1");
	while (j<n-1){
		printf ("\n1");
		for (int i=1;i<=m-2;i++) printf ("0");
		printf ("1");
		j++;
	}	
	printf("\n");
	for (int i=1;i<=m;i++) printf("1");
	return 0;
}
