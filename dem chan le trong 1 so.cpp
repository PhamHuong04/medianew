#include<stdio.h>
#include<math.h>
int chanle(int(n)){
	int chan=0,le=0,a;
	while(n>0){
		a=n%10;
		n=n/10;
		if(a%2==0){ 
			chan++;
		}
		else {
			le++;}	
		}
		printf("%d ",chan);
		printf("%d ",le);
}
int main(){
	int n;
	scanf("%d",&n);
	chanle(n);
	}
