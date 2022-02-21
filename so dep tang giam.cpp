#include<stdio.h>
#include<math.h>
//chua hoan thanh
int soNT(int n){
	int i;
	if(n>=2){
		for(i=2;i<=sqrt(n);i++)
			if(n%i==0)	return 0;
		return 1;
	}
	return 0;
}
int soTang(int n){
	while(n>=10){
		int r=n%10;
		n/=10;
		if(r<n%10)		
			return 0;
	} 
	return 1;
}
int soGiam(int n){
	while(n>=10){
		int r=n%10;
		n/=10;
		if(r>n%10)
		return 0;
	} 
	return 1;
}
int main(){
	int a,i,dem=0;
	scanf("%d%d",&a);
    for(i=pow(10,a-1);i<=pow(10,a)-1;i++){
    	if((soTang(i) || soGiam(i)) && soNT(i))
    	dem++;
	}
	printf("%d",dem);
	return 0;
}
