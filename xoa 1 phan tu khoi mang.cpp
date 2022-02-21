#include <stdio.h>
void nhapMang (int *arr, int *n){
	scanf ("%d", n);
	int i;
	for (i=0; i<*n; i++){
		scanf ("%d", &arr[i]);
		}
}
void xoaPhanTu (int *arr, int &n, int vt){
	if (vt>=0 && vt<=n){
	for (int i=vt-1; i< n; i++)
		arr[i] = arr[i+1];
	}
}
	
void hienThi (int *arr, int n){
	for (int i=0; i<n-1; i++){
		printf ("%d ", arr[i]);
		}
	}
int main (){
	int n; 
	int arr[100];
	int vt;
	nhapMang(arr, &n);
	scanf ("%d", &vt);
	xoaPhanTu(arr, n,vt);
	hienThi(arr, n);
	return 0;
	}
