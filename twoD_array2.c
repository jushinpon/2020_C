#include <stdio.h>

int main(void) {
	int a[3][2] = {{10, 20}, {30, 40}, {50, 60}}; 
    int *b = a[0]; 
 
    printf("a[0][0] = %d\n", a[0][0]);     printf("a[0][1] = %d\n", a[0][1]);     printf("a[1][1] = %d\n", a[1][1]);     printf("a[2][1] = %d\n", a[2][1]); 
 
    printf("*(b + 0) = %d\n", *(b + 0));      printf("*(b + 1) = %d\n", *(b + 1)); 
     printf("*(b + 3) = %d\n", *(b + 3));      printf("*(b + 5) = %d\n", *(b + 5)); 
 
     return 0;
	 } 