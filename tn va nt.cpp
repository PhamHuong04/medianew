#include<stdio.h>
int tn(int n){
	int du,tong=0,tam=n;
	while(n!=0){
		du=n%10;
		tong=tong*10+du;
		n=n/10;
	}
	return tong;
}
int hai(int n){
	int dem=0,du;
	while(n!=0){
		du=n%10;
		dem++;
		n=n/10;
	}if(dem<2)
		return 0;
	return 1;
}
int main(){
	int n,dem=0;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++){
		if(tn(a[i])==a[i] && hai(a[i])==1){
			dem++;
		}
	}
	printf("%d ",dem);
	for(int i=1;i<=n;i++){
		if(tn(a[i])==a[i] && hai(a[i])==1){
			printf ("%d ",a[i]);
		}
	}
	return 0;
}




