#include<stdio.h>
#include<math.h>
int snt(int(n)){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) 
		return 0;
	}
	return 1;
}
int tang(int (n)){
	while(n>10){
	int	r=n%10;
	n=n/10;
	if(r<=n%10)
			return 0;
	}
	return 1;
}
int giam(int(n)){
	while(n>10){
	int r=n%10;
	n=n/10;
		if(r>=n%10)
			return 0;
	}
	return 1;
}
int main(){
	int t;
	scanf ("%d ",&t);
	for (int h=1;h<=t;h++){
	int n,dem=0;
	scanf("%d",&n);
	for( int i=pow(10,n-1);i<pow(10,n);i++){
		if(snt(i) && (tang(i) || giam(i))){
			dem++;
		}
	}
	printf("%d ",dem);
	}
	return 0;
}
