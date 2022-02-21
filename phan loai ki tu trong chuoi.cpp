#include <stdio.h>
#include <string.h>
#include <ctype.h>
main (){
	int n,kitu=0,so=0;
	char s[100];
	gets (s);
	n=strlen(s);
	for (int i=0; i<n;i++){
		if (isalpha(s[i])!=0) ++kitu;
		if (isdigit (s[i]) !=0) ++so;
	}
	printf ("%d %d %d",kitu,so,n-so-kitu);
	return 0;
}
