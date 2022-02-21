#include <stdio.h>
#include <stdbool.h>
bool ktnt (int n){
	if (n<2) return false;
	else {
		for (int i=2;i<n/2;i++)
		    if (n%i==0) return false;
		return true;
	}
}
void taomang (int *a[],int n,int *m){
	int i;
	while (n>0){
		i=n%10;
		if (ktnt(i)) {
			*a[*m] =i;
			++*m;
		}
		n/=10;
	}
}
main (){
	int n;
	scanf ("%d",&n);
	int a[100];
	int m=1;
	taomang(&a,n,1);
	for (int i=0;i<m;i++){
		int d=0;
		if (a[i]!=0) printf ("%d ",a[i]);
		for (int j=1;j<m;j++) 
		    if (a[i]==a[j] && a[i]!=0){
			    ++d;
			    a[j]=0;
			}
		if (d!=0) printf ("%d\n",d);
	}
	return 0;
}
