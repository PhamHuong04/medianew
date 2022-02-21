#include<stdio.h>
#include<math.h>
//    1
//   1 1
//  1 2 1
// 1 3 3 1
//1 4 6 4 1
int gt(int n){
	int gt=1;
	for(int i=1;i<=n;i++){
		gt*=i;
	}
	return gt;
}
int tohop(int n,int k){
	return (gt(n)/(gt(n-k)*gt(k)));
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<=n-1-i;j++){
			printf(" ");
		}
		for(int j=0;j<=i;j++){
			printf("%d ",tohop(i,j));
		}
		printf("\n");
	}
	return 0;
}
