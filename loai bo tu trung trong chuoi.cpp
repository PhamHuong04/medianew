#include <stdio.h>
#include <string.h>
main (){
	char s[100];
	gets (s);
	const char s1[2]=" ";
	char s2[100]="";
	char *token;
	token = strtok (s,s1);
	while (token != NULL) {
		if (strstr(s2,token) == NULL){
			if (strlen(s2)==0)
				strcat(s2,token);
			else if (strlen(s2)!=0){
				strcat(s2,s1);
				strcat(s2,token);
			}
		}
		token = strtok (NULL,s1);
	}
	puts (s2);
	return 0;
}
