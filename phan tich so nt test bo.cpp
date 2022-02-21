#include <stdio.h>
int main (){
	int t;
	scanf ("%d",&t);
	for (int i=1;i<=t;i++){
		int n,j=2,dem=0;
		scanf ("%d",&n);
		printf ("test %d : ",i);
		while (n>1){
			if (n%j==0){
				++dem;
				n/=j;
			}
			if (n%j!=0){
				if (dem!=0) printf ("%d ( %d )  ",j,dem);
				dem=0;
				++j;
			}
			if (n==1 && dem!=0) printf ("%d ( %d )  ",j,dem);
		}
		printf ("\n");
	}
	return 0;
}
