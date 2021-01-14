//int fgetc(FILE *fp);
//char *fgets (char *buff, int n, FILE *fp)

#include <stdio.h>
int main(){
	FILE *fpr,*fpw;// file handles, pointers	
	
	char ch[255],buff[255];
	char str1[255],str2[255];                                          
	//int i;
	
	fpr = fopen("./readtest.txt","r");
	fpw = fopen("./printout.txt","w");// a for "append"
    //printf ("Read file pointer: %p\n",fpr);// ram address having the content of "readtest.txt"
    //printf ("Write file pointer: %p\n",fpw);// ram address you are ready to write the content into "printout.txt"
	
	//fgets(buff, 255, fpr);// fgets, ready to read the next line when done. the change line symbol also be read by buff
	//printf("What you read by fgets: %s\n",buff);
	//fprintf(fpw,"%s",buff);//***** no "\n", because fgets also gets the change line symbol
	//fgets(buff, 255, fpr);// fgets
	//printf("What you read by fgets: %s\n",buff);//***** no "\n"
	//fprintf(fpw,"%s",buff);

   
//for(int i=0;i<2;i++){
//	fgets(buff, 255, fpr);// fgets, ready to read the next line when done.
//	printf("What you read by fgets: %s",buff);   
//}	
	
///*
	
	//fscanf(fpr,"%s",ch); // read the string from the file, and blank can't be read.(stop when fscanf read blank)
    //printf("What you read by fscanf: %s\n",ch);
	
	// fscanf(fpr,"%[^\n]",ch);// if you don't use \n after %[^\n], the file pointer will point at "\n"
    // printf("What you read by fscanf: %s\n",ch);
	// fscanf(fpr,"%[^\n]\n",ch);
    // printf("What you read by fscanf: %s\n",ch);
	 
	// for(int i=0;i<2;i++){
	//	fscanf(fpr,"%[^\n]\n",ch);// if you don't use \n after %[^\n], the file pointer will point at "\n"
	//	printf("What you read by fscanf: %s\n",ch);
	// }
	 
// skip a line
	 fscanf(fpr,"%*[^\n]\n");// skip this line, * means to skip [^\n]
	 fscanf(fpr,"%[^\n]\n",ch);// read \n
     printf("What you read by fscanf: %s\n",ch);
	 fprintf(fpw,"%s\n",ch);
		
	fclose(fpr);// remember to close the handle!!!	
	fclose(fpw);
	return 0;	
}
