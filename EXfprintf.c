#include <stdio.h>
int main(){
	FILE *fp;// file handle, a pointer
	char ch[100];
	int i;
	fp = fopen("./fprintf.txt","w");// open a new file to write data
	//fp = fopen("./fprintf.txt","a");// append the data to the old file
	printf("Enter the formatted values: string integer\n");
	scanf("%s %d",ch,&i); // get the formatted data from key board, blank doesn't work 
	printf("\nYou entered: %s, %d\n",ch,i);
	
	fprintf(fp,"\nString: %s, Integer: %d",ch,i);
	fclose(fp);
	return 0;	
}