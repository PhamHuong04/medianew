#include <stdio.h>
int main (){
	int n;
	scanf ("%d", &n);
	int arr[100];
	for (int i=0; i<n; i++){
		scanf ("%d", &arr[i]);
		}
	int count ;
	for (int i=0; i<n; i++){
		count=0;
		for (int j=0; j<i; j++){
			if (arr[j] == arr[i])
				++count;
			}
		if (count ==0 ) printf ("%d ", arr[i]);
	}
	return 0;
}
