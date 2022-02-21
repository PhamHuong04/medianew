#include<stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  if(n<0){
  	printf("%d",0);
  }
   else{
     if (n%2 == 0){
     printf("%d",0);
    }
     else 
    printf("%d",1);
	}
    return 0;
}
