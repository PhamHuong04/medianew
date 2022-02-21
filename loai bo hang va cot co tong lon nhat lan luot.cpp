#include <stdio.h>
main (){
	int n,m;
	scanf ("%d%d",&n,&m);
	int a[n][m];
	int s,maxhang,maxcot,vthang,vtcot;
	for (int i=0;i<n;i++)
		for (int j=0;j<m;j++)
			scanf ("%d",&a[i][j]);
	int tonghang=0,tongcot=0;
	for (int i=0;i<n;i++){
		s=0;
		for (int j=0;j<m;j++){
			s=+a[i][j];
		}
		if (s>maxhang) {
			maxhang=s;
			vthang=i;
		}
	}
	for (int j=0;j<n;j++){
		s=0;
		for (int i=0;i<m;i++){
			if (i!= vthang)
				s=+a[i][j];
		}
		if (s>maxcot) {
			maxcot=s;
			vtcot=j;
		}
	}
	for (int i=0;i<n;i++){
		if (i!= vthang){
			for (int j=0;j<m;j++){
				if (j!=vtcot)
				printf ("%d ",a[i][j]);
			}
		printf ("\n");
		}
	}
	return 0;
}
