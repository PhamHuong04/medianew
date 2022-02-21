#include<stdio.h>
#include<math.h>
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
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}
	int max=0,dem=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(snt(a[i][j])) dem++;
		}
		if(max<dem){
			max=dem;
		}
		dem=0;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(snt(a[i][j])) dem++;
			}
		if(dem==max){
			printf("%d ",i+1);
			break;
		}
		dem=0;
	}
	return 0;
}
