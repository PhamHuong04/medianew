#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]) {
	char s[50];
	gets(s);
	char chen[50];
	gets(chen);
	int vt;
	scanf ("%d", &vt);
	char tam[50]="";
	strcpy(tam,s+vt-1);
	strcpy(s+vt-1,chen);
	strcat(s,tam);
	puts(s);
	return 0;
}
