#include <conio.h>
#include<stdio.h>
int main()
{
    int a=0,b=0,c=0,d=0;
    printf("\nNhap 4 so a,b,c,d:\t");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int max=a;
    // dung lenh if 
    if(max<b)
        max = b;
    if(max<c)
        max = c;
    if(max <d)
        max = d;
    printf("\nDung lenh if:\n");
    printf("\nSo lon nhat la %d",max);
    max = 0;
//    dung dieu toan tu dieu kien
    max= a>b?a:b;
    max =c>max?c:max;
    max = d>max?d:max;
    printf("\nDung toan tu dieu kien 3 ngoi:\n");
    printf("\nSo lon nhat la %d",max);
//    // dung if else
    printf("\nDung vong lap if - else\n");
    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
                printf("\nSo lon nhat la %d",a);
            else
                printf("\nSo lon nhat la %d",d);
        }
        else// a<c
        {
            if(c>d)
                printf("\nSo lon nhat la %d",c);
            else
                printf("\nSo lon nhat la %d",d);
        }
    }
    else //a<b
    {
        if(b>c)
        {
            if(b>d)
                printf("\nSo lon nhat la %d",b);
            else
                printf("\nSo lon nhat la %d",d);
        }
        else//c>b
        {
            if(c>d)
                printf("\nSo lon nhat la %d",c);
            else
                printf("\nSo lon nhat la %d",d);
        }
    }
    _getch();
}
