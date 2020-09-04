#include <stdio.h>

int main(){
int a = 3;
int *b;
int c;
//b = a;// error

//*b = a;
//c = *b;
//printf("1. a = %d, pointer b = %d, c = %d \n",a,*b,c);
//*b = *b + 1;
//c = *b;
//printf("2. a= %d, pointer b = %d, c = %d\n",a,*b,c);

b = &a;
c = *b;
printf("1. a = %d, pointer b= %d, c = %d \n",a,*b,c);
printf("1. pointer b address= %d \n",b);
*b = *b + 1;
c = *b;
printf("2. a= %d, pointer b = %d, c = %d\n",a,*b,c);
printf("2. pointer b address= %d \n",b);
return 0;
}

// You can get the value of a parameter or use its ram address to get its value