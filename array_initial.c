//%[parameter][flags][width][.precision][length]type
#include <stdio.h>

int main(void)
{
  
 //int a[3];
 //float b[3];
 
 //int a[3] = {2,3,4};
 //float b[3] = {3.12,5.24,2.675};
 
 int a[3] = {1};
 float b[3] = {1.0};
 
 // only the zero values can be set for the initial values
 // for other values, you need to use the loop process to assign values for all elements 
 int index;// If you use it as a counter, the initial value will be set later.
 
 
 for (index = 0; index < 3; index++) {
 printf("[%d] %d\n", index, a[index]);
 printf("[%d] %f\n", index, b[index]);
 //printf("%.*s\n", hist[index], STARS);
 }
 return 0;
}