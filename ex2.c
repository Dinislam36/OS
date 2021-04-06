#include <stdio.h>
#include <stdlib.h>

void main(){
	int N;
	scanf("%d",&N);
	int *arr = malloc(N*sizeof(int));
	for(int i = 0; i < N; i++){
		arr[i] = i;
		printf("%d\n", arr[i]);
	}
	free(arr);
}