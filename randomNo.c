#include <stdio.h> 
#include <time.h> 
#include <stdlib.h> // random functions
 
int main() { 
   
	//printf ("time(0) is %ld\n",time(0));// seconds from Jan. 01 1970 (epoch time)
	srand(time(NULL));// time(0) is also ok    
//    
//	//srand(2146793);// You need to use a seed value for mid-term test
//	
    float x=0.,x1,y1,r2;//1>x1,y1>0
    int i,RandNo,n=20;	
	
  for(i = 1; i <= n; i++) { 
       //x = (float) rand();// between 0 and RAND_MAX (2147483647)
       //printf("%d, value: %d\n", i,rand());
        //printf("Number: %d, x = %f\n",i,x);
		 x = (float) rand() / RAND_MAX; //values between 0~1
         //printf("Number: %d, x = %f\n",i,x);		 
         //printf("Number: %d, x = %f\n",i,2.0*x - 1.);		 
     //  RandNo = (int) (x*n + 1);//pick a number randomly from 1~n		 
	//	 printf("Number: %d, RandNo = %d\n",i,RandNo); 	
  }
  
    return 0; 
} 
