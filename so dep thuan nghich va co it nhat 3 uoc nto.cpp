#include<stdio.h>
#include<math.h>
int tn(int(n)){
	int r,t=0;
	for(int i=1;i<=n;i++){
		r=n%10;
		t=t*10+r;
		n=n/10;
	}
	return t;
}
int snt(int n){
	if (n<2) return 0;
	for(int i=2;i<n;i++)
		if(n%i==0) return 0;
	return 1;
}
int uoc(int n){
	int dem=0;
	for (int i=2;i<n;i++) 
		if (n%i==0 && snt(i)==1) ++dem;
	return dem;
}
int main(){
	int a,b,max,min;
	scanf("%d%d",&a,&b);
	if(a>b){
		max=a;
		min=b;
	}
	else {
		min=a;
		max=b;
	}
	for(int i=min;i<=max;i++){
		if(tn(i)==i && uoc(i)>=3){
			printf("%d ",i);
		}
	}
	return 0;
}
