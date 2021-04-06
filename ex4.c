#include <stddef.h>
#include <dirent.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>

void search(){
	DIR* dirp = opendir("tmp");
	if(dirp == NULL) { printf("ERROR"); }
	int i = 0;
	int inums[100];
	char *names[100];
	int tmp;
	//struct stat *stats = malloc(sizeof(struct stat));
	struct dirent *dp = malloc(sizeof(struct dirent));
	//printf("%s\n", dirp->);
	while((dp=readdir(dirp)) != NULL){
		//char buf[100];
		//realpath(dp->d_name, buf);
		//stat(buf, stats);
		inums[i] = dp->d_ino;
		names[i] = malloc(sizeof(dp->d_name));
		names[i] = dp->d_name;
		i++;
	}
	int repetitions[100];
	int u = 0;
	tmp = 0;
	
	for(int k = 0; k < i; k++){
		for(int j = k+1; j < i; j++){
			if(inums[k] == inums[j]){
				printf("inum: %d\n", inums[k]);
				printf("Files:\n");
				printf("%s\n", names[k]);
				printf("%s\n", names[j]);
				for(int h = j+1; h < i; h++){
					if(inums[j] == inums[h]){
						printf("%s\n", names[h]);
					}
				}
				break;
			}
		}
	}

}

void main(){
	search();
}

