#include<stdio.h>
#include<math.h>
//chua hoan thanh
int soNT(int n){
	int i;
	if(n<2)
	return 0;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0){
		return 0;
	}
	} return 1;
}

int SNT(int n){
	int r;
	while(n!=0){
	    r=n%10;		
		if(soNT(r)==0)
		return 0;
		n/=10;
		}
	return 1;
}
int tong(int n){
	int tong=0,r;
	while(n!=0){
		 r=n%10;
		tong+=r;
		n/=10;
	}
	if(soNT(tong))
	return 1;
	return 0;
}
int main(){
	int a,b,t,i;
	int dem=0;
	scanf("%d%d",&a,&b);
	if(a>b){
		t=a;
		a=b;
		b=t;
	}
	for(i=a;i<=b;i++){
		if(soNT(i) && SNT(i) && tong(i))	
		dem++;
	}
	printf("%d",dem);
	return 0;
}
