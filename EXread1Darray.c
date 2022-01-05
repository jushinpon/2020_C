//int fgetc(FILE *fp);
//char *fgets (char *buff, int n, FILE *fp)

#include <stdio.h>
int main(){
	FILE *fpr,*fpw;// file handles, pointers	
	char head1[255],head2[255];	
	int id[10000],temp1,counter = 0,ifscan;
	float Egrade[10000],temp2;
	
	fpr = fopen("./grade_sheet.txt","r");
	fpw = fopen("./grade_out.txt","w");
	fscanf(fpr,"%s %s",head1,head2);// read any if not \n (\n is the option to change to a new line
	//fscanf(fpr,"%*[^\n]");        
	printf("\nWhat you read by fscanf: %s %s\n",head1,head2);// character array is a pointer	
	fprintf(fpw,"%s   %s\n",head1,head2);
//	int c=getchar();// sleep a while for check
	for (int i=0;i<100;i++){
		fscanf(fpr,"%d %f\n",&id[i],&Egrade[i]);// use the pointer to read
	    fprintf(fpw,"%05d\t%-5.1f\n",id[i],Egrade[i]);
		printf("i: %d, %d\t\t%-5.1f\n",i,id[i],Egrade[i]);
		//printf(" ifscan value: %d\n",ifscan);
	}
//		printf(" EOF value: %d\n",EOF);
    	
	
//	while(fscanf(fpr,"%d %f",&temp1,&temp2)!= EOF){	//EOF: end-of-file (also mean reading error, need to do one more loop after the last row		
//		fprintf(fpw,"%05d\t%-5.1f\n",temp1,temp2);	
//		printf("%d,%d\t\t%5.1f\n",counter,temp1,temp2);		
//		counter++;
//	}
			
	fclose(fpr);// remember to close the handle!!!	
	fclose(fpw);
	return 0;	
}

//	Quiz:
//
//      1. Output a file including Id, original grade, adjusted grade (square root*10), and the difference between the previous two
//      2. Please transfer it to a 等第制 and write the Id, original grade, and  等第制 to a file (for a loop control)
//      3. online look up request (use scanf to get the id you want to look up)

// A:100-90, B:89.9-80, C:79.9-70, D: 69.9-60, E: under 60  
