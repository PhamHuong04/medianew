#include <stdio.h>
#include <string.h>
#include <ctype.h>
main(){
    char s[100];
    gets(s);
    for(int i=0;i<strlen(s);i++){
            if(s[i]>='a' && s[i]<='z') s[i]=s[i]-32;
    puts(s);
    return 0;
}
