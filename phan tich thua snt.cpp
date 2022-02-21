#include <stdio.h>
int nhapN () {
	int n;
	scanf ("%d", &n);
	return n;
}
void phantichn (int n){
	int i =2;
	while ( i <= n ){
		if ( n % i == 0){
			printf ("%d ", i);
			n /= i;
		}
		else{
			i++;
		}
	}
}
int main (){
	int n;
	n = nhapN();
	phantichn(n);
	return 0;
}
