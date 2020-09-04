#include <stdio.h>

int main(){
int a[5] = {1,2,4,5,6};//for an array, the array name is the address of the first element
int *prt;

for(prt=a;prt != prt+5;prt++){
	printf("%d, %p\n",*prt,prt);	
}
return 0;
}