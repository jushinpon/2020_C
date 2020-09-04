//sizeof() returns an long unsigned integer type

#include <stdio.h>
//#include <stdlib.h>

int main(void) {
    printf("data type\tsize_bytes\n");
    printf("short\t\t%lu\n", sizeof(short));
    printf("int\t\t%lu\n", sizeof(int));
    printf("long\t\t%lu\n", sizeof(long));
    printf("float\t\t%lu\n", sizeof(float));
    printf("double\t\t%lu\n", sizeof(double));
    printf("long double\t%lu\n", sizeof(long double));
    printf("char\t\t%lu\n", sizeof(char));
    printf("char\t\t%d\n", sizeof(char));
    return 0;
}