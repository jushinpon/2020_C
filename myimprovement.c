#include <stdio.h> //include io function
int main()
{
   int i;// counter
   float imp,interest,temp;
   imp = 1.0;//initial value for the current improvement
   interest = 1.01;//compound interest    
   printf("Initial value of improvement: %f \n\n",imp);
//	for( i=1; i<=200; i++ ) {
//		imp= imp*interest;
//			if(imp > 2.0){
	//	      printf("Current improvement value: %f after %d day(s)\n"\
		//      ,imp,i);// printf() displays the string inside quotation
//			  break;
//			}
//	}

//*******************while
    i=0;
	
	while(imp<2.0){
		i=i+1;
		imp= imp*interest;
		printf("Current improvement value: %f after %d day(s)\n"\
		,imp,i);// printf() displays the string inside quotation
    }
// the last loop shows the first condition does not obey the one in the quote.


//  i=0;
//while(1){
//	i=i+1;
//	imp= imp*interest;
//	printf("Current improvement value: %f after %d day(s)\n"\
//	,imp,i);// printf() displays the string inside quotation
//	if(imp >= 2.0){printf("***my double improvement: %f after %d day(s)\n"\
//	,imp,i); break;}
//}   
   return 0;
}
//Quiz
//1. please find the days the improvement just exceeds 2.
//
