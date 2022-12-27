#include <stdio.h>
//suba: what to do
//subb: what to do
//gcc -c subb.c suba.c subroutine_ab.c 
//gcc -o sub.out  subb.o suba.o subroutine_ab.o
//./sub.out
int b(void);
int a(void);

void main(void)
{
	int test;
	a();
	b();
	test = printf("print test\n");// we don't care the return value of printf that much!!
	printf ("The return value of above printf:%d\n",test);
}
