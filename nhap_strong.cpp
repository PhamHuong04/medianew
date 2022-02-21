#include<stdio.h>
#include<math.h>
main(){ 
    int n,i,dem=0,m,gt,a,b,s;
    printf("b= ");
    scanf("%d",&b);
    for(a=1;a<=b;a++){
        n=a;s=0;
        while(n>0){
		    m=n%10;
            gt=1;
            for(i=1;i<=m;i++)
                gt=gt*i;
            s=s+gt;
            n=n/10;
		}
        if (s==a) printf("%d ",a) ;}
    return 0;
}
