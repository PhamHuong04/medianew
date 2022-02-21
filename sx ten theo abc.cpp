#include<stdio.h>
#include<string.h>
char timten(char str){
   char *token;

   token = strtok(str," ");

   while( token != NULL ) 
   {
      printf( "%s\n", token );

      token = strtok(NULL, " ");
   }
   return token;
	}
void main() {
    char s[100][100], t[100],ten[20];
    int i, j,n;
    clrscr();
    for (i = 0; i < 100; i++){
        gets("%s", s[i]);
        if (strlen(s[i])<2) break;
	}
	gets (ten);
	n=i;
    for (i = 0; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (strcmp(timten(s[j - 1]),timten( s[j]) )> 0) {
                strcpy(t, s[j - 1]);
                strcpy(s[j - 1], s[j]);
                strcpy(s[j], t);
            }
        }
    }

    for (i = 0; i<=n;i++){
    	if (timten(s[i]==ten)){
			printf ("1");
			break;
		}
	}
	if (i>n) printf ("0");
	return 0;
}
