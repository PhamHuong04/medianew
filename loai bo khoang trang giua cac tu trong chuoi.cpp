#include <stdio.h>
#include <string.h>
#include <ctype.h>
main (){
	char s[100];
	gets(s);
	for (int i=0;i<strlen(s);i++)
	    if (isspace(s[i])==0) printf("%c",s[i]);
	return 0;
}
