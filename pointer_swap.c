#include <stdio.h>
//void swap(int a, int b);// function prototype
void swap(int *, int *);

int main(){
	int a = 3;
	int b = 5;
	
	printf("MAIN --> a:%d, at address:%p\n",a,&a);
	printf("MAIN --> b:%d, at address:%p\n",b,&b);
	
	printf("Before swap -> a: %d, b: %d\n\n",a,b);
	//swap(a,b);
	swap(&a,&b);
	
	printf("After swap -> a: %d, b: %d\n",a,b);
	
	return 0;
}


//void swap(int a, int b){ 
//   int s = a;
//	   a = b;
//	   b = s;
//     printf("a:%d, at address:%p\n",a,&a);
//	 printf("b:%d, at address:%p\n\n",b,&b);  
//}


void swap(int *a, int *b){ 
	int s = *a;
	*a = *b;
	*b = s;	
	printf("a:%d, at address:%p\n",*a,a);
	printf("b:%d, at address:%p\n\n",*b,b);
}


