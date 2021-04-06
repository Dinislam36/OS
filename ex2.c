#include <stdio.h>
#include <unistd.h>

int main(){
	char buf[10];
	setvbuf(stdin, buf, _IOLBF, 5);
	char text[] = "Hello";
	for(int i = 0; i < 5; i++){
		sleep(1);
		printf("%c", text[i]);
	}
	printf("\n");
	return 0;
}