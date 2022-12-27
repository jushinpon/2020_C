//char text[] = {'h', 'e', 'l', 'l', 'o', '\0'}; \0 is the default for char array even though
//you don't put it at the last element
//**** No string variable in C

#include <stdio.h>

int main(void) {
    char text[] = "hello"; //text (the array name) is a ram address
    char text1[] = "world"; //text (the array name) is a ram address
	printf("The content of string is %s.\n",text); //%s is a output type for string 
    int length = sizeof(text) / sizeof(text[0]);	
    printf ("How many elements in the array: %d\n",length);
	//printf ("How many elements in the array: %u\n",sizeof(text) / sizeof(text[0]));//%ld, %d are ok
	
    for(int i = 0; i < length; i++) {// array index starts from 0
        if(text[i] == '\0') {
            printf("null");
        } else {
            
            printf("%c ", text[i]);
            text[i] = text1[i];
        }
    }
    printf("text: %s\n",text);
    printf("\n");

    return 0;
}


