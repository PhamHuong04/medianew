#include <stdio.h>
#include <string.h>
#include <ctype.h>
/*main (){
	char s[100];
	gets (s);
	const char s1[2]=" ";
	char *token = strtok (s,s1);
	int i;
	while (token != NULL){
		i=0;
		while (i<strlen (token)-1){
			if (islower(token[i]) ==0 ) ++i;
			else break;
		}
		int j=0;
		while (j<strlen (token)-1)
			if (isdigit(token[j]) ==0 ) ++j;
			else break;
		if (isdigit (token[0]) !=0) i=0;
		if (i==strlen (token)-1 && j==strlen (token)-1 ) printf ("%s ",token);
		token = strtok (NULL,s1);
	}
}*/
main (){
	char s[1000],s2[1000];
	gets (s);
	const char s1[2]=" ";
	char *token= strtok (s,s1);
	while (token!=NULL){
		strcpy (s2,token);
		strupr (s2);
		if (strcmp (s2,token)==0) printf ("%s ",token);
		token= strtok (NULL,s1);
	}
}
