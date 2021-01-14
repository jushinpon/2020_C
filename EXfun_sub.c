//get the area of a rectangle
#include <stdio.h>
///*


//int Area(int,int);//like a function
int Area(int,int,int*);//use pointer, like a subroutine
  
void main(void)
{
	int a=3,b=5;
	int getarea = 0;
	
	//int area=Area(a,b);
	//printf("1.area=%d\n",area);
	//printf("2.area=%d\n",Area(3,5));
	
	int area = Area(a,b,&getarea);
	
	printf("1.area=%d\n",area);
	
	printf("2.Use the Function to get the area=%d\n",Area(3,5,&getarea));   
	
	printf("3. Use a subroutine with the pointer to get the area=%d (pointer %p)\n",getarea,&getarea);
	
	
}

//int Area(int x,int y)
int Area(int x,int y,int *z) 
{
	*z =x*y;
	return x*y;
}


//*/

