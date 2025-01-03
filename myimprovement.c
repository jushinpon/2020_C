#include <stdio.h> //include io function
int main()
{
   int i;// counter
   float imp,interest,temp;
   imp = 1.0;//initial value for the current improvement
   interest = 1.001;//compound interest    
   printf("Initial value of improvement: %f \n\n",imp);
   //imp = imp * interest;
   //printf("my improvement after one day: %f \n\n",imp);
   //
   //imp = imp * interest;
   //printf("my improvement after two days: %f \n\n",imp);
   
   
   
	//printf("Day fortune\n");//header
	//printf("Day improvement\n");//header
	//for(i = 1; i <= 365; i = i + 1 ) {
	//	imp = imp * interest;
	//	printf ("After %d day(s): %f\n",i,imp);
	//}

//	for( i=1; i<= 365*4; i=i+1 ) {
//		imp = imp*interest; 
//	//imp *= interest;
//	//printf ("%d %f\n",i,imp);
//		if (i == 1){
//			printf ("Ans%d: my improvement after %d day: %f\n",i,i,imp);
//		}
//		else{
//			printf ("Ans%d: my improvement after %d days: %f\n",i,i,imp);
//		}
// 		
////printf("\n**** %d %f\n",i,imp);
//	if(imp > 2.0){
//		printf("Current improvement value: %f after %d day(s)\n"   
//		,imp,i);// printf() displays the string inside quotation
//		break;
//	}
//}
//
//*******************while
	i=0;	
	while(i < 20){
		i = i + 1;
		imp= imp * interest;
		printf("Current improvement value: \
		 %f after %d day(s)\n"\
		,imp,i);// printf() displays the string inside quotation
	}
// the last loop shows the first condition does not obey the one in the quote.

//	do {
//		i=i+1;
//		imp= imp*interest;
//		printf("Current improvement value: %f after %d day(s)\n"\
//		,imp,i);// printf() displays the string inside quotation
//    }while(imp<2.0);

//	i=0;
//	while(1){// 1 stands for "true"
//		i=i+1;
//		imp= imp*interest;
//		printf("Current improvement value: %f after %d day(s)\n"\
//		,imp,i);// printf() displays the string inside quotation
//		if(imp >= 2.0){printf("***my double improvement: %f after %d day(s)\n"\
//		,imp,i); break;}
//	}   
//   return 0;
}
//Quiz
//1. please find the days the improvement just exceeds 2.
//
