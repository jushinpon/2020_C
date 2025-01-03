#include <stdio.h>

int main(){
	int a[5] = {1,2,4,5,6};//for an array, the array name is the address of the first element
	int *prt,*prt1;

printf("%p, %p, and %d\n",a,&a[0],*a);
	
for(int i=0;i<5;i++){
	printf("%d, %p\n",a[i],&a[i]);	
}

//prt1 = a + 5;// shift 5 integer units in RAM
//for(prt=a;prt < prt1;prt++){
//	printf("%d, %p\n",*prt,prt);	
//}
return 0;
}
