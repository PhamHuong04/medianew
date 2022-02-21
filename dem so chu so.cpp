#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[10],f[10000]={0},count=0;
	while(n>0){
		a[count]=n%10;
		n/=10;
		f[a[count]]++;
		count++;
	}
	for(int i=count-1;i>=0;i--){
		if(f[a[i]]>0) printf("%d %d\n",a[i],f[a[i]]);
		f[a[i]]=0;
	}
	return 0;	
}
