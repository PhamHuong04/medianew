#include <stdio.h>
void nhapMang (int *arr, int *n){
	*n=-1;
	while (*n<=2){
		scanf ("%d", n);
		}
	for (int i=0; i<*n; i++){
		scanf ("%d", &arr[i]);
		}
	}
int demLe (int *arr, int n){
	int demL=0;
	for (int i=0; i<n; i++)
	if (arr[i]%2!=0) demL ++;
	printf ("%d ", demL);
	if (demL==0) printf ("0\n");
	else
	for (int i=0; i<n; i++){
		if (arr[i] %2!=0){
			printf ("%d ", arr[i]);
			}
		}
	}
int demChan (int *arr, int n){
	int demC=0;
	for (int i=0; i<n; i++)
	if (arr[i]%2==0) demC ++;
	printf ("\n%d ", demC);
	if (demC==0) printf ("0\n");
	else
	for (int i=0; i<n; i++){
		if (arr[i] %2==0){
			printf ("%d ", arr[i]);
			}
		}
	}
int main (){
	int n;
	int arr[100];
	nhapMang(arr, &n);
	demLe( arr, n);
	demChan(arr, n);
	return 0;
}
