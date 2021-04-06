#include <stdio.h>
// Pyramid 1 is the 3rd exercise
// Other options is the 5th exercise
int main(){
	int n;
	int choose;
	printf("Choose the type of pyramid (1-4)\n");
	scanf("%d",&choose);
	printf("Enter the height of pyramid\n");
	scanf("%d",&n);
	if(choose == 1){
		for(int i = 1; i <= n; i++){
			for(int k = 0; k < n+i;k++){
				if(k<=n-i){
					printf(" ");
				} else{
					printf("*");
				}
			}
			printf("\n");
		}
	} else if(choose == 2){
		for(int i = 0; i < n; i++){
			for(int k = 0; k < i+1;k++){
				printf("*");
			}
		printf("\n");
		}
	} else if(choose == 3){
		for(int i = 0; i < n; i++){
			if(i<n/2){
				for(int k = 0; k < i+1; k++){
					printf("*");
				}
				printf("\n");
			} else{
				for(int k = 0; k < n-i; k++){
					printf("*");
				}
				printf("\n");
			}
		}
	} else if(choose == 4){
		for(int i = 0; i < n; i++){
			for(int k = 0; k < n; k++){
				printf("*");
			}
		printf("\n");
		}
	} else{
		printf("Chosen a wrong number");
	}
}
