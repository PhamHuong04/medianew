#include <stdio.h>
#include <string.h>
main (){
	int max=0,min=99999;
	char s[1000],s2[1000];
	gets (s);
	const char s1[2]=" ";
	strcpy (s2,s);
	char *token= strtok (s,s1);
	while (token !=NULL){
		if (strlen (token) > max) max= strlen (token);
		if (strlen (token) < min) min= strlen (token);
		token = strtok (NULL,s1);
	}
	strcpy (s,s2);
	token= strtok (s2,s1);
	while (token != NULL){
		int h= strlen (token);
		if (h == max) {
			printf ("%s ", token);
			break;
		}
		token = strtok (NULL,s1);
	}
	token= strtok (s,s1);
	while (token !=NULL){
		int h=strlen (token);
		if (h == min) {
			printf ("%s ",token);
			break;
		}
		token = strtok (NULL,s1);
	}
}
