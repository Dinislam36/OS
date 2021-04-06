#include <sys/mman.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main(){
	char filepath[] = "ex1.txt";

	int fd = open(filepath, O_RDWR);
	char text[] = "This is a nice day";
	size_t size = strlen(text)+1;
	ftruncate(fd, size - 1);

	char *ptr = mmap(NULL, size,
		PROT_READ | PROT_WRITE, MAP_SHARED,fd, 0);
	for(int i = 0; i < size; i++){
		ptr[i] = text[i];
	}

	return 0;
}