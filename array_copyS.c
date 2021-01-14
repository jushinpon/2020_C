	#include "stdio.h" 
	#include "string.h" //memcpy function defined in this lib

int main(void) 
{ 
	    char a[]= "test";	     
	    char b[sizeof(a)];// need to set the size if not assign initial values
        memcpy(b, a, sizeof(b)); //void *memcpy(void *str1, const void *str2, size_t n)
        printf("b array: %s\n",b);		
}
