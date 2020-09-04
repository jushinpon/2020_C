#include <stdio.h>
#include <math.h>

int main(){
	FILE *fpr,*fpw;// file handles, pointers	
	
	char header1[255],header2[255];
	int id;
	float grade;
	
	fpr = fopen("./gradeOriginal.txt","r");
	fpw = fopen("./modifiedGrade.txt","w");
	fscanf(fpr,"%s %s",header1,header2);
	fprintf(fpw,"%s %s\n",header1,header2);
	
	for(int i=0;i<4;i++){
	fscanf(fpr,"%d %f",&id,&grade);	
	fprintf(fpw,"%d %4.1f %4.1f\n",id,grade,sqrt(grade)*10.);   
	}	
			
	fclose(fpr);// remember to close the handle!!!	
	fclose(fpw);
	return 0;	
}