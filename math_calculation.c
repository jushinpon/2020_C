#include <stdio.h> //include io function
#include <math.h>
int main()
{
   int i;// counter
   float A,B,C,D;
   //double A,B,C,D;
   int remainder;
   //A = 1.2;
   //B= exp(A);
   ////double pow(double x, double y)
   //C= pow(9,1./2.);// try 1./2. // If you want to have your code effective, use "multiply" instead of power if possible 
   //D= sqrt(9);
   //remainder = 5%3; // this is frequently used in looping
   //printf("%f %f %f %f %f\n",A,B,C,D,(float)remainder);//(int) can be used to convert a float (%f) to int(%d)

// Trigonometric function **** in radians
   //....... sin(x), cos(x) --> x is in radian (£k=180«×)
      
      A = sin(180.);
      B = sin(3.1415926);
      C = acos(-1.0);   
      D = sin(C);
	printf("%f %f %f %f \n",A,B,C,D); 
// you can now convert degree to radin or revsersely by acos(-1)/180. (not 180, using "180." is better.)	
   return 0;
}      	

// Quiz: Please write data files (two columns) for:
// when x<2£k and x>= 0
//	! 1. x sin(x) 
//	! 2. x exp(x)
//	! 3. x cos(x) 
//	! 4. Please get the area under the curves between the interval you assign. How thin the bar length can 
//	!    you get an acceptable integral area values? Maybe you can use two loops and output the number of bar
//	!    and the corresponding area to check it.
//
//
