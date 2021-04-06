#include <stdio.h>
#include <sys/types.h>

int main(){
	int n;
	if(fork()==0){;
	printf("\nHello from child [PID - %d]",getpid());
	} else{
		printf("\nHello from parent [PID - %d]", getpid());
	}
}

/* for each new process, the PID will increase
Hello from parent [PID - 1560]
Hello from child [PID - 15573] 
Hello from parent [PID - 688]
Hello from child [PID - 15574]

Hello from parent [PID - 1560]
Hello from child [PID - 15575] 
Hello from parent [PID - 688]
Hello from child [PID - 15576]

Hello from parent [PID - 1560]
Hello from child [PID - 15577] 
Hello from parent [PID - 688]
Hello from child [PID - 15578]

Hello from parent [PID - 1560]
Hello from child [PID - 15579] 
Hello from parent [PID - 688]
Hello from child [PID - 15580]

Hello from parent [PID - 1560]
Hello from child [PID - 15581]
Hello from parent [PID - 688]
Hello from child [PID - 15582]

Hello from parent [PID - 1560]
Hello from child [PID - 15583]
Hello from parent [PID - 688]
Hello from child [PID - 15584]

Hello from parent [PID - 1560]
Hello from child [PID - 15585]
Hello from parent [PID - 688]
Hello from child [PID - 15586]

Hello from parent [PID - 1560]
Hello from child [PID - 15587]
Hello from parent [PID - 688]
Hello from child [PID - 15588]

Hello from parent [PID - 1560]
Hello from child [PID - 15589]
Hello from parent [PID - 688]
Hello from child [PID - 15590]

Hello from parent [PID - 1560]
Hello from child [PID - 15591]
Hello from parent [PID - 688]