#include <stdio.h>
#include <stdlib.h>

int main() {
	char **s;
	s = malloc(sizeof(char**)); // Problem here: not allocated memory for s
	char foo[] = "Hello World";
	*s = malloc(sizeof(foo)); // Allocate memory for *s
	*s = foo;
	printf("s is %s\n",*s); // %s is string, s is pointer to pointer, so we need *s (because we need pointer to char)
	s[0] = malloc(sizeof(foo)); // Allocate memory
	s[0] = foo; // Problem is here, s[0] memory not allocated
	printf("s[0] is %s\n",s[0]);
	return(0);
}