#include <stdio.h>

void b(void);
void a(void);

//void b(void)
//{
//	printf("b\n");
//}
//
//void a(void)
//{
//	printf("a\n");
//	b(); 
//}

void main(void)
{
	int test;
	a();
	b();
	test = printf("print test\n");// we don't care the return value of printf that much!!
	printf ("The return value of above printf:%d\n",test);
}

void b(void)
{
	printf("b\n");
}

void a(void)
{
	printf("a\n");
	b(); 
}
