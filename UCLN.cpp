
#include<stdio.h> // tim UCLN
int main(){
	int m,n,r=1;
	scanf("%d %d", &m ,&n);
//	if (r>0)
	{ 
	 r=m%n;
	 switch (r)
	   {
	   	case 0 : printf("UCLN = %d",n); break;
	   	default :{
	   		m =n;
	   		n =r;
			r=m%n;}
        }
    }
return 0;
}
