#include <stdio.h>
#include <string.h>
#include <ctype.h>
main (){
	char s[100],s2[100]="";
	gets(s);
	strcpy (s2,s);
	const char s1[2]=" ";
	char *token= strtok (s2,s1);
	int d=0;
	while ( token != NULL ){
		++d;
		token = strtok (NULL,s1);
	}
	token= strtok (s,s1);
	for (int i=1;i<d;i++){
		strlwr(token);
		token[0]-=32;
		if (i==d-1) printf ("%s, ",token);
		else 		
			printf ("%s ",token);
		token = strtok (NULL,s1);
	}
	printf ("%s",strupr (token));	
}
