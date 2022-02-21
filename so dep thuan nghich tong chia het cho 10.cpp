#include<stdio.h>
#include<math.h>
int thuannghich(int(n)){
	int t=0,r;
	while(n>0){
		r=n%10;
		t=t*10+r;
		n=n/10;
	}
	return t;
}
int tong(int(n)){
	int r,s=0;
	while (n>0){
		r=n%10;
		s=s+r;
		n=n/10;
	}
	return s;
}
int main(){
	int n,dem=0;
	scanf("%d",&n);
	for(int i=pow(10,n-1);i<pow(10,n);i++){
    	if(thuannghich(i)==i && tong(i)%10==0){
    		dem++;
		}
	}
	printf("%d",dem);
}
