#include <stdio.h>
#include <stdlib.h>

void *my_realloc(void *ptr, size_t size){
	if(ptr == NULL){
		return malloc(size);
	} else if(size == 0){
		free(ptr);
	} else{
		free(ptr);
		ptr = malloc(size);
	}

}

void main(){
	int *arr = my_realloc(NULL, 5*sizeof(int));
	for(int i = 0; i < 5; i++){
		arr[i] = i;
		printf("%d\n", arr[i]);
	}
	my_realloc(arr, 7);
	for(int i = 0; i < 7; i++){
		arr[i] = i;
		printf("%d\n", arr[i]);
	}
	my_realloc(arr,0);
}