#include <stdio.h>
int giaithua(int n){
	int s=1;
	for (int i=1;i<=n;i++) s*=i;
	return s;
}
main (){
	int n;
	scanf ("%d",&n);
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n-i;j++) printf (" ");
		for (int k=1;k<=i;k++) {
			int c= giaithua(i)/(giaithua(k)*giaithua(i-k));
			printf ("%d ",c);
		}
		printf ("\n");
	}
	return 0;
}
