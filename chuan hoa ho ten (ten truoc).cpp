#include <stdio.h>
#include <string.h>
#include <ctype.h>
main(){
	char s[100],s2[100];
	gets (s);
	const char s1[2]=" ";
	strcpy (s2,s);
	char *token= strtok (s,s1);
	int d;
	while (token != NULL){
		++d;
		token= strtok (NULL,s1);
	}
	char s3[100]="";
	strcpy (s,s3);
	token = strtok (s2,s1);
	for (int i=1;i<d;i++){
		strlwr (token);
		token[0]-=32;
		strcat (s,s1);
		strcat (s,token);
		token = strtok (NULL,s1);
	}
	printf ("%s,", strupr(token));
	puts (s);
}
