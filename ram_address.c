#include <stdio.h>

int main(void) {
    
	int a = 9;
    int *ap = &a;//& is the operator to get the address
    //int b = *ap; //--->*Pointer get the value in the address (Pointer), don't be confused!!!
    int *b = ap; 

    printf("1. a: %d, at address: %p or %p\n",a,ap,&a);
    //printf("1. b: %d, at address: %p\n\n\n",b,&b);
    printf("1. b: %d, at address: %p\n\n\n",*b,b);
    
   // b=10;
   // printf("2. a: %d, at address: %p or %p\n",a,ap,&a);
   // printf("2. b: %d, at address: %p\n",b,&b);
   
    *b = 20;
    printf("2. a: %d, at address: %p or %p\n",a,ap,&a);
    printf("2. b: %d, at address: %p\n",*b,b);
    
	
//	int var = 10;
//    printf("var's value: %d\n", var);
//    printf("var's address in RAM: %p\n", &var);// %p: pointer data type, & is the operator to get the address
//    int *ptr = &var; //pointer for integer type, get the address in RAM of the variable var
//	printf ("The value at address %p is %d.\n",ptr,*ptr);// The * here is a dereference operator, which can get the variable value at this address
	
//	*ptr = 20;
//    printf("1. var = %d\n", var);
//    printf("1. *ptr = %d\n", *ptr);
//	printf("1. RAM address: %p\n\n",ptr);// address is the same.
//	
//	var= 30;	
//    printf("2. var = %d\n", var);
//    printf("2. *ptr = %d\n", *ptr);
//	printf("2. RAM address: %p",ptr);
//    return 0;
}
