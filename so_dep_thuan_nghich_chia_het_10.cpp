#include<stdio.h>
#include<math.h>
int daonguoc(int i){
    int j,m;
    while(i>0){
        j=i%10;
        m=m*10+j;
        i/=10;
    }
    return m;
}
int tong(int i){   
    int m,n;
    n=0;
    while (i>0)
    {
        m=i%10;
        n+=m;
        i/=10;
    }
    return n;
}
int main(){
    int a,dem,i;
    scanf("%d", &a);
    dem=0;
    for ( i = pow(10,a-1); i < pow(10,a); i++){
       if ((daonguoc(i)==i) && (tong(i)%10==0)) ++dem;
    }
    printf("%d",dem);
    return 0;
}
