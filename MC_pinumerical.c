#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
# include <math.h>
int main(void) { 
    
	srand(time(NULL)); 
    
    int N=50000;
    int i,counter = 0;
	double error = 1e-10;
	double oldPi = 1,newPi = 1;// initial values can't be zero!!!
	double temp = 100,sum = 1;// temp is the evaluation for while loop
	
	
//    for(i = 1; i <= N; i++) { 
//        if(i%2 == 1){			
//			sum -= (double) 1/(2*i+1);			
//		}
//		else{
//			sum += (double) 1/(2*i+1);
//		}        
//		printf("After interation %d, PI = %f\n",i,(double) 4 * sum);
//    }
	
// Please make a plot to tell when Pi is close to a constant
     
  while(temp > error){
		counter++;
		 if(counter%2 == 1){			
			sum -= (double) 1/(2*counter+1);			
		}
		else{
			sum += (double) 1/(2*counter+1);
		}
		
		oldPi = newPi;
		newPi = sum ;
		temp = (double)(fabs(newPi-oldPi))/oldPi;// abs() for integer only
		
		printf("After interation %d, PI = %.12lf with error %.12lf\n",counter,(double) 4 * sum,temp);
	}
    
    return 0; 
} 