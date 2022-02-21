#include<stdio.h>
void ucln( int *a,int b){
		int x= *a * b;
		while(*a !=b){
			if(*a >b){
				*a = *a-b;
			}else{
				b= b- *a;
			}
		}
		*a=b;
}
int main(){ 
	int x,y,bcnn;
	FILE *fp;
	fp = fopen("haiso.txt","wt");
	fscanf(fp,"%d%d",&x,&y);
	fclose(fp);
	if(x>0 && y>0)
	{
		bcnn=x;
		ucln(&x,y);
		bcnn= bcnn*y/x;
		fp=fopen("bcnn.txt","wt");
		fprintf(fp,"%d",bcnn);
		fclose(fp);
		} 
	return 0;
}


