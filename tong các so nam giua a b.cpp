#include<stdio.h>
#include<math.h>
main()
{ 
    int a,b,ssh,s;
    scanf("%d%d",&a,&b);
    if(a>0 && b>0)
        {
		ssh=(b-a)+1;
        s=((a+b)*ssh)/2;
		}
    printf("%d",s);
    return 0;
}
