#include <stdio.h>
main (){
	FILE *fvb,*fnp;
	fvb=fopen("vb","wt");
	fnp=fopen ("np","wb");
	fputc('A', fvb);
	fputc(26, fvb);
	fputc ('A', fnp);
	fputc(26, fnp);
	fclose (fvb);
	fclose (fnp);
}
