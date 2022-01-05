#include <stdio.h>

int main()
{
    int a;
    float b;
    char c;
    char d[255];
    
    //printf("address of a: %p\n",&a);
    //printf("address of b: %p\n",&b);
    //printf("address of c: %p\n",&c);
    //printf("address of d: %p\n",&d);
	//
    //printf("Please give a character: ");
    //scanf("%c", &c);
    //printf("The character you input: %c\n",c);

    //printf("please give an intger:");
    //scanf("%d", &a);// & means to get the ram address of a
    //printf("Please give a floating-point number: ");
    //scanf("%f", &b);
    //
    //printf("Your input integer,floating-point number, and character: %d, %f, %c\n", a,b,c);
    
    printf("Please give a string: ");
    //scanf("%s", &d);
    scanf("%[^\n]", d);// [^] means not, so [^\n] means not "new line symbol". or read until "\n"
    //       
    printf("Your input string: %s\n", d);
    return 0;
}
