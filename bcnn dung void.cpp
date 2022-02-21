#include <stdio.h>
#define ll long long
ll a,b;

ll USCLN(int a, int b){	
	while(a!=b){
		if(a==0) return b;
		if(b==0) return a;
		if(a>b) a%=b;
		else b%=a;	
	}
	return a;
}
int main(){
	int T;
	scanf ("%d",&T);
	for (int i=1;i<=T;i++){
		scanf("%lld %lld", &a, &b);
		ll uccln = USCLN(a,b); 
		ll bscnn = a*b/uccln;
		printf ("%lld %lld\n",uccln,bscnn);
	}
    return 0;
}
