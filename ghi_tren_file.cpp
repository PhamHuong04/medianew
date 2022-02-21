#include <stdio.h>
int main (){
	FILE *f1,*f2;
	char s[100];
	f1=fopen ("baitapc.txt","r");
	f2= fopen ("output.txt","w");
	s=fgetc(f1);
	fwrite (s,1,sizeof(s),f2);
	fclose (f1);
	fclose (f2);
	return 0;
	
}
