#include<stdio.h>
main(){
	int m=6,n=4,i;
//    if (n<m){
        i=m-n+1;
    	while (i<=n+1){
    		for (int j=1;j<=i;j++) printf ("%d",i);
    		for (int j=i+1;j<=m;j++) printf ("%d",j);
    		printf ("\n");
    		++i;
		}
		for (int i=1;i<=m;i++) printf ("%d",m);
//	}
	return 0;
}
