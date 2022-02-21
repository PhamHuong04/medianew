/* ve nua hinh thoi
#include <stdio.h>
main (){
	int n;
	scanf ("%d",&n);
	int h=0;
	for (int i=n;i>=1;i--){
		for (int j=1;j<=h;j++) printf ("~");
		for (int j=i;j>=1;j--) printf ("*");
		printf("\n");
		h+=2;
	}
	h-=2;
	for (int i=2; i<=n;i++){
		for (int j=1;j<=h;j++) printf ("~");
		for (int j=i;j>=1;j--) printf ("*");
		h-=2;
		printf("\n");
	}
	return 0;
}*/
#include <stdio.h>
main (){
	int n;
	scanf ("%d",&n);
	for (int i=n;i>=1;i--){
		for (int j=i-1;j>=1;j--) printf ("~");
		for (int j=i;j>=1;j--) printf ("*");
		printf("\n");
	}
	for (int i=2; i<=n;i++){
		for (int j=i-1;j>=1;j--) printf ("~");
		for (int j=i;j>=1;j--) printf ("*");
		printf("\n");
	}
	return 0;
}
