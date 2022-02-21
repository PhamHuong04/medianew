#include<stdio.h>
#include<math.h>
int tong(int(n)){
	int r,s=0;
	while(n!=0){
		r=n%10;
		s=s+r;
		n/=10;
	}
	return s;
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if((tong(a)<tong(b)) || (tong(a)==tong(b)))
		printf("%d %d",a,b);
	else if (tong(a)>tong(b))
		printf("%d %d",b,a);
	return 0;
}




