#include <stdio.h>
#include <string.h>
main (){
	char s[100];
	gets (s);
	const char s1[2]=" ";
	char s2[100];
	gets (s2);
	char *token;
	token = strtok (s,s1);
	while (token != NULL) {
		if (strcmp(token,s2)!=0) printf ("%s ",token);
		token = strtok (NULL,s1);
	}
	return 0;
}
