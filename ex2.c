#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	int *arr[10]; // Making array of 10 pointers
	for(int i = 0; i < 10; i++){ // for cycle
		arr[i] = malloc(10*pow(2,10)*pow(2,10)); // allocate 10 MB
		memset(arr[i],0,10*pow(2,10)*pow(2,10)); // Fill memory with zeros 
		sleep(1); // sleep 1 sec
	}
	return 0;
}
// ex2 comments:
// SI and SO is no changing, that becaue we don't use virtual memory
// Free memory is continuously decreasing by 10 MB every time we allocate memory every second
// ex3 comments:
// Every time when program allocates 10 MB of memory, process with corresponding PID is
// shown in top -d 1 and then free memory is decreasing by 10 MB
// We can use it to find some memory leaking in the system 