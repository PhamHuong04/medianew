#include <stdio.h>
main(){
	int n,le,chan,d=1; 
	scanf ("%d",&n);
	while (d<=n){
		le=1;
		chan=2;
		for (int i=1; i<=d;i++)
		    if (d%2==0){
			    printf ("%d",chan);
			    chan+=2;
			}
			else{
			    printf ("%d",le);
			    le+=2;
			}
		printf("\n");
		++d;
	}
	return 0;
}		
