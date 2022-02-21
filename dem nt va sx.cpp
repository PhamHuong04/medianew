#include<stdio.h>
#include<math.h>
//10
//10 1 2 3 3 2 1 3 2 7 8
int snt(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n],b[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		b[i]=1;
	}
	int dem=1,dem1=0;
	for(int i=0;i<n;i++){
		if(b[i]==1)
			dem=1;
		for(int j=i+1;j<n;j++){
			if(snt(a[i]) && a[i]==a[j]){
				dem++;
				b[i]=0;
				break;
			}
		}
		if(dem>=2)dem1++;
	}
	printf("%d\n",dem1);
	for(int i=0;i<n;i++){
		if(b[i]==1)
		dem=1;
		for(int j=i+1;j<n;j++){
			if(snt(a[i]) && a[i]==a[j]){
				dem++;
				b[j]=0;
			}
		}
		if(dem>=1)
		printf("%d ",a[i]);
	}
}
