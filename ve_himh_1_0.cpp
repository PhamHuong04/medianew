#include<stdio.h>
main(){
	int a,b;
	scanf ("%d%d",&a,&b);
	for (int i=1;i<=a;i++){
		if (i%2!=0) {
				for (int j=1;j<=b;j++){
			if (j%2==0) printf("0");
			else printf ("1");
		}
		printf ("\n");
		}
		else {
		for (int j=1;j<=b;j++){
			if (j%2==0) printf("1");
			else printf ("0");
		}
		printf ("\n");
	}
	}
	return 0;
}
