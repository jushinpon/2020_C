#include <stdio.h>
int main(){
	FILE *fpr,*fpw;// file handles, pointers	
	char header[5][255];	
	int id[10000] = {0},temp1,ifscan,counter = 0;
	float grade[10000][4] = {0},temp2;
	
	fpr = fopen("./grade_sheet-four.txt","r");
	fpw = fopen("./grade_out.txt","w");

// deal with header part	
	for (int i=0;i<5;i++){
	fscanf(fpr,"%s",header[i]);
	}
	
	printf("What you read by fscanf: ");
	for (int i=0;i<5;i++){
	//fscanf(fpr,"%*[^\n]\n");  // skip a line      
	printf("%s ",header[i]);// character array is a pointer	
	fprintf(fpw,"%s ",header[i]);
	if(i == 4){fprintf(fpw,"\n");printf("\n");}// change to the next line
	}

// deal with the grade part
		
//	for (int i=0;i<10000;i++){
//		fscanf(fpr,"%d",&id[i]);// use the pointer to read
//	    fprintf(fpw,"%d",id[i]);
//		printf ("***id: %d ",id[i]);		
//			for (int j=0;j<4;j++){
//				fscanf(fpr,"%f",&grade[i][j]);
//				
//				printf("\t%5.1f",grade[i][j]);
//				fprintf(fpw,"\t%5.1f",grade[i][j]);
//				// change to the beginning of the next line
//				if(j == 3){fprintf(fpw,"\n");printf("\n");}// change to the next line
//			}
//	}
    
	while(fscanf(fpr,"%d",&id[counter]) != EOF){//EOF indicates fscanf reads error!
		fprintf(fpw,"%d",id[counter]);
		printf ("***id: %d ",id[counter]);		
			for (int j=0;j<4;j++){
				fscanf(fpr,"%f",&grade[counter][j]);				
				printf("\t%5.1f",grade[counter][j]);
				fprintf(fpw,"\t%5.1f",grade[counter][j]);
				// change to the beginning of the next line
				if(j == 3){fprintf(fpw,"\n");printf("\n");}// change to the next linefprintf(fpw,"%d   %f\n",id[counter],Egrade[counter]);	
			}					
		counter++;
	}	
		
	fclose(fpr);// remember to close the handle!!!	
	fclose(fpw);
	return 0;	
}

//	Quiz:
//
//      1. Output a file including Id, original grade, adjusted grade, and the difference between the previous two
//      2. Please transfer it to a 等第制 and write the Id, original grade, and  等第制 to a file (for a loop control)
//      3. online look up request