#include <stdio.h>
int giaithua(int n){
	int s=1;
	for (int i=1;i<=n;i++)
	    s*=i;
	return s;
}
main(){
	int n,s,m,a;
	scanf ("%d",&n);
	for (int i=1;i<n;i++){
		a=i;
		s=0;
		while (a>0){
			m=a%10;
			s+=giaithua(m);
			a/=10;
		}
		if (s==i) printf("%d ",i);
	}
	return 0;
}
