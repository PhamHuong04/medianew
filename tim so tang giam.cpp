#include<stdio.h>
#include<math.h>
int tang(int (n)){
	int r;
	while(n>10){
		r=n%10;
		n/=10;
		if(r<n%10) break;
	}
	if (n<=10) return 1;
	return 0;
}
int giam(int(n)){
	int r;
	while(n>10){
		r=n%10;
		n/=10;
		if(r>n%10) break;
	}
	if (n<=10) return 1;
	return 0;
}
int snt(int (n)){
	if(n<2) return 0;
	for(int i=2;i<n;i++){
		if(n%i==0) 
		return 0;
	}
	return 1;
}
int main(){
	int n,dem=0;
	scanf("%d",&n);
	for( int i=pow(10,n-1);i<pow(10,n);i++){
		if((tang(i) || giam(i)) && snt(i)){
			dem++;
		}
	}
	printf("%d",dem);
}
