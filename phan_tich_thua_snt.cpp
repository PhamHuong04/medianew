#include<stdio.h>
int snt(int(n)){
	int i=2;
	while(n>0){
		if(n%i==0){
			printf("%d ",i);
			n/=i;
		}
		if(n%i!=0)
		i++;
	}
	return 0;
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",snt(n));
}
