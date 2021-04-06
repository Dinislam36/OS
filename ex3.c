#include <stdio.h>
#include <pthread.h>
#define BUF_SIZE 8

int buffer[BUF_SIZE]; // Global buffer for 2 threads
int *pointer=buffer; // Pointer for buffer
int count=0; // How many times threads worked

void *Producer(){ // Producer thread
	*pointer=1; // Write 1 to buffer
	pointer++; // Go to next memory cell
	count++; // 1 more thread done
	//printf("Working\n");
	pthread_exit(NULL); // Exit thread
}

void *Consumer(){ // Consumer thread
	*pointer=0; // Delete 1 from buffer
	pointer--; // Go back
	count++; // 1 more thread done
	//printf("Working\n");
	pthread_exit(NULL); // Exit thread
}

void main(){
	pthread_t pr; // Producer thread pointer
	pthread_t cons; // Consumer thread pointer
	while(1){ // Do infinetely 
		pthread_create(&pr, NULL, Producer, NULL); // Create producer thread
		pthread_create(&cons, NULL, Consumer, NULL); // Create consumer thread
		if(pointer<buffer || pointer> buffer+BUF_SIZE){ // If pointer outside the buffer
														// (e.g. producer try to write in full buffer or consumer try to delete in empty buffer)
			break; // Break loop (Error occures)
		}
	}
	printf("An error %d \n", count); // Indicates an error and writes number of threads created
}