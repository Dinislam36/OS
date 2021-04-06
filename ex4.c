#include <stdio.h>
void swap(int *a, int *b){
        int c;
        c = *a;
        *a = *b;
        *b = c;
}

int main(){
	int a,b;
	printf("Exter 2 integers to swap\n");
	scanf("%d",&a);
	scanf("%d",&b);
	printf("Integers %d,%d\n",a,b);
	swap(&a,&b);
	printf("Swapped integers %d,%d\n",a,b);
}
