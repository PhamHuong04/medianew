#include <stdio.h>
main (){
	int n,j;
	scanf ("%d",&n);
	int a=0;
	j=n;
	while (a<j){
		for (int i=1; i<=a;i++) printf ("~");
		for (int i=1; i<=n;i++) printf ("%d",i);
		n--;
		a++;
		printf ("\n");
	}
	return 0;
}
