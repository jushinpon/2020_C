#include <stdio.h>
//#include <stdlib.h> //atoi,system functions
//#include <time.h>
int main(){
	FILE *inputpr;
	int row = 0,col = 0;
// just a input file, but not clear enough	
	
	inputpr = fopen("./input.txt","r");// ******* make sure you have created this file first!!!!!
	fscanf(inputpr,"%d %d",&row, &col);
	printf("row and col:%d, %d\n",row, col);
	fclose(inputpr);
	//system("pause");
	getchar();
	
	
// read parameters from a input file with clear definitions for all parameters	
	
    inputpr = fopen("./input_1.txt","r");// ******* make sure you have created this file first!!!!!
	fscanf(inputpr,"%*[^\n]\n");// skip the definition line
	fscanf(inputpr,"%d\n",&row);
	fscanf(inputpr,"%*[^\n]\n");// skip the definition line
	fscanf(inputpr,"%d",&col);
	printf("row and col:%d, %d\n",row, col);
	fclose(inputpr);
	//system("pause");



	FILE *fpr,*fpw;// file handles, pointers	
	char header[col][255];	
	int id[row],temp1,counter = 0;//can't be initialized first
	float grade[row][col-1],temp2;//can't be initialized first

// initialized	
	for (int i=0;i<row;i++){
		id[i] = 0;
		for (int j=0;j<col-1;j++){
			grade[i][j] = 0.0;
		}
	}
	
	
	fpr = fopen("./grade_sheet-four.txt","r");
	fpw = fopen("./grade_out.txt","w");

// deal with header part	
	for (int i=0;i<col;i++){
	fscanf(fpr,"%s",header[i]);
	}
	
	printf("What you read by fscanf: ");
	for (int i=0;i<col;i++){
	//fscanf(fpr,"%*[^\n]\n");  // skip a line      
	printf("%s ",header[i]);// character array is a pointer	
	fprintf(fpw,"%s ",header[i]);
	if(i == col-1){fprintf(fpw,"\n");printf("\n");}// change to the next line
	}

// deal with the grade part
		
	for (int i=0;i<row;i++){
		fscanf(fpr,"%d",&id[i]);// use the pointer to read
	    fprintf(fpw,"%d",id[i]);
		printf ("***id: %d ",id[i]);		
			for (int j=0;j<col-1;j++){
				fscanf(fpr,"%f",&grade[i][j]);
				
				printf("\t%5.1f",grade[i][j]);
				fprintf(fpw,"\t%5.1f",grade[i][j]);
				// change to the beginning of the next line
				if(j == col-2){fprintf(fpw,"\n");printf("\n");}// change to the next line
			}
	}
		
	fclose(fpr);// remember to close the handle!!!	
	fclose(fpw);
	return 0;	
}

//Quiz
//1. read row and col from argv parameters
//2. read from file (this is the most frequently used for a large code!!!!!!!)

//****make the following two text files by yourself, please.

//a.input.txt
//row col

//b.input file
//row number:
//row
//col number:
//col
