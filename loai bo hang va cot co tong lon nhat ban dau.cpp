#include <stdio.h>
main (){
	int n,m;
	scanf ("%d%d",&n,&m);
	int a[n][m];
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++)
			scanf ("%d",&a[i][j]);
	}
	int max=-1e9,vthang,vtcot,s;
	for (int i=0;i<n;i++){
		s=0;
		for (int j=0;j<m;j++)
			s+=a[i][j];
		if (s>max){
			max=s;
			vthang =i;
		}
	}
	max=-1e9;
	for (int j=0;j<n;j++){
		s=0;
		for (int i=0;i<n;i++)
			s+=a[i][j];
		if (s>max) {
			max=s;
			vtcot=j;
		}
	}
	for (int i=0;i<n;i++){
		if (i!=vthang){
			for (int j=0;j<n;j++){
				if (j!=vtcot)
					printf ("%d ",a[i][j]);
			}
			printf ("\n");
		}
	}
}
