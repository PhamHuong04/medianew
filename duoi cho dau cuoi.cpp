#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
int sodau(int n){
	while(n>=10){
		n/=10;
	}
	return n;
}
int cnt(int n){
	int cnt=0;
	while(n){
		cnt++;
		n/=10;
	}
	return cnt;
}
int main(){
	int n;
	scanf("%d",&n);
	int f=sodau(n);
	int r=n%10;
	printf("%d",n-r-f*(int)pow(10,cnt(n)-1)+f+r*(int)pow(10,cnt(n)-1));
return 0;
}
