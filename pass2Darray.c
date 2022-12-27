//Note: 
//1. Name of a 1D array represents address of the first element in the 1D array (Check pointer4array_sub.c)
//2. Name of a 2D array represents address of the first row in the 2D array,
//   so you need to indicate the element number (column number) in each one-dimensional row array

//2D Array:
//- 2D array is a collection of homogeneous data elements arranged in rows and columns
//- 2D array is an array of 1D arrays

#include <stdio.h>
#include <stdlib.h> //atoi,system functions
#include <time.h>
//int twoDarray(int row, int col,float twoD[][col-1]){
int twoDarray(int row, int col,float twoD[row][col-1]){
	printf ("twoD: %p\n",twoD);
	printf ("twoD[0][0]: %p\n",&twoD[0][0]);
	printf ("twoD[0]: %p\n",twoD[0]);
	//	for (int i=0;i<row;i++){
	//		printf("Row: %d ",i);
	//		for (int j=0;j<col-1;j++){
	//			printf("\t%5.1f",twoD[i][j]);
	//			if(j == col-2){printf("\n");}// change to the next line
	//		}
	//	}	
	return 0;
}

int main(){
	FILE *inputpr;
	int row = 0,col = 0;
	
// read parameters from a input file with clear definitions for all parameters	
	
    inputpr = fopen("./input_1.txt","r");// ******* make sure you have created this file first!!!!!
	fscanf(inputpr,"%*[^\n]\n");// skip the definition line
	fscanf(inputpr,"%d\n",&row);
	fscanf(inputpr,"%*[^\n]\n");// skip the definition line
	fscanf(inputpr,"%d",&col);
	printf("row and col:%d, %d\n",row, col);
	fclose(inputpr);
	
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
			for (int j=0;j<col-1;j++){
				fscanf(fpr,"%f",&grade[i][j]);				
				fprintf(fpw,"\t%5.1f",grade[i][j]);
				// change to the beginning of the next line
				if(j == col-2){fprintf(fpw,"\n");}//change to the next line
			}
	}
		
	fclose(fpr);// remember to close the handle!!!	
	fclose(fpw);
	printf ("grade: %p\n",grade);
	printf ("size of grade: %d\n",sizeof(grade));
	printf ("size of grade[0]: %d\n",sizeof(grade[0]));
	printf ("grade[0][0]: %p\n",&grade[0][0]);
	printf ("grade[0]: %p\n",grade[0]);//pointer of the first one-dimensional array
	twoDarray(row,col,grade);//[10000][4]*4 	
	return 0;	
}

//int twoDarray(int row, int col,float twoD[][col-1]){
//	printf ("twoD: %p\n",twoD);
//	printf ("twoD[0][0]: %p\n",twoD[0][0]);
//	printf ("twoD[0]: %p\n",twoD[0]);
//	//	for (int i=0;i<row;i++){
//	//		printf("Row: %d ",i);
//	//		for (int j=0;j<col-1;j++){
//	//			printf("\t%5.1f",twoD[i][j]);
//	//			if(j == col-2){printf("\n");}// change to the next line
//	//		}
//	//	}	
//	return 0;
//}
