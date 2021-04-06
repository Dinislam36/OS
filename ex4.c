#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include <string.h>
#include <sys/resource.h>

int main(int argc, char const *argv[])
{
	int *arr[10]; // Making array of 10 pointers
	struct rusage usage; // usage struct
	for(int i = 0; i < 10; i++){ // for cycle
		arr[i] = malloc(10*pow(2,10)*pow(2,10)); // allocate 10 MB
		memset(arr[i],0,10*pow(2,10)*pow(2,10)); // Fill memory with zeros 
		getrusage(RUSAGE_SELF,&usage); // find how much program use memory
		printf("maxrss = %ld\n", usage.ru_maxrss); // print max memiry used
		sleep(1); // sleep 1 sec
	}
	return 0;
}