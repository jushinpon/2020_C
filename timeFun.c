#include <stdio.h> 
//#include <stdlib.h> 
#include <time.h>

int main(void) { 
// some frequently used functions in time.h
/*
  int i;
  long timeval1,timeval2,timeTemp,timeDiff;// data type for time() function (long or time_t)
  timeval1 = time(NULL);//the seconds from Jan. 1 1970.(NULL or 0)
  	for(i = 1; i < 10000; i++){
		printf ("counter %d: time is %ld\n",i,time(NULL));
	}
  timeval2 = time(NULL);//the seconds from Jan. 1 1970
  printf ("timeval1: %ld\n",timeval1);
  printf ("timeval2: %ld\n",timeval2);
  
  timeDiff = timeval2-timeval1;
  printf("The time difference: %d sec.\n",timeDiff);
*/  

//2. use clock (accuracy up to 0.0001 sec)

int i;
  clock_t start,end;// data type for time() function (long or time_t)
  float timeDiff,cps;
  start = clock();//get the clock number counting from the very beginning
  	for(i = 1; i < 10000; i++){
		printf ("counter %d: time is %ld\n",i,time(NULL));
	}
  end = clock();
  printf ("start clock: %ld\n",start);
  printf ("end clock: %ld\n",end);
  cps= (double)(CLOCKS_PER_SEC);// get the value (#define..)
  printf ("CLK_TCK: %f %f\n",cps,(double) CLOCKS_PER_SEC);
  timeDiff = (end-start)/(double)(CLOCKS_PER_SEC);
  printf("The time difference: %lf sec.\n",timeDiff);
  
    return 0; 
} 