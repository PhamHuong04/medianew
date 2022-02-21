#include <stdio.h>
main (){
	int n;
	scanf("%d",&n);
	while (n>0){
		int r=n%10;
		if (r ==0 || r==6 || r==8 ) n=n/10;
		else break;
	}
	if (n==0) printf ("1");
	else printf ("0");
	return 0;
}
