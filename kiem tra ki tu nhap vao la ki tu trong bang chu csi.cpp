#include <stdio.h>
#include <string.h>
#include <ctype.h>
main(){
	char s;
	scanf ("%c",&s);
	if (isalpha (s) != 0) printf ("1");
	else printf ("0");
	return 0;
}
