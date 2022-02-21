#include<stdio.h>
#include <string.h>
main()
{ char kitu;
scanf("%c",&kitu);
if(kitu<= 57 && kitu>=48)
{ printf("Digit");}
else if(('a'<=kitu<='z') || ('A'<=kitu<='Z'))
{ printf("Alpha");}
else {printf("Special");}
return 0;}
