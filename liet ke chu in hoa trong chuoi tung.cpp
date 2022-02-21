#include <stdio.h>
#include <string.h>
//827
main() {
	char a[100];
	gets(a);
	char *x;
	char s[100],d[100];
	x=strtok(a," ");
	strcpy(s,x);
	strcpy(d,x);
	strupr(d);
	if(strcmp(d,s)==0) {
		printf("%s ",x);
	}
	while (x != NULL) {
		x=strtok(NULL," ");
		if(x!= NULL) {
			strcpy(s,x);
			strcpy(d,x);
			strupr(d);
			if(strcmp(d,s)==0) {
				printf("%s ",x);
			}
		}
	}
}
