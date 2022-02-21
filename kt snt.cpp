#include <stdio.h>
int main(void) {
  int n;
  scanf("%d",&n);
  if(n<2) printf ("0");
  else{
  	int i;
	  for( i=2;i<n;i++){
	  	if(n%i==0){
		  printf("0");
		  break;
		}
	}
	if (i==n) printf ("1");
	}
  return 0;
}
