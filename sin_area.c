#include <stdio.h> 
#include <math.h>
int main()
{
   FILE *fp;
   int i,tot;// counter
   float pi,increment,rad;
   tot = 10000;// 10000 segment for 2*pi
   pi = acos(-1);
   increment = 2.*pi/(float)(tot);
   
   fp = fopen("./sin.txt","w");
   
	for(i=0;i<=tot;i++){
		rad = increment*(float)i;
		fprintf(fp,"%f %f\n",rad,sin(rad));
	}
      
    fclose(fp); 	
   return 0;
}      	

// Quiz: Please write data files (two columns) for:
// when x<2£k and x>= 0
//	! 1. x sin(x) 
//	! 2. x exp(x)
//	! 3. x cos(x) 
//	! 4. Please get the area under the curves between the interval you assign. How thin the bar length can 
//	!    you get an acceptable integral area values? Maybe you can use two loops and output the number of bar
//	!    and the corresponding area to check it.
//
//
