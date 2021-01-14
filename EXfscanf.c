#include <stdio.h>
int main(){
	FILE *fpr,*fpw;// file handles, pointers	
	int loop;
	float value;
	char ch[255];                                          
		
	fpr = fopen("./formatted.txt","r");
	fpw = fopen("./printout.txt","w");// a for "append"
    fscanf(fpr,"%s %d\n",ch,&loop); 
    printf ("%s %d\n",ch,loop);  
	 for(int i = 0;i < loop;i++){
		fscanf(fpr,"%f\n",&value);// if you don't use \n after %[^\n], the file pointer will point at "\n"
		printf("What you read by fscanf: %f\n",value);
		fprintf(fpw,"What you read by fscanf: %f\n",value);
	 }
		
	fclose(fpr);// remember to close the handle!!!	
	fclose(fpw);
	return 0;	
}
