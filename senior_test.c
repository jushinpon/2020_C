#include <stdio.h> 
#include <math.h>
int main()
{
   int i,tot;// counter
   float A,B,sqrt3 = sqrt(3.);
   tot = 10000;// do tot times
   
  
	for(i=0;i<=tot;i++){
		A = (float)(i+5.)/i;
		B = (float)(i+6.)/(i+1.);
		    if(A >= sqrt3 && B <= sqrt3){
			   printf ("Condition 1 satisfies:\n");
			   printf("B:%f <= %d <= A:%f\n",B,i,A);
			   break;
			}
			else if(A <= sqrt3 && B >= sqrt3){
			   printf ("Condition 2 satisfies:\n");
			   printf("A:%f <= %d <= B:%f\n",A,i,B);
			   break;
			}
			else {
				printf ("Condition 3 satisfies:\n");
			    printf("A:%f i= %d B:%f\n",A,i,B);
		   	}  	
	}
      
   	
   return 0;
}      	
