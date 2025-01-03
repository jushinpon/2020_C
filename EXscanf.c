#include <stdio.h>

int main()
{
    int a;
    float b;
    char c;
    char d[255];//string
    
    printf("address of a: %p\n",&a);//pointer
    printf("address of b: %p\n",&b);
    printf("address of c: %p\n",&c);
    printf("address of d: %p\n",&d);
	//
    //printf("Please give a character: ");
    //scanf("%c", &c);
    //printf("The character you input: %c\n",c);

    //sprintf("please give an intger:");
    //sscanf("%d", &a);// & means to get the ram address of a
    //sprintf("Please give a floating-point number: ");
    //sscanf("%f", &b);
    //s//
    //sprintf("Your input integer,floating-point number %d and %f\n", a,b);
    
    printf("Please give a string: ");
    //scanf("%s", &d);
    scanf("%[^\n]", &d);// [^] means not, so [^\n] means not "new line symbol". or read until "\n"
  //  ////       
    printf("Your input string:\n %s\n", d);
    return 0;
}
