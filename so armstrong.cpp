#include<stdio.h>
#include<math.h>
// dem so chu so cua n
int dem(int n){
	int r=0;
	while(n>0){
		n/=10;
		++r;
		}
	return r;
	}
// kiem tra so amstrong 
bool test(int n){
	int dem1;
	int m = n, sum=0, last;
	while(m>0){
		last = m%10;
		m/= 10;
		sum+= pow(last,dem(n));
	}
	if(sum==n) return true;
    return false;
}
int main(){
	int n,i;
	scanf("%d",&n);
	for(i=1;i<n;i++){
	 if(test(i)) printf("%d ",i);
	 }
	return 0;
}
