#include <stdio.h>
main(){
	
	int n,m,s=1;
	scanf ("%d",&n);
	while (n>0){
		m=n%10;
		s*=m;
		n/=10;
    }
    printf ("%d",s);
    return 0;
}
