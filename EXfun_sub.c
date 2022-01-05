//get the area of a rectangle
#include <stdio.h>
///*


//int Area(int,int);//like a function
//int Area(int x,int y){
//float z;
//z = x * y;
//printf("Area: %f\n",z);
//return 0;	
//}

int Area(int,int,int*);//use pointer, like a subroutine
  
void main(void)
{
	int a=3,b=5;
	int getarea = 0;
//1.	
	//Area(a,b);// you don't want to get a value from subroutine
//2.	
	//int area = Area(a,b);
	//printf("1.area=%d\n",area);
	//printf("2.area=%d\n",Area(3,5));
	//printf("3.area=%d\n",Area(5,7));
	
//3.	
	int area = Area(a,b,&getarea);
	
	printf("1.area=%d\n",area);
	
	printf("2.Use the Function to get the area=%d\n",Area(3,5,&getarea));   
	
	printf("3. Use a subroutine with the pointer to get the area=%d (pointer %p)\n",getarea,&getarea);
	
	
}

//int Area(int x,int y){
//float z;
//z = x * y;
//printf("Area: %f\n",z);
//return 0;	
//}

//int Area(int x,int y){
//	return x * y;	
//}

int Area(int x,int y,int *z){
	*z = x * y;//you cannot use a pointer to do calculation directly. * is used to convert pointer to the variable itself
	return x*y;
}


//*/

