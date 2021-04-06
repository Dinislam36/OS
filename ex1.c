#include <stdio.h>
#include <pthread.h>


void *Thread(void *threadid){ // Thread 
	printf("Thread with id %ld \n", (long)threadid); // Print thread id
	pthread_exit(NULL); // Delete thread
}

void main(){
	int n; 
	scanf("%d",&n); // Read number of threads
	pthread_t threads[n]; // Have n threads
	for(int i = 0; i < n; i++){
		pthread_create(&threads[i], NULL, Thread, (void *)((long)i)); // Create
		pthread_join(threads[i],NULL); // Wait for Delete thread
	}
	pthread_exit(NULL);
}