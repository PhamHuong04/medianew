#include <stdio.h>
#include <conio.h>
#include <math.h>
 float giaiptb2(float a, float b, float c, float *x1, float *x2)
     {   int tsn; float delta;
         delta=b*b-4.0*a*c;
         if (delta<0)
             tsn=0;
         if (delta==0) 
		    {tsn=1; *x1=(-b)/(2.0*a);}  
		 if (delta>0)
		    { tsn=2;
			  *x1=(-b+sqrt(delta))/(2.0*a);
		      *x2=(-b-sqrt(delta))/(2.0*a);
			}
         return tsn;
   	 }
 main()  
     {  float a, b, c;
        float y1, y2; int tongnghiem;
        scanf("%f%f%f",&a,&b,&c);
        tongnghiem=giaiptb2(a,b,c,&y1,&y2);
        if(tongnghiem==0)
	    printf( "NO" );
	    if(tongnghiem==1)
	    printf( " x12= %.2f ", y1 );
	    if(tongnghiem==2)
	    {printf( "%.2f ", y1 ); printf( "%.2f ", y2 );}
     }
