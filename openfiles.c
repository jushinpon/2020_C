#include <stdio.h>
#include <string.h> //strlen()
#include <stdlib.h> //malloc(),free()

int main(){
	FILE *fp;// file handle, a pointer
	char suffix[] = ".txt";
	char prefix[] = "sin";	
	char counter[4] = "000";
	
	size_t sz_suffix = strlen(suffix);// not including tailing zero
    size_t sz_prefix = strlen(prefix);
	size_t sz_counter = strlen(counter);    
    size_t sz = sz_suffix + sz_prefix + sz_counter + 1;  // Include tailing zero
	printf("%d %d %d\n",sz_suffix,sz_prefix,sz_counter);
	char *filename = malloc(sz * sizeof(char));
	filename[sz-1] = '\0';//tailing zero
	
	for (int i = 0;i < 10;i++){
		sprintf(counter,"%03d",i);
	// add sin (prefix)	
		for (size_t ipre = 0; ipre < sz_prefix; ipre++) {
			filename[ipre] = prefix[ipre];
        }
    // add counter (like 001) after sin to be sin001
       for (size_t icount = 0; icount < sz_counter; icount++) {
			filename[icount+sz_prefix] = counter[icount];
        }
	// add .txt (suffix) after sin001 to be sin001.txt	
	   for (size_t isuf = 0; isuf < sz_suffix; isuf++) {
			filename[isuf+sz_prefix+sz_counter] = suffix[isuf];
       }
				
		fp = fopen(filename,"w");// open a new file to write data		
		fprintf(fp,"String: %s, Integer: %03d",filename,i);
		printf("String: %s, Integer: %03d\n",filename,i);
		fclose(fp);
	}
	
	free(filename);
	return 0;	
}