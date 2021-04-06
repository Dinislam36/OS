#include <stdio.h>
#include <sys/types.h>

int main(){
	for(int i = 0; i < 5; i++){
		fork();
	}
	sleep(5);
}

// We have exactly 2^i processes. Example for i=5:
// Every time when program forks, it splits to 2 programs.
// That why we have 2^i processes.
/*17309 pts/0    00:00:00 ex2
  17310 pts/0    00:00:00 ex2
  17311 pts/0    00:00:00 ex2
  17312 pts/0    00:00:00 ex2
  17313 pts/0    00:00:00 ex2
  17314 pts/0    00:00:00 ex2
  17315 pts/0    00:00:00 ex2
  17316 pts/0    00:00:00 ex2
  17317 pts/0    00:00:00 ex2
  17318 pts/0    00:00:00 ex2
  17319 pts/0    00:00:00 ex2
  17320 pts/0    00:00:00 ex2
  17321 pts/0    00:00:00 ex2
  17322 pts/0    00:00:00 ex2
  17323 pts/0    00:00:00 ex2
  17324 pts/0    00:00:00 ex2
  17325 pts/0    00:00:00 ex2
  17326 pts/0    00:00:00 ex2
  17327 pts/0    00:00:00 ex2
  17328 pts/0    00:00:00 ex2
  17329 pts/0    00:00:00 ex2
  17330 pts/0    00:00:00 ex2
  17331 pts/0    00:00:00 ex2
  17332 pts/0    00:00:00 ex2
  17333 pts/0    00:00:00 ex2
  17334 pts/0    00:00:00 ex2
  17335 pts/0    00:00:00 ex2
  17336 pts/0    00:00:00 ex2
  17337 pts/0    00:00:00 ex2
  17338 pts/0    00:00:00 ex2
  17339 pts/0    00:00:00 ex2
  17340 pts/0    00:00:00 ex2
*/