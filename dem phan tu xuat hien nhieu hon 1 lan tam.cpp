#include<stdio.h>
/*7
2 3 3 2 1 9 5*/
int main(){
	int n;
	scanf("%d",&n);
	int a[n],b[1000]={0};
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		++b[a[i]];
	}
	for(int i=0;i<n;i++){
		if (b[a[i]]>1){
			printf ("%d ",a[i]);
			b[a[i]]=0;
		}
	}
}
