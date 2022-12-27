#include <stdio.h>
FILE *fpw;

void half(void);
//void half(int, float);
//void twice(void);
void twice(int, float);
//int age;
//float feet;

int main()
{
	int age;
	float feet;


 fpw = fopen("./Info.txt","w");
 printf("How old are you: ");
 scanf("%d",&age);
 printf("How tall are you (in feet): ");
 scanf("%f",&feet);
 printf("You are %d years old and %.1f feet tall.\n", age,feet);
 half();
 //half(age,feet);
 //twice();
 twice(age,feet);
 printf("But you're not really %d years old or %.1f feet tall\n",age,feet);
 fclose(fpw);
 return(0);
}
//void half(int age,float feet)
void half()
{
 //int age;
 //float feet;

 float a,h;
 a=(float)age/2.0;
 printf("Half your age is %.1f.\n",a);
 fprintf(fpw,"Half your age is %.1f.\n",a);
 h=feet/2.0;
 printf("Half your height is %.1f.\n",h);
 fprintf(fpw,"Half your height is %.1f.\n",h);
}
void twice(int a,float b)
//void twice()
{
 //int age;
 //float feet;
 
 a*=2;
 printf("Twice your age is %d.\n",a);
 b*=2;
 printf("Twice your height is %.1f.\n",b);
}
