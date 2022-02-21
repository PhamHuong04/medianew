#include <stdio.h>
#include <string.h>
#include <ctype.h>
main(){
	int n;
	char s1[100], s2[100];
	puts (s1);
	puts (s2);
	n= strstr(s1,s2);
	printf ("%d ",n);
	return 0; 
}
