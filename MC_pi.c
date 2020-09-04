#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
# include <math.h>
int main(int argc, char *argv[]) { 
    int N = atoi(argv[1]);// read iteration time from command line
	printf ("time(0) is %ld\n",time(0));// seconds from Jan. 01 1970 (epoch time)
	srand(time(NULL));// time(0) is also ok    
    
    int sum = 0;
    int i,counter = 0;
	double error = 1e-10;
	double oldPi = 1,newPi = 1;// initial values can't be zero!!!
	double temp = 100;// temp is the evaluation for while loop
	
	
    for(i = 1; i <= N; i++) { 
        double x = (double) rand() / RAND_MAX; 
        double y = (double) rand() / RAND_MAX; 
        if((x * x + y * y) < 1) {
            sum++; 
        }
		//printf("After interation %d, PI = %f\n",i,(double) 4 * sum / (N));
    }
	printf("PI = %f\n", (double) 4 * sum / (N - 1));
// Please make a plot to tell when Pi is close to a constant
     
    //while(temp > error){
	//	counter++;
	//	double x = (double) rand() / RAND_MAX; 
    //    double y = (double) rand() / RAND_MAX; 
    //    if((x * x + y * y) < 1) {
    //        sum++; 
    //    }
	//	
	//	oldPi = newPi;
	//	newPi = (double) 4 * sum / (counter);
	//	temp = (double)(fabs(newPi-oldPi))/oldPi;// abs() for integer only
	//	
	//	printf("After interation %d, PI = %.12lf with error %.12lf\n",counter,(double) 4 * sum / (counter),temp);
	//}
    
    return 0; 
} 