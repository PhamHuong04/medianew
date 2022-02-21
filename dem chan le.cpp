#include<stdio.h>
main()
{ int n,i,le=0,chan=0;
  scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){
	printf("a[%d]: ",i);
	scanf("%d",&a[i]);}
	for(i=0;i<n;i++){
		if(a[i]%2==0){chan++;}
		if(a[i]%2!=0){le++;}
		}
		printf("%d %d",le,chan);
	}
