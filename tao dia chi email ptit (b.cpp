#include <stdio.h>
#include <string.h>
#include <ctype.h>
main (){
	char s[1000],s2[1000],s3[1000];
	gets (s);
	const char s1[2]=" ";
	strcpy(s2,s);
	int d=0;
	char *token=strtok (s,s1);
	while (token !=NULL){
		++d;
		strcpy(s3,token);
		token=strtok (NULL,s1);
	}
	token= strtok(s2,s1);
	for (int i=1;i<d;i++){
		strlwr (token);
		printf ("%c",token[0]);
		token =strtok (NULL,s1);
	}
	printf ("%s@ptit.edu.vn",strlwr(token));
}
