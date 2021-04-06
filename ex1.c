#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <stdbool.h>

void main(){
	int n;
	scanf("%d",&n);
	unsigned int pages[n][2]; // n pages, in each we contain page number and age
	int free_pages = n;
	FILE* inp = fopen("Lab_09_input.txt","r");
	int miss = 0;
	int hit = 0;

	int current_page;
	while(fscanf(inp, "%d", &current_page)!= EOF){
			//printf("%d\n", current_page);

			int index = -1; // index need if we found hit
			if(free_pages > 0){ // if there are free space
				bool found = false; // check if we found hit
				for(int k = 0; k < n-free_pages; k++){
					if(pages[k][0] == current_page){ // check for hit
						found = true;
						printf("%d\n", current_page);
						hit++;
						index = k;
					}
				}

				if(found == false){ // page fault
					pages[n-free_pages][0] = current_page; // add page
					pages[n-free_pages][1] = 0;
					free_pages--;
					miss++;
				}

			} else{ // if there no free space

				bool found = false; // check for hit
				for(int k = 0; k < n; k++){
					if(pages[k][0] == current_page){ // find if there are hit
						found = true;
						printf("%d\n", current_page);
						hit++;
						index = k;
					}
				}

				if(found == false){ // if page fault
					miss++;
					int min_age = INT_MAX;
					for(int k = 0; k < n; k++){
						if(pages[k][1] < min_age){ // searching for minimal age
							min_age = pages[k][1];
							index = k;
						}
					}
					pages[index][0] = current_page; // replase page with minimal age
					pages[index][1] = 0;
				}
			}

			for(int k = 0; k < n-free_pages; k++){
				if(k == index){ // if we changed page recently, add 1 from left
					(pages[k][1]>>1)+pow(2,sizeof(int));
				} else{ // if no changed page, add 0 from left
					pages[k][1]>>1;
				}
				
			}
		}
	printf("misses: %d\n", miss); // num of misses
	printf("hits: %d\n", hit); // num of hints

	/*  Output:
		10 frames - 8/992 hit/misses
		50 frames - 50/950 hit/misses
		100 frames - 93/907 hit/misses */
}