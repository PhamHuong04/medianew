#include<stdio.h>
#include<math.h>
int dao(int(n)){
	int r,t=0;
	while(n!=0){
		r=n%10;
		t=t*10+r;
		n=n/10;
	}
	return t;
}
int snt(int(n)){
	if (n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
		return 0;
	}	
	return 1;
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int min=a;
	if(min>b){
		min=b;
	}
	for(int i=min;i<=a+b-min;i++){
		if(snt(i) && snt(dao(i)) && dao(i)!=i){
			printf("%d ",i);
		}
	}
}

