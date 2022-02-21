#include<conio.h>
#include<stdio.h>
#include<string.h>
int demsotu(char *a)
{
            int i, dem=0;
            int n = strlen(a);
            if (a[0] != 32)
            {
                        dem=1;
            }
            for (i = 0; i < n-1; i++)
            {
                        if (a[i] == 32 && a[i+1] != 32)
                        {
                                    dem++;
                        }
            }
            return dem;
}
int main()
{
            char chuoi[100];
            printf("nhap chuoi : ");
            fflush(stdin);
            gets(chuoi);
            int a=demsotu(chuoi);
            printf("so tu la : %d", a);
            getch();
            return 0;
}
