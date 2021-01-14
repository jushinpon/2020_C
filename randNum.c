#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>

int main(void) { 
	int i;
	//srand(123);
	srand(time(NULL)); 
    
/*	
	for(i = 1; i < 11; i++) { 
		printf("Counter: %d, RN: %d\n",i,rand());       
    } 
*/

// 0-1

    printf("The value of RAND_MAX: %d\n",RAND_MAX);
    for(i = 1; i < 11; i++) { 
		printf("Counter: %d, RN: %lf\n",i,(double)rand()/RAND_MAX);       
    } 
    return 0; 
} 

//1. try to build a RNG between -1 ~ 1
//2. Get the distrubution for them.  