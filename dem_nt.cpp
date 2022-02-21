#include <stdio.h>
#include <stdbool.h>
#include <math.h>
bool ktraNgto(int);
int csNgt(int);
bool tongNgto(int);
int main (){
	int a,b;
	scanf ("%d%d", &a, &b);
	int i;
	int count =0;
	for (i=a; i<=b; i++){
		if (ktraNgto(i) && tongNgto(i) && csNgt(i)==1){
			count ++;
			}
		}
		printf ("%d", count);
	return 0;
}
int csNgt (int n){
	int c,h=0;
	while (n>0){
		c= n%10;
		n/=10;
		if (ktraNgto(c)){
			h=1;;
			}
		else
		{ h=0;;
		break;
		}
	}
	return h;
	}
bool tongNgto (int n){
	int sum=0;
	while (n>0){
		sum += n%10;
		n/=10;
		}
		if (ktraNgto(sum)){
			return true;
			}
		else return false;
	}
bool ktraNgto (int n){
	if (n<2){
		return false; 
		}
		int i;
		for (i=2; i<= sqrt (n); i++){
			if (n%i==0){
				return false;
				break; 
				}
			else return true;
		}
	}
