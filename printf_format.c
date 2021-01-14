//%[parameter][flags][width][.precision][length]type
#include <stdio.h>

#define STARS "*****************************"
int main(void)
{
 int a[] = {3,-5};
 float b[] = {3.12,-25.24777};
 char Stars[] = "ABCDEF";
 int index;
 //integer 
 
 //printf("1. %d\n",a[0]);
 //printf("2. %5d\n",a[0]);
 //printf("3. %-5d\n",a[0]);
 //printf("4. %-5d\n",a[1]);
 //printf("5. %05d\n",a[0]); 
 //printf("6. %+d %+d \n",a[0],a[1]);// show the sign + and -
 //printf("7. %d %d\n",a[0],a[1]);
 
 
 //float
 
 //printf("1. %f\n",b[0]);
 //printf("2. %5.2f\n",b[0]);
 //printf("3. %-5.2f\n",b[0]);
 //printf("4. %-5.1f\n",b[1]);
 //printf("5. %05f\n",b[0]); 
 //printf("6. %+f %+f \n",b[0],b[1]);// show the sign + and -
 //printf("7. %f %f\n",b[0],b[1]);
 
 // string 
 
 printf("%s\n", Stars);
 printf("%0.*s\n", 3, Stars);// minmal: 0, maximal:3, * acceptes the integer 3 
 printf("%0.3s\n", Stars);// minmal: 0, maximal:3, * acceptes the integer 3 
 
 return 0;
}
