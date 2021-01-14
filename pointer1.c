#include <stdio.h>

//void addone(int n){
//	int *np;
//	np = &n;
//	n = n+1;
//	printf("np in function addone: %d\n",np);
//}
//
//int main(){
//int a = 3;
//addone(a);
//printf("a: %d\n",a); //3
//
//printf("address of a in main: %d\n",&a);
//return 0;
//}
//

void addone(int* n){ // * address in ram
	*n = *n+1; //* the operator to get the value in the address!!!!!!
	printf("np in function addone: %d\n",n);
}

int main(){
int a = 3;
addone(&a);
printf("a: %d\n",a);//4
printf("address of a in main: %d\n",&a);
return 0;
}