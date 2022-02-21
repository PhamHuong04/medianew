#include <stdio.h>
#include <conio.h>
// Giai phuong trinh bac hai;
int main()
{
    printf("cho phuong trinh bac hai");

  float a,b,c,delta,nghiem;
  printf("\n nhap a,b,c:",a,b,c);
  scanf("%f%f%f",&a,&b,&c);
  if (a==0)
  {if (b==0)
     {
         if(c==0)
          printf("phuong trinh vo so nghiem");
          else
            printf("phuong trinh vo nghiem");
     }
            else{
      nghiem=-c/b;
      printf("nghiem cua phuong trinh:nghiem=%f",nghiem);}}
      else
      {
       delta=b*b-4*a*c;
       if (delta<0)
            printf("phuong trinh vo nghiem");
       else if (delta==0)
        printf("phuong trinh co nghiem duy nhat:%f",-b/(2*a));
       else if(delta>0);
       printf("phuong trinh co hai nghiem:%f,%f",(-b-sqrt(delta))/(2*a),(-b+sqrt(delta))/(2*a));
         }
         
        return 0; 

