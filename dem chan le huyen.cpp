#include<stdio.h>
 main()
{
    int n,k;
    scanf("%d", &n);
    int demChan = 0;
    int demLe = 0;
    while(n>0)
        {   
            k = n%10;
            if (k%2==0) ++demChan;
            else ++demLe;
            n=n/10;
        }    
        printf("%d %d", demLe, demChan);
    return 0;
}
