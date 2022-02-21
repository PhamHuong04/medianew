/*~~~~*
~~~**
~~*.*
~*..*
******/
#include <stdio.h>
main (){
	int n;
	scanf ("%d",&n);
	for (int i=1;i<n;i++) printf ("~");
	printf ("*\n");
	for (int i=2;i<=n-1;i++){
		for (int j=1;j<=n-i;j++) printf ("~");
		printf ("*");
		for (int j=1;j<i-1;j++) printf (".");
		printf ("*\n");
	}
	for (int i=1;i<=n;i++) printf ("*");
	return 0;
}
