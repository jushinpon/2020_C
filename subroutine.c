#include <stdio.h>

int b();
int a();

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

int main()
{
	int test;
	a();
	b();
	test = printf("print test\n");// we don't care the return value of printf that much!!
	printf ("The return value of above printf:%d\n",test);
}

//int b()
//{
//	printf("b\n");
//}
//
//int a()
//{
//	printf("a\n");
//	b(); 
//}
//
