#include<iostream>
#include<stdio.h>
using namespace std;
main()
{	int t,c,dv,n;
   n<1000;
cout<<"nhap so nguyen <1000 : "<<endl;
cin>>n;
    t=n/100;
	c=(n%100)/10;
	dv=(n%100)%10;
	switch(t)
	{case 1 :cout<<"mot tram ";break;
	case 2 :cout<<"hai tram ";break;
	case 3 :cout<<"ba tram ";break;
	case 4 :cout<<"bon tram ";break;
	case 5 :cout<<"nam tram ";break;
	case 6 :cout<<"sau tram ";break;
	case 7 :cout<<"bay tram ";break;
	case 8 :cout<<"tam tram ";break;
	case 9 :cout<<"chin tram ";break;
	}
	switch(c)
	{case 0:if( dv==0) 
	       cout<<"chan";
	       else cout<<"le";
	case 1:cout<<"mot chuc ";break;
	case 2:cout<<"hai chuc ";break;
	case 3:cout<<"ba chuc ";break;
	case 4:cout<<"bon chuc ";break;
	case 5:cout<<"nam chuc ";break;
	case 6:cout<<"sau chuc ";break;
	case 7:cout<<"bay chuc ";break;
	case 8:cout<<"tam chuc ";break;
	case 9:cout<<"chin chuc ";break;
	}
	switch(dv)
	{
	case 1:cout<<"mot nghin";break;
	case 2:cout<<"hai nghin";break;
	case 3:cout<<"ba nghin";break;
	case 4:cout<<"bon nghin";break;
	case 5:cout<<"nam nghin";break;
	case 6:cout<<"sau nghin";break;
	case 7:cout<<"bay nghin";break;
	case 8:cout<<"tam nghin";break;
	case 9:cout<<"chin nghin";break;
	}
	cout << endl;
}
