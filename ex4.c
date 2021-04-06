#include <sys/mman.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main(){
	int f1 = open("ex1.txt", O_RDWR);
	int f2 = open("ex1.memcpy.txt", O_RDWR);

	struct stat statbuf;

	fstat(f1,&statbuf);
	ftruncate(f2, statbuf.st_size);

	char *p1 = mmap(NULL, statbuf.st_size,
		PROT_READ | PROT_WRITE, MAP_SHARED, f1, 0);
	char *p2 = mmap(NULL, statbuf.st_size,
		PROT_READ | PROT_WRITE, MAP_SHARED, f2, 0);
	
	memcpy(p2, p1, statbuf.st_size);
	return 0;
}