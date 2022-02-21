#include <stdio.h>
#include <string.h>
#include <ctype.h>
char s[1000];
int dem(char *s4){
	int d=0;
	char s2[1000];
	strcpy (s2,s);
	const char s1[2]=" ";
	char *token= strtok(s2,s1);
	strlwr(s4);
	while (token != NULL){
		strlwr (token);
		if (strcmp (s4,token)==0) ++d;
		token= strtok (NULL,s1);
		printf ("%d ",d);
	}
	return d;
}
main (){
	char s3[1000],s2[1000];
	gets(s);
	int max=0,d;
	strcpy(s2,s);
	const char s1[2]=" ";
	char *token= strtok (s2,s1);
	while (token !=NULL){
		d= dem(token);
		printf ("%d ",d);
		if (d>max){
			max= d;
			strcpy (s3,token);
		}
		token= strtok (NULL,s1);
	}
	printf ("%s %d",strlwr(s3),max);
}
