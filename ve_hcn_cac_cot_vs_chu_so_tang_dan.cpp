#include <stdio.h>
main(){
	int m,n;
	scanf("%d%d",&m,&n);
	for (int i=1;i<=m;i++){
		for (int j=1; j<=n;j++) printf ("%d",j);
		printf ("\n");
	}
	return 0;
}
