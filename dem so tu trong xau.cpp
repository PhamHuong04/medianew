#include <conio.h>
#include <string.h>
#include <stdio.h>

int main()
{    
   char str[100];
   int dem=1;
   gets (str);
   for (int i=0;i<strlen(str)-1;i++)
   	    if (str[i]==' ' && str[i+1]!=' ') dem++;
   printf ("%d ",dem);

   return 0;
}

