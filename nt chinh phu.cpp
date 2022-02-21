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
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int sum1=0;
	for(int i=0;i<n;i++){
			if(snt(a[i][i])){
				sum1+=a[i][i];
			}
		}
	int sum2=0;
	for(int i=n-1;i>=0;i--){
				if(snt(a[i][n-i-1])){
					sum2+=a[i][n-i-1];
				}
			}
	printf("%d",sum2+=sum1);
	return 0;
	}
