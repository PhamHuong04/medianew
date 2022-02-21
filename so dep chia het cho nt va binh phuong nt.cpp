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
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int min=a;
	if(min>b){
		min=b;
	}
	for(int i=min;i<= a+b-min;i++){
		for (int j=2;j<=i;j++)
			if (snt(j) && i%j==0 && i % (j*j) ==0)
			printf("%d ",i);
		}
	return 0;
}
