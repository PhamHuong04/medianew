#include <stdio.h>
main(){
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=1;i<=a;i++){
	    if (i%2==0)
	        for (int j=1; j<=b;j++) printf("0");
	    else 
		    for (int j=1; j<=b;j++) printf("1");
		printf("\n");
	}
	return 0;
}
