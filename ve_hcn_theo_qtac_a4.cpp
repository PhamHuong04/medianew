#include <stdio.h>
main(){
	int n,m,h,k,i;
	scanf("%d%d",&n,&m);
	if (m>0 && n>0){
	if(m==n){
		for (int i=1;i<n;i++){
			h=i;
			for (int j=1;j<=i;j++) printf ("%d",h);
			++h;
			for (int j=i+1;j<=m;j++){
			    printf ("%d",h);
			    ++h;
		    }
	    	printf ("\n");
		}
		for (int j=1;j<=m;j++) printf ("%d",n);
	}
	if (n>m){
		for (int i=1;i<n-m+1;i++){
			h=n-m+1;
			for (int j=1;j<=m;j++){
			     printf ("%d",h);
			     ++h;
		    }
			printf ("\n");
		}
		h=n-m+1;
		k=h;
		for (int i=1;i<=n-m+1;i++){
			for (int j=1;j<=i;j++) printf ("%d",h);
			++h;
			for (int j=i+1;j<=m;j++){
			    printf ("%d",h);
			    ++h;
		    }
		h=k+1;
		k++;
		printf ("\n");
    	}
    	for (int i=1; i<=m;i++) printf ("%d",n);
    }
    if (n<m){
    	i=m-n+1;
    	while (i<=n+1){
    		for (int j=1;j<=i;j++) printf ("%d",i);
    		for (int j=i+1;j<=m;j++) printf ("%d",j);
    		printf ("\n");
    		++i;
		}
		for (int i=1;i<=m;i++) printf ("%d",m);
	}
	}
	return 0;
}
	
