#include <stdio.h>
#include <string.h>
#include <ctype.h>
main (){
	int n;
	char str[100];
	gets(str);
	n=strlen(str);
	for (int i=0;i<n;i++)
	    if (isspace(str[i])==0) printf("%c ",str[i] );
	return 0;
}
