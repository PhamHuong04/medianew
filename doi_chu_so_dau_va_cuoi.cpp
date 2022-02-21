#include <stdio.h>
#include <string.h>
#include<conio.h>
main (){
	int n,i=0;;
	char str[1000];
	scanf ("%s",str);
	n=strlen(str);
	if (str[n-1] != '0') printf ("%c",str[n-1]);
	for (int i=1;i<=n-2;i++) printf ("%c",str[i]);
	printf("%c",str[0]);
	return 0;
}
