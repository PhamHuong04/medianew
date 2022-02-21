#include<stdio.h>
#include<math.h>
int snt(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0)
			return 0;
	return 1;
}
int sotn(int n){
	int m;
	int dao=0;
	m=n;
	while(n>0){
		int r=n%10;
		dao=dao*10+r;
		n/=10;
	}
	if(dao==m) return 1;
	return 0;
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int min=a;
	if(min>b)
    	min=b;
	for(int i=min;i<=a+b-min;i++){
		if(snt(i) && sotn(i))
			printf("%d ",i);
	}
	return 0;
}
