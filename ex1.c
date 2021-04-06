#include <stdio.h>
#include <float.h>
#include <limits.h>
int main(){
	int a;
	float b;
	double c;
	a = INT_MAX;
	b = FLT_MAX;
	c = DBL_MAX;
	printf("Size of a = %zu\nValue: %d\n",sizeof(a),a);
	printf("Size of b = %zu\nValue: %f\n",sizeof(b),b);
	printf("Size of c = %zu\nValue: %f",sizeof(c),c);
}
