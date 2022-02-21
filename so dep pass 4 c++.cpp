#include <bits/stdc++.h>
using namespace std;


bool snt(int n){
	for(int i=2 ; i*i<=n ; i++)
		if(n%i==0) return 0;
	return 1;
}

bool shh(int n){
	int s=0;
	for(int i=1 ; i*2<=n ;i++)
		s+= n%i==0 ? i:0;
	return n==s;
}

int main(){
	int n,m;
	cin>>n>>m;
	
	for(int i=n ; i<=m ; i++){
		if(shh(i)) continue;
		
		for(int j=2 ; j*j<=i ;j++){
			if(snt(j) && i%(j*j)==0){
				cout<<i<<" ";
				break;
			}
		}
	}
}
