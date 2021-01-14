#include <stdio.h>
#include <stdlib.h> //atoi,system functions
#include <time.h>
int twoDarray(int row, int col,float twoD[][col-1],char AdjtwoD[][col-1]);

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
    char  adjgrade[row][col-1];
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
	
// deal with the grade part
		
	for (int i=0;i<row;i++){
		fscanf(fpr,"%d",&id[i]);// use the pointer to read
	    	for (int j=0;j<col-1;j++){
				fscanf(fpr,"%f",&grade[i][j]);				
			}
	}
	fclose(fpr);// remember to close the handle!!!
	
// get the adjusted grade	
twoDarray(row,col,grade,adjgrade);

// print out
	
	for (int i=0;i<col;i++){		
		fprintf(fpw,"%s\t",header[i]);
		if(i == col-1){fprintf(fpw,"\n");}// change to the next line
	}
	
	for (int i=0;i<row;i++){		
	    fprintf(fpw,"%d\t",id[i]);
        printf("%d",id[i]);		
			for (int j=0;j<col-1;j++){							
				fprintf(fpw,"%5.1f %c\t",grade[i][j],adjgrade[i][j]);
				printf("%5.1f %c",grade[i][j],adjgrade[i][j]);
				// change to the beginning of the next line
				if(j == col-2){fprintf(fpw,"\n");printf("\n");}//change to the next line
			}
	}	
	fclose(fpw);
		
	return 0;	
}

int twoDarray(int row, int col,float twoD[][col-1],char AdjtwoD[][col-1]) {
		char letter[] = {'E','D','C','B','A'};
		int temp;
		
		for (int i=0;i<row;i++){
			//printf("Row: %d ",i);
			for (int j=0;j<col-1;j++){
				temp = (int) (twoD[i][j] -50.)/10.;//60-69: temp =1,70-79: temp =2,80-89: temp =3,90-99: temp =4
					if (twoD[i][j] < 60.){
						temp = 0;
					}
					else if(twoD[i][j] == 100){
						temp = 4;
					}
				AdjtwoD[i][j] = letter[temp];// temp is an index for different levels
				//printf("\t%5.1f\t%c",twoD[i][j],AdjtwoD[i][j]);
				//if(j == col-2){printf("\n");}// change to the next line
			}
		}	
	return 0;
}
