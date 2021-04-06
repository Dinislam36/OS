#include <stdio.h>


void bubble(int *arr, int n){ //arr - initial array, n - size
	int a;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n-i; j++){
			if(arr[j] > arr[j+1]){
				a = arr[j];
				arr[j] = arr[j+1];
				arr[j+1]=a;
			}
		}
	}
}


int main(){
	int n;
	printf("Enter the size of an array\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array\n");
	for(int i = 0; i < n; i++){ // input
		scanf("%d",arr+i); // arr+i - pointer to i'th element
	}
	bubble(arr,n); // call bubble sort
	for(int i = 0; i < n; i++){ // output
		printf("%d ",arr[i]);
	}

}