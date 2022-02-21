#include<stdio.h>
#include<math.h>
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int hang,cot;
	int max=-1e9;
	for(int i=0;i<n;i++){
		int sum1=0;
		for(int j=0;j<m;j++){
			sum1+=a[j][i];
		}
		if(sum1>max){
			max=sum1;
			cot=i;
		}
	}
	max=-1e9;
	for(int i=0;i<n;i++){
		int sum2=0;
		for(int j=0;j<m;j++){
			sum2+=a[i][j];	
		}
		if(max<sum2){
			max=sum2;
			hang=i;
		}
	}
	for(int i=0;i<n;i++){
		if(i!=hang){
			for(int j=0;j<m;j++){
				if(j!=cot){
					printf("%d ",a[i][j]);
				}
			}
			printf("\n");
		}
	}
}
